#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/vm_code/Machine.h"
#include "_machine.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _machinereaction_function_0(void* instance_args) {
    _machine_self_t* self = (_machine_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _machine_sel_in_t* sel_in = self->_lf_sel_in;
    int sel_in_width = self->_lf_sel_in_width; SUPPRESS_UNUSED_WARNING(sel_in_width);
    _machine_bev_out_t* bev_out = &self->_lf_bev_out;
    #line 17 "/h/dk/f/ar4013si-s/Inbyggd%20systems/Lab-2/vm_code.lf"
    switch(sel_in -> value) {
        case 0: // bev-0 out
            lf_set(bev_out, 0);
            break;
        case 1: // bev-1 out
            lf_set(bev_out, 1);
            break;
        case 2: // bev-2 out
            lf_set(bev_out, 2);
            break;
        default:
            break;
    }
#line 28 "/h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/src-gen/vm_code/_machine.c"
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _machinereaction_function_1(void* instance_args) {
    _machine_self_t* self = (_machine_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _machine_cancel_in_t* cancel_in = self->_lf_cancel_in;
    int cancel_in_width = self->_lf_cancel_in_width; SUPPRESS_UNUSED_WARNING(cancel_in_width);
    _machine_coin_out_t* coin_out = &self->_lf_coin_out;
    #line 33 "/h/dk/f/ar4013si-s/Inbyggd%20systems/Lab-2/vm_code.lf"
    lf_set(coin_out, true);
#line 39 "/h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/src-gen/vm_code/_machine.c"
}
#include "include/api/set_undef.h"
_machine_self_t* new__machine() {
    _machine_self_t* self = (_machine_self_t*)_lf_new_reactor(sizeof(_machine_self_t));
    // Set input by default to an always absent default input.
    self->_lf_cancel_in = &self->_lf_default__cancel_in;
    // Set the default source reactor pointer
    self->_lf_default__cancel_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sel_in = &self->_lf_default__sel_in;
    // Set the default source reactor pointer
    self->_lf_default__sel_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _machinereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _machinereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__cancel_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__cancel_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__cancel_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__cancel_in.reactions = &self->_lf__cancel_in_reactions[0];
    self->_lf__cancel_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__cancel_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__cancel_in.tmplt.type.element_size = sizeof(bool);
    self->_lf__sel_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sel_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sel_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__sel_in.reactions = &self->_lf__sel_in_reactions[0];
    self->_lf__sel_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sel_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sel_in.tmplt.type.element_size = sizeof(int);
    return self;
}
