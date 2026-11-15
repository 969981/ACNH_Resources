
long * FUN_024d2870(undefined4 *param_1)

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
  if (iVar3 == 0x54) {
    if ((DAT_054e1d68 & 1) != 0) {
      return &DAT_054e1d58;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e1d68);
    plVar6 = &DAT_054e1d58;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerMegaphone";
    puVar4 = &DAT_054e1d68;
  }
  else if (iVar3 == 0x6a) {
    if ((DAT_054e1d80 & 1) != 0) {
      return &DAT_054e1d70;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e1d80);
    plVar6 = &DAT_054e1d70;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerDuster";
    puVar4 = &DAT_054e1d80;
  }
  else {
    if (iVar3 != 0x4c) {
      return (long *)PTR_PTR_04bb2238;
    }
    if ((DAT_054e1d98 & 1) != 0) {
      return &DAT_054e1d88;
    }
    iVar3 = __cxa_guard_acquire(&DAT_054e1d98);
    plVar6 = &DAT_054e1d88;
    if (iVar3 == 0) {
      return plVar6;
    }
    pcVar5 = "PlayerBinder";
    puVar4 = &DAT_054e1d98;
  }
  *plVar6 = (long)(PTR_DAT_04bb2020 + 0x10);
  plVar6[1] = (long)pcVar5;
  __cxa_guard_release(puVar4);
  return plVar6;
}

