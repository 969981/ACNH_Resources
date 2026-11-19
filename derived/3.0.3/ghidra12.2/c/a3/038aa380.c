
/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(param_1);
    return pvVar3;
  }
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  plVar2 = (long *)(lVar4 + 8);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0xa8);
  }
  plVar2 = (long *)*plVar2;
  if (plVar2 == (long *)0x0) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x038aa3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,param_1,8);
  return pvVar3;
}

