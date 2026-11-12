
undefined8 FUN_006d2f14(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if (0 < (int)param_2) {
    lVar3 = *(long *)PTR_DAT_04bb2698;
    if (lVar3 == 0) {
      pvVar2 = malloc((ulong)param_2);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar3 + 8);
        if (lVar1 != 0) {
          param_3 = (long *)(lVar1 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          return 0;
        }
      }
      pvVar2 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2,param_4);
    }
    if (pvVar2 != (void *)0x0) {
      *(uint *)(param_1 + 8) = param_2;
      *(void **)(param_1 + 0x10) = pvVar2;
      return 1;
    }
  }
  return 0;
}

