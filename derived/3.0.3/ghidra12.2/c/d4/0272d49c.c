
undefined8 FUN_0272d49c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  if (param_2[2] == 0) {
    return 0;
  }
  if (param_2[3] == 0) {
    return 0;
  }
  if (param_2[4] == 0) {
    return 0;
  }
  *param_1 = (long)plVar2;
  if (DAT_05ae7600 == 0) {
    pvVar3 = malloc(0x37ad0);
  }
  else {
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x37ad0,0x10);
  }
  FUN_027ee494();
  param_1[1] = (long)pvVar3;
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar2 = malloc(0x46818);
  }
  else {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar1 + 8);
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_0272d590;
      }
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x46818,8);
  }
LAB_0272d590:
  FUN_027366c0(plVar2,0,0);
  *plVar2 = (long)(PTR_DAT_04bc37c8 + 0x10);
  FUN_027056a0(plVar2 + 0x3296,0,0);
  plVar2[0x3296] = (long)&PTR_LAB_04a8f210;
  param_1[2] = (long)plVar2;
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar2 = malloc(0x28);
    param_1[3] = (long)plVar2;
  }
  else {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar1 + 8);
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        param_1[3] = 0;
        goto LAB_0272d6ac;
      }
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x28,8);
    param_1[3] = (long)plVar2;
  }
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2[1];
    *(long *)(param_1[3] + 8) = param_2[2];
    *(long *)(param_1[3] + 0x10) = param_2[3];
    *(long *)(param_1[3] + 0x18) = param_2[4];
    *(undefined8 *)(param_1[3] + 0x20) = 0;
    FUN_02640070(param_1[2],0,param_1[1],0,1);
    FUN_02640130(param_1[2],param_1[3]);
    return 1;
  }
LAB_0272d6ac:
  FUN_0272d3bc(param_1);
  return 0;
}

