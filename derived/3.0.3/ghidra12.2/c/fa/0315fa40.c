
void FUN_0315fa40(long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  byte bVar16;
  undefined *puVar17;
  ushort uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar9 = PTR_DAT_04bc4d98;
  puVar8 = PTR_DAT_04bc4d90;
  lVar27 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  uVar6 = *(uint *)(lVar27 + 0x2f8);
  if (0 < (int)uVar6) {
    uVar23 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      if ((long)uVar23 < (long)(int)*(uint *)(lVar27 + 0x208) && uVar23 < *(uint *)(lVar27 + 0x208))
      {
        puVar24 = *(undefined8 **)(*(long *)(lVar27 + 0x210) + uVar23 * 8);
      }
      else {
        puVar24 = (undefined8 *)0x0;
      }
      if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
        *(undefined **)puVar8 = puVar1;
        __cxa_guard_release(puVar9);
      }
      if ((puVar24 != (undefined8 *)0x0) &&
         (uVar15 = (**(code **)*puVar24)(puVar24,puVar8), (uVar15 & 1) != 0)) {
        bVar7 = 0;
        FUN_0315e2f0(&local_7c,param_1,(int)uVar23 + param_2);
        puVar5 = PTR_DAT_04bb43c0;
        lVar26 = *(long *)PTR_DAT_04bb43c0;
        uVar13 = FUN_0277d6c4(&local_78);
        puVar4 = PTR_DAT_04bb5ce0;
        puVar17 = PTR_DAT_04bb3170;
        lVar22 = *(long *)puVar5;
        if (lVar22 == 0) {
LAB_0315fce0:
          if (local_7c == 4) {
            uVar13 = *(uint *)(param_1 + 0x1c1f0);
            if ((int)uVar13 < 0) {
LAB_0315fd8c:
              iVar14 = -1;
            }
            else {
              iVar14 = -1;
              if ((int)uVar13 < *(int *)(param_1 + 0x1c1d8)) {
                lVar22 = param_1 + 0x1c1c8;
                if (6 < uVar13) {
                  uVar20 = uVar13 + 1 & 0xfffffff8;
                  do {
                    uVar20 = uVar20 - 8;
                    lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar22 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar20 != 0);
                }
                for (uVar13 = uVar13 + 1 & 7; uVar13 != 0; uVar13 = uVar13 - 1) {
                  lVar22 = *(long *)(lVar22 + 8);
                }
                if (lVar22 == 0) goto LAB_0315fd8c;
                lVar22 = lVar22 - *(int *)(param_1 + 0x1c1dc);
                iVar14 = -1;
                if (lVar22 != 0) {
                  iVar14 = *(int *)(lVar22 + 0x270);
                }
              }
            }
            local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar14);
            if (iVar14 == 8) {
              puVar5 = PTR_DAT_04bb3170;
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
              }
              FUN_007ef010(&local_98,puVar5);
              if ((short)local_98 == *(short *)puVar17) {
                lVar22 = *(long *)puVar4;
                if (lVar22 == 0) {
                  iVar14 = -1;
                }
                else {
                  iVar14 = *(int *)(lVar22 + 0xfa8);
                }
                bVar12 = iVar14 != -1;
              }
              else {
                bVar12 = 1;
              }
            }
            else {
              if (iVar14 != 9) goto LAB_0315fe90;
              puVar5 = PTR_DAT_04bb3170;
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
              }
              FUN_007ef010(&local_98,puVar5);
              lVar22 = *(long *)puVar4;
              if ((short)local_98 == *(short *)puVar17) {
                if (lVar22 == 0) {
                  iVar14 = -1;
                }
                else {
                  iVar14 = *(int *)(lVar22 + 0xf90);
                }
                bVar10 = iVar14 != -1;
              }
              else {
                bVar10 = true;
              }
              puVar5 = puVar17;
              if (lVar22 != 0) {
                puVar5 = (undefined *)(lVar22 + 0xe9c);
              }
              FUN_007ef010(&local_98,puVar5);
              if ((short)local_98 == *(short *)puVar17) {
                if (*(long *)PTR_DAT_04bb5ce0 == 0) {
                  iVar14 = -1;
                }
                else {
                  iVar14 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf9c);
                }
                bVar11 = iVar14 != -1;
              }
              else {
                bVar11 = true;
              }
              bVar12 = bVar10 | bVar11;
              bVar7 = 2;
              if ((bVar10 & bVar11) == 0) {
                bVar7 = bVar10 ^ 1;
              }
            }
          }
          else {
LAB_0315fe90:
            bVar12 = 0;
          }
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar13) ||
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0315fce0;
          local_88 = 0;
          local_90 = local_78;
          uStack_8c = uStack_74;
          local_98 = puVar3;
          uVar13 = FUN_0277d6c4(&local_90);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0315fe28:
            uVar18 = 0xbc;
          }
          else {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            uVar18 = 0xbc;
            if (uVar13 < *(uint *)(lVar22 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar13 * 8) == 0)
              goto LAB_0315fe28;
              lVar22 = *(long *)PTR_DAT_04bc0428;
              uVar13 = FUN_0277d6c4(&local_78);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              uVar18 = 0xbc;
              if (uVar13 < *(uint *)(lVar22 + 0x1d8)) {
                puVar19 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar13 * 8);
                if (puVar19 == (uint *)0x0) goto LAB_0315fe28;
                uVar13 = *puVar19;
                uVar18 = 0;
                if ((uVar13 != 0) && (puVar19 != (uint *)(ulong)uVar13)) {
                  puVar21 = (uint *)((long)puVar19 - (long)(ulong)uVar13);
                  uVar18 = 0;
                  if (*puVar21 != 0) {
                    uVar13 = puVar21[1];
                    if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                      lVar22 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar22 = 0x1c;
                      }
                      lVar22 = (long)puVar21 + lVar22 + (ulong)(ushort)puVar21[2] * 8;
                      if (lVar22 != 0) {
                        uVar20 = 0;
                        if ((ulong)uVar13 != 0) {
                          uVar20 = (uint)((ulong)((long)puVar19 - lVar22) / (ulong)uVar13);
                        }
                        if (*puVar21 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar18 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                           uVar18 < 0xbd)) goto LAB_0315fe2c;
                      }
                    }
                    uVar18 = 0;
                  }
                }
              }
            }
          }
LAB_0315fe2c:
          puVar5 = PTR_DAT_04bb5ce0;
          puVar17 = PTR_DAT_04bb37e0;
          if (uVar18 != 5) {
            if (uVar18 == 4) {
              puVar4 = PTR_DAT_04bb37e0;
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar4 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
              }
              bVar12 = FUN_0277d7b4(&local_78,puVar4);
              lVar22 = *(long *)puVar5;
              if (lVar22 != 0) {
                if (*(char *)(lVar22 + 0xe9e) != '\0') {
                  puVar17 = (undefined *)(lVar22 + 0xe94);
                }
              }
              uVar15 = FUN_0277d7b4(&local_78,puVar17);
              if ((uVar15 & 1) != 0) {
                bVar12 = 1;
                bVar7 = 1;
              }
              goto LAB_0315fe94;
            }
            goto LAB_0315fe90;
          }
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            puVar17 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
          }
          bVar12 = FUN_0277d7b4(&local_78,puVar17);
        }
LAB_0315fe94:
        if ((param_3 & 1) == 0) {
          bVar16 = bVar12 & 1;
LAB_0315fec0:
          FUN_030bfe80(puVar24,bVar16);
        }
        else {
          if ((bVar12 & 1) == 0) {
            bVar16 = 0;
            goto LAB_0315fec0;
          }
          FUN_030bffe0(puVar24,1);
        }
        lVar22 = 0x30;
        if (*(uint *)(puVar24 + 0x5d) < 7) {
          lVar22 = 0;
        }
        plVar25 = *(long **)(puVar24[0x5e] + lVar22);
        if (plVar25 != (long *)0x0 && ((bVar12 ^ 0xff) & 1) == 0) {
          local_90 = 0x14;
          local_98 = puVar2;
          (**(code **)(*plVar25 + 0x18))(plVar25,&local_98);
          (**(code **)(plVar25[3] + 0x158))((float)bVar7,plVar25[1]);
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar6);
  }
  return;
}

