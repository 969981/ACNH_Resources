
void * FUN_0189c1d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar2 = malloc(0x460);
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
    pvVar2 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x460,8);
  }
  FUN_0188b744(pvVar2,param_1);
  return pvVar2;
}

