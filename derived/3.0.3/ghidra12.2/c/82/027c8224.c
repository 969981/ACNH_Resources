
uint FUN_027c8224(ushort *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort local_48;
  undefined1 local_46;
  uint3 local_44;
  
  uVar6 = FUN_0277dedc(param_1 + 0x12);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  uVar6 = FUN_027c5f10();
  if ((uVar6 & 1) == 0) {
    local_48 = 0x23;
    local_46 = 8;
    uVar2 = *param_1;
    if ((byte)(uVar2 >> 8) < 0x23) {
      FUN_020fd218(&local_48,uVar2 >> 8,uVar2 & 0xff);
    }
  }
  else {
    local_48 = (ushort)DAT_053e6f44;
    local_46 = DAT_053e6f44._2_1_;
  }
  uVar2 = local_48;
  puVar5 = PTR_DAT_04bc27f0;
  if (0x22 < (local_48 & 0xff)) {
    return 0;
  }
  uVar11 = (uint)local_48;
  if ((uint)(byte)PTR_DAT_04bc27f0[(ulong)local_48 & 0xff] < (uint)(local_48 >> 8)) {
    return 0;
  }
  if (((uint)(&DAT_053e6eb8)[(ulong)local_48 & 0xff] >> (ulong)(local_48 >> 8 & 0x1f) & 1) == 0) {
    return 0;
  }
  puVar12 = param_1 + 0x16;
  uVar3 = *puVar12;
  local_44 = 0x80023;
  if ((byte)(uVar3 >> 8) < 0x23) {
    FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
  }
  if (((ushort)local_44 & 0xff) < 0x23) {
    if ((((uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff] < (uint)((ushort)local_44 >> 8)) ||
        (uVar11 != (ushort)local_44)) ||
       (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
        1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) == 0)) goto LAB_027c8348;
    lVar8 = 0;
LAB_027c8710:
    puVar9 = puVar12 + lVar8 * 0xe + 2;
    uVar11 = (uint)(*puVar9 != 0xfffe);
    if (puVar12[lVar8 * 0xe + 6] != 0xfffe) {
      uVar11 = uVar11 + 1;
    }
    if (puVar12[lVar8 * 0xe + 10] != 0xfffe) {
      uVar11 = uVar11 + 1;
    }
    if (uVar11 < 3) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      param_1[0x10] = 3;
      param_1[0x11] = 0;
      *(undefined4 *)(puVar9 + (ulong)uVar11 * 4) = *(undefined4 *)(param_1 + 0x12);
      *(undefined4 *)(puVar9 + (ulong)uVar11 * 4 + 2) = uVar1;
    }
    uVar10 = (uint)(uVar11 < 3);
    uVar7 = 1;
  }
  else {
LAB_027c8348:
    local_44 = 0x80023;
    uVar3 = param_1[0x24];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (lVar8 = 1,
         ((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
         1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) goto LAB_027c8710;
    }
    local_44 = 0x80023;
    uVar3 = param_1[0x32];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
          1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) {
        lVar8 = 2;
        goto LAB_027c8710;
      }
    }
    local_44 = 0x80023;
    uVar3 = param_1[0x40];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
          1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) {
        lVar8 = 3;
        goto LAB_027c8710;
      }
    }
    local_44 = 0x80023;
    uVar3 = param_1[0x4e];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
          1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) {
        lVar8 = 4;
        goto LAB_027c8710;
      }
    }
    local_44 = 0x80023;
    uVar3 = param_1[0x5c];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
          1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) {
        lVar8 = 5;
        goto LAB_027c8710;
      }
    }
    local_44 = 0x80023;
    uVar3 = param_1[0x6a];
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_44 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_44 >> 8) <= (uint)(byte)puVar5[(ulong)(ushort)local_44 & 0xff]) &&
          (uVar2 == (ushort)local_44)) &&
         (((&DAT_053e6eb8)[(ulong)(ushort)local_44 & 0xff] &
          1 << (ulong)((ushort)local_44 >> 8 & 0x1f)) != 0)) {
        lVar8 = 6;
        goto LAB_027c8710;
      }
    }
    local_44 = 0x80023;
    uVar2 = param_1[0x78];
    if ((byte)(uVar2 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar10 = (uint)(ushort)local_44;
    uVar4 = (uint)local_44;
    if ((uVar4 & 0xff) < 0x23) {
      uVar10 = (uint)(local_44 >> 8);
      if ((uVar10 & 0xff) <= (uint)(byte)puVar5[(ulong)uVar4 & 0xff]) {
        uVar7 = 0;
        if ((uVar11 != (uVar4 & 0xffff)) ||
           (uVar10 = 1 << (ulong)(uVar10 & 0x1f),
           ((&DAT_053e6eb8)[(ulong)uVar4 & 0xff] & uVar10) == 0)) goto LAB_027c8768;
        lVar8 = 7;
        goto LAB_027c8710;
      }
    }
    uVar7 = 0;
  }
LAB_027c8768:
  return uVar7 & uVar10;
}

