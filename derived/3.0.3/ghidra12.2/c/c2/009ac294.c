
undefined8 FUN_009ac294(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *local_5a8;
  undefined **local_5a0;
  undefined **ppuStack_598;
  undefined4 local_590;
  undefined *local_588;
  undefined ***pppuStack_580;
  uint local_578;
  undefined **local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined1 local_530;
  uint local_52c;
  undefined **local_528;
  long *local_520;
  long *local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined4 local_4f0;
  char local_4e4 [4];
  undefined *local_4e0;
  undefined1 *puStack_4d8;
  undefined4 local_4d0;
  undefined1 local_4cc [511];
  undefined1 local_2cd;
  undefined *local_2c8;
  undefined1 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [511];
  undefined1 local_b5;
  undefined1 auStack_b0 [92];
  uint local_54;
  
  FUN_03eaac78(auStack_b0,*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x540),1);
  nn::os::GetSystemTick();
  FUN_009ac9e0(param_1 + 8,auStack_b0);
  nn::os::GetSystemTick();
  plVar4 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x110);
  if (((plVar4 == (long *)0x0) || ((char)plVar4[0xf] == '\0')) ||
     (uVar1 = (**(code **)(*plVar4 + 0x50))(plVar4), (uVar1 & 1) == 0)) {
    uVar3 = 0;
    goto LAB_009ac480;
  }
  local_b5 = 0;
  local_2cd = 0;
  local_2c0 = local_2b4;
  local_2b8 = 0x200;
  local_4d0 = 0x200;
  puStack_4d8 = local_4cc;
  local_4e0 = PTR_DAT_04bb2d90 + 0x10;
  local_2b4[0] = 0;
  local_4cc[0] = 0;
  local_4e4[0] = '\0';
  local_2c8 = local_4e0;
  if ((char)plVar4[0xf] == '\0') {
LAB_009ac4e8:
    uVar3 = 0;
    local_4f0 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_520 = (long *)0x0;
    local_518 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 200))(plVar4,local_4e4,&local_4e0);
    if (local_4e4[0] == '\0') {
      if ((char)plVar4[0xf] == '\0') goto LAB_009ac4e8;
      uVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if ((uVar1 & 1) != 0) {
        (**(code **)(*plVar4 + 0xe8))(plVar4,&local_4e0,0x777);
      }
    }
    local_528 = &PTR_FUN_0492c6c0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_520 = (long *)0x0;
    local_518 = (long *)0x0;
    if (((char)plVar4[0xf] != '\0') &&
       (uVar1 = (**(code **)(*plVar4 + 0x20))(plVar4), (uVar1 & 1) != 0)) {
      local_4f0 = 0;
      plVar2 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,&local_528,&local_2c8,1);
      local_520 = plVar2;
      if (plVar2 != (long *)0x0) {
        local_518 = plVar4;
        nn::os::GetSystemTick();
        plVar4 = local_520;
        local_590 = 1;
        local_5a8 = PTR_DAT_04bd0e18 + 0x10;
        local_588 = PTR_DAT_04bd0e10 + 0x10;
        pppuStack_580 = &local_528;
        if (local_520 == (long *)0x0) {
          plVar4 = (long *)0x0;
          local_578 = 0;
        }
        else {
          local_54 = 0;
          local_578 = (uint)*(byte *)(local_520 + 0xf);
          if (*(byte *)(local_520 + 0xf) != 0) {
            uVar1 = (**(code **)(*local_520 + 0x48))(local_520,&local_528);
            if ((uVar1 & 1) == 0) {
              local_578 = 0;
            }
            else {
              (**(code **)(*plVar4 + 0xa8))(plVar4,&local_54,&local_528);
              local_578 = local_54;
            }
          }
          plVar4 = local_520;
        }
        local_540 = 0;
        local_538 = 0;
        local_530 = 0;
        local_560 = 0;
        uStack_558 = 0;
        local_550 = 0;
        uStack_548 = 0;
        local_570 = &PTR_FUN_0492c6c0;
        uStack_568 = 0;
        if (plVar4 == (long *)0x0) {
          local_52c = 0;
        }
        else {
          local_52c = (uint)*(byte *)(plVar4 + 0xf);
          local_54 = 0;
          if (*(byte *)(plVar4 + 0xf) != 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4,&local_54,&local_528);
            local_52c = local_54;
          }
        }
        local_5a0 = &PTR_PTR_04c4b9a0;
        ppuStack_598 = &local_588;
        FUN_03eabaf0(auStack_b0,&local_5a8);
        nn::os::GetSystemTick();
        if ((((char)plVar2[0xf] != '\0') &&
            (uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_528), (uVar1 & 1) != 0)) &&
           (uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_528), (uVar1 & 1) != 0)) {
          local_520 = (long *)0x0;
          local_518 = (long *)0x0;
        }
        nn::os::GetSystemTick();
        FUN_038b6f50(param_2,&local_2c8);
        FUN_038df20c(&local_5a8);
        uVar3 = 1;
        goto LAB_009ac504;
      }
    }
    uVar3 = 0;
  }
LAB_009ac504:
  plVar4 = local_518;
  local_528 = &PTR_FUN_0492c6c0;
  if ((((local_518 != (long *)0x0) && ((char)local_518[0xf] != '\0')) &&
      (uVar1 = (**(code **)(*local_518 + 0x48))(local_518,&local_528), (uVar1 & 1) != 0)) &&
     (uVar1 = (**(code **)(*plVar4 + 0x70))(plVar4,&local_528), (uVar1 & 1) != 0)) {
    local_520 = (long *)0x0;
    local_518 = (long *)0x0;
  }
LAB_009ac480:
  FUN_03eaaec0(auStack_b0);
  return uVar3;
}

