
void FUN_0021bb10(long *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined2 *puVar19;
  long lVar20;
  long lVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  ushort *puVar25;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 uStack_75;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  iVar9 = *(int *)((long)param_1 + 0x7c);
  if (iVar9 == 0) {
    return;
  }
  if (param_1[10] == 0) {
    local_6c = 0;
    local_74 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    iVar9 = *(int *)((long)param_1 + 0x7c);
  }
  switch(iVar9) {
  case 0:
    goto switchD_0021bb84_caseD_0;
  case 1:
    if ((short)param_1[0xc] == 0) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
      if (param_1[0xb] != 0) goto LAB_0021bb98;
LAB_0021c0b4:
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
      if (*(int *)((long)param_1 + 0x6c) - 4U < 0xfffffffe) goto LAB_0021bba8;
LAB_0021c0e4:
      uVar8 = *(ushort *)(param_1 + 0xc);
    }
    else {
      if (param_1[0xb] == 0) goto LAB_0021c0b4;
LAB_0021bb98:
      if (0xfffffffd < *(int *)((long)param_1 + 0x6c) - 4U) goto LAB_0021c0e4;
LAB_0021bba8:
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
      uVar8 = *(ushort *)(param_1 + 0xc);
    }
    if (1 < uVar8) {
      lVar18 = 0;
      bVar5 = true;
      do {
        uVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar18 * 0x30);
        if ((((uVar6 & 1) != 0) &&
            (uVar6 = FUN_0021dde0(param_1,*(undefined8 *)(param_1[10] + lVar18 * 0x30 + 0x10)),
            (uVar6 & 1) == 0)) && (*(long *)(param_1[10] + lVar18 * 0x30 + 0x10) != 0)) {
          uVar6 = FUN_002b2900(param_1[0xb]);
          if (((uVar6 & 1) != 0) && (1 < *(ushort *)(param_1 + 0xc))) {
            iVar9 = 0;
            lVar12 = 0;
            iVar23 = 0;
            do {
              uVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar12);
              if ((uVar6 & 1) != 0) {
                lVar21 = param_1[10];
                if (lVar21 == 0) {
                  local_74 = 0x800000000000000;
                  local_6c = 0;
                  (**(code **)(*param_1 + 0x10))(param_1,&local_74);
                  lVar21 = param_1[10];
                }
                uVar10 = FUN_0021dde0(param_1,*(undefined8 *)(lVar21 + lVar12 + 0x10));
                iVar23 = iVar23 + (uVar10 & 1);
              }
              iVar9 = iVar9 + 1;
              lVar12 = lVar12 + 0x30;
            } while (iVar9 < (int)(*(ushort *)(param_1 + 0xc) - 1));
            if (0 < iVar23) {
              bVar5 = false;
              goto LAB_0021c114;
            }
          }
          puVar25 = (ushort *)(param_1[10] + lVar18 * 0x30 + 0x24);
          uVar8 = *puVar25;
          if (uVar8 != 0) {
            lVar12 = param_1[10] + lVar18 * 0x30;
            uVar22 = *(ushort *)(lVar12 + 0x20);
            uVar10 = 0;
            uVar13 = (uint)*(ushort *)(lVar12 + 0x22);
            if (uVar22 != 0) {
              uVar10 = uVar13 / uVar22;
            }
            lVar21 = *(long *)(lVar12 + 0x28);
            uVar15 = (uint)uVar22;
            if (*(char *)(lVar21 + (ulong)(uVar13 - uVar10 * uVar15) * 0x5ac + 0x5aa) != '\0') {
              uVar10 = 1;
              do {
                uVar17 = uVar10;
                if (uVar8 == uVar17) break;
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = (uVar13 + uVar17) / uVar15;
                }
                uVar10 = uVar17 + 1;
              } while (*(char *)(lVar21 + (ulong)((uVar13 + uVar17) - uVar3 * uVar15) * 0x5ac +
                                0x5aa) != '\0');
              if (uVar8 <= uVar17) goto LAB_0021c114;
            }
            uVar22 = 0;
            do {
              uVar10 = (uint)*(ushort *)(lVar12 + 0x22) + (uint)uVar22;
              uVar2 = *(ushort *)(lVar12 + 0x20);
              lVar21 = *(long *)(lVar12 + 0x28);
              uVar13 = 0;
              if (uVar2 != 0) {
                uVar13 = uVar10 / uVar2;
              }
              uVar10 = uVar10 - uVar13 * uVar2;
              puVar19 = (undefined2 *)(lVar21 + (ulong)uVar10 * 0x5ac);
              if (*(char *)(puVar19 + 0x2d5) == '\0') {
                uVar6 = FUN_002aed20(param_1[0xb]);
                if ((uVar6 & 1) != 0) {
                  lVar21 = lVar21 + (ulong)uVar10 * 0x5ac;
                  FUN_0021d60c(&local_74,param_1,5,lVar21 + 2,*(undefined4 *)(lVar21 + 0x5a4),
                               *(undefined4 *)(param_1[10] + lVar18 * 0x30 + 0x18),*puVar19);
                  if ((int)local_74 != 0) break;
                }
                *(undefined1 *)(puVar19 + 0x2d5) = 1;
                uVar8 = *puVar25;
              }
              if (uVar22 < uVar8) {
                uVar22 = uVar22 + 1;
              }
            } while (uVar22 < uVar8);
            bVar5 = false;
          }
        }
LAB_0021c114:
        lVar18 = lVar18 + 1;
      } while ((int)((uint)lVar18 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
      if (!bVar5) {
        return;
      }
    }
LAB_0021c334:
    uVar11 = 2;
    break;
  case 2:
    if (*(int *)((long)param_1 + 0x6c) - 4U < 0xfffffffe) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    }
    if ((short)param_1[0x10] != 0) {
      return;
    }
    if ((short)param_1[0xc] == 0) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    }
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12);
    if (uVar6 != 0) {
      piVar14 = (int *)param_1[0x11];
      if (piVar14 == (int *)0x0) {
        lVar18 = 0;
        lVar12 = 0;
        uVar6 = 0;
        do {
          if (lVar12 == 0) {
            local_74 = 0x800000000000000;
            local_6c = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_74);
            lVar12 = param_1[0x11];
          }
          if ((*(char *)(lVar12 + lVar18 + 9) != '\0') && (*(int *)(lVar12 + lVar18) == 5))
          goto LAB_0021c3d4;
          uVar6 = uVar6 + 1;
          lVar18 = lVar18 + 0xc;
        } while (uVar6 < *(ushort *)(param_1 + 0x12));
      }
      else {
        uVar16 = 0;
        bVar5 = true;
        do {
          if ((*(char *)((long)piVar14 + 9) != '\0') && (*piVar14 == 5)) break;
          uVar16 = uVar16 + 1;
          piVar14 = piVar14 + 3;
          bVar5 = uVar16 < uVar6;
        } while (uVar6 != uVar16);
        if (bVar5) {
LAB_0021c3d4:
          local_6c = 0;
          local_74 = 0x800000000000000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_74);
        }
      }
    }
    uVar6 = FUN_002aed20(param_1[0xb]);
    if ((uVar6 & 1) == 0) {
LAB_0021c468:
      uVar11 = 3;
      break;
    }
    FUN_0021d60c(&local_74,param_1,6,&uStack_75,1,0,(short)param_1[0xf]);
    if ((int)local_74 == 0) goto LAB_0021c468;
    local_64 = 0;
    local_88 = CONCAT44(local_88._4_4_,0x4c0d);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_64);
    if ((int)local_74 == (int)local_88) {
      return;
    }
    local_80 = 0;
    puVar7 = &local_88;
    local_88 = 0x800000000000000;
    goto LAB_0021bf98;
  case 3:
    if (*(int *)((long)param_1 + 0x6c) - 4U < 0xfffffffe) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    }
    if ((short)param_1[0x10] != 0) {
      return;
    }
    uVar8 = *(ushort *)(param_1 + 0xc);
    if (uVar8 == 0) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
      uVar8 = *(ushort *)(param_1 + 0xc);
    }
    if (1 < uVar8) {
      lVar18 = 0;
      do {
        uVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar18 * 0x30);
        if ((uVar6 & 1) != 0) {
          lVar12 = param_1[10];
          if (lVar12 == 0) {
            local_74 = 0x800000000000000;
            local_6c = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_74);
            lVar12 = param_1[10];
          }
          uVar6 = FUN_0021dde0(param_1,*(undefined8 *)(lVar12 + lVar18 * 0x30 + 0x10));
          if (((uVar6 & 1) != 0) &&
             (lVar12 = param_1[10], *(int *)(lVar12 + lVar18 * 0x30 + 0x1c) == 2)) {
            if (*(char *)(lVar12 + lVar18 * 0x30 + 2) == '\0') goto LAB_0021c334;
            if (*(int *)(lVar12 + lVar18 * 0x30 + 8) == -1) {
              local_74 = 0x800000000000000;
              local_6c = 0;
              (**(code **)(*param_1 + 0x10))(param_1,&local_74);
            }
            FUN_0021e530(&local_74,param_1);
            if ((int)local_74 != *(int *)(param_1[10] + lVar18 * 0x30 + 8)) goto LAB_0021c334;
          }
        }
        lVar18 = lVar18 + 1;
      } while ((int)((uint)lVar18 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    uVar6 = FUN_0021ea40(param_1);
    if ((uVar6 & 1) != 0) {
      local_6c = 0;
      local_74 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    }
    uVar11 = 4;
    break;
  case 4:
    if (1 < *(ushort *)(param_1 + 0xc)) {
      lVar18 = 0;
      do {
        uVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar18 * 0x30);
        if ((uVar6 & 1) != 0) {
          lVar12 = param_1[10];
          if (lVar12 == 0) {
            local_74 = 0x800000000000000;
            local_6c = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_74);
            lVar12 = param_1[10];
          }
          uVar6 = FUN_0021dde0(param_1,*(undefined8 *)(lVar12 + lVar18 * 0x30 + 0x10));
          if ((uVar6 & 1) == 0) {
            uVar8 = *(ushort *)(param_1[10] + lVar18 * 0x30 + 0x24);
            uVar10 = (uint)uVar8;
            if (uVar8 != 0) {
              lVar12 = param_1[10] + lVar18 * 0x30;
              uVar13 = (uint)*(ushort *)(lVar12 + 0x22);
              uVar8 = *(ushort *)(lVar12 + 0x20);
              do {
                uVar15 = 0;
                if (uVar8 != 0) {
                  uVar15 = uVar13 / uVar8;
                }
                if (*(char *)(*(long *)(lVar12 + 0x28) + (ulong)(uVar13 - uVar15 * uVar8) * 0x5ac +
                             0x5a9) == '\0') {
                  return;
                }
                uVar13 = uVar13 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
        }
        lVar18 = lVar18 + 1;
      } while ((int)((uint)lVar18 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    local_74 = 0x800000000000000;
    local_6c = 0;
    (**(code **)(*param_1 + 0x10))(param_1,&local_74);
    uVar8 = *(ushort *)(param_1 + 0xc);
    if (uVar8 == 0) {
      local_74 = 0x800000000000000;
      local_6c = 0;
      (**(code **)(*param_1 + 0x10))(param_1,&local_74);
      uVar8 = *(ushort *)(param_1 + 0xc);
    }
    if (1 < uVar8) {
      lVar18 = 0;
      do {
        lVar12 = param_1[10];
        if (lVar12 == 0) {
          local_6c = 0;
          local_74 = 0x800000000000000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_74);
          lVar12 = param_1[10];
        }
        if (*(char *)(lVar12 + lVar18 * 0x30 + 1) != '\0') {
          FUN_0021e650(param_1,*(undefined8 *)(lVar12 + lVar18 * 0x30 + 0x10));
          lVar12 = param_1[10];
        }
        lVar21 = lVar18 * 0x30;
        *(undefined1 *)(lVar12 + lVar21 + 2) = 0;
        memset((void *)(lVar12 + lVar21 + 8),0xff,4);
        uVar6 = FUN_0021dde0(param_1,*(undefined8 *)(param_1[10] + lVar21 + 0x10));
        if ((uVar6 & 1) == 0) {
          lVar12 = param_1[10];
          lVar24 = lVar12 + lVar18 * 0x30;
          *(undefined4 *)(lVar24 + 0x1c) = 0;
          *(undefined4 *)(lVar24 + 1) = 0;
          memset((void *)(lVar24 + 8),0xff,4);
          *(undefined8 *)(lVar24 + 0x10) = 0;
          *(undefined4 *)(lVar24 + 0x18) = 0;
          if (*(ushort *)(lVar24 + 0x20) != 0) {
            uVar6 = 0;
            lVar20 = 0x5aa;
            do {
              puVar1 = (undefined1 *)(*(long *)(lVar12 + lVar18 * 0x30 + 0x28) + lVar20);
              *(undefined2 *)(puVar1 + -0x5aa) = 0;
              memset(puVar1 + -0x5a8,0,0x5a0);
              *(undefined4 *)(puVar1 + -6) = 0;
              uVar6 = uVar6 + 1;
              lVar20 = lVar20 + 0x5ac;
              *(undefined2 *)(puVar1 + -2) = 0;
              *puVar1 = 0;
            } while (uVar6 < *(ushort *)(lVar24 + 0x20));
          }
          *(undefined4 *)(lVar12 + lVar21 + 0x22) = 0;
          *(undefined1 *)(lVar12 + lVar21 + 0x26) = 0;
          *(undefined1 *)(param_1[10] + lVar21) = 0;
        }
        lVar18 = lVar18 + 1;
      } while ((int)((uint)lVar18 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    pcVar4 = DAT_04c5efa8;
    if ((*(int *)((long)param_1 + 0x7c) != 0) && (DAT_04c5efa8 != (code *)0x0)) {
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
      (*pcVar4)();
    }
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  default:
    puVar7 = &local_74;
    local_6c = 0;
    local_74 = 0x800000000000000;
LAB_0021bf98:
    (**(code **)(*param_1 + 0x10))(param_1,puVar7);
    goto switchD_0021bb84_caseD_0;
  }
  *(undefined4 *)((long)param_1 + 0x7c) = uVar11;
switchD_0021bb84_caseD_0:
  return;
}

