
void FUN_036c96f0(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ushort uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ushort uVar23;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined **local_a0;
  long lStack_98;
  long local_90;
  int local_80;
  uint local_7c;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb2720;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  iVar12 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar12 = 0;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar15 + 0x338));
      iVar11 = FUN_006bd550(*puVar13,0);
      iVar12 = 0;
      if (iVar11 == 0x758f7eaf) {
        iVar12 = 0;
        if (*(long *)puVar3 != 0) {
          lVar15 = *(long *)(*(long *)puVar3 + 0x330);
          iVar12 = 0;
          if (lVar15 != 0) {
            iVar12 = *(int *)(lVar15 + 0x248);
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar16 = *(long **)(param_1 + 0x20);
    plVar4 = plVar16 + *(int *)(param_1 + 0x18);
    do {
      lVar15 = *plVar16;
      if ((iVar12 == *(int *)(lVar15 + 0x90)) &&
         (uVar21 = (ulong)*(int *)(lVar15 + 0x10), *(int *)(lVar15 + 0x10) != 0)) {
        plVar22 = *(long **)(lVar15 + 0x18);
        plVar18 = plVar22;
        for (uVar5 = uVar21 & 7; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)(*plVar18 + 0xe) = 0;
          plVar18 = plVar18 + 1;
        }
        if (6 < (uVar21 - 1 & 0x1fffffffffffffff)) {
          do {
            *(undefined1 *)(*plVar18 + 0xe) = 0;
            *(undefined1 *)(plVar18[1] + 0xe) = 0;
            *(undefined1 *)(plVar18[2] + 0xe) = 0;
            *(undefined1 *)(plVar18[3] + 0xe) = 0;
            *(undefined1 *)(plVar18[4] + 0xe) = 0;
            *(undefined1 *)(plVar18[5] + 0xe) = 0;
            *(undefined1 *)(plVar18[6] + 0xe) = 0;
            plVar2 = plVar18 + 7;
            plVar18 = plVar18 + 8;
            *(undefined1 *)(*plVar2 + 0xe) = 0;
          } while (plVar18 != plVar22 + uVar21);
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar4);
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  local_80 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      local_80 = 0;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar15 + 0x338));
      iVar12 = FUN_006bd550(*puVar13,0);
      local_80 = 0;
      if ((iVar12 == 0x758f7eaf) && (local_80 = 0, DAT_05aed670 != 0)) {
        local_80 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          local_80 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
    }
  }
  if (((DAT_05ab8c88 != 0) && (*(long *)(DAT_05ab8c88 + 0xb0) != 0)) &&
     (*(long *)(*(long *)(DAT_05ab8c88 + 0xb0) + 8) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar23 = 8;
    }
    else {
      plVar16 = *(long **)(param_1 + 0x20);
      bVar7 = false;
      uVar19 = 1;
      plVar4 = plVar16 + *(int *)(param_1 + 0x18);
      puVar3 = PTR_DAT_04bbfe68 + 0x10;
      do {
        lVar15 = *plVar16;
        if (*(int *)(lVar15 + 0x10) != 0) {
          if (local_80 == *(int *)(lVar15 + 0x90)) {
            local_a0 = &PTR_LAB_04b44f68;
            lVar17 = *(long *)PTR_DAT_04bb2720;
            local_b0 = 0;
            local_b8 = puVar3;
            lStack_98 = param_1;
            local_90 = lVar15;
            if ((lVar17 == 0) || (*(long *)(lVar17 + 0x330) == 0)) {
              puVar13 = &DAT_055c04a0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(lVar17 + 0x338));
              iVar12 = FUN_006bd550(*puVar13,0);
              puVar13 = &DAT_055cdaf8;
              if (iVar12 != 0x758f7eaf) {
                puVar13 = &DAT_055c04a0;
              }
            }
            local_ac = *(undefined4 *)(puVar13 + 7);
            local_a8 = FUN_017baf44();
            local_a8 = local_a8 & 1;
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,0,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            bVar1 = true;
            FUN_01a51a0c(&local_b8,1,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,2,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,3,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,4,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,5,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,6,uVar14,&local_a0);
            uVar14 = FUN_01a4fa00(&local_b8);
            FUN_01a51a0c(&local_b8,7,uVar14,&local_a0);
            if (*(int *)(lVar15 + 0x10) == 0) {
              bVar8 = false;
            }
            else {
              plVar18 = *(long **)(lVar15 + 0x18);
              bVar8 = false;
              lVar17 = (long)*(int *)(lVar15 + 0x10) << 3;
              bVar1 = true;
              do {
                lVar20 = *plVar18;
                if (bVar1) {
                  bVar1 = *(char *)(lVar20 + 0xc) <= *(char *)(lVar20 + 0xe);
                  if (bVar8) goto LAB_036c9bac;
LAB_036c9be0:
                  cVar6 = *(char *)(lVar20 + 0xd);
                  bVar8 = false;
                  bVar9 = true;
                  bVar10 = false;
                  if (0 < cVar6) {
                    iVar12 = (int)*(char *)(lVar20 + 0xe);
                    bVar10 = SBORROW4(iVar12,(int)cVar6);
                    bVar8 = iVar12 - cVar6 < 0;
                    bVar9 = iVar12 == cVar6;
                  }
                  bVar8 = !bVar9 && bVar8 == bVar10;
                }
                else {
                  bVar1 = false;
                  if (!bVar8) goto LAB_036c9be0;
LAB_036c9bac:
                  bVar8 = true;
                }
                plVar18 = plVar18 + 1;
                lVar17 = lVar17 + -8;
              } while (lVar17 != 0);
            }
            iVar12 = *(int *)(param_1 + 0xc);
            local_7c = *(uint *)(lVar15 + 0x90);
            local_78 = CONCAT44(local_78._4_4_,iVar12);
            if (((iVar12 != 5) && (iVar12 != 6)) && (lVar15 = FUN_03776400(), lVar15 != 0)) {
              lVar17 = lVar15 + 0x70 + (ulong)local_7c * 0x658;
              if (2 < local_7c) {
                lVar17 = lVar15 + 0x70;
              }
              lVar15 = *(long *)(lVar17 + 0x28);
              if (lVar15 == 0) {
                uVar21 = 0;
              }
              else {
                if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
                  uVar21 = 0;
                  plVar18 = *(long **)(lVar15 + 0x20);
                }
                else {
                  uVar21 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
                  uVar21 = uVar21 & 0xffffffff;
                  if (*(long *)(lVar17 + 0x28) == 0) goto LAB_036c9d54;
                  plVar18 = *(long **)(*(long *)(lVar17 + 0x28) + 0x20);
                }
                if (plVar18 != (long *)0x0) {
                  local_78 = *(ulong *)(lVar17 + 8);
                  uStack_70 = *(undefined8 *)(lVar17 + 0x10);
                  local_68 = 0x155c;
                  (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
                }
              }
LAB_036c9d54:
              lVar15 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
              local_78 = CONCAT44(local_78._4_4_,3);
              if (bVar1) {
                uVar23 = *(ushort *)(lVar15 + 0x153c) | 8;
              }
              else {
                uVar23 = *(ushort *)(lVar15 + 0x153c) & 0xfff7;
              }
              *(ushort *)(lVar15 + 0x153c) = uVar23;
              lVar15 = *(long *)(lVar17 + 0x28);
              if ((uVar21 & 1) == 0) {
LAB_036c9db0:
                if (lVar15 != 0) goto LAB_036c9db4;
LAB_036c9dd8:
                uVar21 = 0;
              }
              else {
                if (lVar15 == 0) goto LAB_036c9dd8;
                if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
                  (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                  lVar15 = *(long *)(lVar17 + 0x28);
                  goto LAB_036c9db0;
                }
LAB_036c9db4:
                if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
                  lVar15 = *(long *)(lVar17 + 0x28);
                  uVar21 = uVar21 & 0xffffffff;
                  if (lVar15 == 0) goto LAB_036c9e0c;
                }
                plVar18 = *(long **)(lVar15 + 0x20);
                if (plVar18 != (long *)0x0) {
                  local_78 = *(ulong *)(lVar17 + 8);
                  uStack_70 = *(undefined8 *)(lVar17 + 0x10);
                  local_68 = 0x155c;
                  (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
                }
              }
LAB_036c9e0c:
              lVar15 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
              local_78 = CONCAT44(local_78._4_4_,4);
              if (bVar8) {
                *(ushort *)(lVar15 + 0x153c) = *(ushort *)(lVar15 + 0x153c) & 0xffef;
              }
              else {
                *(ushort *)(lVar15 + 0x153c) = *(ushort *)(lVar15 + 0x153c) | 0x10;
              }
              if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                 (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 0x18),
                 puVar13 != (undefined8 *)0x0)) {
                (**(code **)*puVar13)();
              }
            }
            uVar23 = (ushort)bVar1;
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,*(int *)(lVar15 + 0x90));
            local_a0 = (undefined **)CONCAT44(local_a0._4_4_,*(int *)(param_1 + 0xc));
            if ((*(int *)(param_1 + 0xc) == 5) || (lVar15 = FUN_03776680(), lVar15 == 0)) {
              bVar8 = false;
              uVar23 = 1;
            }
            else {
              lVar17 = lVar15 + 0x70 + (local_78 & 0xffffffff) * 0x658;
              if (2 < (uint)local_78) {
                lVar17 = lVar15 + 0x70;
              }
              plVar18 = *(long **)(lVar17 + 0x28);
              if (plVar18 == (long *)0x0) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((undefined8 *)*plVar18 != (undefined8 *)0x0) {
                  uVar21 = (*(code *)**(undefined8 **)*plVar18)();
                  plVar18 = *(long **)(lVar17 + 0x28);
                }
              }
              local_a0 = (undefined **)CONCAT44(local_a0._4_4_,3);
              uVar23 = *(ushort *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x153c);
              if ((uVar21 & 1) == 0) {
LAB_036c9cb0:
                if (plVar18 != (long *)0x0) goto LAB_036c9cb4;
LAB_036c9ccc:
                uVar21 = 0;
              }
              else {
                if (plVar18 == (long *)0x0) goto LAB_036c9ccc;
                if ((undefined8 *)plVar18[1] != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)plVar18[1])();
                  plVar18 = *(long **)(lVar17 + 0x28);
                  goto LAB_036c9cb0;
                }
LAB_036c9cb4:
                uVar21 = 0;
                if ((undefined8 *)*plVar18 != (undefined8 *)0x0) {
                  uVar21 = (*(code *)**(undefined8 **)*plVar18)();
                }
              }
              uVar23 = uVar23 >> 3 & 1;
              local_a0 = (undefined **)CONCAT44(local_a0._4_4_,4);
              bVar8 = (*(ushort *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x153c) >> 4 &
                      1) == 0;
              if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                 (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                 puVar13 != (undefined8 *)0x0)) {
                (**(code **)*puVar13)();
              }
            }
          }
          uVar19 = uVar19 & uVar23;
          bVar7 = (bool)(bVar7 | bVar8);
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar4);
      uVar23 = 8;
      if (uVar19 == 0) {
        uVar23 = 0;
      }
      uVar19 = 0x10;
      if (!bVar7) {
        uVar19 = 0;
      }
      uVar23 = uVar23 | uVar19;
    }
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xffe7 | uVar23;
  }
  return;
}

