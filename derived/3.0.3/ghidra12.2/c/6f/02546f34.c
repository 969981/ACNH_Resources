
undefined8 FUN_02546f34(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  byte bVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar12 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar12 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_38 = *puVar12;
  local_34 = param_2;
  FUN_0071c8d0(&local_48,&local_38,&local_34,0);
  plVar4 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_3f = '\0';
    }
  }
  if (local_48 == (long *)0x0) {
    return 0;
  }
  if (local_40 == '\0') {
    return 0;
  }
  if (local_3f == '\0') {
    return 0;
  }
  if (local_3e == '\0') {
    return 0;
  }
  if (((*(long *)PTR_DAT_04bb27f8 != 0) &&
      ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) != 0)) ||
     (uVar7 = FUN_02325ef0(param_1), (uVar7 & 1) != 0)) {
    return 0;
  }
  bVar11 = *param_1;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar11);
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_70,1);
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x161a8) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x161a8), puVar9 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar9)();
      uVar5 = uVar5 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar8 + 0x16190) + *(long *)(lVar8 + 0x16188));
    bVar11 = pbVar1[1];
    bVar2 = *pbVar1;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x161a8) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x161a8) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if (bVar11 == 0 || 7 < bVar2) {
      return 0;
    }
  }
  local_4c = 0;
  local_58 = 0xffffffff;
  local_50 = 2;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0950 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0950);
      puVar12 = &DAT_054f0948;
      if (iVar6 != 0) {
        DAT_054f0948 = *(undefined4 *)PTR_DAT_04bb37e0;
        DAT_054f094c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        __cxa_guard_release(&DAT_054f0950);
      }
    }
    else {
      puVar12 = &DAT_054f0948;
    }
  }
  else {
    puVar12 = (undefined4 *)(DAT_054f5738 + 0x244);
    if ((ulong)*param_1 < 8) {
      puVar12 = puVar12 + (ulong)*param_1 * 2;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar12);
  lVar8 = *(long *)puVar3;
  if (lVar8 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
      uVar10 = 0;
      if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
        local_70 = PTR_DAT_04bc0510 + 0x10;
        local_68 = *puVar12;
        local_64 = puVar12[1];
        local_60 = 0;
        uVar5 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar12);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
              lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar8 != 0) {
                local_60 = lVar8;
              }
            }
          }
        }
        iVar6 = FUN_01ad78cc(&local_70);
        uVar10 = 0x14;
        if (iVar6 != 0x12) {
          uVar10 = 0;
        }
      }
      goto LAB_0254722c;
    }
  }
  uVar10 = 0;
LAB_0254722c:
  local_4c = uVar10;
  FUN_024834e0(local_48,&local_58);
  return 1;
}

