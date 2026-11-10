
ulong FUN_00180b60(long *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  ulong __n;
  ulong uVar19;
  ulong uVar20;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((plVar18 = (long *)param_1[7], plVar18 == (long *)0x0 || ((long *)*plVar18 != param_1)))) {
    return 0xfffffffe;
  }
  iVar7 = (int)plVar18[1];
  if (((0x38 < iVar7 - 0x39U) || ((1L << ((ulong)(iVar7 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)
      ) && ((iVar7 != 0x29a && (iVar7 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || (((int)param_1[1] != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar7 == 0x29a)))) {
    uVar5 = 0xfffffffe;
    lVar8 = *(long *)(DAT_04bcb758 + 0x20);
    goto LAB_00180c1c;
  }
  if ((int)param_1[4] == 0) {
LAB_00180fe4:
    uVar5 = 0xfffffffb;
    lVar8 = *(long *)(DAT_04bcb758 + 0x38);
LAB_00180c1c:
    param_1[6] = lVar8;
    return uVar5;
  }
  iVar1 = *(int *)((long)plVar18 + 0x4c);
  *(uint *)((long)plVar18 + 0x4c) = param_2;
  if (plVar18[5] == 0) {
    if ((int)param_1[1] == 0) {
      iVar16 = -9;
      if (iVar1 < 5) {
        iVar16 = 0;
      }
      iVar17 = -9;
      if (param_2 < 5) {
        iVar17 = 0;
      }
      if ((param_2 != 4) && ((int)(iVar17 + param_2 * 2) <= iVar16 + iVar1 * 2)) goto LAB_00180fe4;
    }
  }
  else {
    lVar8 = param_1[7];
    FUN_00183d90(lVar8);
    uVar12 = *(uint *)(param_1 + 4);
    uVar4 = uVar12;
    if (*(uint *)(lVar8 + 0x28) <= uVar12) {
      uVar4 = *(uint *)(lVar8 + 0x28);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 != 0) {
      memcpy((void *)param_1[3],*(void **)(lVar8 + 0x20),uVar5);
      param_1[3] = param_1[3] + uVar5;
      *(ulong *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + uVar5;
      param_1[5] = param_1[5] + uVar5;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar4;
      lVar13 = *(long *)(lVar8 + 0x28) - uVar5;
      *(long *)(lVar8 + 0x28) = lVar13;
      if (lVar13 == 0) {
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
      }
      uVar12 = *(uint *)(param_1 + 4);
    }
    if (uVar12 == 0) goto LAB_00181800;
    iVar7 = (int)plVar18[1];
  }
  if (iVar7 == 0x2a) {
    if ((int)plVar18[6] != 0) {
      if (((int)plVar18[0x19] < 2) && (uVar4 = *(uint *)((long)plVar18 + 0xc4), 1 < (int)uVar4)) {
        if (uVar4 < 6) {
          uVar12 = 0x40;
        }
        else {
          uVar12 = 0x80;
          if (uVar4 != 6) {
            uVar12 = 0xc0;
          }
        }
      }
      else {
        uVar12 = 0;
      }
      uVar12 = uVar12 | *(int *)((long)plVar18 + 0x54) * 0x1000 - 0x7800U;
      lVar8 = plVar18[5];
      if (*(int *)((long)plVar18 + 0xac) != 0) {
        uVar12 = uVar12 | 0x20;
      }
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)(uVar12 >> 8);
      lVar8 = plVar18[5];
      plVar18[5] = lVar8 + 1;
      *(byte *)(plVar18[2] + lVar8) =
           ((byte)uVar12 + (char)(uVar12 / 0x1f) * -0x1f | (byte)uVar12) ^ 0x1f;
      if (*(int *)((long)plVar18 + 0xac) != 0) {
        lVar8 = param_1[0xc];
        lVar13 = plVar18[5];
        plVar18[5] = lVar13 + 1;
        *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x18);
        lVar13 = plVar18[5];
        plVar18[5] = lVar13 + 1;
        *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x10);
        lVar8 = param_1[0xc];
        lVar13 = plVar18[5];
        plVar18[5] = lVar13 + 1;
        *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 8);
        lVar13 = plVar18[5];
        plVar18[5] = lVar13 + 1;
        *(char *)(plVar18[2] + lVar13) = (char)lVar8;
      }
      lVar8 = FUN_0017f300(0,0,0);
      param_1[0xc] = lVar8;
      *(undefined4 *)(plVar18 + 1) = 0x71;
      FUN_00181b50(param_1);
      if (plVar18[5] != 0) goto LAB_00181800;
      iVar7 = (int)plVar18[1];
      goto LAB_00180e60;
    }
    *(undefined4 *)(plVar18 + 1) = 0x71;
switchD_001811c0_caseD_46:
    if ((int)param_1[1] == 0) goto LAB_0018124c;
  }
  else {
    if (iVar7 != 0x29a) {
LAB_00180e60:
      if (iVar7 != 0x39) {
LAB_001811a0:
        switch(iVar7) {
        case 0x45:
          goto switchD_001811c0_caseD_45;
        default:
          goto switchD_001811c0_caseD_46;
        case 0x49:
switchD_001811c0_caseD_49:
          if (*(long *)(plVar18[7] + 0x28) != 0) {
            uVar5 = plVar18[5];
            do {
              uVar19 = plVar18[5];
              lVar8 = plVar18[7];
              if (uVar19 == plVar18[3]) {
                if (*(int *)(lVar8 + 0x44) != 0 && uVar5 < uVar19) {
                  lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2] + uVar5,(int)uVar19 - (int)uVar5);
                  param_1[0xc] = lVar8;
                }
                lVar8 = param_1[7];
                FUN_00183d90(lVar8);
                uVar4 = *(uint *)(param_1 + 4);
                if (*(uint *)(lVar8 + 0x28) <= *(uint *)(param_1 + 4)) {
                  uVar4 = *(uint *)(lVar8 + 0x28);
                }
                uVar5 = (ulong)uVar4;
                if (uVar4 != 0) {
                  memcpy((void *)param_1[3],*(void **)(lVar8 + 0x20),uVar5);
                  param_1[3] = param_1[3] + uVar5;
                  *(ulong *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + uVar5;
                  param_1[5] = param_1[5] + uVar5;
                  *(uint *)(param_1 + 4) = (int)param_1[4] - uVar4;
                  lVar13 = *(long *)(lVar8 + 0x28) - uVar5;
                  *(long *)(lVar8 + 0x28) = lVar13;
                  if (lVar13 == 0) {
                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
                  }
                }
                if (plVar18[5] != 0) goto LAB_00181800;
                lVar8 = plVar18[7];
                uVar19 = 0;
                uVar5 = 0;
              }
              lVar13 = plVar18[8];
              lVar8 = *(long *)(lVar8 + 0x28);
              plVar18[8] = lVar13 + 1;
              cVar3 = *(char *)(lVar8 + lVar13);
              plVar18[5] = uVar19 + 1;
              *(char *)(plVar18[2] + uVar19) = cVar3;
            } while (cVar3 != '\0');
            if ((*(int *)(plVar18[7] + 0x44) != 0) && (uVar5 < (ulong)plVar18[5])) {
              lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2] + uVar5,(int)plVar18[5] - (int)uVar5);
              param_1[0xc] = lVar8;
            }
            plVar18[8] = 0;
          }
          *(undefined4 *)(plVar18 + 1) = 0x5b;
        case 0x5b:
          goto switchD_001811c0_caseD_5b;
        case 0x67:
          goto switchD_001811c0_caseD_67;
        }
      }
      lVar8 = FUN_0017ef30(0,0,0);
      param_1[0xc] = lVar8;
      lVar8 = plVar18[5];
      plVar18[5] = lVar8 + 1;
      *(undefined1 *)(plVar18[2] + lVar8) = 0x1f;
      lVar8 = plVar18[5];
      plVar18[5] = lVar8 + 1;
      *(undefined1 *)(plVar18[2] + lVar8) = 0x8b;
      lVar8 = plVar18[5];
      plVar18[5] = lVar8 + 1;
      *(undefined1 *)(plVar18[2] + lVar8) = 8;
      piVar9 = (int *)plVar18[7];
      if (piVar9 == (int *)0x0) {
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 0;
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 0;
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 0;
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 0;
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 0;
        if (*(int *)((long)plVar18 + 0xc4) == 9) {
          uVar6 = 2;
        }
        else {
          uVar6 = 4;
          if ((int)plVar18[0x19] < 2 && 1 < *(int *)((long)plVar18 + 0xc4)) {
            uVar6 = 0;
          }
        }
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = uVar6;
        lVar8 = plVar18[5];
        plVar18[5] = lVar8 + 1;
        *(undefined1 *)(plVar18[2] + lVar8) = 3;
        *(undefined4 *)(plVar18 + 1) = 0x71;
        FUN_00181b50(param_1);
        if (plVar18[5] != 0) goto LAB_00181800;
        iVar7 = (int)plVar18[1];
        goto LAB_001811a0;
      }
      iVar7 = *piVar9;
      iVar1 = piVar9[0x11];
      lVar13 = *(long *)(piVar9 + 6);
      lVar14 = *(long *)(piVar9 + 10);
      lVar8 = *(long *)(piVar9 + 0xe);
      lVar15 = plVar18[5];
      plVar18[5] = lVar15 + 1;
      *(char *)(plVar18[2] + lVar15) =
           iVar7 != 0 | (iVar1 != 0) << 1 | (lVar13 != 0) << 2 | (lVar14 != 0) << 3 |
           (lVar8 != 0) << 4;
      lVar8 = plVar18[5];
      uVar10 = *(undefined8 *)(plVar18[7] + 8);
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)uVar10;
      lVar8 = plVar18[5];
      uVar10 = *(undefined8 *)(plVar18[7] + 8);
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)((ulong)uVar10 >> 8);
      lVar8 = plVar18[5];
      uVar10 = *(undefined8 *)(plVar18[7] + 8);
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)((ulong)uVar10 >> 0x10);
      lVar8 = plVar18[5];
      uVar10 = *(undefined8 *)(plVar18[7] + 8);
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)((ulong)uVar10 >> 0x18);
      if (*(int *)((long)plVar18 + 0xc4) == 9) {
        uVar6 = 2;
      }
      else {
        uVar6 = 4;
        if ((int)plVar18[0x19] < 2 && 1 < *(int *)((long)plVar18 + 0xc4)) {
          uVar6 = 0;
        }
      }
      lVar8 = plVar18[5];
      plVar18[5] = lVar8 + 1;
      *(undefined1 *)(plVar18[2] + lVar8) = uVar6;
      lVar8 = plVar18[5];
      uVar2 = *(undefined4 *)(plVar18[7] + 0x14);
      plVar18[5] = lVar8 + 1;
      *(char *)(plVar18[2] + lVar8) = (char)uVar2;
      lVar8 = plVar18[7];
      if (*(long *)(lVar8 + 0x18) != 0) {
        lVar13 = plVar18[5];
        uVar2 = *(undefined4 *)(lVar8 + 0x20);
        plVar18[5] = lVar13 + 1;
        *(char *)(plVar18[2] + lVar13) = (char)uVar2;
        lVar8 = plVar18[5];
        uVar2 = *(undefined4 *)(plVar18[7] + 0x20);
        plVar18[5] = lVar8 + 1;
        *(char *)(plVar18[2] + lVar8) = (char)((uint)uVar2 >> 8);
        lVar8 = plVar18[7];
      }
      if (*(int *)(lVar8 + 0x44) != 0) {
        lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2],(int)plVar18[5]);
        param_1[0xc] = lVar8;
      }
      plVar18[8] = 0;
      *(undefined4 *)(plVar18 + 1) = 0x45;
switchD_001811c0_caseD_45:
      lVar8 = *(long *)(plVar18[7] + 0x18);
      if (lVar8 != 0) {
        lVar13 = plVar18[8];
        uVar5 = (ulong)((uint)*(ushort *)(plVar18[7] + 0x20) - (int)lVar13);
        uVar19 = plVar18[5];
        if ((ulong)plVar18[3] < uVar19 + uVar5) {
          uVar20 = plVar18[3] - uVar19;
          __n = uVar20 & 0xffffffff;
          memcpy((void *)(plVar18[2] + uVar19),(void *)(lVar8 + lVar13),__n);
          uVar11 = plVar18[3];
          plVar18[5] = uVar11;
          if (*(int *)(plVar18[7] + 0x44) == 0) goto LAB_00181270;
          if (uVar11 <= uVar19) goto LAB_00181270;
          uVar11 = (ulong)(uint)((int)uVar11 - (int)uVar19);
          lVar8 = plVar18[2] + uVar19;
          lVar13 = param_1[0xc];
          do {
            lVar8 = FUN_0017ef30(lVar13,lVar8,uVar11);
            param_1[0xc] = lVar8;
LAB_00181270:
            do {
              plVar18[8] = plVar18[8] + __n;
              lVar8 = param_1[7];
              FUN_00183d90(lVar8);
              uVar4 = *(uint *)(param_1 + 4);
              if (*(uint *)(lVar8 + 0x28) <= *(uint *)(param_1 + 4)) {
                uVar4 = *(uint *)(lVar8 + 0x28);
              }
              uVar19 = (ulong)uVar4;
              if (uVar4 != 0) {
                memcpy((void *)param_1[3],*(void **)(lVar8 + 0x20),uVar19);
                param_1[3] = param_1[3] + uVar19;
                *(ulong *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + uVar19;
                param_1[5] = param_1[5] + uVar19;
                *(uint *)(param_1 + 4) = (int)param_1[4] - uVar4;
                lVar13 = *(long *)(lVar8 + 0x28) - uVar19;
                *(long *)(lVar8 + 0x28) = lVar13;
                if (lVar13 == 0) {
                  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
                }
              }
              if (plVar18[5] != 0) goto LAB_00181800;
              uVar5 = (ulong)(uint)((int)uVar5 - (int)uVar20);
              uVar20 = plVar18[3];
              if (uVar5 <= uVar20) {
                lVar13 = plVar18[8];
                uVar19 = 0;
                lVar8 = *(long *)(plVar18[7] + 0x18);
                goto LAB_0018135c;
              }
              __n = uVar20 & 0xffffffff;
              memcpy((void *)plVar18[2],(void *)(*(long *)(plVar18[7] + 0x18) + plVar18[8]),__n);
              uVar11 = plVar18[3];
              plVar18[5] = uVar11;
            } while (*(int *)(plVar18[7] + 0x44) == 0 || uVar11 == 0);
            lVar13 = param_1[0xc];
            lVar8 = plVar18[2];
          } while( true );
        }
LAB_0018135c:
        memcpy((void *)(plVar18[2] + uVar19),(void *)(lVar8 + lVar13),uVar5);
        uVar5 = plVar18[5] + uVar5;
        plVar18[5] = uVar5;
        if ((*(int *)(plVar18[7] + 0x44) != 0) && (uVar19 < uVar5)) {
          lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2] + uVar19,(int)uVar5 - (int)uVar19);
          param_1[0xc] = lVar8;
        }
        plVar18[8] = 0;
      }
      *(undefined4 *)(plVar18 + 1) = 0x49;
      goto switchD_001811c0_caseD_49;
    }
    if ((int)param_1[1] != 0) goto LAB_00180fe4;
LAB_0018124c:
    if (*(int *)((long)plVar18 + 0xb4) == 0) {
      if (param_2 == 0) {
        return 0;
      }
      if ((int)plVar18[1] == 0x29a) goto LAB_001817dc;
    }
  }
  if (*(int *)((long)plVar18 + 0xc4) == 0) {
    uVar4 = FUN_00181bf0(plVar18,param_2);
  }
  else if ((int)plVar18[0x19] == 3) {
    uVar4 = FUN_00182650(plVar18,param_2);
  }
  else if ((int)plVar18[0x19] == 2) {
    uVar4 = FUN_001822f0(plVar18,param_2);
  }
  else {
    uVar4 = (*(code *)(&PTR_FUN_048388d0)[(long)*(int *)((long)plVar18 + 0xc4) * 2])
                      (plVar18,param_2);
  }
  if ((uVar4 & 0xfffffffe) == 2) {
    *(undefined4 *)(plVar18 + 1) = 0x29a;
  }
  if ((uVar4 & 0xfffffffd) == 0) {
    if ((int)param_1[4] != 0) {
      return 0;
    }
LAB_00181800:
    *(undefined4 *)((long)plVar18 + 0x4c) = 0xffffffff;
    return 0;
  }
  if (uVar4 == 1) {
    if (param_2 != 5) {
      if (param_2 == 1) {
        FUN_00183e20();
      }
      else {
        FUN_00183c10(plVar18,0,0,0);
        if (param_2 == 3) {
          *(undefined2 *)(plVar18[0xf] + (ulong)(*(int *)((long)plVar18 + 0x84) - 1) * 2) = 0;
          memset((void *)plVar18[0xf],0,(ulong)(*(int *)((long)plVar18 + 0x84) - 1) << 1);
          if (*(int *)((long)plVar18 + 0xb4) == 0) {
            *(undefined4 *)((long)plVar18 + 0xac) = 0;
            plVar18[0x13] = 0;
            *(undefined4 *)((long)plVar18 + 0x172c) = 0;
          }
        }
      }
    }
    FUN_00181b50(param_1);
    if ((int)param_1[4] == 0) goto LAB_00181800;
  }
LAB_001817dc:
  if (param_2 != 4) {
    return 0;
  }
  if ((int)plVar18[6] < 1) {
    return 1;
  }
  lVar8 = param_1[0xc];
  if ((int)plVar18[6] == 2) {
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)lVar8;
    lVar8 = param_1[0xc];
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 8);
    lVar8 = param_1[0xc];
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x10);
    lVar8 = param_1[0xc];
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x18);
    lVar8 = plVar18[5];
    lVar13 = param_1[2];
    plVar18[5] = lVar8 + 1;
    *(char *)(plVar18[2] + lVar8) = (char)lVar13;
    lVar8 = param_1[2];
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 8);
    lVar8 = param_1[2];
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x10);
    lVar8 = plVar18[5];
    uVar5 = (ulong)param_1[2] >> 0x18;
  }
  else {
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x18);
    lVar13 = plVar18[5];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 0x10);
    uVar5 = param_1[0xc];
    lVar8 = plVar18[5];
    plVar18[5] = lVar8 + 1;
    *(char *)(plVar18[2] + lVar8) = (char)(uVar5 >> 8);
    lVar8 = plVar18[5];
  }
  plVar18[5] = lVar8 + 1;
  *(char *)(plVar18[2] + lVar8) = (char)uVar5;
  FUN_00181b50(param_1);
  if (0 < (int)plVar18[6]) {
    *(int *)(plVar18 + 6) = -(int)plVar18[6];
  }
  return (ulong)(plVar18[5] == 0);
switchD_001811c0_caseD_5b:
  if (*(long *)(plVar18[7] + 0x38) != 0) {
    uVar5 = plVar18[5];
    do {
      uVar19 = plVar18[5];
      lVar8 = plVar18[7];
      if (uVar19 == plVar18[3]) {
        if (*(int *)(lVar8 + 0x44) != 0 && uVar5 < uVar19) {
          lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2] + uVar5,(int)uVar19 - (int)uVar5);
          param_1[0xc] = lVar8;
        }
        lVar8 = param_1[7];
        FUN_00183d90(lVar8);
        uVar4 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar8 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar4 = *(uint *)(lVar8 + 0x28);
        }
        uVar5 = (ulong)uVar4;
        if (uVar4 != 0) {
          memcpy((void *)param_1[3],*(void **)(lVar8 + 0x20),uVar5);
          param_1[3] = param_1[3] + uVar5;
          *(ulong *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + uVar5;
          param_1[5] = param_1[5] + uVar5;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar4;
          lVar13 = *(long *)(lVar8 + 0x28) - uVar5;
          *(long *)(lVar8 + 0x28) = lVar13;
          if (lVar13 == 0) {
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
          }
        }
        if (plVar18[5] != 0) goto LAB_00181800;
        lVar8 = plVar18[7];
        uVar19 = 0;
        uVar5 = 0;
      }
      lVar13 = plVar18[8];
      lVar8 = *(long *)(lVar8 + 0x38);
      plVar18[8] = lVar13 + 1;
      cVar3 = *(char *)(lVar8 + lVar13);
      plVar18[5] = uVar19 + 1;
      *(char *)(plVar18[2] + uVar19) = cVar3;
    } while (cVar3 != '\0');
    if ((*(int *)(plVar18[7] + 0x44) != 0) && (uVar5 < (ulong)plVar18[5])) {
      lVar8 = FUN_0017ef30(param_1[0xc],plVar18[2] + uVar5,(int)plVar18[5] - (int)uVar5);
      param_1[0xc] = lVar8;
    }
  }
  *(undefined4 *)(plVar18 + 1) = 0x67;
switchD_001811c0_caseD_67:
  if (*(int *)(plVar18[7] + 0x44) != 0) {
    lVar8 = plVar18[5];
    if ((ulong)plVar18[3] < lVar8 + 2U) {
      FUN_00181b50(param_1);
      lVar8 = 0;
      if (plVar18[5] != 0) goto LAB_00181800;
    }
    lVar13 = param_1[0xc];
    plVar18[5] = lVar8 + 1;
    *(char *)(plVar18[2] + lVar8) = (char)lVar13;
    lVar13 = plVar18[5];
    lVar8 = param_1[0xc];
    plVar18[5] = lVar13 + 1;
    *(char *)(plVar18[2] + lVar13) = (char)((ulong)lVar8 >> 8);
    lVar8 = FUN_0017ef30(0,0,0);
    param_1[0xc] = lVar8;
  }
  *(undefined4 *)(plVar18 + 1) = 0x71;
  FUN_00181b50(param_1);
  if (plVar18[5] != 0) goto LAB_00181800;
  goto switchD_001811c0_caseD_46;
}

