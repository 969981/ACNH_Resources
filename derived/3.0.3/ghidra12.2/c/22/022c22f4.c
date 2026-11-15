
void FUN_022c22f4(long param_1,byte *param_2,long param_3,char *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  byte local_150 [4];
  byte local_14c [4];
  undefined *local_148;
  long local_140;
  undefined1 local_138;
  byte local_137;
  undefined *local_130;
  long local_128;
  undefined1 local_120;
  byte local_11f;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  byte local_104 [4];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [4];
  uint local_f4;
  undefined8 local_f0;
  short local_e8 [4];
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  byte local_d0;
  undefined *local_c8;
  uint local_c0;
  uint local_bc;
  byte local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  uStack_d4 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_d8 = 1;
  local_d0 = FUN_017baf44();
  local_d0 = local_d0 & 1;
  local_e0 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a5033c(local_e8,&local_e0,0,param_3,0);
  if ((((local_e8[0] != -2) && (lVar22 = *(long *)PTR_DAT_04bbbc68, lVar22 != 0)) &&
      (*(long *)(lVar22 + 0xb0) != 0)) &&
     (((*(long *)(*(long *)(lVar22 + 0xb0) + 8) != 0 && (*(long *)(lVar22 + 0x488) != 0)) &&
      ((*(long *)(*(long *)(lVar22 + 0x488) + 8) != 0 &&
       ((*(long *)(lVar22 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar22 + 0x2b0) + 8) != 0)))))))) {
    uVar9 = FUN_0277d6c4(local_e8);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      FUN_0124c030(auStack_100,local_e8);
      iVar10 = FUN_0123db50(auStack_f8,local_f0);
      if (iVar10 - 0x23U < 9) {
        if (((*(byte *)(param_1 + 0x1c) >> 3 & 1) == 0) ||
           (((iVar10 = FUN_0277d6c4(auStack_f8), iVar10 != 0xeb78 &&
             (iVar10 = FUN_0277d6c4(auStack_f8), iVar10 != 0xeb77)) &&
            (iVar10 = FUN_0277d6c4(auStack_f8), iVar10 != 0xeb76)))) {
          if ((local_f4 >> 0xe & 1) + (local_f4 >> 0xd & 1) +
              (local_f4 >> 0xf & 1) + (local_f4 >> 0x10 & 1) +
              (local_f4 >> 0x11 & 1) + (local_f4 >> 0x12 & 1) + (local_f4 >> 0x13 & 1) +
              (local_f4 >> 0x14 & 1) + (local_f4 >> 0x15 & 1) + (local_f4 >> 0x16 & 1) == 10) {
            return;
          }
          bVar7 = false;
        }
        else {
          iVar10 = FUN_0277d6c4(auStack_f8);
          if (((iVar10 == 0xeb78) || (iVar10 = FUN_0277d6c4(auStack_f8), iVar10 == 0xeb77)) ||
             (iVar10 = FUN_0277d6c4(auStack_f8), iVar10 == 0xeb76)) {
            local_f4 = local_f4 | 0x1000000;
          }
          bVar7 = true;
        }
        local_104[0] = *param_2;
        if (7 < local_104[0]) {
          local_104[0] = 0xff;
        }
        lVar22 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_104,1);
        if (lVar22 != 0) {
          if ((*(long **)(lVar22 + 0x17bb0) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar22 + 0x17bb0), puVar11 == (undefined8 *)0x0))
          {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)*puVar11)();
            uVar12 = uVar12 & 0xffffffff;
          }
          if (*(long *)PTR_DAT_04bb46b0 == 0) {
            lVar17 = 0;
          }
          else {
            lVar13 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                 0x30))();
            lVar17 = 0;
            if (lVar13 != 0) {
              lVar17 = lVar13 + 0x276cb0;
            }
          }
          if (*(long **)(lVar17 + 0x98) == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            puVar11 = (undefined8 *)**(long **)(lVar17 + 0x98);
            uVar14 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar14 = (**(code **)*puVar11)();
            }
          }
          lVar16 = 0;
          uVar23 = 0;
          lVar13 = lVar22 + 0x17b88;
          bVar8 = true;
          piVar4 = (int *)(*(long *)(lVar22 + 0x17b98) + *(long *)(lVar22 + 0x17b90));
          do {
            piVar15 = (int *)(*(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78) + lVar16);
            iVar10 = *piVar15;
            if (piVar15[7] == 0 || iVar10 == 0) goto LAB_022c26a8;
            if ((piVar15[7] == piVar4[7]) &&
               ((*(long *)(piVar4 + 8) == *(long *)(piVar15 + 8) &&
                *(long *)(piVar4 + 10) == *(long *)(piVar15 + 10)) && piVar4[0xc] == piVar15[0xc]))
            {
              if (((short)piVar15[1] == 0) || ((short)piVar4[1] == 0)) {
                if (iVar10 == *piVar4) goto LAB_022c26a8;
              }
              else if ((iVar10 == *piVar4) &&
                      ((*(long *)(piVar4 + 1) == *(long *)(piVar15 + 1) &&
                       *(long *)(piVar4 + 3) == *(long *)(piVar15 + 3)) && piVar4[5] == piVar15[5]))
              goto LAB_022c26a8;
            }
            bVar8 = uVar23 < 9;
            lVar16 = lVar16 + 0x38;
            uVar23 = uVar23 + 1;
          } while (lVar16 != 0x230);
          uVar23 = 0xffffffff;
LAB_022c26a8:
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x98) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar17 + 0x98) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
          if ((((uVar12 & 1) != 0) && (*(long *)(lVar22 + 0x17bb0) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar22 + 0x17bb0) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          if (bVar7 || bVar8) {
            uVar9 = (uint)uVar23;
            bVar1 = bVar7;
            if (9 < uVar9) {
              bVar1 = true;
            }
            if (((bVar1) || (((local_f4 >> 0xd) >> (ulong)(uVar9 & 0x1f) & 1) == 0)) &&
               ((int)DAT_0547b48c <= DAT_0547b490)) {
              puVar2 = PTR_DAT_04bc2e90 + 0x10;
              puVar3 = PTR_DAT_04bb2010 + 0x10;
              uVar24 = DAT_0547b48c;
              do {
                local_bc = 0;
                local_b7 = 0;
                local_b8 = *PTR_DAT_04bb32e0;
                local_ac = 0xfffe;
                local_b4 = *(undefined4 *)PTR_DAT_04bb37e0;
                uStack_b0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                if (7 < local_b8) {
                  local_b8 = 0xff;
                }
                local_c8 = puVar2;
                local_c0 = uVar24;
                FUN_0277d4ac(&local_ac);
                local_a4 = 0xfffe;
                FUN_0277d4ac(&local_a4);
                local_9c = 0;
                uStack_94 = 0;
                local_8c = 0;
                local_70 = 0;
                local_6c = 0;
                uStack_80 = 0;
                local_78 = 0x2400000000;
                bVar6 = *param_2;
                local_bc = (uint)bVar6;
                if (7 < local_bc) {
                  local_bc = 0xffffffff;
                }
                if (bVar6 < 8) {
                  local_b8 = bVar6;
                }
                local_b7 = 1;
                local_130 = (undefined *)CONCAT44(local_130._4_4_,local_c0);
                lVar17 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
                uVar5 = local_c0;
                if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_c0) {
                  uVar5 = 0;
                }
                puVar18 = *(uint **)(lVar17 + (long)(int)uVar5 * 0x18 + 0x10);
                local_88 = puVar3;
                if ((0 < (int)*puVar18) &&
                   (local_bc < *(uint *)(lVar17 + (long)(int)uVar5 * 0x18 + 8))) {
                  uVar12 = 0;
                  lVar17 = 0x2c;
                  do {
                    if (((uVar12 < puVar18[(long)(int)local_bc * 4]) &&
                        (*(long *)(puVar18 + (long)(int)local_bc * 4 + 2) != 0)) &&
                       (*(int *)(*(long *)(puVar18 + (long)(int)local_bc * 4 + 2) + lVar17) == 0)) {
                      if (-1 < (int)uVar12) {
                        if (uVar24 == 0) {
                          return;
                        }
                        FUN_022a6204(&local_c8,uVar24);
                        bVar6 = *param_2;
                        local_bc = (uint)bVar6;
                        if (7 < local_bc) {
                          local_bc = 0xffffffff;
                        }
                        if (bVar6 < 8) {
                          local_b8 = bVar6;
                        }
                        local_b7 = 1;
                        if (bVar8) {
                          if (uVar9 < 10) {
                            local_f4 = local_f4 | 0x2000 << (ulong)(uVar9 & 0x1f) & 0x7fe000U;
                          }
                          if (*param_4 == '\0') {
                            iVar10 = 1;
                            *param_4 = '\x01';
                            goto LAB_022c2954;
                          }
                        }
                        iVar10 = 0;
LAB_022c2954:
                        if (bVar7) {
                          FUN_0124f928(auStack_100);
                        }
                        local_110 = *(undefined4 *)(param_3 + 8);
                        uStack_10c = *(undefined4 *)(param_3 + 0xc);
                        local_118 = PTR_DAT_04bb2010 + 0x10;
                        uVar12 = FUN_022bdbf0(&local_c8,auStack_f8,&local_118);
                        if ((uVar12 & 1) == 0) {
                          if (iVar10 == 0) {
                            return;
                          }
                          local_150[0] = *param_2;
                          if (7 < local_150[0]) {
                            local_150[0] = 0xff;
                          }
                          FUN_0122b534(local_150);
                          return;
                        }
                        local_120 = 1;
                        local_128 = lVar13;
                        if (*(long **)(lVar22 + 0x17bb0) == (long *)0x0) {
                          local_11f = 0;
                        }
                        else {
                          puVar11 = (undefined8 *)**(long **)(lVar22 + 0x17bb0);
                          local_11f = 0;
                          if (puVar11 != (undefined8 *)0x0) {
                            local_11f = (**(code **)*puVar11)();
                          }
                        }
                        local_11f = local_11f & 1;
                        local_130 = PTR_DAT_04bb4c18 + 0x10;
                        lVar13 = (**(code **)(*(long *)**(undefined8 **)
                                                         (*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))
                                           ();
                        local_138 = 0;
                        lVar17 = 0;
                        if (lVar13 != 0) {
                          lVar17 = lVar13 + 0x276cb0;
                        }
                        local_140 = lVar17 + 0x70;
                        if (*(long *)(lVar17 + 0x98) == 0) {
                          local_137 = 0;
                        }
                        else {
                          puVar11 = *(undefined8 **)(*(long *)(lVar17 + 0x98) + 0x10);
                          local_137 = 0;
                          if (puVar11 != (undefined8 *)0x0) {
                            local_137 = (**(code **)*puVar11)();
                          }
                        }
                        local_137 = local_137 & 1;
                        local_148 = PTR_DAT_04bb4bf0 + 0x10;
                        piVar15 = (int *)FUN_01228ec8(&local_148);
                        piVar4 = piVar15 + (uVar23 & 0xffffffff) * 0xe;
                        if (9 < uVar9) {
                          piVar4 = piVar15;
                        }
                        if ((piVar4[7] == 0) || (*piVar4 == 0)) {
                          puVar11 = (undefined8 *)
                                    (*(long *)(lVar22 + 0x17b98) + *(long *)(lVar22 + 0x17b90));
                          uVar19 = *puVar11;
                          uVar21 = puVar11[1];
                          uVar20 = puVar11[2];
                          *(undefined1 *)(piVar4 + 6) = *(undefined1 *)(puVar11 + 3);
                          *(undefined8 *)(piVar4 + 2) = uVar21;
                          *(undefined8 *)(piVar4 + 4) = uVar20;
                          *(undefined8 *)piVar4 = uVar19;
                          uVar19 = *(undefined8 *)((long)puVar11 + 0x1c);
                          uVar21 = *(undefined8 *)((long)puVar11 + 0x2c);
                          *(undefined8 *)(piVar4 + 9) = *(undefined8 *)((long)puVar11 + 0x24);
                          *(undefined8 *)(piVar4 + 0xb) = uVar21;
                          *(undefined8 *)(piVar4 + 7) = uVar19;
                          uVar9 = *(uint *)((long)puVar11 + 0x34);
                          if (1 < uVar9) {
                            uVar9 = 0;
                          }
                          piVar4[0xd] = uVar9;
                        }
                        local_14c[0] = *param_2;
                        if (7 < local_14c[0]) {
                          local_14c[0] = 0xff;
                        }
                        FUN_01228ec8(&local_148);
                        uVar9 = FUN_0275c134();
                        FUN_0122b490(local_14c,uVar23 & 0xffffffff,(uVar9 ^ 0xffffffff) & 1,iVar10);
                        FUN_02640184(&local_148);
                        FUN_02640184(&local_130);
                        return;
                      }
                      break;
                    }
                    uVar12 = uVar12 + 1;
                    lVar17 = lVar17 + 0x518;
                  } while (*puVar18 != uVar12);
                }
                bVar1 = (int)uVar24 < DAT_0547b490;
                uVar24 = uVar24 + 1;
              } while (bVar1);
            }
          }
        }
      }
    }
  }
  return;
}

