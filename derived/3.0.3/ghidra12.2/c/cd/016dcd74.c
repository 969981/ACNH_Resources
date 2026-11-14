
undefined8 * FUN_016dcd74(undefined4 param_1)

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
    if ((DAT_0523f4a0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f4a0);
      local_20 = &DAT_0523f490;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_0";
        puVar3 = &DAT_0523f4a0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f490;
LAB_016dd10c:
        *plVar4 = (long)puVar6;
        plVar4[1] = (long)pcVar5;
        __cxa_guard_release(puVar3);
        return local_20;
      }
    }
    puVar2 = &DAT_0523f490;
    break;
  case 1:
    if ((DAT_0523f4b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f4b8);
      local_20 = &DAT_0523f4a8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_1";
        puVar3 = &DAT_0523f4b8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f4a8;
        goto LAB_016dd10c;
      }
    }
    puVar2 = &DAT_0523f4a8;
    break;
  case 2:
    if ((DAT_0523f4d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f4d0);
      local_20 = &DAT_0523f4c0;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_2";
        puVar3 = &DAT_0523f4d0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f4c0;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f4c0;
  case 3:
    if ((DAT_0523f4e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f4e8);
      local_20 = &DAT_0523f4d8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_3";
        puVar3 = &DAT_0523f4e8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f4d8;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f4d8;
  case 4:
    if ((DAT_0523f500 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f500);
      local_20 = &DAT_0523f4f0;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_4";
        puVar3 = &DAT_0523f500;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f4f0;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f4f0;
  case 5:
    if ((DAT_0523f518 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f518);
      local_20 = &DAT_0523f508;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_5";
        puVar3 = &DAT_0523f518;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f508;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f508;
  case 6:
    if ((DAT_0523f530 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f530);
      local_20 = &DAT_0523f520;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_6";
        puVar3 = &DAT_0523f530;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f520;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f520;
  case 7:
    if ((DAT_0523f548 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f548);
      local_20 = &DAT_0523f538;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep_7";
        puVar3 = &DAT_0523f548;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f538;
        goto LAB_016dd10c;
      }
    }
    return &DAT_0523f538;
  default:
    if ((DAT_0523f560 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f560);
      local_20 = &DAT_0523f550;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightKeep";
        puVar3 = &DAT_0523f560;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f550;
        goto LAB_016dd10c;
      }
    }
    puVar2 = &DAT_0523f550;
  }
  return puVar2;
}

