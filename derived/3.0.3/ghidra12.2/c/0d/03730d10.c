
void FUN_03730d10(long param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined2 uVar20;
  short sVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined1 *__src;
  ulong local_148 [2];
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined1 *local_118;
  undefined1 *puStack_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  
  lVar4 = DAT_04c93e08;
  if (DAT_04c93e08 != 0) {
    if (DAT_05aed670 == 0) {
      puVar22 = &DAT_055c04a0;
    }
    else {
      puVar22 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar22 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar15 = FUN_006bd550(*puVar22,0);
        puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar15 != 0x758f7eaf) {
          puVar22 = &DAT_055c04a0;
        }
      }
    }
    iVar15 = *(int *)(puVar22 + 7);
    bVar5 = DAT_05ac0a90 == iVar15;
    bVar6 = DAT_05ac0aa0 == iVar15;
    bVar7 = DAT_05ac0ab0 == iVar15;
    bVar8 = DAT_05ac0ac0 == iVar15;
    bVar9 = DAT_05ac0ad0 == iVar15;
    bVar10 = DAT_05ac0ae0 == iVar15;
    bVar11 = DAT_05ac0af0 == iVar15;
    bVar12 = DAT_05ac0b00 == iVar15;
    bVar13 = DAT_05ac0b10 == iVar15;
    bVar14 = DAT_05ac0b20 == iVar15;
    if (((((((((bVar5 || bVar6) || bVar7) || bVar8) || bVar9) || bVar10) || bVar11) || bVar12) ||
        bVar13) || bVar14) {
      FUN_0371cfc0(param_1);
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      bVar3 = true;
      plVar23 = *(long **)(param_1 + 0xe8);
      plVar1 = plVar23 + *(int *)(param_1 + 0xe0);
      do {
        lVar19 = DAT_05ab5ea8;
        lVar24 = *plVar23;
        if ((*(ushort *)(lVar24 + 0x114) & 0x21) == 0) {
          if (DAT_05ab5ea8 != 0) {
            if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) ||
                (DAT_05ab7608 == 0)) || (lVar25 = *(long *)(DAT_05ab7608 + 8), lVar25 == 0)) {
              uVar20 = *(undefined2 *)(DAT_05ab5ea8 + 0x2a);
            }
            else if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
                    (puVar22 = (undefined8 *)**(long **)(lVar25 + 0x60),
                    puVar22 == (undefined8 *)0x0)) {
              uVar20 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
            }
            else {
              uVar18 = (**(code **)*puVar22)();
              uVar20 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
              if ((((uVar18 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
                 (puVar22 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8),
                 puVar22 != (undefined8 *)0x0)) {
                (**(code **)*puVar22)();
              }
            }
            local_148[0] = CONCAT62(local_148[0]._2_6_,uVar20);
            uVar17 = FUN_03770770(local_148,0);
            if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                 ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
               (lVar25 = *(long *)(DAT_05ab7608 + 8), lVar25 == 0)) {
              sVar21 = *(short *)(lVar19 + 0x2a);
            }
            else if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
                    (puVar22 = (undefined8 *)**(long **)(lVar25 + 0x60),
                    puVar22 == (undefined8 *)0x0)) {
              sVar21 = *(short *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
            }
            else {
              uVar18 = (**(code **)*puVar22)();
              sVar21 = *(short *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
              if ((((uVar18 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
                 (puVar22 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8),
                 puVar22 != (undefined8 *)0x0)) {
                (**(code **)*puVar22)();
              }
            }
            if ((uVar17 & 1) == 0 && sVar21 != *(short *)(lVar24 + 0x38)) {
              if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) ||
                 (DAT_05ab7608 == 0)) {
                if ((*(ushort *)(lVar19 + 0x28) >> 7 & 1) != 0) goto LAB_03731170;
                sVar21 = *(short *)(lVar19 + 0x2c);
              }
              else {
                lVar25 = *(long *)(DAT_05ab7608 + 0x10);
                if ((*(long **)(lVar25 + 0x11b0) == (long *)0x0) ||
                   (puVar22 = (undefined8 *)**(long **)(lVar25 + 0x11b0),
                   puVar22 == (undefined8 *)0x0)) {
                  sVar21 = *(short *)(*(long *)(lVar25 + 0x1198) + *(long *)(lVar25 + 0x1190) + 2);
                }
                else {
                  uVar18 = (**(code **)*puVar22)();
                  sVar21 = *(short *)(*(long *)(lVar25 + 0x1198) + *(long *)(lVar25 + 0x1190) + 2);
                  if ((((uVar18 & 1) != 0) && (*(long *)(lVar25 + 0x11b0) != 0)) &&
                     (puVar22 = *(undefined8 **)(*(long *)(lVar25 + 0x11b0) + 8),
                     puVar22 != (undefined8 *)0x0)) {
                    (**(code **)*puVar22)();
                  }
                }
              }
              if (sVar21 != -1) {
                if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) ||
                   (DAT_05ab7608 == 0)) {
                  sVar21 = *(short *)(lVar19 + 0x2c);
                  if ((*(ushort *)(lVar19 + 0x28) & 0x80) != 0) {
                    sVar21 = -1;
                  }
                }
                else {
                  lVar19 = *(long *)(DAT_05ab7608 + 0x10);
                  if ((*(long **)(lVar19 + 0x11b0) == (long *)0x0) ||
                     (puVar22 = (undefined8 *)**(long **)(lVar19 + 0x11b0),
                     puVar22 == (undefined8 *)0x0)) {
                    sVar21 = *(short *)(*(long *)(lVar19 + 0x1198) + *(long *)(lVar19 + 0x1190) + 2)
                    ;
                  }
                  else {
                    uVar18 = (**(code **)*puVar22)();
                    sVar21 = *(short *)(*(long *)(lVar19 + 0x1198) + *(long *)(lVar19 + 0x1190) + 2)
                    ;
                    if ((((uVar18 & 1) != 0) && (*(long *)(lVar19 + 0x11b0) != 0)) &&
                       (puVar22 = *(undefined8 **)(*(long *)(lVar19 + 0x11b0) + 8),
                       puVar22 != (undefined8 *)0x0)) {
                      (**(code **)*puVar22)();
                    }
                  }
                }
                if (*(short *)(lVar24 + 0x38) == sVar21) goto LAB_03730ea0;
              }
            }
            else if (((uVar17 & 1) == 0) || (sVar21 == *(short *)(lVar24 + 0x38)))
            goto LAB_03730ea0;
          }
LAB_03731170:
          if (*(int *)(lVar24 + 8) == 0) {
            if (bVar3) {
              if ((iVar15 == -0x7975b8e8) || (iVar15 == -0x3e092032)) {
                FUN_037313b0(param_1);
              }
              else if (iVar15 == -0x17df00c3) {
                FUN_0371bdb0(param_1);
              }
            }
            local_85 = 0;
            local_134 = 0x3f800000;
            local_108 = 0x80;
            local_104[0] = 0;
            local_78 = 0;
            local_7c = 0;
            local_138 = 0;
            local_148[0] = 0xffffffff00000000;
            local_148[1] = 0;
            local_118 = &DAT_048fc708;
            local_80 = 7;
            local_12c = 0;
            uStack_124 = 0;
            plVar26 = (long *)(lVar24 + 0x10);
            puStack_110 = local_104;
            (**(code **)(*plVar26 + 0x18))(plVar26);
            __src = *(undefined1 **)(lVar24 + 0x18);
            if (local_104 != __src) {
              (**(code **)(*(long *)(lVar24 + 0x10) + 0x18))(plVar26);
              lVar19 = 0;
              do {
                if (*(char *)(*(long *)(lVar24 + 0x18) + lVar19) == '\0') goto LAB_03731294;
                lVar25 = *(long *)(lVar24 + 0x18) + lVar19;
                if (*(char *)(lVar25 + 1) == '\0') {
                  lVar19 = lVar19 + 1;
                  goto LAB_03731294;
                }
                if (*(char *)(lVar25 + 2) == '\0') {
                  lVar19 = lVar19 + 2;
                  goto LAB_03731294;
                }
                lVar19 = lVar19 + 3;
              } while (lVar19 != 0x80001);
              lVar19 = 0;
LAB_03731294:
              iVar2 = (int)lVar19;
              if (local_108 <= (int)lVar19) {
                iVar2 = local_108 + -1;
              }
              memcpy(local_104,__src,(long)iVar2);
              local_104[iVar2] = 0;
            }
            uVar18 = FUN_03725e90(param_1,local_148,lVar24);
            if ((uVar18 & 1) != 0) {
              if (((((((((bVar5 || bVar6) || bVar7) || bVar8) || bVar9) || bVar10) || bVar11) ||
                   bVar12) || bVar13) || bVar14) {
                if (DAT_05abbc50 == *(int *)(lVar24 + 0xe4)) {
LAB_03730e70:
                  FUN_037289d0(param_1,plVar26,0);
                }
                else if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) &&
                        (*(int *)(lVar24 + 0x3c) == 0)) {
                  local_6c = 0x23;
                  local_6a = 8;
                  FUN_020fd3a0(&local_6c,plVar26);
                  uVar17 = FUN_021d7d60(&local_6c);
                  if (((uVar17 < 10) && ((&DAT_053fee41)[(ulong)uVar17 * 0xba0] != '\0')) &&
                     (((&DAT_053fede8)[(ulong)uVar17 * 0x174] != 0 &&
                      (*(int *)((&DAT_053fede8)[(ulong)uVar17 * 0x174] + 4) == 1))))
                  goto LAB_03730e70;
                }
              }
              uVar16 = FUN_007402e0(lVar4,local_148,local_148[0] & 0xffffffff,1);
              *(undefined4 *)(lVar24 + 8) = uVar16;
            }
            bVar3 = false;
          }
        }
LAB_03730ea0:
        plVar23 = plVar23 + 1;
      } while (plVar23 != plVar1);
    }
  }
  return;
}

