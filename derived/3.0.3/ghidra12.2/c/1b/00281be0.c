
undefined8 FUN_00281be0(long *param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong in_x9;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  byte *pbVar13;
  ushort *puVar14;
  uint uVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte unaff_w23;
  byte unaff_w24;
  uint *puVar20;
  uint local_160 [2];
  byte local_158 [4];
  uint local_154 [61];
  
  uVar5 = *(ushort *)((long)param_1 + 0x3c);
  uVar9 = (ulong)uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  uVar7 = 0;
  uVar6 = 0;
  bVar11 = 0;
  do {
    bVar4 = bVar11 + 1;
    uVar15 = (uint)bVar4;
    uVar8 = (uint)uVar5;
    if (((param_2 >> (ulong)(uVar6 & 0x1f) & 1) != 0) && (uVar15 < uVar5)) {
      uVar18 = uVar15;
      bVar16 = bVar4;
      do {
        if ((param_2 >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
          bVar3 = *(byte *)(param_1[1] + (ulong)uVar8 * (ulong)uVar6 + (ulong)uVar18);
          if (((bVar3 != bVar11) && (bVar3 != bVar16)) &&
             (uVar18 = (uint)*(ushort *)
                              (*param_1 + ((ulong)bVar3 * (ulong)uVar8 + (ulong)uVar18) * 2) +
                       (uint)*(ushort *)
                              (*param_1 + ((ulong)bVar3 + (ulong)uVar8 * (ulong)uVar6) * 2),
             (uVar7 & 0xffff) < (uVar18 & 0xffff))) {
            in_x9 = (ulong)bVar3;
            uVar7 = uVar18;
            unaff_w24 = bVar11;
            unaff_w23 = bVar16;
          }
        }
        bVar16 = bVar16 + 1;
        uVar18 = (uint)bVar16;
      } while (uVar18 < uVar8);
    }
    uVar6 = uVar15;
    bVar11 = bVar4;
  } while (bVar4 < uVar8);
  if ((uVar7 & 0xffff) != 0) {
    local_160[0] = 0;
    local_160[1] = 0;
    _local_158 = 0;
    local_154[1] = 0;
    local_154[2] = 0;
    local_154[3] = 0;
    local_154[4] = 0;
    local_154[5] = 0;
    local_154[6] = 0;
    local_154[7] = 0;
    local_154[8] = 0;
    local_154[9] = 0;
    local_154[10] = 0;
    local_154[0xb] = 0;
    local_154[0xc] = 0;
    local_154[0xd] = 0;
    local_154[0xe] = 0;
    local_154[0xf] = 0;
    local_154[0x10] = 0;
    local_154[0x11] = 0;
    local_154[0x12] = 0;
    local_154[0x13] = 0;
    local_154[0x14] = 0;
    local_154[0x15] = 0;
    local_154[0x16] = 0;
    local_154[0x17] = 0;
    local_154[0x18] = 0;
    local_154[0x19] = 0;
    local_154[0x1a] = 0;
    local_154[0x1b] = 0;
    local_154[0x1c] = 0;
    local_154[0x1d] = 0;
    local_154[0x1e] = 0;
    local_154[0x1f] = 0;
    local_154[0x20] = 0;
    local_154[0x21] = 0;
    local_154[0x22] = 0;
    local_154[0x23] = 0;
    local_154[0x24] = 0;
    local_154[0x25] = 0;
    local_154[0x26] = 0;
    local_154[0x27] = 0;
    local_154[0x28] = 0;
    local_154[0x29] = 0;
    local_154[0x2a] = 0;
    local_154[0x2b] = 0;
    local_154[0x2c] = 0;
    local_154[0x2d] = 0;
    local_154[0x2e] = 0;
    local_154[0x2f] = 0;
    local_154[0x30] = 0;
    local_154[0x31] = 0;
    local_154[0x32] = 0;
    local_154[0x33] = 0;
    local_154[0x34] = 0;
    local_154[0x35] = 0;
    local_154[0x36] = 0;
    local_154[0x37] = 0;
    local_154[0x38] = 0;
    local_154[0x39] = 0;
    local_154[0x3a] = 0;
    local_154[0x3b] = 0;
    local_154[0x3c] = 0;
    if (uVar8 != 0) {
      lVar17 = *param_1;
      uVar5 = *(ushort *)(param_1 + 6);
      uVar12 = 0;
      puVar14 = (ushort *)(lVar17 + (ulong)unaff_w23 * 2);
      uVar19 = 0;
      do {
        uVar10 = uVar19;
        if ((((param_2 >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0) &&
            (uVar6 = (uint)*(ushort *)(lVar17 + uVar9 * 2 * (ulong)unaff_w24 + uVar12 * 2),
            uVar6 != 0)) &&
           ((*puVar14 != 0 &&
            ((uVar6 = *puVar14 + uVar6, uVar6 < (uVar7 & 0xffff) && (uVar6 <= uVar5)))))) {
          uVar10 = (ulong)((int)uVar19 + 1);
          local_160[uVar19 * 2] = (uint)uVar12;
          local_160[uVar19 * 2 + 1] = uVar6;
        }
        uVar12 = uVar12 + 1;
        puVar14 = puVar14 + uVar9;
        uVar19 = uVar10;
      } while (uVar9 != uVar12);
      uVar6 = (uint)uVar10;
      if (uVar6 != 0) {
        uVar9 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 != 0) {
          do {
            uVar12 = 0;
            pbVar13 = local_158;
            uVar15 = local_160[1];
            do {
              uVar8 = *(uint *)(pbVar13 + 4);
              bVar1 = uVar8 < uVar15;
              uVar15 = uVar8;
              if (bVar1) {
                uVar2 = *(undefined4 *)(pbVar13 + -8);
                uVar15 = *(uint *)(pbVar13 + -4);
                *(uint *)(pbVar13 + -8) = (uint)*pbVar13;
                *(uint *)(pbVar13 + -4) = uVar8 & 0xff;
                *(undefined4 *)pbVar13 = uVar2;
                *(uint *)(pbVar13 + 4) = uVar15;
              }
              uVar12 = uVar12 + 1;
              pbVar13 = pbVar13 + 8;
            } while (uVar12 < uVar9);
            uVar9 = uVar9 - 1;
          } while ((int)uVar9 != 0);
        }
        uVar9 = in_x9 & 0xff;
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        uVar12 = (ulong)uVar6;
        puVar20 = local_160;
        do {
          bVar11 = *(byte *)puVar20;
          uVar19 = (ulong)bVar11;
          lVar17 = param_1[2];
          uVar5 = *(ushort *)((long)param_1 + 0x32);
          bVar4 = *(byte *)(lVar17 + uVar19);
          if ((ushort)(bVar4 + 2) <= uVar5) {
LAB_00281e88:
            *(byte *)(param_1[1] +
                     (ulong)unaff_w23 + (ulong)*(ushort *)((long)param_1 + 0x3c) * (ulong)unaff_w24)
                 = bVar11;
            *(byte *)(param_1[1] +
                     (ulong)unaff_w24 + (ulong)*(ushort *)((long)param_1 + 0x3c) * (ulong)unaff_w23)
                 = bVar11;
            *(char *)(param_1[2] + uVar9) = *(char *)(param_1[2] + uVar9) + -2;
            *(char *)(param_1[2] + uVar19) = *(char *)(param_1[2] + uVar19) + '\x02';
            return 1;
          }
          if (bVar4 < uVar5 || bVar4 == uVar5) {
            *(char *)(lVar17 + uVar9) = *(char *)(lVar17 + uVar9) + -2;
            uVar10 = FUN_00281a30(param_1,uVar19,param_2,uVar7 - 1,
                                  *(undefined2 *)((long)param_1 + 0x32));
            *(char *)(param_1[2] + uVar9) = *(char *)(param_1[2] + uVar9) + '\x02';
            if ((uVar10 & 1) != 0) goto LAB_00281e88;
          }
          uVar12 = uVar12 - 1;
          puVar20 = (uint *)((long)puVar20 + 8);
        } while (uVar12 != 0);
      }
    }
  }
  return 0;
}

