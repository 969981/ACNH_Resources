
void FUN_038847a0(long *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  long local_78;
  undefined1 local_70 [16];
  
  if ((char)param_1[0x11] != '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x25c) != '\0') {
    (**(code **)(*param_1 + 0x270))(param_1);
    *(undefined1 *)((long)param_1 + 0x25c) = 0;
    *(undefined1 *)((long)param_1 + 0x89) = 1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x43));
  FUN_0388de70(param_1[0x1f],0);
  plVar19 = (long *)param_1[0x27];
  if (plVar19 != param_1 + 0x26) {
    plVar11 = plVar19 + -0xd;
    do {
      plVar20 = (long *)plVar19[1];
      FUN_03885a70(param_1,plVar11);
      if (*plVar19 != 0) {
        *(long *)(*plVar19 + 8) = plVar19[1];
      }
      if ((long *)plVar19[1] != (long *)0x0) {
        *(long *)plVar19[1] = *plVar19;
      }
      *plVar19 = 0;
      plVar19[1] = 0;
      *(int *)(param_1 + 0x28) = (int)param_1[0x28] + -1;
      *plVar11 = param_1[0x29];
      param_1[0x29] = (long)plVar11;
      plVar11 = plVar20 + -0xd;
      plVar19 = plVar20;
    } while (plVar11 != param_1 + 0x19);
  }
  puVar3 = PTR_DAT_04bcb7d8;
  if ((int)param_1[0x35] != 0xd) {
    (**(code **)(*(long *)param_1[0x1f] + 0x20))((long *)param_1[0x1f],param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x36) = 0;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0xd;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined2 *)param_1[0x38] = 0;
    FUN_0388d4f0(param_1[0x1f]);
    lVar6 = param_1[0x1f];
    if (*(int *)(lVar6 + 0x28) != 0) {
      plVar19 = *(long **)(lVar6 + 0x30);
      lVar12 = (long)*(int *)(lVar6 + 0x28) << 3;
      do {
        lVar15 = *plVar19;
        if (((*(long *)(lVar15 + 0x10) == param_1[5]) &&
            (*(char *)(lVar15 + 0x18) == (char)param_1[6])) &&
           (*(char *)(lVar15 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_0388495c;
        plVar19 = plVar19 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    if (((*(long *)(lVar6 + 0x88) != param_1[5]) || (*(char *)(lVar6 + 0x90) != (char)param_1[6]))
       || (*(char *)(lVar6 + 0x91) != *(char *)((long)param_1 + 0x31))) goto LAB_03885a50;
    lVar15 = lVar6 + 0x78;
LAB_0388495c:
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar15 + 0x21);
    lVar12 = param_1[2];
    plVar19 = *(long **)(lVar6 + 0x30);
    iVar5 = *(int *)(lVar6 + 0x28);
    if (iVar5 != 0) {
      cVar4 = (char)param_1[3];
      lVar15 = (long)iVar5 << 3;
      cVar1 = *(char *)((long)param_1 + 0x19);
      plVar11 = plVar19;
      do {
        lVar18 = *plVar11;
        if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
           (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_038849f4;
        plVar11 = plVar11 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
    if (((*(long *)(lVar6 + 0x88) == lVar12) &&
        (cVar4 = *(char *)(lVar6 + 0x90), cVar4 == (char)param_1[3])) &&
       (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar6 + 0x91) == cVar1)) {
LAB_038849f4:
      if (iVar5 != 0) {
        lVar15 = (long)iVar5 << 3;
        do {
          lVar18 = *plVar19;
          if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
             (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03884a60;
          plVar19 = plVar19 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      if (((*(long *)(lVar6 + 0x88) != lVar12) || (*(char *)(lVar6 + 0x90) != cVar4)) ||
         (*(char *)(lVar6 + 0x91) != cVar1)) goto LAB_03885a50;
      lVar18 = lVar6 + 0x78;
LAB_03884a60:
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar18 + 0x21);
    }
    param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0) + 0x4f0);
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
  }
  uVar21 = 0;
  uVar22 = 0;
  plVar19 = (long *)param_1[0x21];
  do {
    plVar11 = plVar19 + -0xd;
    if (plVar11 == param_1 + 0x13) goto LAB_038853f8;
    lVar6 = 0;
    local_70._0_4_ = (int)plVar19[-10];
    plVar20 = (long *)plVar19[1];
    switch((int)plVar19[-10]) {
    case 0:
    case 1:
      uVar7 = (**(code **)(*param_1 + 0x280))(param_1,plVar11);
      if ((uVar7 & 1) == 0) {
        lVar6 = 0;
        if ((plVar19[-0xc] == param_1[2]) &&
           ((uint)*(byte *)(param_1 + 3) == ((uint)plVar19[-0xb] & 0xff))) {
          if ((uint)*(byte *)((long)param_1 + 0x19) == ((uint)((ulong)plVar19[-0xb] >> 8) & 0xff)) {
            lVar12 = *(long *)(*(long *)puVar3 + 0x20);
            lVar6 = nn::os::GetSystemTick();
            lVar6 = lVar6 - param_1[0x4c];
            if (lVar6 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
              lVar15 = 0;
              if (DAT_05ae7888 != 0) {
                lVar15 = (lVar6 * 1000) / DAT_05ae7888;
              }
            }
            else {
              lVar15 = 0;
              if (DAT_05ae7888 != 0) {
                lVar15 = lVar6 / DAT_05ae7888;
              }
              lVar15 = lVar15 * 1000;
            }
            if ((long)(ulong)*(uint *)(lVar12 + 0xc) < lVar15) {
              nn::os::GetSystemTick();
              (**(code **)(*param_1 + 0x1d8))(param_1,1);
              lVar12 = *(long *)(*(long *)puVar3 + 0x30);
              if (*(char *)(lVar12 + 0x80) != '\0') goto LAB_0388521c;
              lVar6 = 0;
              *(undefined1 *)(lVar12 + 0x80) = 1;
              *(undefined8 *)(lVar12 + 0x84) = 0xc;
              lVar12 = *plVar19;
              plVar10 = (long *)plVar19[1];
              goto joined_r0x03885100;
            }
          }
          goto LAB_03885174;
        }
        break;
      }
      FUN_0388d4f0(param_1[0x1f]);
      lVar6 = param_1[0x1f];
      if (*(int *)(lVar6 + 0x28) != 0) {
        plVar10 = *(long **)(lVar6 + 0x30);
        lVar12 = (long)*(int *)(lVar6 + 0x28) << 3;
        do {
          lVar15 = *plVar10;
          if (((*(long *)(lVar15 + 0x10) == param_1[5]) &&
              (*(char *)(lVar15 + 0x18) == (char)param_1[6])) &&
             (*(char *)(lVar15 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_03884d78;
          plVar10 = plVar10 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      if (((*(long *)(lVar6 + 0x88) == param_1[5]) && (*(char *)(lVar6 + 0x90) == (char)param_1[6]))
         && (*(char *)(lVar6 + 0x91) == *(char *)((long)param_1 + 0x31))) {
        lVar15 = lVar6 + 0x78;
LAB_03884d78:
        *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar15 + 0x21);
        lVar12 = param_1[2];
        plVar10 = *(long **)(lVar6 + 0x30);
        iVar5 = *(int *)(lVar6 + 0x28);
        if (iVar5 != 0) {
          cVar4 = (char)param_1[3];
          lVar15 = (long)iVar5 << 3;
          cVar1 = *(char *)((long)param_1 + 0x19);
          plVar17 = plVar10;
          do {
            lVar18 = *plVar17;
            if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
               (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03884e08;
            plVar17 = plVar17 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        if (((*(long *)(lVar6 + 0x88) == lVar12) &&
            (cVar4 = *(char *)(lVar6 + 0x90), cVar4 == (char)param_1[3])) &&
           (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar6 + 0x91) == cVar1)) {
LAB_03884e08:
          if (iVar5 != 0) {
            lVar15 = (long)iVar5 << 3;
            do {
              lVar18 = *plVar10;
              if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
                 (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03885084;
              plVar10 = plVar10 + 1;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
          if (((*(long *)(lVar6 + 0x88) != lVar12) || (*(char *)(lVar6 + 0x90) != cVar4)) ||
             (*(char *)(lVar6 + 0x91) != cVar1)) goto LAB_03885a50;
          lVar18 = lVar6 + 0x78;
LAB_03885084:
          *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar18 + 0x21);
        }
        param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0) + 0x4f0);
        (**(code **)(*param_1 + 0x1d8))(param_1,0);
        uVar7 = (ulong)*(uint *)(param_1 + 0x14);
        if (0 < (int)*(uint *)(param_1 + 0x14)) {
          plVar10 = (long *)param_1[0x15];
          do {
            if (*(char *)*plVar10 == -2) {
              lVar12 = *plVar10;
              if (lVar12 != 0) {
                lVar6 = 0;
                *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) & 0xfffffffe;
                lVar12 = *plVar19;
                plVar10 = (long *)plVar19[1];
                goto joined_r0x03885100;
              }
              break;
            }
            plVar10 = plVar10 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
LAB_0388521c:
        lVar6 = 0;
        lVar12 = *plVar19;
        plVar10 = (long *)plVar19[1];
        goto joined_r0x03885100;
      }
      goto LAB_03885a50;
    case 3:
      uVar7 = (**(code **)(*param_1 + 0x290))(param_1,plVar11);
      if ((uVar7 & 1) != 0) {
        FUN_0388d4f0(param_1[0x1f]);
        lVar6 = param_1[0x1f];
        if (*(int *)(lVar6 + 0x28) != 0) {
          plVar10 = *(long **)(lVar6 + 0x30);
          lVar12 = (long)*(int *)(lVar6 + 0x28) << 3;
          do {
            lVar15 = *plVar10;
            if (((*(long *)(lVar15 + 0x10) == param_1[5]) &&
                (*(char *)(lVar15 + 0x18) == (char)param_1[6])) &&
               (*(char *)(lVar15 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_03884f88;
            plVar10 = plVar10 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
        if (((*(long *)(lVar6 + 0x88) == param_1[5]) &&
            (*(char *)(lVar6 + 0x90) == (char)param_1[6])) &&
           (*(char *)(lVar6 + 0x91) == *(char *)((long)param_1 + 0x31))) {
          lVar15 = lVar6 + 0x78;
LAB_03884f88:
          *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar15 + 0x21);
          lVar12 = param_1[2];
          plVar10 = *(long **)(lVar6 + 0x30);
          iVar5 = *(int *)(lVar6 + 0x28);
          if (iVar5 != 0) {
            cVar4 = (char)param_1[3];
            lVar15 = (long)iVar5 << 3;
            cVar1 = *(char *)((long)param_1 + 0x19);
            plVar17 = plVar10;
            do {
              lVar18 = *plVar17;
              if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
                 (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03885018;
              plVar17 = plVar17 + 1;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
          if (((*(long *)(lVar6 + 0x88) == lVar12) &&
              (cVar4 = *(char *)(lVar6 + 0x90), cVar4 == (char)param_1[3])) &&
             (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar6 + 0x91) == cVar1)) {
LAB_03885018:
            if (iVar5 != 0) {
              lVar15 = (long)iVar5 << 3;
              do {
                lVar18 = *plVar10;
                if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
                   (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03885254;
                plVar10 = plVar10 + 1;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
            }
            if (((*(long *)(lVar6 + 0x88) != lVar12) || (*(char *)(lVar6 + 0x90) != cVar4)) ||
               (*(char *)(lVar6 + 0x91) != cVar1)) goto LAB_03885a50;
            lVar18 = lVar6 + 0x78;
LAB_03885254:
            *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar18 + 0x21);
          }
          param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0) + 0x4f0);
          (**(code **)(*param_1 + 0x1d8))(param_1,0);
          (**(code **)(*param_1 + 0x1d8))(param_1,1);
          uVar21 = *(uint *)(plVar19 + -0xb) & 0xff;
          lVar6 = plVar19[-0xc];
          uVar22 = *(uint *)(plVar19 + -0xb) >> 8 & 0xff;
          goto switchD_03884b10_caseD_6;
        }
        goto LAB_03885a50;
      }
LAB_03885174:
      lVar6 = 0;
      break;
    case 5:
      uVar7 = (**(code **)(*param_1 + 0x2a0))(param_1,plVar11);
      if ((uVar7 & 1) == 0) goto LAB_03885174;
      FUN_0388d4f0(param_1[0x1f]);
      lVar6 = param_1[0x1f];
      if (*(int *)(lVar6 + 0x28) != 0) {
        plVar10 = *(long **)(lVar6 + 0x30);
        lVar12 = (long)*(int *)(lVar6 + 0x28) << 3;
        do {
          lVar15 = *plVar10;
          if (((*(long *)(lVar15 + 0x10) == param_1[5]) &&
              (*(char *)(lVar15 + 0x18) == (char)param_1[6])) &&
             (*(char *)(lVar15 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_03884e7c;
          plVar10 = plVar10 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      if (((*(long *)(lVar6 + 0x88) == param_1[5]) && (*(char *)(lVar6 + 0x90) == (char)param_1[6]))
         && (*(char *)(lVar6 + 0x91) == *(char *)((long)param_1 + 0x31))) {
        lVar15 = lVar6 + 0x78;
LAB_03884e7c:
        *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar15 + 0x21);
        lVar12 = param_1[2];
        plVar10 = *(long **)(lVar6 + 0x30);
        iVar5 = *(int *)(lVar6 + 0x28);
        if (iVar5 != 0) {
          cVar4 = (char)param_1[3];
          lVar15 = (long)iVar5 << 3;
          cVar1 = *(char *)((long)param_1 + 0x19);
          plVar17 = plVar10;
          do {
            lVar18 = *plVar17;
            if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
               (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_03884f14;
            plVar17 = plVar17 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        if (((*(long *)(lVar6 + 0x88) == lVar12) &&
            (cVar4 = *(char *)(lVar6 + 0x90), cVar4 == (char)param_1[3])) &&
           (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar6 + 0x91) == cVar1)) {
LAB_03884f14:
          if (iVar5 != 0) {
            lVar15 = (long)iVar5 << 3;
            do {
              lVar18 = *plVar10;
              if (((*(long *)(lVar18 + 0x10) == lVar12) && (*(char *)(lVar18 + 0x18) == cVar4)) &&
                 (*(char *)(lVar18 + 0x19) == cVar1)) goto LAB_038851a4;
              plVar10 = plVar10 + 1;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
          if (((*(long *)(lVar6 + 0x88) != lVar12) || (*(char *)(lVar6 + 0x90) != cVar4)) ||
             (*(char *)(lVar6 + 0x91) != cVar1)) goto LAB_03885a50;
          lVar18 = lVar6 + 0x78;
LAB_038851a4:
          *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar18 + 0x21);
        }
        param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0) + 0x4f0);
        (**(code **)(*param_1 + 0x1d8))(param_1,0);
        (**(code **)(*param_1 + 0x1d8))(param_1,1);
        lVar6 = 0;
        if ((param_1[2] == plVar19[-0xc]) &&
           (*(char *)((long)param_1 + 0x19) == *(char *)((long)plVar19 + -0x57))) {
          (**(code **)(*param_1 + 0x1b0))(param_1);
          goto LAB_0388521c;
        }
        goto switchD_03884b10_caseD_6;
      }
      goto LAB_03885a50;
    case 6:
    case 7:
switchD_03884b10_caseD_6:
      lVar12 = *plVar19;
      plVar10 = (long *)plVar19[1];
joined_r0x03885100:
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar10;
        plVar10 = (long *)plVar19[1];
      }
      if (plVar10 != (long *)0x0) {
        *plVar10 = *plVar19;
      }
      *plVar19 = 0;
      plVar19[1] = 0;
      *(int *)(param_1 + 0x22) = (int)param_1[0x22] + -1;
      plVar19[-0xd] = param_1[0x23];
      param_1[0x23] = (long)plVar11;
      FUN_0388d4f0(param_1[0x1f]);
      break;
    case 10:
      uVar7 = (**(code **)(*param_1 + 0x2d0))(param_1,plVar11);
      lVar6 = 0;
      if ((uVar7 & 1) != 0) goto switchD_03884b10_caseD_6;
    }
    plVar19 = plVar20;
  } while (lVar6 == 0);
  plVar19 = (long *)param_1[0x21];
  while( true ) {
    plVar11 = plVar19;
    plVar20 = plVar11 + -0xd;
    if (plVar20 == param_1 + 0x13) break;
    plVar19 = (long *)plVar11[1];
    if (((int)plVar11[-10] != 3) && (plVar11[-0xc] == lVar6)) {
      if ((uVar21 == (*(uint *)(plVar11 + -0xb) & 0xff)) &&
         (uVar22 == (*(uint *)(plVar11 + -0xb) >> 8 & 0xff))) {
        plVar10 = plVar19;
        if (*plVar11 != 0) {
          *(long **)(*plVar11 + 8) = plVar19;
          plVar10 = (long *)plVar11[1];
        }
        if (plVar10 != (long *)0x0) {
          *plVar10 = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        *(int *)(param_1 + 0x22) = (int)param_1[0x22] + -1;
        *plVar20 = param_1[0x23];
        param_1[0x23] = (long)plVar20;
      }
    }
  }
  plVar19 = (long *)param_1[0x2d];
  if (plVar19 != param_1 + 0x2c) {
    plVar11 = plVar19 + -0xd;
    do {
      plVar20 = (long *)plVar19[1];
      if ((plVar11[1] == lVar6 && uVar21 == (*(uint *)(plVar11 + 2) & 0xff)) &&
          uVar22 == (*(uint *)(plVar11 + 2) >> 8 & 0xff)) {
        plVar10 = plVar20;
        if (*plVar19 != 0) {
          *(long **)(*plVar19 + 8) = plVar20;
          plVar10 = (long *)plVar19[1];
        }
        if (plVar10 != (long *)0x0) {
          *plVar10 = *plVar19;
        }
        *plVar19 = 0;
        plVar19[1] = 0;
        *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + -1;
        *plVar11 = param_1[0x2f];
        param_1[0x2f] = (long)plVar11;
      }
      plVar11 = plVar20 + -0xd;
      plVar19 = plVar20;
    } while (plVar11 != param_1 + 0x1f);
  }
LAB_038853f8:
  uVar7 = (ulong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    plVar19 = (long *)param_1[0x15];
    do {
      if (*(char *)*plVar19 == -2) {
        lVar6 = *plVar19;
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 4) =
               *(uint *)(lVar6 + 4) & 0xfffffff0 |
               *(uint *)(lVar6 + 4) & 7 | (uint)(*(char *)((long)param_1 + 0x26c) == '\0') << 3;
          goto LAB_038854a8;
        }
        break;
      }
      plVar19 = plVar19 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (*(char *)((long)param_1 + 0x26c) == '\0') {
    plVar19 = (long *)param_1[0x16];
    if (plVar19 != (long *)0x0) {
      param_1[0x16] = *plVar19;
    }
    *plVar19 = 0;
    if ((int)param_1[0x14] < *(int *)((long)param_1 + 0xa4)) {
      *(long **)(param_1[0x15] + (long)(int)param_1[0x14] * 8) = plVar19;
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
      uVar21 = *(uint *)((long)plVar19 + 4);
    }
    else {
      uVar21 = 0;
    }
    *(undefined1 *)plVar19 = 0xfe;
    *(uint *)((long)plVar19 + 4) = uVar21 | 8;
  }
LAB_038854a8:
  cVar4 = (**(code **)(*param_1 + 0x80))(param_1);
  local_70[0] = cVar4;
  if (cVar4 != -1) {
    if ((char)param_1[4] == cVar4) goto LAB_038854d4;
    if (*(char *)((long)param_1 + 0x26c) == '\0') {
      plVar19 = *(long **)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0);
      uVar7 = (**(code **)(*plVar19 + 0xb8))(plVar19,local_70);
      if ((uVar7 & 1) != 0) {
        auVar24 = (**(code **)(*param_1 + 0x130))(param_1,local_70);
        uVar7 = (ulong)*(uint *)(plVar19 + 0xa8);
        if (0 < (int)*(uint *)(plVar19 + 0xa8)) {
          plVar11 = (long *)plVar19[0xa9];
          uVar21 = auVar24._8_4_ & 0xff;
          uVar22 = auVar24._8_4_ >> 8 & 0xff;
          plVar19 = plVar11;
          uVar13 = uVar7;
          do {
            plVar20 = (long *)*plVar19;
            if (((*plVar20 == auVar24._0_8_) && (*(byte *)(plVar20 + 1) == uVar21)) &&
               (*(byte *)((long)plVar20 + 9) == uVar22)) {
              if (*plVar19 != 0) {
                lVar6 = *(long *)(*plVar19 + 0x10);
                if (lVar6 == 0xffffffffffffff) goto LAB_03885590;
                goto LAB_03885a10;
              }
              break;
            }
            plVar19 = plVar19 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        goto LAB_038854d4;
      }
    }
  }
  goto LAB_03885590;
LAB_03885a10:
  do {
    plVar19 = (long *)*plVar11;
    lVar12 = plVar19[2];
    if (lVar12 != 0xffffffffffffff) {
      if ((*plVar19 == auVar24._0_8_) && (*(byte *)(plVar19 + 1) == uVar21)) {
        if ((lVar12 < lVar6) && (*(byte *)((long)plVar19 + 9) != uVar22)) goto LAB_03885590;
      }
      else if (lVar12 < lVar6) goto LAB_03885590;
    }
    uVar7 = uVar7 - 1;
    plVar11 = plVar11 + 1;
  } while (uVar7 != 0);
LAB_038854d4:
  *(undefined1 *)((long)param_1 + 0x26c) = 1;
LAB_03885590:
  if (*(char *)((long)param_1 + 0x8a) != '\0') {
    FUN_0388d4f0(param_1[0x1f]);
    *(undefined1 *)((long)param_1 + 0x8a) = 0;
  }
  iVar5 = (int)param_1[0x4b];
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    FUN_0388f4f0(param_1[0x1f]);
    iVar5 = 0xf;
  }
  *(int *)(param_1 + 0x4b) = iVar5 + -1;
  FUN_0388de70(param_1[0x1f],0);
  *(int *)(param_1 + 0x4d) = (int)param_1[0x22];
  FUN_038a3fa0(param_1 + 0x12);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x43));
  lVar6 = *(long *)(*(long *)puVar3 + 0x60);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x38));
  if ((*(long *)(lVar6 + 8) == 0) ||
     (param_1[5] == *(long *)(lVar6 + 8) || *(char *)((long)param_1 + 0x26c) == '\0'))
  goto LAB_038859c4;
  iVar5 = *(int *)(lVar6 + 0x60);
  if (0 < iVar5) {
    lVar12 = 0;
    do {
      lVar15 = **(long **)(*(long *)(lVar6 + 0x68) + lVar12 * 8);
      if (lVar15 != 0 && *(char *)((long)param_1 + 0x26e) == '\0') {
        local_78 = lVar15;
        auVar23 = FUN_03885d80(param_1,&local_78);
        local_70 = auVar23;
        if (auVar23._0_8_ != 0) {
          (**(code **)(*param_1 + 0x2f8))(param_1,local_70,0xffffffff);
        }
        iVar5 = *(int *)(lVar6 + 0x60);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar5);
  }
  *(undefined1 *)((long)param_1 + 0x26e) = 0;
  local_70._0_8_ = *(undefined8 *)(lVar6 + 8);
  auVar23 = FUN_03885d80(param_1,local_70);
  lVar12 = auVar23._0_8_;
  *(undefined8 *)(lVar6 + 8) = 0;
  if (0 < *(int *)(lVar6 + 0x60)) {
    lVar15 = 0;
    puVar8 = *(undefined8 **)(lVar6 + 0x70);
    do {
      puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x68) + lVar15 * 8);
      lVar15 = lVar15 + 1;
      *puVar9 = puVar8;
      *(undefined8 **)(lVar6 + 0x70) = puVar9;
      puVar8 = puVar9;
    } while (lVar15 < *(int *)(lVar6 + 0x60));
  }
  *(undefined4 *)(lVar6 + 0x60) = 0;
  lVar15 = param_1[0x1f];
  lVar18 = *(long *)(lVar15 + 0x88);
  uVar21 = auVar23._8_4_;
  if (((((lVar18 == 0) || (*(char *)(lVar15 + 0x98) == -1)) || (*(char *)(lVar15 + 0x99) == -1)) ||
      ((lVar12 != lVar18 || ((uint)*(byte *)(lVar15 + 0x90) != (uVar21 & 0xff))))) ||
     ((uint)*(byte *)(lVar15 + 0x91) != (auVar23._9_4_ & 0xff))) {
    if (lVar12 != 0) {
      if (*(int *)(lVar15 + 0x28) != 0) {
        plVar19 = *(long **)(lVar15 + 0x30);
        lVar14 = (long)*(int *)(lVar15 + 0x28) << 3;
        do {
          lVar16 = *plVar19;
          if (((*(long *)(lVar16 + 0x10) == lVar12) &&
              ((uint)*(byte *)(lVar16 + 0x18) == (uVar21 & 0xff))) &&
             ((uint)*(byte *)(lVar16 + 0x19) == (uVar21 >> 8 & 0xff))) goto LAB_038857c0;
          plVar19 = plVar19 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      if (((lVar12 == lVar18) && ((uint)*(byte *)(lVar15 + 0x90) == (uVar21 & 0xff))) &&
         ((uint)*(byte *)(lVar15 + 0x91) == (auVar23._9_4_ & 0xff))) {
        lVar16 = lVar15 + 0x78;
LAB_038857c0:
        if (*(int *)(lVar16 + 8) == 2) goto LAB_038857cc;
      }
    }
    lVar12 = *(long *)(*(long *)puVar3 + 0x30);
    if (*(char *)(lVar12 + 0x80) == '\0') {
      *(undefined1 *)(lVar12 + 0x80) = 1;
      *(undefined8 *)(lVar12 + 0x84) = 0xe;
      lVar15 = param_1[0x1f];
    }
  }
  else {
LAB_038857cc:
    param_1[5] = lVar12;
    *(short *)(param_1 + 6) = auVar23._8_2_;
  }
  FUN_0388d4f0(lVar15);
  lVar12 = param_1[0x1f];
  if (*(int *)(lVar12 + 0x28) != 0) {
    plVar19 = *(long **)(lVar12 + 0x30);
    lVar15 = (long)*(int *)(lVar12 + 0x28) << 3;
    do {
      lVar18 = *plVar19;
      if (((*(long *)(lVar18 + 0x10) == param_1[5]) &&
          (*(char *)(lVar18 + 0x18) == (char)param_1[6])) &&
         (*(char *)(lVar18 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_03885898;
      plVar19 = plVar19 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  if (((*(long *)(lVar12 + 0x88) != param_1[5]) || (*(char *)(lVar12 + 0x90) != (char)param_1[6]))
     || (*(char *)(lVar12 + 0x91) != *(char *)((long)param_1 + 0x31))) {
LAB_03885a50:
    (**(code **)(**(long **)(*(long *)puVar3 + 0x68) + 0x1d8))(*(long **)(*(long *)puVar3 + 0x68),0)
    ;
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x3885a68);
    (*pcVar2)();
  }
  lVar18 = lVar12 + 0x78;
LAB_03885898:
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar18 + 0x21);
  lVar15 = param_1[2];
  plVar19 = *(long **)(lVar12 + 0x30);
  iVar5 = *(int *)(lVar12 + 0x28);
  if (iVar5 != 0) {
    cVar4 = (char)param_1[3];
    lVar18 = (long)iVar5 << 3;
    cVar1 = *(char *)((long)param_1 + 0x19);
    plVar11 = plVar19;
    do {
      lVar14 = *plVar11;
      if (((*(long *)(lVar14 + 0x10) == lVar15) && (*(char *)(lVar14 + 0x18) == cVar4)) &&
         (*(char *)(lVar14 + 0x19) == cVar1)) goto LAB_03885928;
      plVar11 = plVar11 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  if (((*(long *)(lVar12 + 0x88) == lVar15) &&
      (cVar4 = *(char *)(lVar12 + 0x90), cVar4 == (char)param_1[3])) &&
     (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar12 + 0x91) == cVar1)) {
LAB_03885928:
    if (iVar5 != 0) {
      lVar18 = (long)iVar5 << 3;
      do {
        lVar14 = *plVar19;
        if (((*(long *)(lVar14 + 0x10) == lVar15) && (*(char *)(lVar14 + 0x18) == cVar4)) &&
           (*(char *)(lVar14 + 0x19) == cVar1)) goto LAB_03885994;
        plVar19 = plVar19 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
    }
    if (((*(long *)(lVar12 + 0x88) != lVar15) || (*(char *)(lVar12 + 0x90) != cVar4)) ||
       (*(char *)(lVar12 + 0x91) != cVar1)) goto LAB_03885a50;
    lVar14 = lVar12 + 0x78;
LAB_03885994:
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar14 + 0x21);
  }
  param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x90) + 0xc0) + 0x4f0);
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
LAB_038859c4:
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x38));
  (**(code **)(*param_1 + 0x1c0))(param_1);
  return;
}

