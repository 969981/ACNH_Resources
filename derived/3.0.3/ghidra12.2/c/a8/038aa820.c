
/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  long *plVar1;
  
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  if ((param_1 == (void *)0x0) ||
     (plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038aa864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

