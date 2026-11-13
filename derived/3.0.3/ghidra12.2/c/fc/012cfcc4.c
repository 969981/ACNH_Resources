
long * FUN_012cfcc4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar3 = malloc(0x6d8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_012cfd3c;
      }
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x6d8,8);
  }
LAB_012cfd3c:
  *plVar3 = (long)(PTR_DAT_04bbbd88 + 0x10);
  memset(plVar3 + 1,0,0x6c8);
  FUN_01268d84(plVar3 + 2);
  *(undefined4 *)(plVar3 + 0xda) = 0;
  return plVar3;
}

