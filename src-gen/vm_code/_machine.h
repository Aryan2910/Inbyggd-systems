#ifndef _MACHINE_H
#define _MACHINE_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1703450751_H
#define TOP_LEVEL_PREAMBLE_1703450751_H
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _machine_cancel_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _machine_sel_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _machine_coin_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _machine_bev_out_t;
typedef struct {
    struct self_base_t base;
    #line 7 "/h/dk/f/ar4013si-s/Inbyggd%20systems/Lab-2/vm_code.lf"
    int* stock;
#line 68 "/h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/src-gen/vm_code/_machine.h"
#line 69 "/h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/src-gen/vm_code/_machine.h"
    _machine_cancel_in_t* _lf_cancel_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_cancel_in_width;
    // Default input (in case it does not get connected)
    _machine_cancel_in_t _lf_default__cancel_in;
    _machine_sel_in_t* _lf_sel_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_sel_in_width;
    // Default input (in case it does not get connected)
    _machine_sel_in_t _lf_default__sel_in;
    _machine_coin_out_t _lf_coin_out;
    int _lf_coin_out_width;
    _machine_bev_out_t _lf_bev_out;
    int _lf_bev_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__cancel_in;
    reaction_t* _lf__cancel_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sel_in;
    reaction_t* _lf__sel_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _machine_self_t;
_machine_self_t* new__machine();
#endif // _MACHINE_H
