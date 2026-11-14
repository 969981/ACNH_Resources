
undefined8 * FUN_016dd11c(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 *local_20;
  
  switch(param_1) {
  case 0:
    if ((DAT_0523f578 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f578);
      local_20 = &DAT_0523f568;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_0";
        puVar3 = &DAT_0523f578;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f568;
LAB_016dd4b4:
        *plVar4 = (long)puVar6;
        plVar4[1] = (long)pcVar5;
        __cxa_guard_release(puVar3);
        return local_20;
      }
    }
    puVar2 = &DAT_0523f568;
    break;
  case 1:
    if ((DAT_0523f590 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f590);
      local_20 = &DAT_0523f580;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_1";
        puVar3 = &DAT_0523f590;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f580;
        goto LAB_016dd4b4;
      }
    }
    puVar2 = &DAT_0523f580;
    break;
  case 2:
    if ((DAT_0523f5a8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f5a8);
      local_20 = &DAT_0523f598;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_2";
        puVar3 = &DAT_0523f5a8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f598;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f598;
  case 3:
    if ((DAT_0523f5c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f5c0);
      local_20 = &DAT_0523f5b0;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_3";
        puVar3 = &DAT_0523f5c0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f5b0;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f5b0;
  case 4:
    if ((DAT_0523f5d8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f5d8);
      local_20 = &DAT_0523f5c8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_4";
        puVar3 = &DAT_0523f5d8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f5c8;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f5c8;
  case 5:
    if ((DAT_0523f5f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f5f0);
      local_20 = &DAT_0523f5e0;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_5";
        puVar3 = &DAT_0523f5f0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f5e0;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f5e0;
  case 6:
    if ((DAT_0523f608 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f608);
      local_20 = &DAT_0523f5f8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_6";
        puVar3 = &DAT_0523f608;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f5f8;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f5f8;
  case 7:
    if ((DAT_0523f620 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f620);
      local_20 = &DAT_0523f610;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown_7";
        puVar3 = &DAT_0523f620;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f610;
        goto LAB_016dd4b4;
      }
    }
    return &DAT_0523f610;
  default:
    if ((DAT_0523f638 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f638);
      local_20 = &DAT_0523f628;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightDown";
        puVar3 = &DAT_0523f638;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f628;
        goto LAB_016dd4b4;
      }
    }
    puVar2 = &DAT_0523f628;
  }
  return puVar2;
}

