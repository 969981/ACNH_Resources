
void FUN_01338160(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ushort uVar23;
  short sVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  ushort uVar28;
  uint *puVar29;
  char cVar30;
  int *piVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulong uVar34;
  short *psVar35;
  uint uStack_49a5c;
  undefined *puStack_49a40;
  char *pcStack_49a38;
  byte bStack_49a1d;
  undefined1 auStack_49980 [150576];
  void *pvStack_24d50;
  undefined *puStack_24d48;
  undefined1 *puStack_24d40;
  undefined4 uStack_24d38;
  undefined1 auStack_24d34 [127];
  undefined1 uStack_24cb5;
  undefined *puStack_24cb0;
  long lStack_24ca8;
  undefined *puStack_24ca0;
  long lStack_24c98;
  undefined8 uStack_24c90;
  undefined1 uStack_24b8d;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  
  if (param_2 != 0) {
    puStack_24cb0 = PTR_DAT_04bbc350 + 0x10;
    lVar26 = *(long *)PTR_DAT_04bb27a8;
    uVar25 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar26 + 0x1168);
    if ((uVar25 < *(uint *)(lVar26 + 0x1148)) &&
       (lStack_24ca8 = *(long *)(*(long *)(lVar26 + 0x1150) + (long)(int)uVar25 * 8),
       lStack_24ca8 != 0)) {
      uStack_24cb5 = 0;
      uStack_24d38 = 0x80;
      auStack_24d34[0] = 0;
      puStack_24d40 = auStack_24d34;
      puStack_24d48 = PTR_DAT_04bb2d88 + 0x10;
      FUN_0131c4d0(&puStack_24cb0,&puStack_24d48);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_49a38 = "FieldPresetParamsLandMakingHeap";
      puStack_49a40 = puVar1;
      plVar14 = (long *)FUN_038c6d48(0xe00000,&puStack_49a40,param_2,8,1,0);
      if (plVar14 == (long *)0x0) {
        lVar26 = 1;
      }
      else {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar26 = *(long *)(lVar15 + 0xa8);
        *(long **)(lVar15 + 0xa8) = plVar14;
      }
      FUN_00751ec0(&puStack_49a40,&DAT_05194bb0,&puStack_24d48,0);
      pcStack_98 = "mData";
      pcStack_88 = "PlacementDataBuffer";
      local_70 = 8;
      puStack_49a40 = PTR_DAT_04bbc400 + 0x10;
      puStack_78 = &DAT_0407ebb1;
      local_a0 = puVar1;
      local_90 = puVar1;
      local_80 = puVar1;
      memset(&puStack_24ca0,0,0x24c00);
      FUN_0132c2d0(auStack_49980,&local_a0,&puStack_24ca0,&puStack_49a40);
      puVar1 = PTR_DAT_04bbc408;
      uStack_24b8d = 0;
      lStack_24c98 = (long)&uStack_24c90 + 4;
      uStack_24c90 = CONCAT35(uStack_24c90._5_3_,0x100);
      puStack_24ca0 = PTR_DAT_04bb21f8 + 0x10;
      uVar16 = (**(code **)(puStack_49a40 + 0xf0))(&puStack_49a40,&puStack_24ca0,1);
      if ((uVar16 & 1) != 0) {
        FUN_03c27e60(&puStack_49a40,&puStack_24ca0,plVar14);
      }
      if ((bStack_49a1d & 1) != 0) {
        uVar16 = 0;
        puVar2 = (undefined8 *)(param_3 + 8);
        do {
          uVar34 = 0;
          do {
            plVar17 = (long *)(**(code **)*puVar2)(puVar2);
            uVar18 = (**(code **)(*plVar17 + 0x18))();
            if (uVar34 < (uVar18 & 0xffffffff)) {
              plVar17 = (long *)(**(code **)*puVar2)(puVar2);
              uVar18 = (**(code **)(*plVar17 + 0x20))();
              if (uVar16 < (uVar18 & 0xffffffff)) {
                plVar17 = (long *)(**(code **)*puVar2)(puVar2);
                uVar18 = (**(code **)(*plVar17 + 0x18))();
                uVar19 = (**(code **)(*plVar17 + 0x20))(plVar17);
                uVar33 = (undefined4)uVar34;
                if ((uVar18 & 0xffffffff) <= uVar34) {
                  uVar33 = 0;
                }
                uVar32 = (undefined4)uVar16;
                if ((uVar19 & 0xffffffff) <= uVar16) {
                  uVar32 = 0;
                }
                if ((plVar17[5] == 0) ||
                   (puVar20 = *(undefined8 **)(plVar17[5] + 0x10), puVar20 == (undefined8 *)0x0)) {
                  uStack_49a5c = 0;
                }
                else {
                  uStack_49a5c = (**(code **)*puVar20)();
                }
                lVar15 = uVar34 + uVar16 * 0x70;
                lVar21 = (**(code **)(puVar1 + 0x100))(auStack_49980);
                psVar35 = (short *)(lVar21 + 8 + lVar15 * 0xe);
                uVar25 = 0;
                do {
                  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar25);
                  lVar27 = plVar17[5];
                  psVar5 = psVar35 + (ulong)uVar25 * 3;
                  if (1 < uVar25) {
                    psVar5 = psVar35;
                  }
                  if (*psVar5 == -1) {
                    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
                      puStack_24ca0 = (undefined *)plVar17[1];
                      lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                      uStack_24c90 = 0xe;
                      (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                                (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                    }
                    lVar27 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)local_a0);
                    puVar7 = (undefined2 *)(lVar27 + plVar17[1]) +
                             ((ulong)local_a0 & 0xffffffff) * 3;
                    if (1 < (uint)local_a0) {
                      puVar7 = (undefined2 *)(lVar27 + plVar17[1]);
                    }
                    *puVar7 = 0;
                    lVar27 = plVar17[5];
                  }
                  else {
                    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
                      puStack_24ca0 = (undefined *)plVar17[1];
                      lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                      uStack_24c90 = 0xe;
                      (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                                (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                    }
                    lVar27 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)local_a0);
                    psVar6 = (short *)(lVar27 + plVar17[1]) + ((ulong)local_a0 & 0xffffffff) * 3;
                    if (1 < (uint)local_a0) {
                      psVar6 = (short *)(lVar27 + plVar17[1]);
                    }
                    *psVar6 = *psVar5;
                    lVar27 = plVar17[5];
                  }
                  if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
                    puStack_24ca0 = (undefined *)plVar17[1];
                    lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    uStack_24c90 = 0xe;
                    (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                              (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                  }
                  lVar27 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                  puVar13 = PTR_DAT_04bbbde0;
                  puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)local_a0);
                  puVar8 = (ushort *)(lVar27 + plVar17[1]) + ((ulong)local_a0 & 0xffffffff) * 3;
                  if (1 < (uint)local_a0) {
                    puVar8 = (ushort *)(lVar27 + plVar17[1]);
                  }
                  lVar27 = *(long *)PTR_DAT_04bb27a8;
                  uVar11 = (uint)*puVar8 - (uint)*(ushort *)(lVar27 + 0x408);
                  if ((uVar11 < *(uint *)(lVar27 + 1000)) &&
                     (puVar29 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar11 * 8),
                     puVar29 != (uint *)0x0)) {
                    uVar11 = *puVar29;
                    uVar23 = psVar5[1];
                    if (uVar11 != 0) {
                      cVar30 = *PTR_DAT_04bbbdd8;
                      do {
                        if (cVar30 == '\0') {
                          cVar30 = '\x01';
                          *PTR_DAT_04bbbdd8 = 1;
                          *(undefined8 *)(puVar13 + 0xa0) = 0xffffffffffffffff;
                          *(undefined8 *)puVar13 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x68) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x78) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x80) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x88) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x90) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x98) = 0xffffffffffffffff;
                          uVar11 = *puVar29;
                        }
                        else {
                          uVar9 = *(uint *)(puVar13 + 0x20);
                          if (-1 < (int)uVar9) {
                            uVar28 = 0;
                            if ((ushort *)((ulong)uVar9 + (long)puVar29) != (ushort *)0x0) {
                              uVar28 = *(ushort *)((ulong)uVar9 + (long)puVar29);
                            }
                            goto LAB_013388dc;
                          }
                          if (uVar9 != 0xffffffff) break;
                        }
                        puVar12 = (uint *)(ulong)uVar11;
                        if ((puVar12 == (uint *)0x0) || (puVar29 == puVar12)) break;
                        lVar27 = 0xc;
                        if (*(char *)((long)puVar29 + (10 - (long)puVar12)) != '\0') {
                          lVar27 = 0x1c;
                        }
                        lVar27 = (long)puVar29 + (lVar27 - (long)puVar12);
                        if (lVar27 == 0) break;
                        uVar18 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar12));
                        *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                        if (uVar18 == 0) break;
                        piVar31 = (int *)(lVar27 + 4);
                        while (piVar31[-1] != -0x38cc5589) {
                          piVar31 = piVar31 + 2;
                          uVar18 = uVar18 - 1;
                          if (uVar18 == 0) goto LAB_013388c0;
                        }
                        iVar4 = 0;
                        if (*piVar31 != -1) {
                          iVar4 = *piVar31;
                        }
                        *(int *)(puVar13 + 0x20) = iVar4;
                        uVar11 = *puVar29;
                        if (uVar11 == 0) break;
                      } while( true );
                    }
LAB_013388c0:
                    uVar28 = 0;
                  }
                  else {
                    uVar28 = 0;
                    uVar23 = psVar5[1];
                  }
LAB_013388dc:
                  lVar27 = plVar17[5];
                  if (uVar28 < uVar23) {
                    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
                      puStack_24ca0 = (undefined *)plVar17[1];
                      lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                      uStack_24c90 = 0xe;
                      (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                                (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                    }
                    lVar22 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    sVar24 = 0;
                    puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)local_a0);
                    lVar27 = lVar22 + plVar17[1] + ((ulong)local_a0 & 0xffffffff) * 6;
                    if (1 < (uint)local_a0) {
                      lVar27 = lVar22 + plVar17[1];
                    }
                  }
                  else {
                    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x20) != 0)) {
                      puStack_24ca0 = (undefined *)plVar17[1];
                      lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                      uStack_24c90 = 0xe;
                      (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                                (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                    }
                    lVar22 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)local_a0);
                    lVar27 = lVar22 + plVar17[1] + ((ulong)local_a0 & 0xffffffff) * 6;
                    if (1 < (uint)local_a0) {
                      lVar27 = lVar22 + plVar17[1];
                    }
                    sVar24 = psVar5[1];
                  }
                  *(short *)(lVar27 + 2) = sVar24;
                  if ((plVar17[5] != 0) && (*(long *)(plVar17[5] + 0x20) != 0)) {
                    puStack_24ca0 = (undefined *)plVar17[1];
                    lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                    uStack_24c90 = 0xe;
                    (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                              (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                  }
                  lVar22 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                  lVar27 = lVar22 + plVar17[1] + ((ulong)local_a0 & 0xffffffff) * 6;
                  if (1 < (uint)local_a0) {
                    lVar27 = lVar22 + plVar17[1];
                  }
                  puStack_24ca0 =
                       (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)*(byte *)(psVar5 + 2));
                  *(byte *)(lVar27 + 4) = *(byte *)(psVar5 + 2);
                  bVar3 = uVar25 == 0;
                  uVar25 = 1;
                } while (bVar3);
                if ((plVar17[5] != 0) && (*(long *)(plVar17[5] + 0x20) != 0)) {
                  puStack_24ca0 = (undefined *)plVar17[1];
                  lStack_24c98 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                  uStack_24c90 = 0xe;
                  (**(code **)(**(long **)(plVar17[5] + 0x20) + 0x20))
                            (*(long **)(plVar17[5] + 0x20),&puStack_24ca0);
                }
                lVar27 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar33,uVar32);
                bVar10 = *(byte *)(lVar21 + 8 + lVar15 * 0xe + 0xc);
                puStack_24ca0 = (undefined *)CONCAT44(puStack_24ca0._4_4_,(uint)bVar10);
                *(byte *)(lVar27 + plVar17[1] + 0xc) = bVar10;
                if ((((uStack_49a5c & 1) != 0) && (plVar17[5] != 0)) &&
                   (puVar20 = *(undefined8 **)(plVar17[5] + 0x18), puVar20 != (undefined8 *)0x0)) {
                  (**(code **)*puVar20)();
                }
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != 0x70);
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x60);
      }
      (**(code **)(puStack_49a40 + 0x20))(&puStack_49a40);
      puStack_49a40 = PTR_DAT_04bbc400 + 0x10;
      uVar16 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                         (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pvStack_24d50);
      if (((uVar16 & 1) != 0) && (pvStack_24d50 != (void *)0x0)) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvStack_24d50);
        }
        else {
          plVar17 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvStack_24d50);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x38))(plVar17,pvStack_24d50);
          }
        }
      }
      if (lVar26 != 1) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar15 + 0xa8) = lVar26;
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
    }
  }
  return;
}

