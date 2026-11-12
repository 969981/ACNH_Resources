
undefined8 * FUN_006f8e0c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04c899e8 != (undefined8 *)0x0) {
    return DAT_04c899e8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x28);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_006f8e94;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x28,8);
  }
LAB_006f8e94:
  FUN_038c69f0(puVar3 + 1,param_1,3);
  DAT_04c899e0 = puVar3 + 1;
  *puVar3 = &PTR_LAB_048fcdf8;
  puVar3[1] = &PTR_FUN_048fcdd8;
  if (DAT_04c898f8 != 0) {
    DAT_04c898f8 = 0;
    DAT_04c898fc = 1;
  }
  if (DAT_04c89910 != 0) {
    DAT_04c89910 = 0;
    DAT_04c89914 = 1;
  }
  if (DAT_04c89928 != 0) {
    DAT_04c89928 = 0;
    DAT_04c8992c = 1;
  }
  if (DAT_04c89940 != 0) {
    DAT_04c89940 = 0;
    DAT_04c89944 = 1;
  }
  if (DAT_04c89958 != 0) {
    DAT_04c89958 = 0;
    DAT_04c8995c = 1;
  }
  if (DAT_04c89970 != 0) {
    DAT_04c89970 = 0;
    DAT_04c89974 = 1;
  }
  if (DAT_04c89988 != 0) {
    DAT_04c89988 = 0;
    DAT_04c8998c = 1;
  }
  if (DAT_04c899a0 != 0) {
    DAT_04c899a0 = 0;
    DAT_04c899a4 = 1;
  }
  if (DAT_04c899b8 != 0) {
    DAT_04c899b8 = 0;
    DAT_04c899bc = 1;
  }
  if (DAT_04c899d0 != 0) {
    DAT_04c899d0 = 0;
    DAT_04c899d4 = 1;
  }
  DAT_04c899e8 = puVar3;
  return puVar3;
}

