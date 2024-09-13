#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
extern int add_bus_tests();
extern int add_cpu_tests();
extern int add_cond_tests();
extern int add_register_tests();
extern int add_instruction_tests();
extern int add_alu_tests();
extern int add_utils_tests();
extern int add_assembler_tests();

int main() {
    if (CUE_SUCCESS != CU_initialize_registry()){
        return CU_get_error();
    }

    add_bus_tests();
    add_cpu_tests();
    add_cond_tests();
    add_register_tests();
    add_instruction_tests();
    add_alu_tests();
    add_utils_tests();
    add_assembler_tests(); 
    
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();

    CU_cleanup_registry();
    return CU_get_error();

}