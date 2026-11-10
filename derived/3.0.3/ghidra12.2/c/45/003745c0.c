
void FUN_003745c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  int iVar32;
  ulong uVar33;
  undefined8 uVar34;
  int iVar35;
  ulong uVar36;
  long *plVar37;
  byte *pbVar38;
  ulong uVar39;
  int iVar40;
  long lVar41;
  undefined8 *local_120;
  long local_d0;
  undefined8 *local_c8;
  
  plVar37 = (long *)(param_1 + 0x18);
  *plVar37 = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  lVar24 = param_4;
  lVar41 = param_4;
  if (param_5 == 0) {
LAB_003746ac:
    uVar22 = *(undefined8 *)(param_6 + 0x30);
    param_5 = param_4;
  }
  else {
    uVar17 = *(ushort *)(param_6 + 0x44);
    if (uVar17 == 0) {
      if ((*(ushort *)(param_6 + 0x40) != 0) && ((*(ushort *)(param_6 + 0x40) >> 2 & 1) == 0))
      goto LAB_003746ac;
      uVar22 = *(undefined8 *)(param_6 + 0x38);
      lVar24 = param_5;
      lVar41 = param_5;
    }
    else {
      uVar22 = *(undefined8 *)(param_6 + 0x30);
      if ((uVar17 & 1) != 0) {
        lVar24 = param_5;
      }
      if (((uVar17 >> 1 & 1) == 0) ||
         (((*(uint *)(param_5 + 0x1c) ^ *(uint *)(param_4 + 0x1c)) & 3) != 0)) {
        *(long *)(param_1 + 0x28) = param_4;
        pbVar38 = (byte *)(lVar24 + 0x20);
        bVar15 = *pbVar38;
        goto joined_r0x003746d0;
      }
      uVar22 = *(undefined8 *)(param_6 + 0x38);
    }
  }
  *(long *)(param_1 + 0x28) = lVar41;
  pbVar38 = (byte *)(lVar24 + 0x20);
  bVar15 = *pbVar38;
  param_4 = param_5;
joined_r0x003746d0:
  if ((bVar15 & 3) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar38 + *(byte *)(lVar24 + 0x22));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pbVar38 + *(byte *)(lVar24 + 0x23));
    bVar15 = *(byte *)(lVar24 + 0x21);
  }
  else {
    puVar21 = (undefined8 *)FUN_00367b30(0x20);
    *(undefined8 **)(param_1 + 8) = puVar21;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x28;
    uVar26 = *(undefined8 *)(pbVar38 + *(byte *)(lVar24 + 0x22) + 8);
    *puVar21 = *(undefined8 *)(pbVar38 + *(byte *)(lVar24 + 0x22));
    puVar21[1] = uVar26;
    lVar23 = *(long *)(param_1 + 8);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
    uVar26 = *(undefined8 *)(pbVar38 + *(byte *)(lVar24 + 0x23) + 8);
    *(undefined8 *)(lVar23 + 0x10) = *(undefined8 *)(pbVar38 + *(byte *)(lVar24 + 0x23));
    *(undefined8 *)(lVar23 + 0x18) = uVar26;
    bVar15 = *(byte *)(lVar24 + 0x21);
  }
  lVar24 = (ulong)bVar15 + 2;
  if (bVar15 != 0) {
    bVar16 = *pbVar38;
    if (bVar15 == 1) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      do {
        uVar18 = uVar27 & 0x1f;
        uVar28 = uVar27 + 1;
        uVar27 = uVar27 + 2;
        lVar23 = 4;
        if ((bVar16 >> (ulong)uVar18 & 1) != 0) {
          lVar23 = 0x10;
        }
        lVar14 = 4;
        if ((bVar16 >> (ulong)(uVar28 & 0x1f) & 1) != 0) {
          lVar14 = 0x10;
        }
        lVar24 = lVar14 + lVar23 + lVar24;
      } while (uVar27 != (bVar15 & 0xfe));
    }
    if ((bVar15 & 1) != 0) {
      lVar23 = 4;
      if ((bVar16 >> (ulong)(uVar27 & 0x1f) & 1) != 0) {
        lVar23 = 0x10;
      }
      lVar24 = lVar23 + lVar24;
    }
  }
  uVar27 = *(uint *)(lVar41 + 0x1c);
  uVar39 = (ulong)uVar27;
  uVar28 = uVar27 >> 2 & 3;
  uVar18 = uVar27 >> 4 & 3;
  uVar33 = uVar39 & 0x400;
  uVar29 = lVar24 + 0x20U + ((ulong)*(uint *)(param_4 + 0x1c) & 3) * 4;
  uVar4 = uVar29 + (uVar27 << 2 & (int)(uVar27 << 10) >> 0x1f & 0xc);
  uVar19 = uVar27 >> 6 & 7;
  uVar5 = uVar4 + (uVar28 << 2 | (uVar27 >> 2 & 3) << 4);
  uVar6 = uVar5 + (uVar18 << 4);
  lVar23 = 0xc;
  if ((uVar27 & 0x4000) == 0) {
    lVar23 = 0;
  }
  uVar1 = uVar6 + (ulong)uVar19 * 4;
  uVar7 = uVar1 + ((uVar39 & 0x200) >> 6);
  uVar8 = uVar7 + (uVar33 >> 8);
  uVar9 = uVar8 + ((uVar39 & 0x1000) >> 10);
  uVar36 = uVar9 + lVar23;
  if ((uVar27 >> 0x13 & 1) == 0) {
    local_120 = (undefined8 *)0x0;
    local_d0 = 0;
    local_c8 = (undefined8 *)0x0;
  }
  else {
    local_c8 = (undefined8 *)(lVar41 + (uVar36 & 0xffffffff));
    uVar36 = uVar36 + 0x1c;
    local_120 = (undefined8 *)(lVar41 + (uVar36 & 0xffffffff));
    local_d0 = (ulong)uVar19 << 4;
  }
  iVar35 = (int)(uVar39 & 0x200);
  iVar40 = (int)(uVar39 & 0x20000);
  lVar23 = 0x74;
  if ((uVar27 & 0x100000) == 0) {
    lVar23 = 0;
  }
  uVar13 = 6;
  if (uVar19 != 7) {
    uVar13 = uVar19;
  }
  uVar31 = (undefined4)(uVar33 >> 10);
  iVar32 = (int)(uVar39 & 0x1000);
  if (iVar32 != 0) {
    uVar31 = 2;
  }
  uVar19 = uVar27 >> 0xf & 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfb | (byte)(uVar27 >> 0x10) & 4;
  uVar20 = uVar27 >> 0x18 & 3;
  FUN_00375554(param_1,uVar27 & 3,uVar28,uVar18,uVar13,iVar35 != 0,uVar31,uVar27 >> 0xe & 1,uVar19,
               iVar40 != 0,(byte)(uVar27 >> 0x13) & 1,(char)((uVar27 & 0x100000) >> 0x14),
               uVar27 >> 0x16 & 3,uVar20);
  *(byte *)(param_1 + 0x49) =
       (byte)(*(uint *)(lVar41 + 0x1c) >> 10) & 2 | *(byte *)(param_1 + 0x49) & 0xfd;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar25 = *(uint *)(param_1 + 0x10);
    uVar10 = local_d0 + uVar36 + (ulong)(uVar19 << 2 | (uVar27 >> 0xf & 3) << 4);
    uVar39 = uVar10 + ((uVar39 & 0x20000) >> 0xe);
    uVar11 = uVar39 + lVar23;
    if ((uVar25 & 3) != 0) {
      FUN_00387858(*(undefined8 *)(param_1 + 0x18));
      uVar25 = *(uint *)(param_1 + 0x10);
      if ((uVar25 >> 1 & 1) != 0) {
        FUN_00387858(*(long *)(param_1 + 0x18) + 0x10);
        uVar25 = *(uint *)(param_1 + 0x10);
        if (((uVar25 ^ 0xffffffff) & 3) == 0) {
          FUN_00387858(*(long *)(param_1 + 0x18) + 0x20);
          uVar25 = *(uint *)(param_1 + 0x10);
        }
      }
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffc | uVar27 & 3;
    if ((uVar27 & 3) != 0) {
      FUN_003757f0(param_1,param_3,uVar22,param_6,param_4,param_4 + (lVar24 + 0x20U & 0xffffffff),
                   param_4 + (uVar29 & 0xffffffff),lVar41 + (uVar11 & 0xffffffff));
      uVar25 = *(uint *)(param_1 + 0x10);
    }
    puVar21 = (undefined8 *)(*plVar37 + (ulong)((uVar25 & 3) << 4));
    if ((uVar25 & 0xc) != 0) {
      *(undefined4 *)(puVar21 + 2) = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      uVar25 = *(uint *)(param_1 + 0x10);
      if ((uVar25 >> 3 & 1) != 0) {
        *(undefined4 *)((long)puVar21 + 0x24) = 0;
        *(undefined8 *)((long)puVar21 + 0x1c) = 0;
        *(undefined8 *)((long)puVar21 + 0x14) = 0;
        uVar25 = *(uint *)(param_1 + 0x10);
        if (((uVar25 ^ 0xffffffff) & 0xc) == 0) {
          *(undefined4 *)(puVar21 + 7) = 0;
          puVar21[5] = 0;
          puVar21[6] = 0;
          uVar25 = *(uint *)(param_1 + 0x10);
        }
      }
    }
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xfffffff0 | *(uint *)(param_1 + 0x14) & 3 | uVar28 << 2;
    if (uVar28 != 0) {
      puVar2 = (undefined8 *)(lVar41 + (uVar4 & 0xffffffff));
      *puVar21 = *puVar2;
      *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar2 + 1);
      *(undefined8 *)((long)puVar21 + 0xc) = *(undefined8 *)((long)puVar2 + 0xc);
      if (uVar28 != 1) {
        *(undefined8 *)((long)puVar21 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
        *(undefined4 *)((long)puVar21 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x1c);
        puVar21[4] = puVar2[4];
        if (uVar28 != 2) {
          puVar21[5] = puVar2[5];
          *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(puVar2 + 6);
          *(undefined8 *)((long)puVar21 + 0x34) = *(undefined8 *)((long)puVar2 + 0x34);
        }
      }
      uVar25 = *(uint *)(param_1 + 0x10);
    }
    puVar21 = (undefined8 *)(*plVar37 + (ulong)((uVar25 & 3) * 0x10 + (uVar25 >> 2 & 3) * 0x14));
    if ((uVar25 & 0x30) != 0) {
      *(undefined4 *)puVar21 = 0;
      puVar21[1] = 0;
      if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
        *(undefined4 *)(puVar21 + 2) = 0;
        puVar21[3] = 0;
        if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x30) == 0) {
          *(undefined4 *)(puVar21 + 4) = 0;
          puVar21[5] = 0;
        }
      }
    }
    uVar28 = *(uint *)(param_1 + 0x14) & 0xffffffcf | uVar18 << 4;
    *(uint *)(param_1 + 0x14) = uVar28;
    if (uVar18 != 0) {
      puVar2 = (undefined8 *)(lVar41 + (uVar5 & 0xffffffff));
      uVar26 = *puVar2;
      uVar30 = puVar2[1];
      *puVar21 = uVar26;
      puVar21[1] = uVar30;
      uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
      if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
        uVar28 = *(uint *)(param_1 + 0x10);
        uVar29 = 1;
        puVar21[1] = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                     (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8
                     ) + ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                     ((ulong)(uVar28 >> 2) & 3) * 0x14;
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      else {
        uVar29 = 0;
        puVar21[1] = 0;
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      if ((uVar28 >> 5 & 1) != 0) {
        uVar26 = puVar2[2];
        uVar30 = puVar2[3];
        puVar21[2] = uVar26;
        puVar21[3] = uVar30;
        uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
        if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
          uVar28 = *(uint *)(param_1 + 0x10);
          lVar24 = uVar29 * 0x14;
          uVar29 = (ulong)((int)uVar29 + 1);
          puVar21[3] = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) |
                       (ulong)(uVar28 >> 6) & 8) +
                       ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                       ((ulong)(uVar28 >> 2) & 3) * 0x14 + lVar24;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
        else {
          puVar21[3] = 0;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
        if (((uVar28 ^ 0xffffffff) & 0x30) == 0) {
          uVar26 = puVar2[4];
          uVar30 = puVar2[5];
          puVar21[4] = uVar26;
          puVar21[5] = uVar30;
          uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
          if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
            uVar28 = *(uint *)(param_1 + 0x10);
            lVar24 = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                     (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8
                     ) + ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                     ((ulong)(uVar28 >> 2) & 3) * 0x14 + uVar29 * 0x14;
          }
          else {
            lVar24 = 0;
          }
          puVar21[5] = lVar24;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
      }
    }
    if (uVar13 != 0) {
      uVar18 = *(uint *)(param_1 + 0x10);
      puVar3 = (undefined4 *)(lVar41 + (uVar6 & 0xffffffff));
      puVar12 = (undefined4 *)
                (*(long *)(param_1 + 0x18) + (ulong)(-(uVar18 >> 0xc & 1) & 0xc) +
                (((ulong)uVar18 & 3) * 0x10 + ((ulong)uVar18 & 0x30) | (ulong)(uVar18 >> 6) & 8) +
                ((ulong)(uVar18 >> 8) & 0xc) + ((ulong)(uVar18 >> 2) & 3) * 0x14);
      if ((uVar18 & 0x1c0) != 0) {
        *puVar12 = 0;
        if (((((*(ushort *)(param_1 + 0x10) & 0x180) != 0) &&
             (puVar12[1] = 0, 0x80 < (*(uint *)(param_1 + 0x10) & 0x1c0))) &&
            (puVar12[2] = 0, (*(byte *)(param_1 + 0x11) & 1) != 0)) &&
           (((puVar12[3] = 0, 0x100 < (*(uint *)(param_1 + 0x10) & 0x1c0) &&
             (puVar12[4] = 0, ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x180) == 0)) &&
            (puVar12[5] = 0, ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x1c0) == 0)))) {
          puVar12[6] = 0;
        }
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      uVar18 = uVar13;
      if (uVar13 < 2) {
        uVar18 = 1;
      }
      *(uint *)(param_1 + 0x14) = uVar28 & 0xfffffe00 | uVar28 & 0x3f | uVar13 << 6;
      *puVar12 = *puVar3;
      if (((1 < uVar13) && (puVar12[1] = puVar3[1], uVar18 != 2)) &&
         ((puVar12[2] = puVar3[2], uVar18 != 3 &&
          (((puVar12[3] = puVar3[3], uVar18 != 4 && (puVar12[4] = puVar3[4], uVar18 != 5)) &&
           (puVar12[5] = puVar3[5], uVar18 != 6)))))) {
        puVar12[6] = puVar3[6];
      }
    }
    if (iVar35 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) +
       ((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) + ((ulong)(uVar28 >> 2) & 3) * 0x14) =
           *(undefined8 *)(lVar41 + (uVar1 & 0xffffffff));
    }
    if ((int)uVar33 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       (*(long *)(param_1 + 0x18) +
       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
       ((ulong)(uVar28 >> 2) & 3) * 0x14) = *(undefined4 *)(lVar41 + (uVar7 & 0xffffffff));
    }
    if (iVar32 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       ((((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
        ((ulong)(uVar28 >> 2) & 3) * 0x14 + *(long *)(param_1 + 0x18) + 4) =
           *(undefined4 *)(lVar41 + (uVar8 & 0xffffffff));
    }
    if ((uVar27 >> 0xe & 1) != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar21 = (undefined8 *)(lVar41 + (uVar9 & 0xffffffff));
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
               ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 2) & 3) * 0x14);
      uVar26 = *puVar21;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar21 + 1);
      *puVar2 = uVar26;
    }
    if (((uVar27 >> 0x13 & 1) != 0) && (local_c8 != (undefined8 *)0x0)) {
      uVar28 = *(uint *)(param_1 + 0x10);
      uVar34 = local_c8[2];
      uVar26 = *local_c8;
      uVar30 = local_c8[1];
      puVar21 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 8) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
      *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(local_c8 + 3);
      puVar21[1] = uVar30;
      puVar21[2] = uVar34;
      *puVar21 = uVar26;
      if (uVar13 != 0) {
        uVar28 = *(uint *)(param_1 + 0x10);
        puVar21 = (undefined8 *)
                  (*(long *)(param_1 + 0x18) +
                  (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                  ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                  ((ulong)(uVar28 >> 0xc) & 8) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                  (ulong)(-(uVar28 >> 0x10 & 1) & 0x1c) +
                  (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
        uVar26 = local_120[1];
        *puVar21 = *local_120;
        puVar21[1] = uVar26;
        if (uVar13 != 1) {
          uVar26 = local_120[3];
          puVar21[2] = local_120[2];
          puVar21[3] = uVar26;
          if (uVar13 != 2) {
            uVar26 = local_120[5];
            puVar21[4] = local_120[4];
            puVar21[5] = uVar26;
            if (uVar13 != 3) {
              uVar26 = local_120[7];
              puVar21[6] = local_120[6];
              puVar21[7] = uVar26;
              if (uVar13 != 4) {
                uVar26 = local_120[9];
                puVar21[8] = local_120[8];
                puVar21[9] = uVar26;
                if (uVar13 != 5) {
                  uVar26 = local_120[0xb];
                  puVar21[10] = local_120[10];
                  puVar21[0xb] = uVar26;
                  if (uVar13 != 6) {
                    uVar26 = local_120[0xd];
                    puVar21[0xc] = local_120[0xc];
                    puVar21[0xd] = uVar26;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar19 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar21 = (undefined8 *)
                (*(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 2) & 3) * 0x14);
      if ((uVar28 & 0x6000) != 0) {
        *(undefined4 *)(puVar21 + 2) = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        if ((*(byte *)(param_1 + 0x11) >> 6 & 1) != 0) {
          *(undefined4 *)((long)puVar21 + 0x24) = 0;
          *(undefined8 *)((long)puVar21 + 0x1c) = 0;
          *(undefined8 *)((long)puVar21 + 0x14) = 0;
          if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x6000) == 0) {
            *(undefined4 *)(puVar21 + 7) = 0;
            puVar21[5] = 0;
            puVar21[6] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffff8000 |
           *(uint *)(param_1 + 0x14) & 0x1fff | uVar19 << 0xd;
      if (uVar19 != 0) {
        puVar2 = (undefined8 *)(lVar41 + (local_d0 + uVar36 & 0xffffffff));
        uVar26 = *puVar2;
        uVar30 = puVar2[1];
        *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar21 = uVar26;
        puVar21[1] = uVar30;
        if (uVar19 != 1) {
          uVar26 = *(undefined8 *)((long)puVar2 + 0x14);
          uVar30 = *(undefined8 *)((long)puVar2 + 0x1c);
          *(undefined4 *)((long)puVar21 + 0x24) = *(undefined4 *)((long)puVar2 + 0x24);
          *(undefined8 *)((long)puVar21 + 0x1c) = uVar30;
          *(undefined8 *)((long)puVar21 + 0x14) = uVar26;
          if (uVar19 != 2) {
            uVar26 = puVar2[5];
            uVar30 = puVar2[6];
            *(undefined4 *)(puVar21 + 7) = *(undefined4 *)(puVar2 + 7);
            puVar21[5] = uVar26;
            puVar21[6] = uVar30;
          }
        }
      }
    }
    if ((uVar27 & 0x3000000) != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar21 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 8) + ((ulong)(uVar28 >> 0xd) & 0x60) +
                (ulong)(-(uVar28 >> 0xc & 1) & 0xc) + (ulong)(-(uVar28 >> 0x10 & 1) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 0x10) * ((ulong)(uVar28 >> 6) & 7) +
                (ulong)((int)(uVar28 << 0xe) >> 0x1f & 0x74) +
                (ulong)((uVar28 & 0x300000) != 0) * 0x10 +
                (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
      if ((uVar28 & 0x300000) != 0) {
        puVar21[9] = 0;
        puVar21[10] = 0;
        *puVar21 = 0;
        puVar21[7] = 0;
        puVar21[8] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[3] = 0;
        puVar21[4] = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        if ((*(byte *)(param_1 + 0x12) >> 5 & 1) != 0) {
          puVar21[0x14] = 0;
          puVar21[0x15] = 0;
          puVar21[0xb] = 0;
          puVar21[0x12] = 0;
          puVar21[0x13] = 0;
          puVar21[0x10] = 0;
          puVar21[0x11] = 0;
          puVar21[0xe] = 0;
          puVar21[0xf] = 0;
          puVar21[0xc] = 0;
          puVar21[0xd] = 0;
          if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x300000) == 0) {
            puVar21[0x1f] = 0;
            puVar21[0x20] = 0;
            puVar21[0x16] = 0;
            puVar21[0x1d] = 0;
            puVar21[0x1e] = 0;
            puVar21[0x1b] = 0;
            puVar21[0x1c] = 0;
            puVar21[0x19] = 0;
            puVar21[0x1a] = 0;
            puVar21[0x17] = 0;
            puVar21[0x18] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffc00000 |
           *(uint *)(param_1 + 0x14) & 0xfffff | uVar20 << 0x14;
      if (uVar20 != 0) {
        puVar2 = (undefined8 *)(lVar41 + (ulong)((uVar27 >> 0x12 & 0x30) + (int)uVar11));
        uVar30 = puVar2[2];
        uVar26 = puVar2[1];
        *puVar21 = *puVar2;
        puVar21[1] = uVar26;
        puVar21[2] = uVar30;
        uVar26 = puVar2[3];
        uVar30 = puVar2[4];
        uVar34 = puVar2[6];
        puVar21[5] = puVar2[5];
        puVar21[6] = uVar34;
        puVar21[3] = uVar26;
        puVar21[4] = uVar30;
        uVar26 = puVar2[7];
        uVar30 = puVar2[8];
        uVar34 = puVar2[10];
        puVar21[9] = puVar2[9];
        puVar21[10] = uVar34;
        puVar21[7] = uVar26;
        puVar21[8] = uVar30;
        if (uVar20 != 1) {
          uVar26 = puVar2[0xb];
          uVar30 = puVar2[0xd];
          puVar21[0xc] = puVar2[0xc];
          puVar21[0xd] = uVar30;
          puVar21[0xb] = uVar26;
          uVar26 = puVar2[0xe];
          uVar30 = puVar2[0xf];
          uVar34 = puVar2[0x11];
          puVar21[0x10] = puVar2[0x10];
          puVar21[0x11] = uVar34;
          puVar21[0xe] = uVar26;
          puVar21[0xf] = uVar30;
          uVar26 = puVar2[0x12];
          uVar30 = puVar2[0x13];
          uVar34 = puVar2[0x15];
          puVar21[0x14] = puVar2[0x14];
          puVar21[0x15] = uVar34;
          puVar21[0x12] = uVar26;
          puVar21[0x13] = uVar30;
          if (uVar20 != 2) {
            uVar26 = puVar2[0x16];
            uVar30 = puVar2[0x18];
            puVar21[0x17] = puVar2[0x17];
            puVar21[0x18] = uVar30;
            puVar21[0x16] = uVar26;
            uVar26 = puVar2[0x19];
            uVar30 = puVar2[0x1a];
            uVar34 = puVar2[0x1c];
            puVar21[0x1b] = puVar2[0x1b];
            puVar21[0x1c] = uVar34;
            puVar21[0x19] = uVar26;
            puVar21[0x1a] = uVar30;
            uVar26 = puVar2[0x1d];
            uVar30 = puVar2[0x1e];
            uVar34 = puVar2[0x20];
            puVar21[0x1f] = puVar2[0x1f];
            puVar21[0x20] = uVar34;
            puVar21[0x1d] = uVar26;
            puVar21[0x1e] = uVar30;
          }
        }
      }
    }
    if (iVar40 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) +
       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
       ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
       (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
       (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14) =
           *(undefined8 *)(lVar41 + (uVar10 & 0xffffffff));
    }
    if ((uVar27 >> 0x14 & 1) != 0) {
      uVar27 = *(uint *)(param_1 + 0x10);
      puVar21 = (undefined8 *)(lVar41 + (uVar39 & 0xffffffff));
      uVar30 = puVar21[4];
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (((ulong)uVar27 & 3) * 0x10 + ((ulong)uVar27 & 0x30) | (ulong)(uVar27 >> 6) & 8) +
               ((ulong)(uVar27 >> 8) & 0xc) + ((ulong)(uVar27 >> 4) & 0x1c) +
               ((ulong)(uVar27 >> 0xc) & 8) + (ulong)(-(uVar27 >> 0xc & 1) & 0xc) +
               (ulong)(-(uVar27 >> 0x10 & 1) & 0x1c) +
               ((ulong)(uVar27 >> 0xc) & 0x10) * ((ulong)(uVar27 >> 6) & 7) +
               (((ulong)(uVar27 >> 0xd) & 3) + ((ulong)(uVar27 >> 2) & 3)) * 0x14);
      uVar26 = puVar21[5];
      uVar34 = puVar21[6];
      puVar2[3] = puVar21[3];
      puVar2[4] = uVar30;
      puVar2[5] = uVar26;
      puVar2[6] = uVar34;
      uVar30 = puVar21[10];
      uVar26 = puVar21[7];
      uVar34 = puVar21[8];
      puVar2[9] = puVar21[9];
      puVar2[10] = uVar30;
      puVar2[7] = uVar26;
      puVar2[8] = uVar34;
      uVar26 = puVar21[0xc];
      uVar30 = puVar21[0xd];
      uVar34 = puVar21[0xb];
      *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(puVar21 + 0xe);
      puVar2[0xc] = uVar26;
      puVar2[0xd] = uVar30;
      puVar2[0xb] = uVar34;
      uVar26 = *puVar21;
      uVar30 = puVar21[2];
      puVar2[1] = puVar21[1];
      puVar2[2] = uVar30;
      *puVar2 = uVar26;
    }
  }
  FUN_00375ae0(param_1,param_3,param_6,uVar22);
  FUN_00375ce0(param_1,param_2,param_3);
  FUN_00375e48(param_1,param_3);
  return;
}

