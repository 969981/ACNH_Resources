
void FUN_00807efc(short *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint *puVar7;
  short sVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
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
  if ((local_1710[0] == *(short *)PTR_DAT_04bb3170) || (lStack_1700 == 0 && local_1708 == 0)) {
LAB_0080808c:
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(param_1 + 2) = uVar2;
    return;
  }
  local_171c = (undefined *)0xfffe;
  FUN_0277d4ac(&local_171c);
  uVar5 = FUN_007e4bb0(local_1710);
  if ((uVar5 & 1) == 0) {
    sVar8 = (short)local_171c;
  }
  else {
    local_6c = FUN_007e68d0(local_1710);
    switch(local_6c) {
    default:
      local_1738 = (undefined *)0x10c0;
      break;
    case 4:
      local_1738 = (undefined *)0x2024;
      break;
    case 5:
      local_1738 = (undefined *)0x203b;
      break;
    case 6:
      local_1738 = (undefined *)0x203c;
      break;
    case 7:
      local_1738 = (undefined *)0x203d;
      break;
    case 8:
      local_1738 = (undefined *)0x203e;
      break;
    case 9:
      local_1738 = (undefined *)0x10bf;
      break;
    case 10:
      local_1738 = (undefined *)0x20af;
      break;
    case 0xb:
      local_1738 = (undefined *)0x20b0;
      break;
    case 0xc:
      local_1738 = (undefined *)0x20b1;
      break;
    case 0xd:
      local_1738 = (undefined *)0x20b2;
      break;
    case 0xe:
      local_1738 = (undefined *)0x20b4;
      break;
    case 0xf:
      local_1738 = (undefined *)0x16be;
      break;
    case 0x10:
      local_1738 = (undefined *)0x16cc;
      break;
    case 0x11:
      local_1738 = (undefined *)0x16cd;
      break;
    case 0x1a:
      local_1738 = (undefined *)0x3349;
      break;
    case 0x1b:
      local_1738 = (undefined *)0x33e6;
      break;
    case 0x1c:
      local_1738 = (undefined *)0x33e1;
      break;
    case 0x1d:
      local_1738 = (undefined *)0x33e0;
      break;
    case 0x1e:
      local_1738 = (undefined *)0x351e;
    }
    FUN_0277d4ac(&local_1738);
    local_171c = local_1738;
    sVar8 = (short)local_1738;
  }
  puVar3 = PTR_DAT_04bb43c0;
  if (sVar8 == -2) goto LAB_0080808c;
  uVar9 = local_171c._2_1_;
  local_1728 = (uint *)0x0;
  uVar10 = local_171c._3_1_;
  uVar11 = local_171c._4_4_;
  local_1738 = PTR_DAT_04bc0510 + 0x10;
  local_172e = local_171c._2_1_;
  local_172d = local_171c._3_1_;
  local_172c = local_171c._4_4_;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_1730 = sVar8;
  uVar4 = FUN_0277d6c4(&local_1730);
  if (*(long *)puVar3 == 0) {
LAB_00808218:
    puVar13 = (uint *)0x0;
    local_70 = 0xbc;
    bVar14 = true;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_00808218;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_171c);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar13 == (uint *)0x0)) goto LAB_00808218;
    local_70 = 0;
    uVar4 = *puVar13;
    local_1728 = puVar13;
    if ((uVar4 == 0) || (puVar13 == (uint *)(ulong)uVar4)) {
LAB_00808354:
      bVar14 = false;
    }
    else {
      puVar7 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
      local_70 = 0;
      if (*puVar7 == 0) goto LAB_00808354;
      uVar4 = puVar7[1];
      if ((uVar4 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_00808350:
        local_70 = 0;
        goto LAB_00808354;
      }
      lVar12 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar7 + lVar12 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar12 == 0) goto LAB_00808350;
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
      }
      if (*puVar7 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) goto LAB_00808350;
      local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
      if (local_70 < 0xbd) goto LAB_00808354;
      bVar14 = false;
      local_70 = 0;
    }
  }
  local_6c = 0xac;
  if (local_70 != 0xac) {
    uVar5 = FUN_01ae89e0(&local_1738);
    if ((uVar5 & 1) != 0) {
      FUN_007ef010(auStack_173e,param_2);
      FUN_01b08ab4(&local_1738,auStack_173e);
      uVar9 = local_172e;
      uVar10 = local_172d;
      uVar11 = local_172c;
      sVar8 = local_1730;
    }
    goto LAB_0080833c;
  }
  FUN_007ef010(local_173c,param_2);
  if (bVar14) {
    uVar6 = 0xbc;
  }
  else {
    uVar4 = *puVar13;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar7 + lVar12 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar6 < 0xbd)) goto LAB_0080831c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0080831c:
  if (uVar6 == 0xac) {
    uVar11 = uVar11 & 0xffff0000 | (uint)local_173c[0];
  }
LAB_0080833c:
  *param_1 = sVar8;
  *(undefined1 *)(param_1 + 1) = uVar9;
  *(undefined1 *)((long)param_1 + 3) = uVar10;
  *(uint *)(param_1 + 2) = uVar11;
  return;
}

