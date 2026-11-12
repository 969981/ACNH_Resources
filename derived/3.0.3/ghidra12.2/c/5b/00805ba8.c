
void FUN_00805ba8(short *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  short sVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 auStack_173e [2];
  ushort local_173c [2];
  undefined *local_1738;
  short local_1730;
  undefined1 local_172e;
  undefined1 local_172d;
  uint local_172c;
  uint *local_1728;
  undefined8 local_171c;
  undefined1 auStack_1712 [2];
  short local_1710 [4];
  long local_1708;
  long lStack_1700;
  uint local_70;
  undefined4 local_6c;
  
  FUN_007ef010(auStack_1712,param_2);
  FUN_007e4920(local_1710,auStack_1712);
  if ((local_1710[0] == *(short *)PTR_DAT_04bb3170) || (lStack_1700 == 0 && local_1708 == 0))
  goto LAB_00805cac;
  local_171c = (undefined *)0xfffe;
  FUN_0277d4ac(&local_171c);
  uVar6 = FUN_007e4bb0(local_1710);
  if ((uVar6 & 1) == 0) {
    local_1738 = (undefined *)0x1c2a;
LAB_00805c80:
    FUN_0277d4ac(&local_1738);
    local_171c = local_1738;
    sVar9 = (short)local_1738;
  }
  else {
    uVar4 = FUN_007e68d0(local_1710);
    if (0x1e < uVar4) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)((long)&DAT_053275f0 + (long)(int)uVar4 * 0x138 + 4);
    if (uVar4 != 0xfffe) {
      local_1738 = (undefined *)(ulong)(uVar4 & 0xffff);
      goto LAB_00805c80;
    }
    sVar9 = (short)local_171c;
  }
  puVar3 = PTR_DAT_04bb43c0;
  if (sVar9 == -2) {
LAB_00805cac:
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(param_1 + 2) = uVar2;
    return;
  }
  uVar10 = local_171c._2_1_;
  local_1728 = (uint *)0x0;
  uVar11 = local_171c._3_1_;
  uVar4 = local_171c._4_4_;
  local_1738 = PTR_DAT_04bc0510 + 0x10;
  local_172e = local_171c._2_1_;
  local_172d = local_171c._3_1_;
  local_172c = local_171c._4_4_;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_1730 = sVar9;
  uVar5 = FUN_0277d6c4(&local_1730);
  if (*(long *)puVar3 == 0) {
LAB_00805e3c:
    puVar13 = (uint *)0x0;
    local_70 = 0xbc;
    bVar14 = true;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_00805e3c;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_171c);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar13 == (uint *)0x0)) goto LAB_00805e3c;
    local_70 = 0;
    uVar5 = *puVar13;
    local_1728 = puVar13;
    if ((uVar5 == 0) || (puVar13 == (uint *)(ulong)uVar5)) {
LAB_00805f78:
      bVar14 = false;
    }
    else {
      puVar8 = (uint *)((long)puVar13 - (long)(ulong)uVar5);
      local_70 = 0;
      if (*puVar8 == 0) goto LAB_00805f78;
      uVar5 = puVar8[1];
      if ((uVar5 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_00805f74:
        local_70 = 0;
        goto LAB_00805f78;
      }
      lVar12 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar12 == 0) goto LAB_00805f74;
      uVar1 = 0;
      if ((ulong)uVar5 != 0) {
        uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar5);
      }
      if (*puVar8 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) goto LAB_00805f74;
      local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
      if (local_70 < 0xbd) goto LAB_00805f78;
      bVar14 = false;
      local_70 = 0;
    }
  }
  local_6c = 0xac;
  if (local_70 != 0xac) {
    uVar6 = FUN_01ae89e0(&local_1738);
    if ((uVar6 & 1) != 0) {
      FUN_007ef010(auStack_173e,param_2);
      FUN_01b08ab4(&local_1738,auStack_173e);
      uVar10 = local_172e;
      uVar11 = local_172d;
      uVar4 = local_172c;
      sVar9 = local_1730;
    }
    goto LAB_00805f60;
  }
  FUN_007ef010(local_173c,param_2);
  if (bVar14) {
    uVar7 = 0xbc;
  }
  else {
    uVar5 = *puVar13;
    uVar7 = 0;
    if ((uVar5 != 0) && (puVar13 != (uint *)(ulong)uVar5)) {
      puVar8 = (uint *)((long)puVar13 - (long)(ulong)uVar5);
      uVar7 = 0;
      if (*puVar8 != 0) {
        uVar5 = puVar8[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar7 < 0xbd)) goto LAB_00805f40;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_00805f40:
  if (uVar7 == 0xac) {
    uVar4 = uVar4 & 0xffff0000 | (uint)local_173c[0];
  }
LAB_00805f60:
  *param_1 = sVar9;
  *(undefined1 *)(param_1 + 1) = uVar10;
  *(undefined1 *)((long)param_1 + 3) = uVar11;
  *(uint *)(param_1 + 2) = uVar4;
  return;
}

