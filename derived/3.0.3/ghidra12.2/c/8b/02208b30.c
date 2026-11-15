
void FUN_02208b30(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined3 uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  short *psVar13;
  uint *puVar14;
  long *plVar15;
  bool bVar16;
  uint *puVar17;
  byte bVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined8 local_88;
  uint *local_80;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_64;
  
  plVar19 = (long *)PTR_DAT_04bb46b0;
  if (*param_1 != 0xffffffff && *(long *)PTR_DAT_04bb46b0 != 0) {
    FUN_02705554(&local_70,0,1);
    puVar9 = PTR_DAT_04bb43c0;
    if (local_6c != 8) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      uVar21 = local_6c;
      do {
        local_74 = uVar21;
        if (7 < uVar21) {
          local_74 = 0xffffffff;
        }
        if ((*plVar19 != 0) && (lVar12 = FUN_026eec4c(), lVar12 != 0)) {
          local_88 = "UpgradePocket40";
          local_90 = puVar1;
          iVar10 = FUN_0274b8d0(lVar12,&local_90);
          if (iVar10 == 0) {
            local_90 = PTR_DAT_04bb2020 + 0x10;
            local_88 = "UpgradePocket30";
            iVar10 = FUN_0274b8d0(lVar12,&local_90);
            uVar11 = (uint)(iVar10 != 0);
          }
          else {
            uVar11 = 2;
          }
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar11);
          uVar22 = 0;
          uVar3 = 0x1e;
          if (uVar11 != 1) {
            uVar3 = 0x14;
          }
          uVar4 = 0x28;
          if (uVar11 != 2) {
            uVar4 = uVar3;
          }
          do {
            psVar13 = (short *)FUN_026759e0(lVar12,uVar22);
            if ((*psVar13 != -2) && (iVar10 = FUN_0277d6c4(), iVar10 == 0x362d)) {
              lVar20 = *(long *)puVar9;
              uVar8 = *(undefined3 *)psVar13;
              bVar7 = *(byte *)((long)psVar13 + 3);
              uVar6 = *(undefined4 *)(psVar13 + 2);
              local_88 = *(char **)psVar13;
              local_80 = (uint *)0x0;
              local_90 = puVar2;
              uVar11 = FUN_0277d6c4(&local_88);
              if (*(long *)puVar9 == 0) {
LAB_02208e64:
                puVar14 = (uint *)0x0;
                bVar16 = true;
                local_64 = 0xbc;
              }
              else {
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((*(uint *)(lVar20 + 0x1d8) <= uVar11) ||
                   (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                goto LAB_02208e64;
                lVar20 = *(long *)PTR_DAT_04bc0428;
                uVar11 = FUN_0277d6c4(psVar13);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((*(uint *)(lVar20 + 0x1d8) <= uVar11) ||
                   (puVar14 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8),
                   puVar14 == (uint *)0x0)) goto LAB_02208e64;
                local_64 = 0;
                uVar11 = *puVar14;
                local_80 = puVar14;
                if ((uVar11 == 0) || (puVar14 == (uint *)(ulong)uVar11)) {
LAB_02208f6c:
                  bVar16 = false;
                }
                else {
                  puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
                  local_64 = 0;
                  if (*puVar17 == 0) goto LAB_02208f6c;
                  uVar11 = puVar17[1];
                  if ((uVar11 == 0) || ((ulong)(ushort)puVar17[2] == 0)) {
LAB_02208f68:
                    local_64 = 0;
                    goto LAB_02208f6c;
                  }
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar17 + lVar20 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar20 == 0) goto LAB_02208f68;
                  uVar5 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar14 - lVar20) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if (*(uint *)PTR_DAT_04bc00c8 <= uVar5) goto LAB_02208f68;
                  local_64 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2);
                  if (local_64 < 0xbd) goto LAB_02208f6c;
                  bVar16 = false;
                  local_64 = 0;
                }
              }
              local_98 = 0x8e;
              uVar11 = 0xffffffff;
              if ((local_64 == 0x8e) && (uVar11 = (bVar7 >> 3) - 1, 9 < uVar11)) {
                uVar11 = 0xffffffff;
              }
              if (uVar11 == *param_1) {
                local_64 = 0xbc;
                if (!bVar16) {
                  uVar11 = *puVar14;
                  local_64 = 0;
                  if ((uVar11 != 0) && (puVar14 != (uint *)(ulong)uVar11)) {
                    puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
                    local_64 = 0;
                    if (*puVar17 != 0) {
                      uVar11 = puVar17[1];
                      if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                        lVar20 = 0xc;
                        if (*(char *)((long)puVar17 + 10) != '\0') {
                          lVar20 = 0x1c;
                        }
                        lVar20 = (long)puVar17 + lVar20 + (ulong)(ushort)puVar17[2] * 8;
                        if (lVar20 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar11 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar14 - lVar20) / (ulong)uVar11);
                          }
                          if (*puVar17 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_64 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar5 * 2), local_64 < 0xbd))
                          goto LAB_02208f48;
                        }
                      }
                      local_64 = 0;
                    }
                  }
                }
LAB_02208f48:
                bVar18 = bVar7;
                if (local_64 == 0x8e) {
                  bVar18 = bVar7 | 4;
                  local_88 = (char *)(CONCAT44(local_88._4_4_,CONCAT13(bVar7,(undefined3)local_88))
                                     | 0x4000000);
                }
                local_98 = CONCAT13(bVar18,uVar8);
                local_94 = uVar6;
                FUN_02674a80(&local_74,uVar22 & 0xffffffff,PTR_DAT_04bb37e0,1,0);
                FUN_02674a80(&local_74,uVar22,&local_98,1,0);
              }
            }
            plVar19 = (long *)PTR_DAT_04bb46b0;
            uVar22 = uVar22 + 1;
          } while (uVar4 != uVar22);
          if (uVar21 < 8) {
            lVar12 = *(long *)PTR_DAT_04bb46b0;
            if (lVar12 != 0) {
              (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x18))();
              if ((local_70 == 0) && ((*(byte *)(lVar12 + 0x453) & 1) != 0)) {
                lVar12 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x130) + 0x18))();
              }
              else {
                lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x18))();
                lVar12 = lVar12 + 0x110;
              }
              if (uVar21 != 7) {
                uVar22 = (ulong)uVar21;
                plVar15 = (long *)(lVar12 + (ulong)uVar21 * 0x48 + 0x1e3400);
                do {
                  if ((uVar22 < 7) && (plVar15[-1] != 0 || *plVar15 != 0)) {
                    uVar21 = (int)uVar22 + 1;
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  plVar15 = plVar15 + 9;
                  uVar21 = 8;
                } while (uVar22 != 7);
                goto LAB_02208bf8;
              }
            }
            uVar21 = 8;
          }
        }
LAB_02208bf8:
      } while (uVar21 != 8);
    }
  }
  return;
}

