#ifndef MESH_OPT_CORE_H__
#define MESH_OPT_CORE_H__

#include "mesh_opt.h"
#include "core_tx.h"

#define MESH_OPT_CORE_ADV_COUNT 2


enum
{
    MESH_OPT_CORE_ADV_RECORD_START      = MESH_OPT_CORE_ID_START,
    MESH_OPT_CORE_ADV_RECORD_END        = MESH_OPT_CORE_ADV_RECORD_START + MESH_OPT_CORE_ADV_COUNT - 1,
    MESH_OPT_CORE_TX_POWER_RECORD_START,
    MESH_OPT_CORE_TX_POWER_RECORD_END   = MESH_OPT_CORE_TX_POWER_RECORD_START + MESH_OPT_CORE_ADV_COUNT - 1,
    MESH_OPT_CORE_ADV_ADDR_RECORD_START,
    MESH_OPT_CORE_ADV_ADDR_RECORD_END   = MESH_OPT_CORE_ADV_ADDR_RECORD_START + MESH_OPT_CORE_ADV_COUNT - 1,
    MESH_OPT_CORE_SEC_NWK_BCN_RECORD,
    MESH_OPT_CORE_HB_PUBLICATION_RECORD,
    MESH_OPT_CORE_RECORDS_COUNT
};


#define MESH_OPT_CORE_ADV_EID            MESH_OPT_CORE_ID(MESH_OPT_CORE_ADV_RECORD_START)
#define MESH_OPT_CORE_TX_POWER_EID       MESH_OPT_CORE_ID(MESH_OPT_CORE_TX_POWER_RECORD_START)
#define MESH_OPT_CORE_ADV_ADDR_EID       MESH_OPT_CORE_ID(MESH_OPT_CORE_ADV_ADDR_RECORD_START)
#define MESH_OPT_CORE_SEC_NWK_BCN_EID    MESH_OPT_CORE_ID(MESH_OPT_CORE_SEC_NWK_BCN_RECORD)
#define MESH_OPT_CORE_HB_PUBLICATION_EID MESH_OPT_CORE_ID(MESH_OPT_CORE_HB_PUBLICATION_RECORD)
#define MESH_OPT_CORE_ADV_ENTRY_ID_TO_ROLE(ID)    ((core_tx_role_t) ((ID).record - MESH_OPT_CORE_ADV_RECORD_START))
#define MESH_OPT_CORE_ADV_ROLE_TO_ENTRY_ID(ROLE)  (MESH_OPT_CORE_ID(MESH_OPT_CORE_ADV_RECORD_START + (ROLE)))


typedef struct
{
    bool enabled;            
    uint8_t tx_count;        
    uint16_t tx_interval_ms; 
} mesh_opt_core_adv_t;



uint32_t mesh_opt_core_adv_set(core_tx_role_t role, const mesh_opt_core_adv_t * p_entry);
uint32_t mesh_opt_core_adv_get(core_tx_role_t role, mesh_opt_core_adv_t * p_entry);


#endif /* MESH_OPT_CORE_H__ */