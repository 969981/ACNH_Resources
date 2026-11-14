
undefined8 FUN_016d34a4(undefined8 param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  short *psVar12;
  undefined1 uVar13;
  long lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined8 local_c8;
  undefined *local_c0;
  short local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  short local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  short local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  short local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  short local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  short local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  uint local_6c;
  char local_68;
  uint local_64;
  
  local_64 = param_2;
  FUN_021d6190(&local_6c);
  uVar7 = local_64;
  if (local_68 == '\0') {
    return 1;
  }
  if ((local_64 < 2) &&
     (local_c0 = (undefined *)CONCAT44(local_c0._4_4_,local_64), DAT_05574040 != 0)) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar9 == 0) {
        return 0;
      }
      lVar9 = lVar9 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return 0;
      }
      lVar9 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar9 == 0) {
        return 0;
      }
    }
    lVar9 = lVar9 + (long)(int)local_c0 * 0x18b8;
    if ((*(long **)(lVar9 + 0x272940) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar9 + 0x272940), puVar11 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar11)();
      uVar5 = uVar5 ^ 1;
    }
    puVar4 = PTR_DAT_04bb43c0;
    psVar1 = (short *)(*(long *)(lVar9 + 0x272928) + *(long *)(lVar9 + 0x272920));
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(psVar1);
    puVar3 = PTR_DAT_04bb37e0;
    if (*(long *)puVar4 == 0) {
      psVar12 = (short *)PTR_DAT_04bb37e0;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      psVar12 = &DAT_05586008;
      if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
        psVar12 = &DAT_05586008;
        if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
          psVar12 = psVar1;
        }
      }
    }
    sVar2 = *psVar12;
    uVar13 = (undefined1)psVar12[1];
    uVar15 = *(undefined1 *)((long)psVar12 + 3);
    uVar16 = *(undefined4 *)(psVar12 + 2);
    local_74 = sVar2;
    local_72 = uVar13;
    local_71 = uVar15;
    local_70 = uVar16;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x272940) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x272940) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    if (sVar2 == -2) {
      local_b8 = *(short *)puVar3;
      local_b6 = puVar3[2];
      local_b5 = puVar3[3];
      local_b4 = *(undefined4 *)(puVar3 + 4);
      local_b0 = *(long *)puVar3;
      local_c0 = *(undefined **)puVar3;
      local_a8 = local_b8;
      local_a6 = local_b6;
      local_a5 = local_b5;
      local_a4 = local_b4;
      local_a0 = local_b8;
      local_9e = local_b6;
      local_9d = local_b5;
      local_9c = local_b4;
      local_98 = local_b8;
      local_96 = local_b6;
      local_95 = local_b5;
      local_94 = local_b4;
      local_90 = local_b8;
      local_8e = local_b6;
      local_8d = local_b5;
      local_8c = local_b4;
      local_88 = local_b8;
      local_86 = local_b6;
      local_85 = local_b5;
      local_84 = local_b4;
      local_80 = local_b8;
      local_7e = local_b6;
      local_7d = local_b5;
      local_7c = local_b4;
      uVar10 = FUN_016d3390(&local_c0,uVar7);
      if ((uVar10 & 1) == 0) {
        local_c8 = 0x3390;
        FUN_0277d4ac(&local_c8);
        uVar13 = local_c8._2_1_;
        uVar15 = local_c8._3_1_;
        uVar16 = local_c8._4_4_;
        sVar2 = (short)local_c8;
      }
      else {
        uVar13 = local_a6;
        uVar15 = local_a5;
        uVar16 = local_a4;
        sVar2 = local_a8;
      }
      local_74 = sVar2;
      local_72 = uVar13;
      local_71 = uVar15;
      local_70 = uVar16;
    }
    lVar9 = *(long *)puVar4;
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    local_b0 = 0;
    local_b8 = sVar2;
    local_b6 = uVar13;
    local_b5 = uVar15;
    local_b4 = uVar16;
    uVar7 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar4 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_74);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
          local_b0 = lVar9;
        }
      }
    }
    iVar8 = FUN_01ae58b0(&local_c0);
    if (local_6c < 4) {
      if (iVar8 != 2) {
        return 1;
      }
    }
    else if (iVar8 != 1) {
      return 1;
    }
  }
  return 0;
}

