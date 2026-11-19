
void * FUN_038aa690(size_t param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar2 = malloc(param_1);
    return pvVar2;
  }
  if (param_2 == (long *)0x0) {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar3 + 8);
    if (lVar1 != 0) {
      param_2 = (long *)(lVar1 + 0xa8);
    }
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      return (void *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x038aa708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(**(code **)(*param_2 + 0x30))(param_2,param_1,param_3);
  return pvVar2;
}

