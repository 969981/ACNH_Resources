
long * FUN_024d5100(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    return (long *)PTR_PTR_04bb2238;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar2) {
    return (long *)PTR_PTR_04bb2238;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return (long *)PTR_PTR_04bb2238;
  }
  local_38 = 0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  local_48 = PTR_DAT_04bc0510 + 0x10;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
        local_38 = lVar7;
      }
    }
  }
  iVar3 = FUN_01ad78cc(&local_48);
  if (iVar3 == 0) {
    return (long *)PTR_PTR_04bb2238;
  }
  if (iVar3 == 0x53) {
    if ((DAT_054e28c0 & 1) != 0) {
      return &DAT_054e28b0;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e28c0);
    plVar6 = &DAT_054e28b0;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerSoyThrow";
    puVar4 = &DAT_054e28c0;
  }
  else if (iVar3 == 0x56) {
    if ((DAT_054e28d8 & 1) != 0) {
      return &DAT_054e28c8;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e28d8);
    plVar6 = &DAT_054e28c8;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerCheers";
    puVar4 = &DAT_054e28d8;
  }
  else if (iVar3 == 0x57) {
    if ((DAT_054e28f0 & 1) != 0) {
      return &DAT_054e28e0;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e28f0);
    plVar6 = &DAT_054e28e0;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerFlowerThrow";
    puVar4 = &DAT_054e28f0;
  }
  else if (iVar3 == 100) {
    if ((DAT_054e2908 & 1) != 0) {
      return &DAT_054e28f8;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2908);
    plVar6 = &DAT_054e28f8;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerDrinkTool";
    puVar4 = &DAT_054e2908;
  }
  else if (iVar3 == 99) {
    if ((DAT_054e2920 & 1) != 0) {
      return &DAT_054e2910;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2920);
    plVar6 = &DAT_054e2910;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerEatTool";
    puVar4 = &DAT_054e2920;
  }
  else if (iVar3 == 0x26) {
    if ((DAT_054e2938 & 1) != 0) {
      return &DAT_054e2928;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2938);
    plVar6 = &DAT_054e2928;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerEatTool";
    puVar4 = &DAT_054e2938;
  }
  else if (iVar3 == 0x5a) {
    if ((DAT_054e2950 & 1) != 0) {
      return &DAT_054e2940;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2950);
    plVar6 = &DAT_054e2940;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerDrinkTool";
    puVar4 = &DAT_054e2950;
  }
  else if (iVar3 == 0x66) {
    if ((DAT_054e2968 & 1) != 0) {
      return &DAT_054e2958;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2968);
    plVar6 = &DAT_054e2958;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerWorkout";
    puVar4 = &DAT_054e2968;
  }
  else if (iVar3 == 0x67) {
    if ((DAT_054e2980 & 1) != 0) {
      return &DAT_054e2970;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2980);
    plVar6 = &DAT_054e2970;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerBook";
    puVar4 = &DAT_054e2980;
  }
  else if (iVar3 == 0x68) {
    if ((DAT_054e2998 & 1) != 0) {
      return &DAT_054e2988;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e2998);
    plVar6 = &DAT_054e2988;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerBook";
    puVar4 = &DAT_054e2998;
  }
  else {
    if (iVar3 != 0x3a) {
      return (long *)PTR_PTR_04bb2238;
    }
    if ((DAT_054e29b0 & 1) != 0) {
      return &DAT_054e29a0;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e29b0);
    plVar6 = &DAT_054e29a0;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerEatTool";
    puVar4 = &DAT_054e29b0;
  }
  *plVar6 = (long)(PTR_DAT_04bb2020 + 0x10);
  plVar6[1] = (long)pcVar5;
  __cxa_guard_release(puVar4);
  return plVar6;
}

