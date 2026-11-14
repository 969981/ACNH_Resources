
undefined8 * FUN_016dc47c(undefined4 param_1)

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
    if ((DAT_0523f2f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f2f0);
      local_20 = &DAT_0523f2e0;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_0";
        puVar3 = &DAT_0523f2f0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f2e0;
LAB_016dc814:
        *plVar4 = (long)puVar6;
        plVar4[1] = (long)pcVar5;
        __cxa_guard_release(puVar3);
        return local_20;
      }
    }
    puVar2 = &DAT_0523f2e0;
    break;
  case 1:
    if ((DAT_0523f308 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f308);
      local_20 = &DAT_0523f2f8;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_1";
        puVar3 = &DAT_0523f308;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f2f8;
        goto LAB_016dc814;
      }
    }
    puVar2 = &DAT_0523f2f8;
    break;
  case 2:
    if ((DAT_0523f320 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f320);
      local_20 = &DAT_0523f310;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_2";
        puVar3 = &DAT_0523f320;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f310;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f310;
  case 3:
    if ((DAT_0523f338 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f338);
      local_20 = &DAT_0523f328;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_3";
        puVar3 = &DAT_0523f338;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f328;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f328;
  case 4:
    if ((DAT_0523f350 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f350);
      local_20 = &DAT_0523f340;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_4";
        puVar3 = &DAT_0523f350;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f340;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f340;
  case 5:
    if ((DAT_0523f368 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f368);
      local_20 = &DAT_0523f358;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_5";
        puVar3 = &DAT_0523f368;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f358;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f358;
  case 6:
    if ((DAT_0523f380 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f380);
      local_20 = &DAT_0523f370;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_6";
        puVar3 = &DAT_0523f380;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f370;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f370;
  case 7:
    if ((DAT_0523f398 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f398);
      local_20 = &DAT_0523f388;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_7";
        puVar3 = &DAT_0523f398;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f388;
        goto LAB_016dc814;
      }
    }
    return &DAT_0523f388;
  default:
    if ((DAT_0523f3b0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f3b0);
      local_20 = &DAT_0523f3a0;
      if (iVar1 != 0) {
        pcVar5 = "ToolSticklightColorful_0";
        puVar3 = &DAT_0523f3b0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f3a0;
        goto LAB_016dc814;
      }
    }
    puVar2 = &DAT_0523f3a0;
  }
  return puVar2;
}

