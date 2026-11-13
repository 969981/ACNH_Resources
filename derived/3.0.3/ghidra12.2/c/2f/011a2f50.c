
void * FUN_011a2f50(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined *local_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar2 = malloc(0x180);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    pvVar2 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x180,8);
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  uStack_28 = param_1;
  FUN_011a5910(pvVar2,&local_30);
  return pvVar2;
}

