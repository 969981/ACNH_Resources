
/* WARNING: Type propagation algorithm not settling */

void FUN_02b98db0(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 uVar12;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  uint unaff_w25;
  undefined1 uVar31;
  uint unaff_w26;
  uint uVar32;
  uint local_70;
  uint local_6c;
  uint local_68;
  
  if (param_2 == 0) {
    return;
  }
  uVar24 = *param_3;
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return;
    }
    puVar28 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar28 == (uint *)0x0) {
      return;
    }
    if ((uVar24 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar24) == '\0')) {
      return;
    }
    if (*puVar28 <= uVar24) {
      return;
    }
    if (puVar28[1] == 0) {
      return;
    }
    if ((ushort)puVar28[2] == 0) {
      return;
    }
    iVar21 = 0xc;
    if (*(char *)((long)puVar28 + 10) != '\0') {
      iVar21 = 0x1c;
    }
    puVar28 = (uint *)((ulong)(puVar28[1] * uVar24 + (uint)(ushort)puVar28[2] * 8 + iVar21) +
                      (long)puVar28);
  }
  else {
    if (*(uint *)(param_1 + 0x1c8) <= uVar24) {
      return;
    }
    if (*(uint *)(param_1 + 0x1b8) <= uVar24) {
      uVar24 = 0;
    }
    puVar28 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar24 * 8);
  }
  if (puVar28 == (uint *)0x0) {
    return;
  }
  puVar14 = (uint *)(ulong)*puVar28;
  if (*puVar28 != 0) {
    if ((DAT_05642a20 & 1) == 0) {
      DAT_05642a24 = -1;
      DAT_05642a2c = 0xffffffffffffffff;
      DAT_05642a24._4_4_ = 0xffffffff;
      DAT_05642a34 = 0xffffffffffffffff;
      DAT_05642a3c = 0xffffffffffffffff;
      DAT_05642b04 = 0xffffffff;
      DAT_05642a44 = -1;
      DAT_05642a4c = 0xffffffffffffffff;
      DAT_05642a54 = 0xffffffffffffffff;
      DAT_05642a5c = 0xffffffffffffffff;
      DAT_05642a64 = 0xffffffffffffffff;
      DAT_05642a6c = 0xffffffffffffffff;
      DAT_05642a74 = -1;
      DAT_05642a7c = 0xffffffffffffffff;
      DAT_05642a84 = 0xffffffffffffffff;
      DAT_05642a8c = -1;
      DAT_05642a94 = 0xffffffffffffffff;
      DAT_05642a9c = 0xffffffffffffffff;
      DAT_05642aa4 = -1;
      DAT_05642aac = 0xffffffffffffffff;
      DAT_05642ab4 = 0xffffffffffffffff;
      DAT_05642abc = -1;
      DAT_05642ac4 = 0xffffffffffffffff;
      DAT_05642acc = 0xffffffffffffffff;
      DAT_05642ad4 = -1;
      DAT_05642adc = 0xffffffffffffffff;
      DAT_05642ae4 = 0xffffffffffffffff;
      DAT_05642aec = -1;
      DAT_05642af4 = 0xffffffffffffffff;
      DAT_05642afc = 0xffffffffffffffff;
      DAT_05642a20 = 1;
LAB_02b98f60:
      uVar13 = DAT_05642a24._4_4_;
      if (puVar28 != puVar14) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02b98f68;
          lVar1 = 0xc;
          if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
          if (lVar1 == 0) goto LAB_02b98f68;
          uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
          DAT_05642a24 = CONCAT44(0xfffffffe,(undefined4)DAT_05642a24);
          if (uVar25 == 0) goto LAB_02b98f68;
          puVar26 = (uint *)(lVar1 + 4);
          while (puVar26[-1] != 0x1481890) {
            puVar26 = puVar26 + 2;
            uVar25 = uVar25 - 1;
            if (uVar25 == 0) goto LAB_02b98f68;
          }
          uVar13 = *puVar26;
          uVar24 = 0;
          if (uVar13 != 0xffffffff) {
            uVar24 = uVar13;
          }
          DAT_05642a24 = CONCAT44(uVar24,(undefined4)DAT_05642a24);
        } while ((int)uVar24 < 0);
        goto joined_r0x02b9900c;
      }
    }
    else {
      uVar24 = DAT_05642a24._4_4_;
      if (DAT_05642a24 < 0) goto LAB_02b98f60;
joined_r0x02b9900c:
      if (((byte *)((long)puVar28 + (ulong)uVar24) != (byte *)0x0) &&
         (bVar3 = *(byte *)((long)puVar28 + (ulong)uVar24), bVar3 != 0)) {
        uVar24 = *(uint *)(DAT_04da7238 + 0x65204);
        if (1 < uVar24) {
          uVar24 = 0;
        }
        puVar8 = (undefined8 *)FUN_00a8c18c();
        uVar30 = *puVar8;
        uVar32 = (uint)((ulong)uVar30 >> 0x18) & 0xff;
        uVar13 = *puVar28;
        puVar14 = (uint *)(ulong)uVar13;
        uVar19 = (uint)uVar30;
        uVar17 = (uint)((ulong)uVar30 >> 0x10);
        local_70 = unaff_w25;
        local_6c = unaff_w26;
        if (uVar24 == 0) {
          if (uVar13 != 0) {
            if ((DAT_05642a20 & 1) == 0) {
              DAT_05642a24 = -1;
              DAT_05642a2c = 0xffffffffffffffff;
              DAT_05642ad4._4_4_ = 0xffffffff;
              DAT_05642a34 = 0xffffffffffffffff;
              DAT_05642a3c = 0xffffffffffffffff;
              DAT_05642b04 = 0xffffffff;
              DAT_05642a44 = -1;
              DAT_05642a4c = 0xffffffffffffffff;
              DAT_05642a54 = 0xffffffffffffffff;
              DAT_05642a5c = 0xffffffffffffffff;
              DAT_05642a64 = 0xffffffffffffffff;
              DAT_05642a6c = 0xffffffffffffffff;
              DAT_05642a74 = -1;
              DAT_05642a7c = 0xffffffffffffffff;
              DAT_05642a84 = 0xffffffffffffffff;
              DAT_05642a8c = -1;
              DAT_05642a94 = 0xffffffffffffffff;
              DAT_05642a9c = 0xffffffffffffffff;
              DAT_05642aa4 = -1;
              DAT_05642aac = 0xffffffffffffffff;
              DAT_05642ab4 = 0xffffffffffffffff;
              DAT_05642abc = -1;
              DAT_05642ac4 = 0xffffffffffffffff;
              DAT_05642acc = 0xffffffffffffffff;
              DAT_05642ad4 = -1;
              DAT_05642adc = 0xffffffffffffffff;
              DAT_05642ae4 = 0xffffffffffffffff;
              DAT_05642aec = -1;
              DAT_05642af4 = 0xffffffffffffffff;
              DAT_05642afc = 0xffffffffffffffff;
              DAT_05642a20 = 1;
LAB_02b9939c:
              uVar13 = DAT_05642ad4._4_4_;
              if (puVar28 != puVar14) {
                do {
                  if (uVar13 != 0xffffffff) goto LAB_02b993a4;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b993a4;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642ad4 = CONCAT44(0xfffffffe,(undefined4)DAT_05642ad4);
                  if (uVar25 == 0) goto LAB_02b993a4;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0x878cd782) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b993a4;
                  }
                  uVar13 = *puVar26;
                  uVar18 = 0;
                  if (uVar13 != 0xffffffff) {
                    uVar18 = uVar13;
                  }
                  DAT_05642ad4 = CONCAT44(uVar18,(undefined4)DAT_05642ad4);
                } while ((int)uVar18 < 0);
                pbVar9 = (byte *)((long)puVar28 + (ulong)uVar18);
                if (pbVar9 != (byte *)0x0) goto LAB_02b99148;
              }
LAB_02b993a4:
              uVar13 = 1;
            }
            else {
              if (DAT_05642ad4 < 0) goto LAB_02b9939c;
              pbVar9 = (byte *)((long)puVar28 + (ulong)DAT_05642ad4._4_4_);
              if (pbVar9 == (byte *)0x0) goto LAB_02b993a4;
LAB_02b99148:
              uVar13 = (uint)*pbVar9;
            }
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 == 0) {
              uVar23 = 2;
              uVar22 = 1;
              uVar18 = 1;
            }
            else {
              if (DAT_05642aa4 < 0) {
                uVar18 = DAT_05642aa4._4_4_;
                if (puVar28 != puVar14) {
                  do {
                    if (uVar18 != 0xffffffff) goto LAB_02b99514;
                    lVar1 = 0xc;
                    if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                      lVar1 = 0x1c;
                    }
                    lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                    if (lVar1 == 0) goto LAB_02b99514;
                    uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                    DAT_05642aa4 = CONCAT44(0xfffffffe,(undefined4)DAT_05642aa4);
                    if (uVar25 == 0) goto LAB_02b99514;
                    puVar26 = (uint *)(lVar1 + 4);
                    while (puVar26[-1] != 0x13b9f45c) {
                      puVar26 = puVar26 + 2;
                      uVar25 = uVar25 - 1;
                      if (uVar25 == 0) goto LAB_02b99514;
                    }
                    uVar18 = *puVar26;
                    uVar22 = 0;
                    if (uVar18 != 0xffffffff) {
                      uVar22 = uVar18;
                    }
                    DAT_05642aa4 = CONCAT44(uVar22,(undefined4)DAT_05642aa4);
                  } while ((int)uVar22 < 0);
                  goto LAB_02b993c0;
                }
LAB_02b99514:
                uVar18 = 1;
              }
              else {
                uVar22 = DAT_05642aa4._4_4_;
LAB_02b993c0:
                if ((byte *)((long)puVar28 + (ulong)uVar22) == (byte *)0x0) goto LAB_02b99514;
                uVar18 = (uint)*(byte *)((long)puVar28 + (ulong)uVar22);
              }
              puVar14 = (uint *)(ulong)*puVar28;
              if (*puVar28 == 0) {
                uVar23 = 2;
                uVar22 = 1;
              }
              else {
                if ((int)(uint)DAT_05642a5c < 0) {
                  uVar22 = (uint)DAT_05642a5c;
                  if (puVar28 != puVar14) {
                    do {
                      if (uVar22 != 0xffffffff) goto LAB_02b998e0;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                      if (lVar1 == 0) goto LAB_02b998e0;
                      uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                      DAT_05642a5c = CONCAT44(DAT_05642a5c._4_4_,0xfffffffe);
                      if (uVar25 == 0) goto LAB_02b998e0;
                      puVar26 = (uint *)(lVar1 + 4);
                      while (puVar26[-1] != 0x6a34f3f2) {
                        puVar26 = puVar26 + 2;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_02b998e0;
                      }
                      uVar22 = *puVar26;
                      uVar23 = 0;
                      if (uVar22 != 0xffffffff) {
                        uVar23 = uVar22;
                      }
                      DAT_05642a5c = CONCAT44(DAT_05642a5c._4_4_,uVar23);
                    } while ((int)uVar23 < 0);
                    goto LAB_02b99530;
                  }
LAB_02b998e0:
                  uVar22 = 1;
                }
                else {
                  uVar23 = (uint)DAT_05642a5c;
LAB_02b99530:
                  if ((byte *)((long)puVar28 + (ulong)uVar23) == (byte *)0x0) goto LAB_02b998e0;
                  uVar22 = (uint)*(byte *)((long)puVar28 + (ulong)uVar23);
                }
                puVar14 = (uint *)(ulong)*puVar28;
                if (*puVar28 != 0) {
                  if ((int)(uint)DAT_05642a2c < 0) {
                    uVar23 = (uint)DAT_05642a2c;
                    if (puVar28 == puVar14) goto LAB_02b99b0c;
                    do {
                      if (uVar23 != 0xffffffff) goto LAB_02b99b0c;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                      if (lVar1 == 0) goto LAB_02b99b0c;
                      uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                      DAT_05642a2c = CONCAT44(DAT_05642a2c._4_4_,0xfffffffe);
                      if (uVar25 == 0) goto LAB_02b99b0c;
                      puVar26 = (uint *)(lVar1 + 4);
                      while (puVar26[-1] != 0x43513d44) {
                        puVar26 = puVar26 + 2;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_02b99b0c;
                      }
                      uVar23 = *puVar26;
                      uVar27 = 0;
                      if (uVar23 != 0xffffffff) {
                        uVar27 = uVar23;
                      }
                      DAT_05642a2c = CONCAT44(DAT_05642a2c._4_4_,uVar27);
                    } while ((int)uVar27 < 0);
                  }
                  else {
                    uVar27 = (uint)DAT_05642a2c;
                  }
                  if ((byte *)((long)puVar28 + (ulong)uVar27) != (byte *)0x0) {
                    uVar23 = (uint)*(byte *)((long)puVar28 + (ulong)uVar27);
                    goto LAB_02b99b10;
                  }
                }
LAB_02b99b0c:
                uVar23 = 2;
              }
            }
LAB_02b99b10:
            bVar4 = uVar13 == uVar22;
            bVar5 = uVar13 != (uVar17 & 0xff);
            if ((bVar5) || (uVar13 == uVar22)) {
              bVar6 = uVar22 != (uVar17 & 0xff);
              if ((bVar6) || (uVar13 == uVar22)) goto LAB_02b99278;
              if (uVar32 <= uVar23) goto LAB_02b99b64;
            }
            else if (uVar18 <= uVar32) goto LAB_02b99b64;
            goto LAB_02b99b38;
          }
          uVar22 = 1;
          uVar23 = 2;
          bVar6 = (uVar19 >> 0x10 & 0xff) != 1;
          uVar13 = 1;
          uVar18 = 1;
          bVar4 = true;
          bVar5 = bVar6;
LAB_02b99278:
          if ((((!bVar6) && (!bVar5)) && (uVar32 <= uVar23)) && ((uVar18 <= uVar32 && (bVar4)))) {
LAB_02b99b64:
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 == 0) {
LAB_02b99be4:
              pcVar15 = (char *)0x0;
            }
            else {
              if ((DAT_05642a20 & 1) == 0) {
                DAT_05642a24 = -1;
                DAT_05642a2c = 0xffffffffffffffff;
                DAT_05642a8c._4_4_ = 0xffffffff;
                DAT_05642a34 = 0xffffffffffffffff;
                DAT_05642a3c = 0xffffffffffffffff;
                DAT_05642b04 = 0xffffffff;
                DAT_05642a44 = -1;
                DAT_05642a4c = 0xffffffffffffffff;
                DAT_05642a54 = 0xffffffffffffffff;
                DAT_05642a5c = 0xffffffffffffffff;
                DAT_05642a64 = 0xffffffffffffffff;
                DAT_05642a6c = 0xffffffffffffffff;
                DAT_05642a74 = -1;
                DAT_05642a7c = 0xffffffffffffffff;
                DAT_05642a84 = 0xffffffffffffffff;
                DAT_05642a8c = -1;
                DAT_05642a94 = 0xffffffffffffffff;
                DAT_05642a9c = 0xffffffffffffffff;
                DAT_05642aa4 = -1;
                DAT_05642aac = 0xffffffffffffffff;
                DAT_05642ab4 = 0xffffffffffffffff;
                DAT_05642abc = -1;
                DAT_05642ac4 = 0xffffffffffffffff;
                DAT_05642acc = 0xffffffffffffffff;
                DAT_05642ad4 = -1;
                DAT_05642adc = 0xffffffffffffffff;
                DAT_05642ae4 = 0xffffffffffffffff;
                DAT_05642aec = -1;
                DAT_05642af4 = 0xffffffffffffffff;
                DAT_05642afc = 0xffffffffffffffff;
                DAT_05642a20 = 1;
LAB_02b99bdc:
                uVar18 = DAT_05642a8c._4_4_;
                if (puVar28 == puVar14) goto LAB_02b99be4;
                do {
                  if (uVar18 != 0xffffffff) goto LAB_02b99be4;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b99be4;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642a8c = CONCAT44(0xfffffffe,(uint)DAT_05642a8c);
                  if (uVar25 == 0) goto LAB_02b99be4;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0x7834d5db) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b99be4;
                  }
                  uVar18 = *puVar26;
                  uVar13 = 0;
                  if (uVar18 != 0xffffffff) {
                    uVar13 = uVar18;
                  }
                  DAT_05642a8c = CONCAT44(uVar13,(uint)DAT_05642a8c);
                } while ((int)uVar13 < 0);
              }
              else {
                uVar13 = DAT_05642a8c._4_4_;
                if (DAT_05642a8c < 0) goto LAB_02b99bdc;
              }
              pcVar15 = (char *)((long)puVar28 + (ulong)uVar13);
            }
            pcVar11 = "tv_program_0";
            if (pcVar15 != (char *)0x0) {
              pcVar11 = pcVar15;
            }
            FUN_038d1270(param_2,pcVar11);
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 == 0) goto LAB_02b99c2c;
            if ((DAT_05642a20 & 1) == 0) {
              DAT_05642a24 = -1;
              DAT_05642a2c = 0xffffffffffffffff;
              DAT_05642ad4._4_4_ = 0xffffffff;
              DAT_05642a34 = 0xffffffffffffffff;
              DAT_05642a3c = 0xffffffffffffffff;
              DAT_05642b04 = 0xffffffff;
              DAT_05642a44 = -1;
              DAT_05642a4c = 0xffffffffffffffff;
              DAT_05642a54 = 0xffffffffffffffff;
              DAT_05642a5c = 0xffffffffffffffff;
              DAT_05642a64 = 0xffffffffffffffff;
              DAT_05642a6c = 0xffffffffffffffff;
              DAT_05642a74 = -1;
              DAT_05642a7c = 0xffffffffffffffff;
              DAT_05642a84 = 0xffffffffffffffff;
              DAT_05642a8c = -1;
              DAT_05642a94 = 0xffffffffffffffff;
              DAT_05642a9c = 0xffffffffffffffff;
              DAT_05642aa4 = -1;
              DAT_05642aac = 0xffffffffffffffff;
              DAT_05642ab4 = 0xffffffffffffffff;
              DAT_05642abc = -1;
              DAT_05642ac4 = 0xffffffffffffffff;
              DAT_05642acc = 0xffffffffffffffff;
              DAT_05642ad4 = -1;
              DAT_05642adc = 0xffffffffffffffff;
              DAT_05642ae4 = 0xffffffffffffffff;
              DAT_05642aec = -1;
              DAT_05642af4 = 0xffffffffffffffff;
              DAT_05642afc = 0xffffffffffffffff;
              DAT_05642a20 = 1;
LAB_02b99c94:
              uVar13 = DAT_05642ad4._4_4_;
              if (puVar28 != puVar14) {
                do {
                  if (uVar13 != 0xffffffff) goto LAB_02b99c9c;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b99c9c;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642ad4 = CONCAT44(0xfffffffe,(undefined4)DAT_05642ad4);
                  if (uVar25 == 0) goto LAB_02b99c9c;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0x878cd782) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b99c9c;
                  }
                  uVar13 = *puVar26;
                  uVar18 = 0;
                  if (uVar13 != 0xffffffff) {
                    uVar18 = uVar13;
                  }
                  DAT_05642ad4 = CONCAT44(uVar18,(undefined4)DAT_05642ad4);
                } while ((int)uVar18 < 0);
                pbVar9 = (byte *)((long)puVar28 + (ulong)uVar18);
                if (pbVar9 != (byte *)0x0) goto LAB_02b99c24;
              }
LAB_02b99c9c:
              local_70 = 1;
            }
            else {
              if (DAT_05642ad4 < 0) goto LAB_02b99c94;
              pbVar9 = (byte *)((long)puVar28 + (ulong)DAT_05642ad4._4_4_);
              if (pbVar9 == (byte *)0x0) goto LAB_02b99c9c;
LAB_02b99c24:
              local_70 = (uint)*pbVar9;
            }
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 == 0) goto LAB_02b99cc8;
            if (DAT_05642aa4 < 0) {
              uVar13 = DAT_05642aa4._4_4_;
              if (puVar28 != puVar14) {
                do {
                  if (uVar13 != 0xffffffff) goto LAB_02b99de8;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b99de8;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642aa4 = CONCAT44(0xfffffffe,(undefined4)DAT_05642aa4);
                  if (uVar25 == 0) goto LAB_02b99de8;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0x13b9f45c) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b99de8;
                  }
                  uVar13 = *puVar26;
                  uVar18 = 0;
                  if (uVar13 != 0xffffffff) {
                    uVar18 = uVar13;
                  }
                  DAT_05642aa4 = CONCAT44(uVar18,(undefined4)DAT_05642aa4);
                } while ((int)uVar18 < 0);
                goto LAB_02b99cb8;
              }
LAB_02b99de8:
              local_68 = 1;
            }
            else {
              uVar18 = DAT_05642aa4._4_4_;
LAB_02b99cb8:
              if ((byte *)((long)puVar28 + (ulong)uVar18) == (byte *)0x0) goto LAB_02b99de8;
              local_68 = (uint)*(byte *)((long)puVar28 + (ulong)uVar18);
            }
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 != 0) {
              if ((int)(uint)DAT_05642a5c < 0) {
                uVar13 = (uint)DAT_05642a5c;
                if (puVar28 != puVar14) {
                  do {
                    if (uVar13 != 0xffffffff) goto LAB_02b9a3f0;
                    lVar1 = 0xc;
                    if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                      lVar1 = 0x1c;
                    }
                    lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                    if (lVar1 == 0) goto LAB_02b9a3f0;
                    uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                    DAT_05642a5c = CONCAT44(DAT_05642a5c._4_4_,0xfffffffe);
                    if (uVar25 == 0) goto LAB_02b9a3f0;
                    puVar26 = (uint *)(lVar1 + 4);
                    while (puVar26[-1] != 0x6a34f3f2) {
                      puVar26 = puVar26 + 2;
                      uVar25 = uVar25 - 1;
                      if (uVar25 == 0) goto LAB_02b9a3f0;
                    }
                    uVar13 = *puVar26;
                    uVar18 = 0;
                    if (uVar13 != 0xffffffff) {
                      uVar18 = uVar13;
                    }
                    DAT_05642a5c = CONCAT44(DAT_05642a5c._4_4_,uVar18);
                  } while ((int)uVar18 < 0);
                  goto LAB_02b99e08;
                }
LAB_02b9a3f0:
                local_6c = 1;
              }
              else {
                uVar18 = (uint)DAT_05642a5c;
LAB_02b99e08:
                if ((byte *)((long)puVar28 + (ulong)uVar18) == (byte *)0x0) goto LAB_02b9a3f0;
                local_6c = (uint)*(byte *)((long)puVar28 + (ulong)uVar18);
              }
              if (*puVar28 == 0) goto LAB_02b99e1c;
              lVar1 = (long)puVar28 - (ulong)*puVar28;
              bVar4 = true;
              if ((lVar1 != 0) && ((uint)DAT_05642a2c == -1)) {
                lVar2 = 0xc;
                if (*(char *)(lVar1 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                if (lVar2 + lVar1 != 0) {
                  uVar25 = (ulong)*(ushort *)(lVar1 + 8);
                  DAT_05642a2c = CONCAT44(DAT_05642a2c._4_4_,0xfffffffe);
                  if (uVar25 != 0) {
                    piVar16 = (int *)(lVar2 + lVar1 + 4);
                    piVar20 = (int *)&DAT_05642a2c;
                    do {
                      if (piVar16[-1] == 0x43513d44) goto LAB_02b9b1e4;
                      piVar16 = piVar16 + 2;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                }
              }
              goto LAB_02b99e20;
            }
            goto LAB_02b99e18;
          }
          if (uVar22 <= uVar13) {
            if (uVar22 < uVar13) {
              if (((uVar17 - 1 & 0xff) < uVar22) ||
                 ((uVar17 & 0xff) < 0xd && uVar13 <= (uVar17 & 0xff))) goto LAB_02b99b64;
            }
            goto LAB_02b99b38;
          }
          bVar4 = false;
          local_68 = 1;
          if (uVar22 < (uVar17 & 0xff)) goto LAB_02b99998;
          if (uVar13 <= (uVar17 & 0xff)) goto LAB_02b99b64;
        }
        else {
          if (uVar13 == 0) {
            uVar22 = 1;
            uVar23 = 2;
            bVar6 = (uVar19 >> 0x10 & 0xff) != 1;
            uVar13 = 1;
            uVar18 = 1;
            bVar4 = true;
            bVar5 = bVar6;
LAB_02b99174:
            if ((((bVar6) || (bVar5)) || (uVar23 < uVar32)) || ((uVar32 < uVar18 || (!bVar4)))) {
              if (uVar22 <= uVar13) {
                if (uVar22 < uVar13) {
                  if (((uVar17 - 1 & 0xff) < uVar22) ||
                     ((uVar17 & 0xff) < 0xd && uVar13 <= (uVar17 & 0xff))) goto LAB_02b99648;
                }
LAB_02b99b38:
                bVar4 = false;
                local_68 = 1;
                goto LAB_02b99e20;
              }
              bVar4 = false;
              local_68 = 1;
              if (uVar22 < (uVar17 & 0xff)) {
LAB_02b99998:
                local_68 = 1;
                bVar4 = false;
                goto LAB_02b99e20;
              }
              if ((uVar17 & 0xff) < uVar13) goto LAB_02b99e20;
            }
          }
          else {
            if ((DAT_05642a20 & 1) == 0) {
              DAT_05642a24 = -1;
              DAT_05642a2c = 0xffffffffffffffff;
              DAT_05642aec._4_4_ = 0xffffffff;
              DAT_05642a34 = 0xffffffffffffffff;
              DAT_05642a3c = 0xffffffffffffffff;
              DAT_05642b04 = 0xffffffff;
              DAT_05642a44 = -1;
              DAT_05642a4c = 0xffffffffffffffff;
              DAT_05642a54 = 0xffffffffffffffff;
              DAT_05642a5c = 0xffffffffffffffff;
              DAT_05642a64 = 0xffffffffffffffff;
              DAT_05642a6c = 0xffffffffffffffff;
              DAT_05642a74 = -1;
              DAT_05642a7c = 0xffffffffffffffff;
              DAT_05642a84 = 0xffffffffffffffff;
              DAT_05642a8c = -1;
              DAT_05642a94 = 0xffffffffffffffff;
              DAT_05642a9c = 0xffffffffffffffff;
              DAT_05642aa4 = -1;
              DAT_05642aac = 0xffffffffffffffff;
              DAT_05642ab4 = 0xffffffffffffffff;
              DAT_05642abc = -1;
              DAT_05642ac4 = 0xffffffffffffffff;
              DAT_05642acc = 0xffffffffffffffff;
              DAT_05642ad4 = -1;
              DAT_05642adc = 0xffffffffffffffff;
              DAT_05642ae4 = 0xffffffffffffffff;
              DAT_05642aec = -1;
              DAT_05642af4 = 0xffffffffffffffff;
              DAT_05642afc = 0xffffffffffffffff;
              DAT_05642a20 = 1;
LAB_02b99210:
              uVar13 = DAT_05642aec._4_4_;
              if (puVar28 != puVar14) {
                do {
                  if (uVar13 != 0xffffffff) goto LAB_02b99218;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b99218;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642aec = CONCAT44(0xfffffffe,(undefined4)DAT_05642aec);
                  if (uVar25 == 0) goto LAB_02b99218;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0x1ffc84b1) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b99218;
                  }
                  uVar13 = *puVar26;
                  uVar18 = 0;
                  if (uVar13 != 0xffffffff) {
                    uVar18 = uVar13;
                  }
                  DAT_05642aec = CONCAT44(uVar18,(undefined4)DAT_05642aec);
                } while ((int)uVar18 < 0);
                pbVar9 = (byte *)((long)puVar28 + (ulong)uVar18);
                if (pbVar9 != (byte *)0x0) goto LAB_02b98e94;
              }
LAB_02b99218:
              uVar13 = 1;
            }
            else {
              if (DAT_05642aec < 0) goto LAB_02b99210;
              pbVar9 = (byte *)((long)puVar28 + (ulong)DAT_05642aec._4_4_);
              if (pbVar9 == (byte *)0x0) goto LAB_02b99218;
LAB_02b98e94:
              uVar13 = (uint)*pbVar9;
            }
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 == 0) {
              uVar23 = 2;
              uVar22 = 1;
              uVar18 = 1;
            }
            else {
              if (DAT_05642abc < 0) {
                uVar18 = DAT_05642abc._4_4_;
                if (puVar28 != puVar14) {
                  do {
                    if (uVar18 != 0xffffffff) goto LAB_02b993d8;
                    lVar1 = 0xc;
                    if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                      lVar1 = 0x1c;
                    }
                    lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                    if (lVar1 == 0) goto LAB_02b993d8;
                    uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                    DAT_05642abc = CONCAT44(0xfffffffe,(undefined4)DAT_05642abc);
                    if (uVar25 == 0) goto LAB_02b993d8;
                    puVar26 = (uint *)(lVar1 + 4);
                    while (puVar26[-1] != 0x8bc9a76f) {
                      puVar26 = puVar26 + 2;
                      uVar25 = uVar25 - 1;
                      if (uVar25 == 0) goto LAB_02b993d8;
                    }
                    uVar18 = *puVar26;
                    uVar22 = 0;
                    if (uVar18 != 0xffffffff) {
                      uVar22 = uVar18;
                    }
                    DAT_05642abc = CONCAT44(uVar22,(undefined4)DAT_05642abc);
                  } while ((int)uVar22 < 0);
                  goto LAB_02b99234;
                }
LAB_02b993d8:
                uVar18 = 1;
              }
              else {
                uVar22 = DAT_05642abc._4_4_;
LAB_02b99234:
                if ((byte *)((long)puVar28 + (ulong)uVar22) == (byte *)0x0) goto LAB_02b993d8;
                uVar18 = (uint)*(byte *)((long)puVar28 + (ulong)uVar22);
              }
              puVar14 = (uint *)(ulong)*puVar28;
              if (*puVar28 == 0) {
                uVar23 = 2;
                uVar22 = 1;
              }
              else {
                if ((int)(uint)DAT_05642a74 < 0) {
                  uVar22 = (uint)DAT_05642a74;
                  if (puVar28 != puVar14) {
                    do {
                      if (uVar22 != 0xffffffff) goto LAB_02b994e0;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                      if (lVar1 == 0) goto LAB_02b994e0;
                      uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                      DAT_05642a74 = CONCAT44(DAT_05642a74._4_4_,0xfffffffe);
                      if (uVar25 == 0) goto LAB_02b994e0;
                      puVar26 = (uint *)(lVar1 + 4);
                      while (puVar26[-1] != 0xf244a0c1) {
                        puVar26 = puVar26 + 2;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_02b994e0;
                      }
                      uVar22 = *puVar26;
                      uVar23 = 0;
                      if (uVar22 != 0xffffffff) {
                        uVar23 = uVar22;
                      }
                      DAT_05642a74 = CONCAT44(DAT_05642a74._4_4_,uVar23);
                    } while ((int)uVar23 < 0);
                    goto LAB_02b993f4;
                  }
LAB_02b994e0:
                  uVar22 = 1;
                }
                else {
                  uVar23 = (uint)DAT_05642a74;
LAB_02b993f4:
                  if ((byte *)((long)puVar28 + (ulong)uVar23) == (byte *)0x0) goto LAB_02b994e0;
                  uVar22 = (uint)*(byte *)((long)puVar28 + (ulong)uVar23);
                }
                puVar14 = (uint *)(ulong)*puVar28;
                if (*puVar28 != 0) {
                  if ((int)(uint)DAT_05642a44 < 0) {
                    uVar23 = (uint)DAT_05642a44;
                    if (puVar28 == puVar14) goto LAB_02b995fc;
                    do {
                      if (uVar23 != 0xffffffff) goto LAB_02b995fc;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                      if (lVar1 == 0) goto LAB_02b995fc;
                      uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                      DAT_05642a44 = CONCAT44(DAT_05642a44._4_4_,0xfffffffe);
                      if (uVar25 == 0) goto LAB_02b995fc;
                      puVar26 = (uint *)(lVar1 + 4);
                      while (puVar26[-1] != 0xdb216e77) {
                        puVar26 = puVar26 + 2;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_02b995fc;
                      }
                      uVar23 = *puVar26;
                      uVar27 = 0;
                      if (uVar23 != 0xffffffff) {
                        uVar27 = uVar23;
                      }
                      DAT_05642a44 = CONCAT44(DAT_05642a44._4_4_,uVar27);
                    } while ((int)uVar27 < 0);
                  }
                  else {
                    uVar27 = (uint)DAT_05642a44;
                  }
                  if ((byte *)((long)puVar28 + (ulong)uVar27) != (byte *)0x0) {
                    uVar23 = (uint)*(byte *)((long)puVar28 + (ulong)uVar27);
                    goto LAB_02b99600;
                  }
                }
LAB_02b995fc:
                uVar23 = 2;
              }
            }
LAB_02b99600:
            bVar4 = uVar13 == uVar22;
            bVar5 = uVar13 != (uVar17 & 0xff);
            if ((bVar5) || (uVar13 == uVar22)) {
              bVar6 = uVar22 != (uVar17 & 0xff);
              if ((bVar6) || (uVar13 == uVar22)) goto LAB_02b99174;
              if (uVar23 < uVar32) goto LAB_02b99b38;
            }
            else if (uVar32 < uVar18) goto LAB_02b99b38;
          }
LAB_02b99648:
          puVar14 = (uint *)(ulong)*puVar28;
          if (*puVar28 == 0) {
LAB_02b996c8:
            pcVar15 = (char *)0x0;
          }
          else {
            if ((DAT_05642a20 & 1) == 0) {
              DAT_05642a24 = -1;
              DAT_05642a2c = 0xffffffffffffffff;
              DAT_05642a8c._4_4_ = 0xffffffff;
              DAT_05642a34 = 0xffffffffffffffff;
              DAT_05642a3c = 0xffffffffffffffff;
              DAT_05642b04 = 0xffffffff;
              DAT_05642a44 = -1;
              DAT_05642a4c = 0xffffffffffffffff;
              DAT_05642a54 = 0xffffffffffffffff;
              DAT_05642a5c = 0xffffffffffffffff;
              DAT_05642a64 = 0xffffffffffffffff;
              DAT_05642a6c = 0xffffffffffffffff;
              DAT_05642a74 = -1;
              DAT_05642a7c = 0xffffffffffffffff;
              DAT_05642a84 = 0xffffffffffffffff;
              DAT_05642a8c = -1;
              DAT_05642a94 = 0xffffffffffffffff;
              DAT_05642a9c = 0xffffffffffffffff;
              DAT_05642aa4 = -1;
              DAT_05642aac = 0xffffffffffffffff;
              DAT_05642ab4 = 0xffffffffffffffff;
              DAT_05642abc = -1;
              DAT_05642ac4 = 0xffffffffffffffff;
              DAT_05642acc = 0xffffffffffffffff;
              DAT_05642ad4 = -1;
              DAT_05642adc = 0xffffffffffffffff;
              DAT_05642ae4 = 0xffffffffffffffff;
              DAT_05642aec = -1;
              DAT_05642af4 = 0xffffffffffffffff;
              DAT_05642afc = 0xffffffffffffffff;
              DAT_05642a20 = 1;
LAB_02b996c0:
              uVar18 = DAT_05642a8c._4_4_;
              if (puVar28 == puVar14) goto LAB_02b996c8;
              do {
                if (uVar18 != 0xffffffff) goto LAB_02b996c8;
                lVar1 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                if (lVar1 == 0) goto LAB_02b996c8;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                DAT_05642a8c = CONCAT44(0xfffffffe,(uint)DAT_05642a8c);
                if (uVar25 == 0) goto LAB_02b996c8;
                puVar26 = (uint *)(lVar1 + 4);
                while (puVar26[-1] != 0x7834d5db) {
                  puVar26 = puVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02b996c8;
                }
                uVar18 = *puVar26;
                uVar13 = 0;
                if (uVar18 != 0xffffffff) {
                  uVar13 = uVar18;
                }
                DAT_05642a8c = CONCAT44(uVar13,(uint)DAT_05642a8c);
              } while ((int)uVar13 < 0);
            }
            else {
              uVar13 = DAT_05642a8c._4_4_;
              if (DAT_05642a8c < 0) goto LAB_02b996c0;
            }
            pcVar15 = (char *)((long)puVar28 + (ulong)uVar13);
          }
          pcVar11 = "tv_program_0";
          if (pcVar15 != (char *)0x0) {
            pcVar11 = pcVar15;
          }
          FUN_038d1270(param_2,pcVar11);
          puVar14 = (uint *)(ulong)*puVar28;
          if (*puVar28 == 0) {
LAB_02b99c2c:
            local_6c = 1;
            local_68 = 1;
            local_70 = 1;
            goto LAB_02b99e1c;
          }
          if ((DAT_05642a20 & 1) == 0) {
            DAT_05642a24 = -1;
            DAT_05642a2c = 0xffffffffffffffff;
            DAT_05642aec._4_4_ = 0xffffffff;
            DAT_05642a34 = 0xffffffffffffffff;
            DAT_05642a3c = 0xffffffffffffffff;
            DAT_05642b04 = 0xffffffff;
            DAT_05642a44 = -1;
            DAT_05642a4c = 0xffffffffffffffff;
            DAT_05642a54 = 0xffffffffffffffff;
            DAT_05642a5c = 0xffffffffffffffff;
            DAT_05642a64 = 0xffffffffffffffff;
            DAT_05642a6c = 0xffffffffffffffff;
            DAT_05642a74 = -1;
            DAT_05642a7c = 0xffffffffffffffff;
            DAT_05642a84 = 0xffffffffffffffff;
            DAT_05642a8c = -1;
            DAT_05642a94 = 0xffffffffffffffff;
            DAT_05642a9c = 0xffffffffffffffff;
            DAT_05642aa4 = -1;
            DAT_05642aac = 0xffffffffffffffff;
            DAT_05642ab4 = 0xffffffffffffffff;
            DAT_05642abc = -1;
            DAT_05642ac4 = 0xffffffffffffffff;
            DAT_05642acc = 0xffffffffffffffff;
            DAT_05642ad4 = -1;
            DAT_05642adc = 0xffffffffffffffff;
            DAT_05642ae4 = 0xffffffffffffffff;
            DAT_05642aec = -1;
            DAT_05642af4 = 0xffffffffffffffff;
            DAT_05642afc = 0xffffffffffffffff;
            DAT_05642a20 = 1;
LAB_02b99764:
            uVar13 = DAT_05642aec._4_4_;
            if (puVar28 != puVar14) {
              do {
                if (uVar13 != 0xffffffff) goto LAB_02b9976c;
                lVar1 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                if (lVar1 == 0) goto LAB_02b9976c;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                DAT_05642aec = CONCAT44(0xfffffffe,(undefined4)DAT_05642aec);
                if (uVar25 == 0) goto LAB_02b9976c;
                puVar26 = (uint *)(lVar1 + 4);
                while (puVar26[-1] != 0x1ffc84b1) {
                  puVar26 = puVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02b9976c;
                }
                uVar13 = *puVar26;
                uVar18 = 0;
                if (uVar13 != 0xffffffff) {
                  uVar18 = uVar13;
                }
                DAT_05642aec = CONCAT44(uVar18,(undefined4)DAT_05642aec);
              } while ((int)uVar18 < 0);
              pbVar9 = (byte *)((long)puVar28 + (ulong)uVar18);
              if (pbVar9 != (byte *)0x0) goto LAB_02b99708;
            }
LAB_02b9976c:
            local_70 = 1;
          }
          else {
            if (DAT_05642aec < 0) goto LAB_02b99764;
            pbVar9 = (byte *)((long)puVar28 + (ulong)DAT_05642aec._4_4_);
            if (pbVar9 == (byte *)0x0) goto LAB_02b9976c;
LAB_02b99708:
            local_70 = (uint)*pbVar9;
          }
          puVar14 = (uint *)(ulong)*puVar28;
          if (*puVar28 == 0) {
LAB_02b99cc8:
            local_6c = 1;
            local_68 = 1;
            goto LAB_02b99e1c;
          }
          if (DAT_05642abc < 0) {
            uVar13 = DAT_05642abc._4_4_;
            if (puVar28 != puVar14) {
              do {
                if (uVar13 != 0xffffffff) goto LAB_02b998a8;
                lVar1 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                if (lVar1 == 0) goto LAB_02b998a8;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                DAT_05642abc = CONCAT44(0xfffffffe,(undefined4)DAT_05642abc);
                if (uVar25 == 0) goto LAB_02b998a8;
                puVar26 = (uint *)(lVar1 + 4);
                while (puVar26[-1] != 0x8bc9a76f) {
                  puVar26 = puVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02b998a8;
                }
                uVar13 = *puVar26;
                uVar18 = 0;
                if (uVar13 != 0xffffffff) {
                  uVar18 = uVar13;
                }
                DAT_05642abc = CONCAT44(uVar18,(undefined4)DAT_05642abc);
              } while ((int)uVar18 < 0);
              goto LAB_02b99788;
            }
LAB_02b998a8:
            local_68 = 1;
          }
          else {
            uVar18 = DAT_05642abc._4_4_;
LAB_02b99788:
            if ((byte *)((long)puVar28 + (ulong)uVar18) == (byte *)0x0) goto LAB_02b998a8;
            local_68 = (uint)*(byte *)((long)puVar28 + (ulong)uVar18);
          }
          puVar14 = (uint *)(ulong)*puVar28;
          if (*puVar28 == 0) {
LAB_02b99e18:
            local_6c = 1;
            goto LAB_02b99e1c;
          }
          if ((int)(uint)DAT_05642a74 < 0) {
            uVar13 = (uint)DAT_05642a74;
            if (puVar28 != puVar14) {
              do {
                if (uVar13 != 0xffffffff) goto LAB_02b99914;
                lVar1 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                if (lVar1 == 0) goto LAB_02b99914;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                DAT_05642a74 = CONCAT44(DAT_05642a74._4_4_,0xfffffffe);
                if (uVar25 == 0) goto LAB_02b99914;
                puVar26 = (uint *)(lVar1 + 4);
                while (puVar26[-1] != 0xf244a0c1) {
                  puVar26 = puVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02b99914;
                }
                uVar13 = *puVar26;
                uVar18 = 0;
                if (uVar13 != 0xffffffff) {
                  uVar18 = uVar13;
                }
                DAT_05642a74 = CONCAT44(DAT_05642a74._4_4_,uVar18);
              } while ((int)uVar18 < 0);
              goto LAB_02b998c8;
            }
LAB_02b99914:
            local_6c = 1;
          }
          else {
            uVar18 = (uint)DAT_05642a74;
LAB_02b998c8:
            if ((byte *)((long)puVar28 + (ulong)uVar18) == (byte *)0x0) goto LAB_02b99914;
            local_6c = (uint)*(byte *)((long)puVar28 + (ulong)uVar18);
          }
          if (*puVar28 == 0) goto LAB_02b99e1c;
          lVar1 = (long)puVar28 - (ulong)*puVar28;
          bVar4 = true;
          if ((lVar1 != 0) && ((uint)DAT_05642a44 == -1)) {
            lVar2 = 0xc;
            if (*(char *)(lVar1 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar1 != 0) {
              uVar25 = (ulong)*(ushort *)(lVar1 + 8);
              DAT_05642a44 = CONCAT44(DAT_05642a44._4_4_,0xfffffffe);
              if (uVar25 != 0) {
                piVar16 = (int *)(lVar2 + lVar1 + 4);
                piVar20 = (int *)&DAT_05642a44;
                do {
                  if (piVar16[-1] == -0x24de9189) goto LAB_02b9b1e4;
                  piVar16 = piVar16 + 2;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
            }
          }
        }
        goto LAB_02b99e20;
      }
    }
    goto LAB_02b98f68;
  }
LAB_02b99070:
  pcVar15 = (char *)0x0;
LAB_02b99074:
  pcVar11 = "tv_program_0";
  if (pcVar15 != (char *)0x0) {
    pcVar11 = pcVar15;
  }
  FUN_038d1270(param_2,pcVar11);
  return;
LAB_02b9b1e4:
  iVar21 = 0;
  if (*piVar16 != -1) {
    iVar21 = *piVar16;
  }
  *piVar20 = iVar21;
LAB_02b99e1c:
  bVar4 = true;
LAB_02b99e20:
  if (1 < bVar3) {
    if (uVar24 == 0) {
      if (bVar4) {
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2e,0x9539786c);
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x22,0x10c5bb2);
        if (pbVar9 == (byte *)0x0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (uint)*pbVar9;
        }
        if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
          if (((local_70 & 0xff) != (local_6c & 0xff)) && (uVar13 == (local_6c & 0xff))) {
            if ((local_6c & 0xff) < uVar19) goto LAB_02b9a7ec;
            goto LAB_02b9a048;
          }
          if ((((uVar13 == (local_6c & 0xff)) && (uVar13 == (local_70 & 0xff))) &&
              (uVar19 <= (local_6c & 0xff))) &&
             ((local_68 <= uVar19 && ((local_70 & 0xff) == (local_6c & 0xff))))) goto LAB_02b9a048;
          if ((local_70 & 0xff) < (local_6c & 0xff)) {
            if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff))) goto LAB_02b9a048;
          }
          else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                  (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                   ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9a048;
        }
        else {
          if (uVar19 < local_68) goto LAB_02b9a7ec;
LAB_02b9a048:
          puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,0xf,0x78815c1c);
          if (puVar10 == (undefined1 *)0x0) {
            uVar31 = 1;
          }
          else {
            uVar31 = *puVar10;
          }
          puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,3,0x51e492aa);
          if (puVar10 == (undefined1 *)0x0) {
            uVar12 = 2;
          }
          else {
            uVar12 = *puVar10;
          }
          uVar25 = FUN_02b9cdc4(uVar31,uVar12,local_70,local_68,local_6c,local_6c);
          if ((uVar25 & 1) != 0) goto LAB_02b9a4dc;
        }
        goto LAB_02b9a7ec;
      }
LAB_02b9a4dc:
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2e,0x9539786c);
      if (pbVar9 == (byte *)0x0) {
        uVar13 = 1;
      }
      else {
        uVar13 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x22,0x10c5bb2);
      if (pbVar9 == (byte *)0x0) {
        uVar19 = 1;
      }
      else {
        uVar19 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xf,0x78815c1c);
      if (pbVar9 == (byte *)0x0) {
        uVar18 = 1;
      }
      else {
        uVar18 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,3,0x51e492aa);
      if (pbVar9 == (byte *)0x0) {
        uVar22 = 2;
      }
      else {
        uVar22 = (uint)*pbVar9;
      }
      if ((uVar13 != (uVar17 & 0xff)) || (uVar13 == uVar18)) {
        if ((uVar18 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
          if (uVar22 < uVar32) goto LAB_02b9a7f0;
          goto LAB_02b9a5f0;
        }
        if ((((uVar18 == (uVar17 & 0xff)) && (uVar13 == (uVar17 & 0xff))) && (uVar19 <= uVar32)) &&
           ((uVar13 == uVar18 && (uVar32 <= uVar22)))) goto LAB_02b9a5f0;
        if (uVar13 < uVar18) {
          if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9a5f0;
        }
        else if ((uVar13 != uVar18) &&
                ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                 ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9a5f0;
        goto LAB_02b9a7f0;
      }
      if (uVar32 < uVar19) goto LAB_02b9a7f0;
LAB_02b9a5f0:
      pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1c,0x93036ed8);
      pcVar15 = "tv_program_0";
      if (pcVar11 != (char *)0x0) {
        pcVar15 = pcVar11;
      }
      FUN_038d1270(param_2,pcVar15);
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2e,0x9539786c);
      if (pbVar9 == (byte *)0x0) {
        local_70 = 1;
      }
      else {
        local_70 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x22,0x10c5bb2);
      if (pbVar9 == (byte *)0x0) {
        local_68 = 1;
      }
      else {
        local_68 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xf,0x78815c1c);
      if (pbVar9 == (byte *)0x0) {
        local_6c = 1;
      }
      else {
        local_6c = (uint)*pbVar9;
      }
      uVar30 = 3;
      uVar29 = 0x51e492aa;
LAB_02b9a7e8:
      FUN_02ba1f10(puVar28,uVar30,uVar29);
LAB_02b9a7ec:
      bVar4 = true;
    }
    else {
      if (!bVar4) goto LAB_02b9a1b4;
      puVar14 = (uint *)(ulong)*puVar28;
      if (*puVar28 == 0) {
        uVar13 = 1;
LAB_02b9a070:
        uVar18 = 1;
      }
      else {
        if ((DAT_05642a20 & 1) == 0) {
          DAT_05642a24 = -1;
          DAT_05642a2c = 0xffffffffffffffff;
          DAT_05642af4._0_4_ = 0xffffffff;
          DAT_05642a34 = 0xffffffffffffffff;
          DAT_05642a3c = 0xffffffffffffffff;
          DAT_05642b04 = 0xffffffff;
          DAT_05642a44 = -1;
          DAT_05642a4c = 0xffffffffffffffff;
          DAT_05642a54 = 0xffffffffffffffff;
          DAT_05642a5c = 0xffffffffffffffff;
          DAT_05642a64 = 0xffffffffffffffff;
          DAT_05642a6c = 0xffffffffffffffff;
          DAT_05642a74 = -1;
          DAT_05642a7c = 0xffffffffffffffff;
          DAT_05642a84 = 0xffffffffffffffff;
          DAT_05642a8c = -1;
          DAT_05642a94 = 0xffffffffffffffff;
          DAT_05642a9c = 0xffffffffffffffff;
          DAT_05642aa4 = -1;
          DAT_05642aac = 0xffffffffffffffff;
          DAT_05642ab4 = 0xffffffffffffffff;
          DAT_05642abc = -1;
          DAT_05642ac4 = 0xffffffffffffffff;
          DAT_05642acc = 0xffffffffffffffff;
          DAT_05642ad4 = -1;
          DAT_05642adc = 0xffffffffffffffff;
          DAT_05642ae4 = 0xffffffffffffffff;
          DAT_05642aec = -1;
          DAT_05642af4 = 0xffffffffffffffff;
          DAT_05642afc = 0xffffffffffffffff;
          DAT_05642a20 = 1;
LAB_02b99ef4:
          uVar13 = (uint)DAT_05642af4;
          if (puVar28 != puVar14) {
            do {
              if (uVar13 != 0xffffffff) goto LAB_02b99efc;
              lVar1 = 0xc;
              if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
              if (lVar1 == 0) goto LAB_02b99efc;
              uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
              DAT_05642af4 = CONCAT44(DAT_05642af4._4_4_,0xfffffffe);
              if (uVar25 == 0) goto LAB_02b99efc;
              puVar26 = (uint *)(lVar1 + 4);
              while (puVar26[-1] != 0xd492b5f) {
                puVar26 = puVar26 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_02b99efc;
              }
              uVar13 = *puVar26;
              uVar18 = 0;
              if (uVar13 != 0xffffffff) {
                uVar18 = uVar13;
              }
              DAT_05642af4 = CONCAT44(DAT_05642af4._4_4_,uVar18);
            } while ((int)uVar18 < 0);
            pbVar9 = (byte *)((long)puVar28 + (ulong)uVar18);
            if (pbVar9 != (byte *)0x0) goto LAB_02b99e64;
          }
LAB_02b99efc:
          uVar13 = 1;
        }
        else {
          if ((int)(uint)DAT_05642af4 < 0) goto LAB_02b99ef4;
          pbVar9 = (byte *)((long)puVar28 + (DAT_05642af4 & 0xffffffff));
          if (pbVar9 == (byte *)0x0) goto LAB_02b99efc;
LAB_02b99e64:
          uVar13 = (uint)*pbVar9;
        }
        puVar14 = (uint *)(ulong)*puVar28;
        if (*puVar28 == 0) goto LAB_02b9a070;
        if ((int)(uint)DAT_05642ac4 < 0) {
          uVar18 = (uint)DAT_05642ac4;
          if (puVar28 == puVar14) goto LAB_02b9a070;
          do {
            if (uVar18 != 0xffffffff) goto LAB_02b9a070;
            lVar1 = 0xc;
            if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
            if (lVar1 == 0) goto LAB_02b9a070;
            uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
            DAT_05642ac4 = CONCAT44(DAT_05642ac4._4_4_,0xfffffffe);
            if (uVar25 == 0) goto LAB_02b9a070;
            puVar26 = (uint *)(lVar1 + 4);
            while (puVar26[-1] != 0x997c0881) {
              puVar26 = puVar26 + 2;
              uVar25 = uVar25 - 1;
              if (uVar25 == 0) goto LAB_02b9a070;
            }
            uVar18 = *puVar26;
            uVar22 = 0;
            if (uVar18 != 0xffffffff) {
              uVar22 = uVar18;
            }
            DAT_05642ac4 = CONCAT44(DAT_05642ac4._4_4_,uVar22);
          } while ((int)uVar22 < 0);
        }
        else {
          uVar22 = (uint)DAT_05642ac4;
        }
        if ((byte *)((long)puVar28 + (ulong)uVar22) == (byte *)0x0) goto LAB_02b9a070;
        uVar18 = (uint)*(byte *)((long)puVar28 + (ulong)uVar22);
      }
      if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
        if (((local_70 & 0xff) != (local_6c & 0xff)) && (uVar13 == (local_6c & 0xff))) {
          if ((local_6c & 0xff) < uVar18) goto LAB_02b9a7ec;
          goto LAB_02b9a0ec;
        }
        if ((((uVar13 == (local_6c & 0xff)) && (uVar13 == (local_70 & 0xff))) &&
            (uVar18 <= (local_6c & 0xff))) &&
           ((local_68 <= uVar18 && ((local_70 & 0xff) == (local_6c & 0xff))))) goto LAB_02b9a0ec;
        if ((local_70 & 0xff) < (local_6c & 0xff)) {
          if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff))) goto LAB_02b9a0ec;
        }
        else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                 ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9a0ec;
        goto LAB_02b9a7ec;
      }
      if (uVar18 < local_68) goto LAB_02b9a7ec;
LAB_02b9a0ec:
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x15,0xe0f10f2f);
      if (pbVar9 == (byte *)0x0) {
        uVar13 = 1;
      }
      else {
        uVar13 = (uint)*pbVar9;
      }
      pbVar9 = (byte *)FUN_02ba1f10(puVar28,9,0xc994c199);
      if (pbVar9 == (byte *)0x0) {
        uVar18 = 2;
      }
      else {
        uVar18 = (uint)*pbVar9;
      }
      if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
        if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
          if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
              ((local_6c & 0xff) < uVar18)) ||
             ((uVar18 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
            if ((local_70 & 0xff) < (local_6c & 0xff)) {
              if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff))) goto LAB_02b9a1b4;
            }
            else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                    (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                     ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9a1b4;
            goto LAB_02b9a7ec;
          }
        }
        else if ((local_6c & 0xff) < uVar18) goto LAB_02b9a7ec;
      }
      else if (uVar18 < local_68) goto LAB_02b9a7ec;
LAB_02b9a1b4:
      puVar14 = (uint *)(ulong)*puVar28;
      if (*puVar28 == 0) {
        uVar18 = 1;
        bVar7 = (uVar19 >> 0x10 & 0xff) != 1;
        uVar22 = 2;
        uVar13 = 1;
        uVar19 = 1;
        bVar5 = true;
        bVar6 = bVar7;
LAB_02b9a208:
        if ((((!bVar7) && (!bVar6)) && (uVar32 <= uVar22)) && ((uVar19 <= uVar32 && (bVar5)))) {
LAB_02b9a734:
          pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1c,0x93036ed8);
          pcVar15 = "tv_program_0";
          if (pcVar11 != (char *)0x0) {
            pcVar15 = pcVar11;
          }
          FUN_038d1270(param_2,pcVar15);
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x34,0xd492b5f);
          if (pbVar9 == (byte *)0x0) {
            local_70 = 1;
          }
          else {
            local_70 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x28,0x997c0881);
          if (pbVar9 == (byte *)0x0) {
            local_68 = 1;
          }
          else {
            local_68 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x15,0xe0f10f2f);
          if (pbVar9 == (byte *)0x0) {
            local_6c = 1;
          }
          else {
            local_6c = (uint)*pbVar9;
          }
          uVar30 = 9;
          uVar29 = 0xc994c199;
          goto LAB_02b9a7e8;
        }
        if (uVar13 < uVar18) {
          if (((uVar17 & 0xff) <= uVar18) && (uVar13 <= (uVar17 & 0xff))) goto LAB_02b9a734;
        }
        else if (uVar13 != uVar18) {
          if (((uVar17 - 1 & 0xff) < uVar18) || ((uVar17 & 0xff) < 0xd && uVar13 <= (uVar17 & 0xff))
             ) goto LAB_02b9a734;
        }
      }
      else {
        if ((DAT_05642a20 & 1) == 0) {
          DAT_05642a24 = -1;
          DAT_05642a2c = 0xffffffffffffffff;
          DAT_05642af4._0_4_ = 0xffffffff;
          DAT_05642a34 = 0xffffffffffffffff;
          DAT_05642a3c = 0xffffffffffffffff;
          DAT_05642b04 = 0xffffffff;
          DAT_05642a44 = -1;
          DAT_05642a4c = 0xffffffffffffffff;
          DAT_05642a54 = 0xffffffffffffffff;
          DAT_05642a5c = 0xffffffffffffffff;
          DAT_05642a64 = 0xffffffffffffffff;
          DAT_05642a6c = 0xffffffffffffffff;
          DAT_05642a74 = -1;
          DAT_05642a7c = 0xffffffffffffffff;
          DAT_05642a84 = 0xffffffffffffffff;
          DAT_05642a8c = -1;
          DAT_05642a94 = 0xffffffffffffffff;
          DAT_05642a9c = 0xffffffffffffffff;
          DAT_05642aa4 = -1;
          DAT_05642aac = 0xffffffffffffffff;
          DAT_05642ab4 = 0xffffffffffffffff;
          DAT_05642abc = -1;
          DAT_05642ac4 = 0xffffffffffffffff;
          DAT_05642acc = 0xffffffffffffffff;
          DAT_05642ad4 = -1;
          DAT_05642adc = 0xffffffffffffffff;
          DAT_05642ae4 = 0xffffffffffffffff;
          DAT_05642aec = -1;
          DAT_05642af4 = 0xffffffffffffffff;
          DAT_05642afc = 0xffffffffffffffff;
          DAT_05642a20 = 1;
LAB_02b9a2a4:
          uVar13 = (uint)DAT_05642af4;
          if (puVar28 != puVar14) {
            do {
              if (uVar13 != 0xffffffff) goto LAB_02b9a2ac;
              lVar1 = 0xc;
              if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
              if (lVar1 == 0) goto LAB_02b9a2ac;
              uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
              DAT_05642af4 = CONCAT44(DAT_05642af4._4_4_,0xfffffffe);
              if (uVar25 == 0) goto LAB_02b9a2ac;
              puVar26 = (uint *)(lVar1 + 4);
              while (puVar26[-1] != 0xd492b5f) {
                puVar26 = puVar26 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_02b9a2ac;
              }
              uVar13 = *puVar26;
              uVar19 = 0;
              if (uVar13 != 0xffffffff) {
                uVar19 = uVar13;
              }
              DAT_05642af4 = CONCAT44(DAT_05642af4._4_4_,uVar19);
            } while ((int)uVar19 < 0);
            pbVar9 = (byte *)((long)puVar28 + (ulong)uVar19);
            if (pbVar9 != (byte *)0x0) goto LAB_02b9a1d8;
          }
LAB_02b9a2ac:
          uVar13 = 1;
        }
        else {
          if ((int)(uint)DAT_05642af4 < 0) goto LAB_02b9a2a4;
          pbVar9 = (byte *)((long)puVar28 + (DAT_05642af4 & 0xffffffff));
          if (pbVar9 == (byte *)0x0) goto LAB_02b9a2ac;
LAB_02b9a1d8:
          uVar13 = (uint)*pbVar9;
        }
        puVar14 = (uint *)(ulong)*puVar28;
        if (*puVar28 == 0) {
          uVar22 = 2;
          uVar18 = 1;
          uVar19 = 1;
        }
        else {
          if ((int)(uint)DAT_05642ac4 < 0) {
            uVar19 = (uint)DAT_05642ac4;
            if (puVar28 != puVar14) {
              do {
                if (uVar19 != 0xffffffff) goto LAB_02b9a37c;
                lVar1 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                if (lVar1 == 0) goto LAB_02b9a37c;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                DAT_05642ac4 = CONCAT44(DAT_05642ac4._4_4_,0xfffffffe);
                if (uVar25 == 0) goto LAB_02b9a37c;
                puVar26 = (uint *)(lVar1 + 4);
                while (puVar26[-1] != 0x997c0881) {
                  puVar26 = puVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02b9a37c;
                }
                uVar19 = *puVar26;
                uVar18 = 0;
                if (uVar19 != 0xffffffff) {
                  uVar18 = uVar19;
                }
                DAT_05642ac4 = CONCAT44(DAT_05642ac4._4_4_,uVar18);
              } while ((int)uVar18 < 0);
              goto LAB_02b9a2c8;
            }
LAB_02b9a37c:
            uVar19 = 1;
          }
          else {
            uVar18 = (uint)DAT_05642ac4;
LAB_02b9a2c8:
            if ((byte *)((long)puVar28 + (ulong)uVar18) == (byte *)0x0) goto LAB_02b9a37c;
            uVar19 = (uint)*(byte *)((long)puVar28 + (ulong)uVar18);
          }
          puVar14 = (uint *)(ulong)*puVar28;
          if (*puVar28 == 0) {
            uVar22 = 2;
            uVar18 = 1;
          }
          else {
            if (DAT_05642a74 < 0) {
              uVar18 = DAT_05642a74._4_4_;
              if (puVar28 != puVar14) {
                do {
                  if (uVar18 != 0xffffffff) goto LAB_02b9a6ac;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b9a6ac;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642a74 = CONCAT44(0xfffffffe,(uint)DAT_05642a74);
                  if (uVar25 == 0) goto LAB_02b9a6ac;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0xe0f10f2f) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b9a6ac;
                  }
                  uVar18 = *puVar26;
                  uVar22 = 0;
                  if (uVar18 != 0xffffffff) {
                    uVar22 = uVar18;
                  }
                  DAT_05642a74 = CONCAT44(uVar22,(uint)DAT_05642a74);
                } while ((int)uVar22 < 0);
                goto LAB_02b9a398;
              }
LAB_02b9a6ac:
              uVar18 = 1;
            }
            else {
              uVar22 = DAT_05642a74._4_4_;
LAB_02b9a398:
              if ((byte *)((long)puVar28 + (ulong)uVar22) == (byte *)0x0) goto LAB_02b9a6ac;
              uVar18 = (uint)*(byte *)((long)puVar28 + (ulong)uVar22);
            }
            puVar14 = (uint *)(ulong)*puVar28;
            if (*puVar28 != 0) {
              if (DAT_05642a44 < 0) {
                uVar23 = DAT_05642a44._4_4_;
                if (puVar28 == puVar14) goto LAB_02b9a6e0;
                do {
                  if (uVar23 != 0xffffffff) {
LAB_02b9b270:
                    uVar22 = 2;
                    goto LAB_02b9a6e4;
                  }
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
                  if (lVar1 == 0) goto LAB_02b9b270;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
                  DAT_05642a44 = CONCAT44(0xfffffffe,(uint)DAT_05642a44);
                  if (uVar25 == 0) goto LAB_02b9b270;
                  puVar26 = (uint *)(lVar1 + 4);
                  while (puVar26[-1] != 0xc994c199) {
                    puVar26 = puVar26 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_02b9b270;
                  }
                  uVar23 = *puVar26;
                  uVar22 = 0;
                  if (uVar23 != 0xffffffff) {
                    uVar22 = uVar23;
                  }
                  DAT_05642a44 = CONCAT44(uVar22,(uint)DAT_05642a44);
                } while ((int)uVar22 < 0);
              }
              else {
                uVar22 = DAT_05642a44._4_4_;
              }
              if ((byte *)((long)puVar28 + (ulong)uVar22) != (byte *)0x0) {
                uVar22 = (uint)*(byte *)((long)puVar28 + (ulong)uVar22);
                goto LAB_02b9a6e4;
              }
            }
LAB_02b9a6e0:
            uVar22 = 2;
          }
        }
LAB_02b9a6e4:
        bVar5 = uVar13 == uVar18;
        bVar6 = uVar13 != (uVar17 & 0xff);
        if ((bVar6) || (uVar13 == uVar18)) {
          bVar7 = uVar18 != (uVar17 & 0xff);
          if ((bVar7) || (uVar13 == uVar18)) goto LAB_02b9a208;
          if (uVar32 <= uVar22) goto LAB_02b9a734;
        }
        else if (uVar19 <= uVar32) goto LAB_02b9a734;
      }
    }
LAB_02b9a7f0:
    if (2 < bVar3) {
      if (uVar24 == 0) {
        if (bVar4) {
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2f,0x2d851f09);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x23,0xb9b03cd7);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
              if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                  ((local_6c & 0xff) < uVar19)) ||
                 ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                if ((local_70 & 0xff) < (local_6c & 0xff)) {
                  if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                  goto LAB_02b9b328;
                }
                else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                        (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                         ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9b328;
                goto LAB_02b9b54c;
              }
            }
            else if ((local_6c & 0xff) < uVar19) goto LAB_02b9b54c;
          }
          else if (uVar19 < local_68) goto LAB_02b9b54c;
LAB_02b9b328:
          puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,0x10,0xc03d3b79);
          if (puVar10 == (undefined1 *)0x0) {
            uVar31 = 1;
          }
          else {
            uVar31 = *puVar10;
          }
          puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,4,0xe958f5cf);
          if (puVar10 == (undefined1 *)0x0) {
            uVar12 = 2;
          }
          else {
            uVar12 = *puVar10;
          }
          uVar25 = FUN_02b9cdc4(uVar31,uVar12,local_70,local_68,local_6c,local_6c);
          if ((uVar25 & 1) == 0) goto LAB_02b9b54c;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2f,0x2d851f09);
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x23,0xb9b03cd7);
        if (pbVar9 == (byte *)0x0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x10,0xc03d3b79);
        if (pbVar9 == (byte *)0x0) {
          uVar18 = 1;
        }
        else {
          uVar18 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,4,0xe958f5cf);
        if (pbVar9 == (byte *)0x0) {
          uVar22 = 2;
        }
        else {
          uVar22 = (uint)*pbVar9;
        }
        if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
          if (uVar32 < uVar19) goto LAB_02b9b550;
        }
        else {
          if ((uVar18 != (uVar17 & 0xff)) || (uVar13 == uVar18)) {
            if (((uVar18 == (uVar17 & 0xff)) &&
                (((uVar13 == (uVar17 & 0xff) && (uVar19 <= uVar32)) && (uVar13 == uVar18)))) &&
               (uVar32 <= uVar22)) goto LAB_02b9b49c;
            if (uVar13 < uVar18) {
              if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9b49c;
            }
            else if ((uVar13 != uVar18) &&
                    ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                     ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9b49c;
            goto LAB_02b9b550;
          }
          if (uVar22 < uVar32) goto LAB_02b9b550;
        }
LAB_02b9b49c:
        pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1d,0x7cc105e6);
        pcVar15 = "tv_program_0";
        if (pcVar11 != (char *)0x0) {
          pcVar15 = pcVar11;
        }
        FUN_038d1270(param_2,pcVar15);
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2f,0x2d851f09);
        if (pbVar9 == (byte *)0x0) {
          local_70 = 1;
        }
        else {
          local_70 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x23,0xb9b03cd7);
        if (pbVar9 == (byte *)0x0) {
          local_68 = 1;
        }
        else {
          local_68 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x10,0xc03d3b79);
        if (pbVar9 == (byte *)0x0) {
          local_6c = 1;
        }
        else {
          local_6c = (uint)*pbVar9;
        }
        uVar30 = 4;
        uVar29 = 0xe958f5cf;
LAB_02b9b548:
        FUN_02ba1f10(puVar28,uVar30,uVar29);
LAB_02b9b54c:
        bVar4 = true;
      }
      else {
        if (!bVar4) goto LAB_02b9aec8;
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x35,0xb5f54c3a);
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x29,0x21c06fe4);
        if (pbVar9 == (byte *)0x0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (uint)*pbVar9;
        }
        if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
          if (((local_70 & 0xff) != (local_6c & 0xff)) && (uVar13 == (local_6c & 0xff))) {
            if ((local_6c & 0xff) < uVar19) goto LAB_02b9b54c;
            goto LAB_02b9a904;
          }
          if ((((uVar13 == (local_6c & 0xff)) && (uVar13 == (local_70 & 0xff))) &&
              (uVar19 <= (local_6c & 0xff))) &&
             ((local_68 <= uVar19 && ((local_70 & 0xff) == (local_6c & 0xff))))) goto LAB_02b9a904;
          if ((local_70 & 0xff) < (local_6c & 0xff)) {
            if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff))) goto LAB_02b9a904;
          }
          else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                  (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                   ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9a904;
          goto LAB_02b9b54c;
        }
        if (uVar19 < local_68) goto LAB_02b9b54c;
LAB_02b9a904:
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x16,0x584d684a);
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,10,0x7128a6fc);
        if (pbVar9 == (byte *)0x0) {
          uVar19 = 2;
        }
        else {
          uVar19 = (uint)*pbVar9;
        }
        if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
          if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
            if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                ((local_6c & 0xff) < uVar19)) ||
               ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
              if ((local_70 & 0xff) < (local_6c & 0xff)) {
                if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                goto LAB_02b9aec8;
              }
              else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                      (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                       ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9aec8;
              goto LAB_02b9b54c;
            }
          }
          else if ((local_6c & 0xff) < uVar19) goto LAB_02b9b54c;
        }
        else if (uVar19 < local_68) goto LAB_02b9b54c;
LAB_02b9aec8:
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x35,0xb5f54c3a);
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x29,0x21c06fe4);
        if (pbVar9 == (byte *)0x0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x16,0x584d684a);
        if (pbVar9 == (byte *)0x0) {
          uVar18 = 1;
        }
        else {
          uVar18 = (uint)*pbVar9;
        }
        pbVar9 = (byte *)FUN_02ba1f10(puVar28,10,0x7128a6fc);
        if (pbVar9 == (byte *)0x0) {
          uVar22 = 2;
        }
        else {
          uVar22 = (uint)*pbVar9;
        }
        if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
          if (uVar32 < uVar19) goto LAB_02b9b550;
LAB_02b9afd8:
          pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1d,0x7cc105e6);
          pcVar15 = "tv_program_0";
          if (pcVar11 != (char *)0x0) {
            pcVar15 = pcVar11;
          }
          FUN_038d1270(param_2,pcVar15);
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x35,0xb5f54c3a);
          if (pbVar9 == (byte *)0x0) {
            local_70 = 1;
          }
          else {
            local_70 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x29,0x21c06fe4);
          if (pbVar9 == (byte *)0x0) {
            local_68 = 1;
          }
          else {
            local_68 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x16,0x584d684a);
          if (pbVar9 == (byte *)0x0) {
            local_6c = 1;
          }
          else {
            local_6c = (uint)*pbVar9;
          }
          uVar30 = 10;
          uVar29 = 0x7128a6fc;
          goto LAB_02b9b548;
        }
        if ((uVar18 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
          if (uVar22 < uVar32) goto LAB_02b9b550;
          goto LAB_02b9afd8;
        }
        if ((((uVar18 == (uVar17 & 0xff)) && (uVar13 == (uVar17 & 0xff))) && (uVar19 <= uVar32)) &&
           ((uVar13 == uVar18 && (uVar32 <= uVar22)))) goto LAB_02b9afd8;
        if (uVar13 < uVar18) {
          if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9afd8;
        }
        else if ((uVar13 != uVar18) &&
                ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                 ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9afd8;
      }
LAB_02b9b550:
      if (3 < bVar3) {
        if (uVar24 == 0) {
          if (bVar4) {
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x30,0xb05227b0);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x24,0x2467046e);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
                if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                    ((local_6c & 0xff) < uVar19)) ||
                   ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                  if ((local_70 & 0xff) < (local_6c & 0xff)) {
                    if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                    goto LAB_02b9b7a4;
                  }
                  else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                          (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                           ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9b7a4;
                  goto LAB_02b9bd58;
                }
              }
              else if ((local_6c & 0xff) < uVar19) goto LAB_02b9bd58;
            }
            else if (uVar19 < local_68) goto LAB_02b9bd58;
LAB_02b9b7a4:
            puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,0x11,0x5dea03c0);
            if (puVar10 == (undefined1 *)0x0) {
              uVar31 = 1;
            }
            else {
              uVar31 = *puVar10;
            }
            puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,5,0x748fcd76);
            if (puVar10 == (undefined1 *)0x0) {
              uVar12 = 2;
            }
            else {
              uVar12 = *puVar10;
            }
            uVar25 = FUN_02b9cdc4(uVar31,uVar12,local_70,local_68,local_6c,local_6c);
            if ((uVar25 & 1) == 0) goto LAB_02b9bd58;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x30,0xb05227b0);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x24,0x2467046e);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x11,0x5dea03c0);
          if (pbVar9 == (byte *)0x0) {
            uVar18 = 1;
          }
          else {
            uVar18 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,5,0x748fcd76);
          if (pbVar9 == (byte *)0x0) {
            uVar22 = 2;
          }
          else {
            uVar22 = (uint)*pbVar9;
          }
          if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
            if (uVar32 < uVar19) goto joined_r0x02b9c704;
          }
          else {
            if ((uVar18 != (uVar17 & 0xff)) || (uVar13 == uVar18)) {
              if (((uVar18 == (uVar17 & 0xff)) &&
                  (((uVar13 == (uVar17 & 0xff) && (uVar19 <= uVar32)) && (uVar13 == uVar18)))) &&
                 (uVar32 <= uVar22)) goto LAB_02b9bca8;
              if (uVar13 < uVar18) {
                if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9bca8;
              }
              else if ((uVar13 != uVar18) &&
                      ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                       ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9bca8;
              goto joined_r0x02b9c704;
            }
            if (uVar22 < uVar32) goto joined_r0x02b9c704;
          }
LAB_02b9bca8:
          pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1e,0x9e1d1e9f);
          pcVar15 = "tv_program_0";
          if (pcVar11 != (char *)0x0) {
            pcVar15 = pcVar11;
          }
          FUN_038d1270(param_2,pcVar15);
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x30,0xb05227b0);
          if (pbVar9 == (byte *)0x0) {
            local_70 = 1;
          }
          else {
            local_70 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x24,0x2467046e);
          if (pbVar9 == (byte *)0x0) {
            local_68 = 1;
          }
          else {
            local_68 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x11,0x5dea03c0);
          if (pbVar9 == (byte *)0x0) {
            local_6c = 1;
          }
          else {
            local_6c = (uint)*pbVar9;
          }
          uVar30 = 5;
          uVar29 = 0x748fcd76;
LAB_02b9bd54:
          FUN_02ba1f10(puVar28,uVar30,uVar29);
LAB_02b9bd58:
          bVar4 = true;
        }
        else {
          if (!bVar4) goto LAB_02b9b7f4;
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x36,0x28227483);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2a,0xbc17575d);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
            if (((local_70 & 0xff) != (local_6c & 0xff)) && (uVar13 == (local_6c & 0xff))) {
              if ((local_6c & 0xff) < uVar19) goto LAB_02b9bd58;
              goto LAB_02b9b660;
            }
            if ((((uVar13 == (local_6c & 0xff)) && (uVar13 == (local_70 & 0xff))) &&
                (uVar19 <= (local_6c & 0xff))) &&
               ((local_68 <= uVar19 && ((local_70 & 0xff) == (local_6c & 0xff)))))
            goto LAB_02b9b660;
            if ((local_70 & 0xff) < (local_6c & 0xff)) {
              if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff))) goto LAB_02b9b660;
            }
            else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                    (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                     ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9b660;
            goto LAB_02b9bd58;
          }
          if (uVar19 < local_68) goto LAB_02b9bd58;
LAB_02b9b660:
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x17,0xc59a50f3);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xb,0xecff9e45);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 2;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
              if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                  ((local_6c & 0xff) < uVar19)) ||
                 ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                if ((local_70 & 0xff) < (local_6c & 0xff)) {
                  if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                  goto LAB_02b9b7f4;
                }
                else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                        (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                         ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9b7f4;
                goto LAB_02b9bd58;
              }
            }
            else if ((local_6c & 0xff) < uVar19) goto LAB_02b9bd58;
          }
          else if (uVar19 < local_68) goto LAB_02b9bd58;
LAB_02b9b7f4:
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x36,0x28227483);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2a,0xbc17575d);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x17,0xc59a50f3);
          if (pbVar9 == (byte *)0x0) {
            uVar18 = 1;
          }
          else {
            uVar18 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xb,0xecff9e45);
          if (pbVar9 == (byte *)0x0) {
            uVar22 = 2;
          }
          else {
            uVar22 = (uint)*pbVar9;
          }
          if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
            if (uVar32 < uVar19) goto joined_r0x02b9c704;
LAB_02b9b900:
            pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1e,0x9e1d1e9f);
            pcVar15 = "tv_program_0";
            if (pcVar11 != (char *)0x0) {
              pcVar15 = pcVar11;
            }
            FUN_038d1270(param_2,pcVar15);
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x36,0x28227483);
            if (pbVar9 == (byte *)0x0) {
              local_70 = 1;
            }
            else {
              local_70 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2a,0xbc17575d);
            if (pbVar9 == (byte *)0x0) {
              local_68 = 1;
            }
            else {
              local_68 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x17,0xc59a50f3);
            if (pbVar9 == (byte *)0x0) {
              local_6c = 1;
            }
            else {
              local_6c = (uint)*pbVar9;
            }
            uVar30 = 0xb;
            uVar29 = 0xecff9e45;
            goto LAB_02b9bd54;
          }
          if ((uVar18 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
            if (uVar22 < uVar32) goto joined_r0x02b9c704;
            goto LAB_02b9b900;
          }
          if ((((uVar18 == (uVar17 & 0xff)) && (uVar13 == (uVar17 & 0xff))) && (uVar19 <= uVar32))
             && ((uVar13 == uVar18 && (uVar32 <= uVar22)))) goto LAB_02b9b900;
          if (uVar13 < uVar18) {
            if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9b900;
          }
          else if ((uVar13 != uVar18) &&
                  ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                   ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9b900;
        }
joined_r0x02b9c704:
        if (4 < bVar3) {
          if (uVar24 == 0) {
            if (bVar4) {
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x31,0x8ee40d5);
              if (pbVar9 == (byte *)0x0) {
                uVar13 = 1;
              }
              else {
                uVar13 = (uint)*pbVar9;
              }
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x25,0x9cdb630b);
              if (pbVar9 == (byte *)0x0) {
                uVar19 = 1;
              }
              else {
                uVar19 = (uint)*pbVar9;
              }
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
                if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
                  if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                      ((local_6c & 0xff) < uVar19)) ||
                     ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                    if ((local_70 & 0xff) < (local_6c & 0xff)) {
                      if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                      goto LAB_02b9bfd4;
                    }
                    else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                            (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                             ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9bfd4;
                    goto LAB_02b9c470;
                  }
                }
                else if ((local_6c & 0xff) < uVar19) goto LAB_02b9c470;
              }
              else if (uVar19 < local_68) goto LAB_02b9c470;
LAB_02b9bfd4:
              puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,0x12,0xe55664a5);
              if (puVar10 == (undefined1 *)0x0) {
                uVar31 = 1;
              }
              else {
                uVar31 = *puVar10;
              }
              puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,6,0xcc33aa13);
              if (puVar10 == (undefined1 *)0x0) {
                uVar12 = 2;
              }
              else {
                uVar12 = *puVar10;
              }
              uVar25 = FUN_02b9cdc4(uVar31,uVar12,local_70,local_68,local_6c,local_6c);
              if ((uVar25 & 1) == 0) goto LAB_02b9c470;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x31,0x8ee40d5);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x25,0x9cdb630b);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x12,0xe55664a5);
            if (pbVar9 == (byte *)0x0) {
              uVar18 = 1;
            }
            else {
              uVar18 = (uint)*pbVar9;
            }
            uVar29 = 0xcc33aa13;
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,6,0xcc33aa13);
            if (pbVar9 == (byte *)0x0) {
              uVar22 = 2;
            }
            else {
              uVar22 = (uint)*pbVar9;
            }
            if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
              if (uVar32 < uVar19) goto LAB_02b9c474;
            }
            else {
              if ((uVar18 != (uVar17 & 0xff)) || (uVar13 == uVar18)) {
                if ((uVar18 == (uVar17 & 0xff)) &&
                   ((((uVar13 == (uVar17 & 0xff) && (uVar19 <= uVar32)) && (uVar13 == uVar18)) &&
                    (uVar32 <= uVar22)))) goto LAB_02b9c3c0;
                if (uVar13 < uVar18) {
                  if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9c3c0;
                }
                else if ((uVar13 != uVar18) &&
                        ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                         ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9c3c0;
                goto LAB_02b9c474;
              }
              if (uVar22 < uVar32) goto LAB_02b9c474;
            }
LAB_02b9c3c0:
            pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1f,0x71df75a1);
            pcVar15 = "tv_program_0";
            if (pcVar11 != (char *)0x0) {
              pcVar15 = pcVar11;
            }
            FUN_038d1270(param_2,pcVar15);
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x31,0x8ee40d5);
            if (pbVar9 == (byte *)0x0) {
              local_70 = 1;
            }
            else {
              local_70 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x25,0x9cdb630b);
            if (pbVar9 == (byte *)0x0) {
              local_68 = 1;
            }
            else {
              local_68 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x12,0xe55664a5);
            if (pbVar9 == (byte *)0x0) {
              local_6c = 1;
            }
            else {
              local_6c = (uint)*pbVar9;
            }
            uVar30 = 6;
LAB_02b9c46c:
            FUN_02ba1f10(puVar28,uVar30,uVar29);
LAB_02b9c470:
            bVar4 = true;
          }
          else {
            if (!bVar4) goto LAB_02b9c05c;
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x37,0x909e13e6);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2b,&PTR_LAB_04ab3038);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
              if (((local_70 & 0xff) != (local_6c & 0xff)) && (uVar13 == (local_6c & 0xff))) {
                if ((local_6c & 0xff) < uVar19) goto LAB_02b9c470;
                goto LAB_02b9be68;
              }
              if ((((uVar13 == (local_6c & 0xff)) && (uVar13 == (local_70 & 0xff))) &&
                  (uVar19 <= (local_6c & 0xff))) &&
                 ((local_68 <= uVar19 && ((local_70 & 0xff) == (local_6c & 0xff)))))
              goto LAB_02b9be68;
              if ((local_70 & 0xff) < (local_6c & 0xff)) {
                if (((local_70 & 0xff) <= uVar13) && (uVar13 <= (local_6c & 0xff)))
                goto LAB_02b9be68;
              }
              else if (((local_70 & 0xff) != (local_6c & 0xff)) &&
                      (((local_70 & 0xff) <= uVar13 && uVar13 < 0xd ||
                       ((uVar13 - 1 & 0xff) < (local_6c & 0xff))))) goto LAB_02b9be68;
              goto LAB_02b9c470;
            }
            if (uVar19 < local_68) goto LAB_02b9c470;
LAB_02b9be68:
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x18,0x7d263796);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xc,0x5443f920);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 2;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) {
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar13 != (local_6c & 0xff))) {
                if ((((uVar13 != (local_6c & 0xff)) || (uVar13 != (local_70 & 0xff))) ||
                    ((local_6c & 0xff) < uVar19)) ||
                   ((uVar19 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                  if ((local_70 & 0xff) < (local_6c & 0xff)) {
                    if (uVar13 < (local_70 & 0xff)) goto LAB_02b9cca8;
                    if ((local_6c & 0xff) < uVar13) goto LAB_02b9c470;
                  }
                  else {
                    if ((local_70 & 0xff) == (local_6c & 0xff)) {
LAB_02b9cca8:
                      bVar4 = true;
                      goto LAB_02b9c474;
                    }
                    if ((uVar13 < (local_70 & 0xff) || 0xc < uVar13) &&
                       ((local_6c & 0xff) <= (uVar13 - 1 & 0xff))) goto LAB_02b9c470;
                  }
                }
              }
              else if ((local_6c & 0xff) < uVar19) goto LAB_02b9c470;
            }
            else if (uVar19 < local_68) goto LAB_02b9c470;
LAB_02b9c05c:
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x37,0x909e13e6);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2b,&PTR_LAB_04ab3038);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x18,0x7d263796);
            if (pbVar9 == (byte *)0x0) {
              uVar18 = 1;
            }
            else {
              uVar18 = (uint)*pbVar9;
            }
            uVar29 = 0x5443f920;
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xc,0x5443f920);
            if (pbVar9 == (byte *)0x0) {
              uVar22 = 2;
            }
            else {
              uVar22 = (uint)*pbVar9;
            }
            if ((uVar13 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
              if (uVar32 < uVar19) goto LAB_02b9c474;
LAB_02b9c16c:
              pcVar11 = (char *)FUN_02ba1f10(puVar28,0x1f,0x71df75a1);
              pcVar15 = "tv_program_0";
              if (pcVar11 != (char *)0x0) {
                pcVar15 = pcVar11;
              }
              FUN_038d1270(param_2,pcVar15);
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x37,0x909e13e6);
              if (pbVar9 == (byte *)0x0) {
                local_70 = 1;
              }
              else {
                local_70 = (uint)*pbVar9;
              }
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2b,&PTR_LAB_04ab3038);
              if (pbVar9 == (byte *)0x0) {
                local_68 = 1;
              }
              else {
                local_68 = (uint)*pbVar9;
              }
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x18,0x7d263796);
              if (pbVar9 == (byte *)0x0) {
                local_6c = 1;
              }
              else {
                local_6c = (uint)*pbVar9;
              }
              uVar30 = 0xc;
              goto LAB_02b9c46c;
            }
            if ((uVar18 == (uVar17 & 0xff)) && (uVar13 != uVar18)) {
              if (uVar22 < uVar32) goto LAB_02b9c474;
              goto LAB_02b9c16c;
            }
            if ((((uVar18 == (uVar17 & 0xff)) && (uVar13 == (uVar17 & 0xff))) && (uVar19 <= uVar32))
               && ((uVar13 == uVar18 && (uVar32 <= uVar22)))) goto LAB_02b9c16c;
            if (uVar13 < uVar18) {
              if ((uVar13 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar18)) goto LAB_02b9c16c;
            }
            else if ((uVar13 != uVar18) &&
                    ((uVar13 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                     ((uVar17 - 1 & 0xff) < uVar18)))) goto LAB_02b9c16c;
          }
LAB_02b9c474:
          if (bVar3 < 6) goto joined_r0x02b9ccd8;
          if (uVar24 == 0) {
            if (bVar4) {
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x32,0x1a5bef3b);
              if (pbVar9 == (byte *)0x0) {
                uVar24 = 1;
              }
              else {
                uVar24 = (uint)*pbVar9;
              }
              pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x26,0x8e6ecce5);
              if (pbVar9 == (byte *)0x0) {
                uVar13 = 1;
              }
              else {
                uVar13 = (uint)*pbVar9;
              }
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) {
                if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_6c & 0xff))) {
                  if ((((uVar24 != (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) ||
                      ((local_6c & 0xff) < uVar13)) ||
                     ((uVar13 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                    if ((local_70 & 0xff) < (local_6c & 0xff)) {
                      if (uVar24 < (local_70 & 0xff)) {
                        return;
                      }
                      if ((local_6c & 0xff) < uVar24) {
                        return;
                      }
                    }
                    else {
                      if ((local_70 & 0xff) == (local_6c & 0xff)) {
                        return;
                      }
                      if ((uVar24 < (local_70 & 0xff) || 0xc < uVar24) &&
                         ((local_6c & 0xff) <= (uVar24 - 1 & 0xff))) {
                        return;
                      }
                    }
                  }
                }
                else if ((local_6c & 0xff) < uVar13) {
                  return;
                }
              }
              else if (uVar13 < local_68) {
                return;
              }
              puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,0x13,0xf7e3cb4b);
              if (puVar10 == (undefined1 *)0x0) {
                uVar31 = 1;
              }
              else {
                uVar31 = *puVar10;
              }
              puVar10 = (undefined1 *)FUN_02ba1f10(puVar28,7,0xde8605fd);
              if (puVar10 == (undefined1 *)0x0) {
                uVar12 = 2;
              }
              else {
                uVar12 = *puVar10;
              }
              uVar25 = FUN_02b9cdc4(uVar31,uVar12,local_70,local_68,local_6c,local_6c);
              if ((uVar25 & 1) == 0) {
                return;
              }
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x32,0x1a5bef3b);
            if (pbVar9 == (byte *)0x0) {
              uVar24 = 1;
            }
            else {
              uVar24 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x26,0x8e6ecce5);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x13,0xf7e3cb4b);
            if (pbVar9 == (byte *)0x0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (uint)*pbVar9;
            }
            uVar29 = 0xde8605fd;
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,7,0xde8605fd);
            if (pbVar9 == (byte *)0x0) {
              uVar18 = 2;
            }
            else {
              uVar18 = (uint)*pbVar9;
            }
            if ((uVar24 == (uVar17 & 0xff)) && (uVar24 != uVar19)) {
              if (uVar32 < uVar13) goto joined_r0x02b9ccd8;
            }
            else if ((uVar19 == (uVar17 & 0xff)) && (uVar24 != uVar19)) {
              if (uVar18 < uVar32) goto joined_r0x02b9ccd8;
            }
            else if ((((uVar19 != (uVar17 & 0xff)) || (uVar24 != (uVar17 & 0xff))) ||
                     (uVar32 < uVar13)) || ((uVar24 != uVar19 || (uVar18 < uVar32)))) {
              if (uVar24 < uVar19) {
                if ((uVar24 <= (uVar17 & 0xff)) && ((uVar17 & 0xff) <= uVar19)) goto LAB_02b9cce0;
              }
              else if ((uVar24 != uVar19) &&
                      ((uVar24 <= (uVar17 & 0xff) && (uVar17 & 0xff) < 0xd ||
                       ((uVar17 - 1 & 0xff) < uVar19)))) goto LAB_02b9cce0;
              goto joined_r0x02b9ccd8;
            }
LAB_02b9cce0:
            pcVar11 = (char *)FUN_02ba1f10(puVar28,0x20,0x9ae8cea2);
            pcVar15 = "tv_program_0";
            if (pcVar11 != (char *)0x0) {
              pcVar15 = pcVar11;
            }
            FUN_038d1270(param_2,pcVar15);
            FUN_02ba1f10(puVar28,0x32,0x1a5bef3b);
            FUN_02ba1f10(puVar28,0x26,0x8e6ecce5);
            FUN_02ba1f10(puVar28,0x13,0xf7e3cb4b);
            uVar30 = 7;
            goto LAB_02b9cd48;
          }
          if (bVar4) {
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x38,0x822bbc08);
            if (pbVar9 == (byte *)0x0) {
              uVar24 = 1;
            }
            else {
              uVar24 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2c,0x161e9fd6);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 1;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) {
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_6c & 0xff))) {
                if ((((uVar24 != (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) ||
                    ((local_6c & 0xff) < uVar13)) ||
                   ((uVar13 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                  if ((local_70 & 0xff) < (local_6c & 0xff)) {
                    if (uVar24 < (local_70 & 0xff)) {
                      return;
                    }
                    if ((local_6c & 0xff) < uVar24) {
                      return;
                    }
                  }
                  else {
                    if ((local_70 & 0xff) == (local_6c & 0xff)) {
                      return;
                    }
                    if ((uVar24 < (local_70 & 0xff) || 0xc < uVar24) &&
                       ((local_6c & 0xff) <= (uVar24 - 1 & 0xff))) {
                      return;
                    }
                  }
                }
              }
              else if ((local_6c & 0xff) < uVar13) {
                return;
              }
            }
            else if (uVar13 < local_68) {
              return;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x19,0x6f939878);
            if (pbVar9 == (byte *)0x0) {
              uVar24 = 1;
            }
            else {
              uVar24 = (uint)*pbVar9;
            }
            pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xd,0x46f656ce);
            if (pbVar9 == (byte *)0x0) {
              uVar13 = 2;
            }
            else {
              uVar13 = (uint)*pbVar9;
            }
            if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) {
              if (((local_70 & 0xff) == (local_6c & 0xff)) || (uVar24 != (local_6c & 0xff))) {
                if ((((uVar24 != (local_6c & 0xff)) || (uVar24 != (local_70 & 0xff))) ||
                    ((local_6c & 0xff) < uVar13)) ||
                   ((uVar13 < local_68 || ((local_70 & 0xff) != (local_6c & 0xff))))) {
                  if ((local_70 & 0xff) < (local_6c & 0xff)) {
                    if (uVar24 < (local_70 & 0xff)) {
                      return;
                    }
                    if ((local_6c & 0xff) < uVar24) {
                      return;
                    }
                  }
                  else {
                    if ((local_70 & 0xff) == (local_6c & 0xff)) {
                      return;
                    }
                    if ((uVar24 < (local_70 & 0xff) || 0xc < uVar24) &&
                       ((local_6c & 0xff) <= (uVar24 - 1 & 0xff))) {
                      return;
                    }
                  }
                }
              }
              else if ((local_6c & 0xff) < uVar13) {
                return;
              }
            }
            else if (uVar13 < local_68) {
              return;
            }
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x38,0x822bbc08);
          if (pbVar9 == (byte *)0x0) {
            uVar24 = 1;
          }
          else {
            uVar24 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x2c,0x161e9fd6);
          if (pbVar9 == (byte *)0x0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (uint)*pbVar9;
          }
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0x19,0x6f939878);
          if (pbVar9 == (byte *)0x0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (uint)*pbVar9;
          }
          uVar29 = 0x46f656ce;
          pbVar9 = (byte *)FUN_02ba1f10(puVar28,0xd,0x46f656ce);
          if (pbVar9 == (byte *)0x0) {
            uVar18 = 2;
          }
          else {
            uVar18 = (uint)*pbVar9;
          }
          if ((uVar24 == (uVar17 & 0xff)) && (uVar24 != uVar19)) {
            if (uVar32 < uVar13) goto joined_r0x02b9ccd8;
          }
          else if ((uVar19 == (uVar17 & 0xff)) && (uVar24 != uVar19)) {
            if (uVar18 < uVar32) goto joined_r0x02b9ccd8;
          }
          else if ((((uVar19 != (uVar17 & 0xff)) || (uVar24 != (uVar17 & 0xff))) ||
                   (uVar32 < uVar13)) || ((uVar24 != uVar19 || (uVar18 < uVar32)))) {
            if (uVar24 < uVar19) {
              if (((uVar17 & 0xff) < uVar24) || (uVar19 < (uVar17 & 0xff))) goto joined_r0x02b9ccd8;
            }
            else if ((uVar24 == uVar19) ||
                    (((uVar17 & 0xff) < uVar24 || 0xc < (uVar17 & 0xff) &&
                     (uVar19 <= (uVar17 - 1 & 0xff))))) {
joined_r0x02b9ccd8:
              if (bVar4) {
                return;
              }
              goto LAB_02b98f68;
            }
          }
          pcVar11 = (char *)FUN_02ba1f10(puVar28,0x20,0x9ae8cea2);
          pcVar15 = "tv_program_0";
          if (pcVar11 != (char *)0x0) {
            pcVar15 = pcVar11;
          }
          FUN_038d1270(param_2,pcVar15);
          FUN_02ba1f10(puVar28,0x38,0x822bbc08);
          FUN_02ba1f10(puVar28,0x2c,0x161e9fd6);
          FUN_02ba1f10(puVar28,0x19,0x6f939878);
          uVar30 = 0xd;
LAB_02b9cd48:
          FUN_02ba1f10(puVar28,uVar30,uVar29);
          return;
        }
      }
    }
  }
  if (bVar4) {
    return;
  }
LAB_02b98f68:
  puVar14 = (uint *)(ulong)*puVar28;
  if (*puVar28 != 0) {
    if ((DAT_05642a20 & 1) == 0) {
      DAT_05642a20 = 1;
      DAT_05642b04 = 0xffffffff;
      DAT_05642a24 = -1;
      DAT_05642a2c = 0xffffffffffffffff;
      DAT_05642a8c._0_4_ = 0xffffffff;
      DAT_05642a34 = 0xffffffffffffffff;
      DAT_05642a3c = 0xffffffffffffffff;
      DAT_05642a44 = -1;
      DAT_05642a4c = 0xffffffffffffffff;
      DAT_05642a54 = 0xffffffffffffffff;
      DAT_05642a5c = 0xffffffffffffffff;
      DAT_05642a64 = 0xffffffffffffffff;
      DAT_05642a6c = 0xffffffffffffffff;
      DAT_05642a74 = -1;
      DAT_05642a7c = 0xffffffffffffffff;
      DAT_05642a84 = 0xffffffffffffffff;
      DAT_05642a8c = -1;
      DAT_05642a94 = 0xffffffffffffffff;
      DAT_05642a9c = 0xffffffffffffffff;
      DAT_05642aa4 = -1;
      DAT_05642aac = 0xffffffffffffffff;
      DAT_05642ab4 = 0xffffffffffffffff;
      DAT_05642abc = -1;
      DAT_05642ac4 = 0xffffffffffffffff;
      DAT_05642acc = 0xffffffffffffffff;
      DAT_05642ad4 = -1;
      DAT_05642adc = 0xffffffffffffffff;
      DAT_05642ae4 = 0xffffffffffffffff;
      DAT_05642aec = -1;
      DAT_05642af4 = 0xffffffffffffffff;
      DAT_05642afc = 0xffffffffffffffff;
LAB_02b99068:
      uVar13 = (uint)DAT_05642a8c;
      if (puVar28 == puVar14) goto LAB_02b99070;
      do {
        if (uVar13 != 0xffffffff) goto LAB_02b99070;
        lVar1 = 0xc;
        if (*(char *)((long)puVar28 + (10 - (long)puVar14)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar28 + (lVar1 - (long)puVar14);
        if (lVar1 == 0) goto LAB_02b99070;
        uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar14));
        DAT_05642a8c = CONCAT44(DAT_05642a8c._4_4_,0xfffffffe);
        if (uVar25 == 0) goto LAB_02b99070;
        puVar26 = (uint *)(lVar1 + 4);
        while (puVar26[-1] != 0xa88f23cf) {
          puVar26 = puVar26 + 2;
          uVar25 = uVar25 - 1;
          if (uVar25 == 0) goto LAB_02b99070;
        }
        uVar13 = *puVar26;
        uVar24 = 0;
        if (uVar13 != 0xffffffff) {
          uVar24 = uVar13;
        }
        DAT_05642a8c = CONCAT44(DAT_05642a8c._4_4_,uVar24);
      } while ((int)uVar24 < 0);
    }
    else {
      uVar24 = (uint)DAT_05642a8c;
      if ((int)(uint)DAT_05642a8c < 0) goto LAB_02b99068;
    }
    pcVar15 = (char *)((long)puVar28 + (ulong)uVar24);
    goto LAB_02b99074;
  }
  goto LAB_02b99070;
}

