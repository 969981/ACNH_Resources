
undefined8 * FUN_016dc9cc(undefined4 param_1)

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
    if ((DAT_0523f3c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f3c8);
      local_20 = &DAT_0523f3b8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_0";
        puVar3 = &DAT_0523f3c8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f3b8;
LAB_016dcd64:
        *plVar4 = (long)puVar6;
        plVar4[1] = (long)pcVar5;
        __cxa_guard_release(puVar3);
        return local_20;
      }
    }
    puVar2 = &DAT_0523f3b8;
    break;
  case 1:
    if ((DAT_0523f3e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f3e0);
      local_20 = &DAT_0523f3d0;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_1";
        puVar3 = &DAT_0523f3e0;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f3d0;
        goto LAB_016dcd64;
      }
    }
    puVar2 = &DAT_0523f3d0;
    break;
  case 2:
    if ((DAT_0523f3f8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f3f8);
      local_20 = &DAT_0523f3e8;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_2";
        puVar3 = &DAT_0523f3f8;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f3e8;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f3e8;
  case 3:
    if ((DAT_0523f410 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f410);
      local_20 = &DAT_0523f400;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_3";
        puVar3 = &DAT_0523f410;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f400;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f400;
  case 4:
    if ((DAT_0523f428 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f428);
      local_20 = &DAT_0523f418;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_4";
        puVar3 = &DAT_0523f428;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f418;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f418;
  case 5:
    if ((DAT_0523f440 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f440);
      local_20 = &DAT_0523f430;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_5";
        puVar3 = &DAT_0523f440;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f430;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f430;
  case 6:
    if ((DAT_0523f458 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f458);
      local_20 = &DAT_0523f448;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_6";
        puVar3 = &DAT_0523f458;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f448;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f448;
  case 7:
    if ((DAT_0523f470 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f470);
      local_20 = &DAT_0523f460;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp_7";
        puVar3 = &DAT_0523f470;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f460;
        goto LAB_016dcd64;
      }
    }
    return &DAT_0523f460;
  default:
    if ((DAT_0523f488 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0523f488);
      local_20 = &DAT_0523f478;
      if (iVar1 != 0) {
        pcVar5 = "CommonStickLightUp";
        puVar3 = &DAT_0523f488;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        plVar4 = &DAT_0523f478;
        goto LAB_016dcd64;
      }
    }
    puVar2 = &DAT_0523f478;
  }
  return puVar2;
}

