
undefined8 FUN_0205c218(long param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  byte bVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  short sVar15;
  uint uVar16;
  byte bVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ushort uVar21;
  ushort uVar22;
  int *piVar23;
  ushort local_c0;
  short local_be;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  int local_b8;
  ushort local_b4;
  undefined1 local_b2;
  uint local_b0 [2];
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined2 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  
  uVar12 = FUN_02057ea0();
  if ((int)uVar12 < 0) {
    return 2;
  }
  local_b2 = 8;
  uVar21 = *(ushort *)(param_2 + 2);
  uVar22 = 0x23;
  local_b4 = 0x23;
  if ((byte)(uVar21 >> 8) < 0x23) {
    FUN_020fd218(&local_b4,uVar21 >> 8,uVar21 & 0xff);
    uVar22 = local_b4 & 0xff;
    uVar21 = local_b4 >> 8;
  }
  else {
    uVar21 = 0;
  }
  puVar11 = PTR_DAT_04bb4760;
  uVar8 = uVar21 | uVar22 << 8;
  piVar23 = (int *)(param_1 + 0x90);
  if (((((*piVar23 != 0) &&
        (uVar8 == (ushort)(*(ushort *)(param_1 + 0x94) >> 8 | *(ushort *)(param_1 + 0x94) << 8))) ||
       ((*(int *)(param_1 + 200) != 0 &&
        (uVar8 == (ushort)(*(ushort *)(param_1 + 0xcc) >> 8 | *(ushort *)(param_1 + 0xcc) << 8)))))
      || ((((*(int *)(param_1 + 0x100) != 0 &&
            (uVar8 == (ushort)(*(ushort *)(param_1 + 0x104) >> 8 | *(ushort *)(param_1 + 0x104) << 8
                              ))) ||
           ((*(int *)(param_1 + 0x138) != 0 &&
            (uVar8 == (ushort)(*(ushort *)(param_1 + 0x13c) >> 8 | *(ushort *)(param_1 + 0x13c) << 8
                              ))))) ||
          ((((*(int *)(param_1 + 0x170) != 0 &&
             (uVar8 == (ushort)(*(ushort *)(param_1 + 0x174) >> 8 |
                               *(ushort *)(param_1 + 0x174) << 8))) ||
            ((*(int *)(param_1 + 0x1a8) != 0 &&
             (uVar8 == (ushort)(*(ushort *)(param_1 + 0x1ac) >> 8 |
                               *(ushort *)(param_1 + 0x1ac) << 8))))) ||
           ((*(int *)(param_1 + 0x1e0) != 0 &&
            (uVar8 == (ushort)(*(ushort *)(param_1 + 0x1e4) >> 8 | *(ushort *)(param_1 + 0x1e4) << 8
                              ))))))))) ||
     (((*(int *)(param_1 + 0x218) != 0 &&
       (uVar8 == (ushort)(*(ushort *)(param_1 + 0x21c) >> 8 | *(ushort *)(param_1 + 0x21c) << 8)))
      || (((*(int *)(param_1 + 0x250) != 0 &&
           (uVar8 == (ushort)(*(ushort *)(param_1 + 0x254) >> 8 | *(ushort *)(param_1 + 0x254) << 8)
           )) || ((*(int *)(param_1 + 0x288) != 0 &&
                  (uVar8 == (ushort)(*(ushort *)(param_1 + 0x28c) >> 8 |
                                    *(ushort *)(param_1 + 0x28c) << 8))))))))) {
    return 3;
  }
  iVar5 = *(int *)(param_2 + 4);
  uVar1 = uVar12 + 0x62;
  iVar9 = (int)(short)iVar5;
  iVar2 = iVar5 >> 0x10;
  puVar3 = *(undefined1 **)PTR_DAT_04bb4760 + (ulong)uVar1 * 0x15;
  if (0x6c < uVar1) {
    puVar3 = *(undefined1 **)PTR_DAT_04bb4760;
  }
  bVar7 = *PTR_DAT_04bb5018;
  bVar10 = bVar7 >> 6;
  puVar3[7] = bVar10;
  puVar3[5] = bVar7 << 2 | 3;
  puVar3[6] = bVar10 | bVar7 << 2;
  puVar3[0xc] = puVar3[0xc] & 0xfc;
  puVar3[8] = puVar3[8] & 0xc0;
  puVar3[0xb] = puVar3[0xb] & 0x3f;
  uVar16 = 0xff;
  puVar3[4] = 0xff;
  *puVar3 = (char)(int)((float)iVar9 * 5.0);
  puVar3[2] = (char)((uint)(int)((float)iVar2 * 5.0) >> 4);
  puVar3[1] = (byte)((int)((float)iVar2 * 5.0) << 4) |
              (byte)((uint)(int)((float)iVar9 * 5.0) >> 8) & 0xf;
  local_b0[0] = uVar1;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    bVar17 = 0xff;
    goto LAB_0205c55c;
  }
  puVar18 = DAT_055c1b60 + -8;
  uVar16 = 0;
  puVar19 = DAT_055c1b60;
  puVar20 = puVar18;
  do {
    if (*(int *)(puVar20 + 7) == -0x24a26848) {
      if (((uVar16 ^ 0xffffffff) & 0xffff) != 0) {
        local_b0[0] = 3;
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar16 & 0xffffffffU) * 8);
        if ((uVar16 & 0xff00) != 0) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar4 >> 3 & 1) == 0) goto LAB_0205c558;
        uVar16 = 0;
        puVar19 = DAT_055c1b60;
        goto LAB_0205c52c;
      }
      break;
    }
    puVar19 = (undefined8 *)puVar19[1];
    uVar16 = uVar16 + 1;
    puVar20 = puVar19 + -8;
  } while (puVar19 != &DAT_055c1b58);
  goto LAB_0205c54c;
LAB_0205c558:
  bVar17 = (byte)(uVar16 >> 8);
  goto LAB_0205c55c;
  while( true ) {
    puVar19 = (undefined8 *)puVar19[1];
    uVar16 = uVar16 + 1;
    puVar18 = puVar19 + -8;
    if (puVar19 == &DAT_055c1b58) break;
LAB_0205c52c:
    if (*(int *)(puVar18 + 7) == 0x6622bd46) goto LAB_0205c558;
  }
LAB_0205c54c:
  uVar16 = 0xff;
  bVar17 = 0xff;
LAB_0205c55c:
  puVar3[4] = (char)uVar16;
  puVar3[3] = 0;
  puVar3[5] = bVar7 << 2 | bVar17 & 3;
  puVar3[7] = bVar10;
  uVar13 = *(undefined8 *)puVar11;
  puVar3[0xb] = 0;
  puVar3[10] = puVar3[10] & 0xf;
  FUN_020ea498(uVar13,uVar1,0,0);
  iVar6 = *(int *)(param_1 + 0x2c0);
  local_bc = (undefined2)((uint)iVar5 >> 0x10);
  local_b9 = (undefined1)uVar12;
  local_7e = 0;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a0 = PTR_DAT_04bb2010 + 0x10;
  *(int *)(param_1 + 0x2c0) = iVar6 + 1;
  local_ba = *param_3;
  local_80 = 0xff00;
  local_7a = 0;
  local_68 = 0;
  local_64 = 0xff00;
  local_78 = 0xffffffffffffffff;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar15 = 0;
    puVar19 = DAT_055c1b60;
    do {
      if (*(int *)(puVar19 + -1) == -0x24a26848) goto LAB_0205c65c;
      puVar19 = (undefined8 *)puVar19[1];
      sVar15 = sVar15 + 1;
    } while (puVar19 != &DAT_055c1b58);
  }
  sVar15 = -1;
LAB_0205c65c:
  local_b0[0] = CONCAT22(local_b0[0]._2_2_,sVar15);
  local_98 = iVar9 + -1;
  iStack_94 = iVar2 + -1;
  local_70 = 1;
  local_6c = 0x40a00000;
  local_c0 = uVar8;
  local_be = (short)iVar5;
  local_b8 = iVar6;
  local_90 = puStack_a0;
  local_88 = iVar9;
  iStack_84 = iVar2;
  uVar14 = FUN_022a3e00(piVar23 + (ulong)uVar12 * 0xe + 6,local_b0,&local_c0);
  if ((uVar14 & 1) == 0) {
    uVar13 = 5;
  }
  else {
    uVar14 = (ulong)uVar12;
    if (uVar22 < 0x23) {
      FUN_020fd218(piVar23 + uVar14 * 0xe + 1,uVar22,uVar21);
    }
    uVar13 = 0;
    *(undefined1 *)((long)piVar23 + uVar14 * 0x38 + 7) = *param_3;
    piVar23[uVar14 * 0xe + 2] = iVar6;
    puVar11 = PTR_DAT_04bb37e0;
    *(undefined2 *)(piVar23 + uVar14 * 0xe + 3) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)piVar23 + uVar14 * 0x38 + 0xe) = puVar11[2];
    *(undefined *)((long)piVar23 + uVar14 * 0x38 + 0xf) = puVar11[3];
    piVar23[uVar14 * 0xe + 4] = *(int *)(puVar11 + 4);
    piVar23[uVar14 * 0xe] = 1;
  }
  return uVar13;
}

