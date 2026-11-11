
undefined8 FUN_003d7150(long *param_1,ulong param_2,long param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  long local_e0 [16];
  
  if ((char)param_1[0x1b] == '\0') {
    return 0;
  }
  if (*(short *)((long)param_1 + 300) != param_4) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
LAB_003d738c:
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x33);
    uVar4 = uVar2;
    if (0xf < (int)uVar2) {
      uVar4 = 0x10;
    }
    *(uint *)(param_1 + 0x8d) = uVar4;
    if (*(char *)((long)param_1 + 0xdb) != '\0') {
      if (0 < (int)uVar2) {
        plVar6 = param_1 + 0x91;
        uVar2 = uVar4;
        if ((int)uVar4 < 2) {
          uVar2 = 1;
        }
        uVar5 = (ulong)uVar2;
        do {
          if (*plVar6 == 0) {
            return 0;
          }
          plVar6 = plVar6 + 0x210;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((((char)param_1[0x8c] != '\0') && ((char)param_1[0x2d] != '\0')) &&
         (*(int *)((long)param_1 + 0x16c) != *(int *)((long)param_1 + 0x464))) {
        return 0;
      }
    }
    if (0 < (int)uVar4) {
      lVar11 = 0;
      plVar6 = param_1;
      do {
        lVar3 = FUN_003dd5c0(param_1[0x20]);
        if (lVar3 == 0) {
          if (lVar11 != 0) {
            plVar6 = param_1 + 0x90;
            do {
              FUN_003dd6b0(param_1[0x20],*plVar6);
              *plVar6 = 0;
              lVar11 = lVar11 + -1;
              plVar6 = plVar6 + 0x210;
            } while (lVar11 != 0);
          }
          (**(code **)(*param_1 + 0x18))(param_1);
          *(undefined1 *)((long)param_1 + 0x3c) = 1;
          return 0;
        }
        plVar6[0x90] = lVar3;
        lVar11 = lVar11 + 1;
        *(int *)(plVar6 + 0x298) = (int)param_1[0x2210];
        plVar6 = plVar6 + 0x210;
      } while (lVar11 < (int)param_1[0x8d]);
    }
    if ((char)param_1[0x28] == '\0') {
      if ((int)param_1[0x23] == 1) {
        uVar5 = (ulong)(param_1[0x24] * (long)*(int *)((long)param_1 + 0x13c)) / 1000;
        if (0xfffffffe < uVar5) {
          uVar5 = 0xffffffff;
        }
      }
      else if ((int)param_1[0x23] == 0) {
        uVar5 = param_1[0x24];
      }
      else {
        uVar5 = 0;
      }
      if ((ulong)param_1[0x2a] <= uVar5) goto LAB_003d738c;
    }
    FUN_003d8950(param_1,param_1 + 0x27);
    if (*(char *)((long)param_1 + 0xdb) != '\0') {
      *(undefined1 *)((long)param_1 + 0xd9) = 1;
      if (((char)param_1[7] == '\0') || ((char)param_1[0x2190] == '\0')) {
        param_1[0x233f] = -1;
        param_1[0x2340] = -1;
      }
LAB_003d7340:
      iVar10 = (int)param_1[0x8d];
      if (0 < iVar10) {
        lVar11 = 0;
        plVar6 = param_1 + 0x91;
        do {
          if (*(long *)(param_3 + lVar11 * 8) != 0) {
            FUN_003c2cec(*plVar6,0);
            iVar10 = (int)param_1[0x8d];
          }
          lVar11 = lVar11 + 1;
          plVar6 = plVar6 + 0x210;
        } while (lVar11 < iVar10);
      }
      return 1;
    }
    uVar5 = FUN_003d6960(param_1);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_003d69c0(param_1);
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)((long)param_1 + 0xec) = 0;
        if (0 < (int)param_1[0x21]) {
          iVar10 = 0;
          do {
            uVar4 = *(uint *)(param_1 + 0x8d);
            if (0 < (int)uVar4) {
              lVar11 = (param_1[0x2f] + 0x900) * (ulong)*(uint *)((long)param_1 + 0x10c);
              if (uVar4 < 4) {
                lVar3 = 0;
              }
              else {
                lVar3 = 0;
                plVar7 = local_e0 + 2;
                plVar6 = param_1;
                do {
                  lVar3 = lVar3 + -4;
                  lVar8 = plVar6[0x2a0];
                  lVar9 = plVar6[0x4b0];
                  plVar7[-2] = plVar6[0x90] + lVar11;
                  plVar7[-1] = lVar8 + lVar11;
                  lVar8 = plVar6[0x6c0];
                  plVar6 = plVar6 + 0x840;
                  *plVar7 = lVar9 + lVar11;
                  plVar7[1] = lVar8 + lVar11;
                  plVar7 = plVar7 + 4;
                } while (-lVar3 != ((ulong)uVar4 & 0xfffffffc));
                lVar3 = -lVar3;
              }
              if ((uVar4 & 3) != 0) {
                uVar5 = (ulong)uVar4 & 3;
                plVar6 = param_1 + lVar3 * 0x210 + 0x90;
                plVar7 = local_e0 + lVar3;
                do {
                  lVar3 = *plVar6;
                  plVar6 = plVar6 + 0x210;
                  uVar5 = uVar5 - 1;
                  *plVar7 = lVar3 + lVar11;
                  plVar7 = plVar7 + 1;
                } while (uVar5 != 0);
              }
            }
            if ((int)param_1[0x23] == 0) {
              uVar5 = param_1[0x24];
            }
            else if ((int)param_1[0x23] == 1) {
              uVar5 = (ulong)(param_1[0x24] * (long)*(int *)((long)param_1 + 0x13c)) / 1000;
              if (0xfffffffe < uVar5) {
                uVar5 = 0xffffffff;
              }
            }
            else {
              uVar5 = 0;
            }
            param_1[0x24] = 0;
            lVar11 = param_1[0x8b];
            param_1[0x8b] = 0;
            uVar12 = 1;
            if (*(char *)((long)param_1 + 0x39) != '\0') {
              uVar12 = 2;
            }
            FUN_003d9160(param_1[0x1f],local_e0,*(undefined4 *)((long)param_1 + 0x10c),uVar5,lVar11,
                         uVar12);
            iVar10 = iVar10 + 1;
            *(int *)((long)param_1 + 0xec) = *(int *)((long)param_1 + 0xec) + 1;
            iVar1 = 0;
            if (*(int *)((long)param_1 + 0x10c) + 1U < *(uint *)(param_1 + 0x21)) {
              iVar1 = *(int *)((long)param_1 + 0x10c) + 1;
            }
            *(int *)((long)param_1 + 0x10c) = iVar1;
          } while (iVar10 < (int)*(uint *)(param_1 + 0x21));
        }
        goto LAB_003d7340;
      }
      FUN_003d5fe0(param_1);
    }
  }
  return 0;
}

