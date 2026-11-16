
void FUN_028cd510(long *param_1,long *param_2,long *param_3,undefined1 *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar10 = *param_2;
  if (((lVar10 != 0) && (piVar8 = (int *)((long)param_3 + 0x1c), *piVar8 != 0)) &&
     ((int)*param_3 != 0)) {
    lVar14 = 0x44c;
    plVar1 = param_1 + 0x226;
    do {
      uVar12 = *(uint *)((long)param_1 + lVar14 * 4);
      plVar11 = param_1 + (ulong)uVar12 * 0xb;
      if (0x31 < uVar12) {
        plVar11 = param_1;
      }
      if ((*plVar11 != 0) &&
         ((*plVar11 == lVar10 && *(int *)((long)plVar11 + 0x24) != 0) && (int)plVar11[1] != 0)) {
        uVar13 = lVar14 - 0x44c;
        uVar12 = (uint)uVar13;
        if (-1 < (int)uVar12) {
          plVar11 = param_1;
          if ((uVar12 < 0x32) &&
             (uVar5 = *(uint *)((long)param_1 + lVar14 * 4), plVar11 = param_1 + (ulong)uVar5 * 0xb,
             0x31 < uVar5)) {
            plVar11 = param_1;
          }
          lVar10 = *param_3;
          lVar14 = param_3[1];
          lVar16 = param_3[2];
          *(char *)(plVar11 + 4) = (char)param_3[3];
          plVar11[1] = lVar10;
          plVar11[2] = lVar14;
          plVar11[3] = lVar16;
          uVar9 = *(undefined8 *)piVar8;
          uVar4 = *(undefined8 *)((long)param_3 + 0x24);
          *(undefined8 *)((long)plVar11 + 0x34) = *(undefined8 *)((long)param_3 + 0x2c);
          *(undefined8 *)((long)plVar11 + 0x2c) = uVar4;
          *(undefined8 *)((long)plVar11 + 0x24) = uVar9;
          uVar5 = *(uint *)((long)param_3 + 0x34);
          if (1 < uVar5) {
            uVar5 = 0;
          }
          *(uint *)((long)plVar11 + 0x3c) = uVar5;
          *(undefined1 *)(plVar11 + 8) = *param_4;
          *(undefined1 *)((long)plVar11 + 0x41) = param_4[1];
          *(undefined1 *)((long)plVar11 + 0x42) = param_4[2];
          *(undefined1 *)((long)plVar11 + 0x43) = param_4[3];
          *(undefined1 *)((long)plVar11 + 0x44) = param_4[4];
          *(undefined1 *)((long)plVar11 + 0x45) = param_4[5];
          *(undefined1 *)((long)plVar11 + 0x46) = param_4[6];
          *(undefined1 *)((long)plVar11 + 0x47) = param_4[7];
          *(undefined1 *)(plVar11 + 9) = param_4[8];
          *(undefined2 *)((long)plVar11 + 0x4a) = *(undefined2 *)(param_4 + 10);
          *(undefined8 *)((long)plVar11 + 0x4c) = *param_5;
          if (0x31 < uVar12) {
            return;
          }
          goto LAB_028cd7b0;
        }
        break;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x47e);
    lVar14 = 0x44c;
    do {
      uVar12 = *(uint *)((long)param_1 + lVar14 * 4);
      plVar11 = param_1 + (ulong)uVar12 * 0xb;
      if (0x31 < uVar12) {
        plVar11 = param_1;
      }
      if ((*plVar11 == 0) || (*(int *)((long)plVar11 + 0x24) == 0 || (int)plVar11[1] == 0)) {
        uVar13 = lVar14 - 0x44c;
        if (-1 < (int)uVar13) goto LAB_028cd6ec;
        break;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x47e);
    lVar14 = 0x47d;
    do {
      uVar12 = *(uint *)((long)param_1 + lVar14 * 4);
      plVar11 = param_1 + (ulong)uVar12 * 0xb;
      if (0x31 < uVar12) {
        plVar11 = param_1;
      }
      if (((*plVar11 == 0) || (*(int *)((long)plVar11 + 0x24) == 0 || (int)plVar11[1] == 0)) ||
         ((*(byte *)((long)plVar11 + 0x54) & 1) == 0)) {
        uVar13 = lVar14 - 0x44c;
        if ((int)uVar13 < 0) {
          return;
        }
LAB_028cd6ec:
        plVar11 = param_1;
        if (((uint)uVar13 < 0x32) &&
           (uVar12 = *(uint *)((long)plVar1 + (uVar13 & 0xffffffff) * 4),
           plVar11 = param_1 + (ulong)uVar12 * 0xb, 0x31 < uVar12)) {
          plVar11 = param_1;
        }
        *plVar11 = lVar10;
        lVar10 = *param_3;
        lVar14 = param_3[1];
        lVar16 = param_3[2];
        *(char *)(plVar11 + 4) = (char)param_3[3];
        plVar11[2] = lVar14;
        plVar11[3] = lVar16;
        plVar11[1] = lVar10;
        uVar9 = *(undefined8 *)piVar8;
        uVar4 = *(undefined8 *)((long)param_3 + 0x24);
        *(undefined8 *)((long)plVar11 + 0x34) = *(undefined8 *)((long)param_3 + 0x2c);
        *(undefined8 *)((long)plVar11 + 0x2c) = uVar4;
        *(undefined8 *)((long)plVar11 + 0x24) = uVar9;
        uVar12 = *(uint *)((long)param_3 + 0x34);
        if (1 < uVar12) {
          uVar12 = 0;
        }
        *(uint *)((long)plVar11 + 0x3c) = uVar12;
        *(undefined1 *)(plVar11 + 8) = *param_4;
        *(undefined1 *)((long)plVar11 + 0x41) = param_4[1];
        *(undefined1 *)((long)plVar11 + 0x42) = param_4[2];
        *(undefined1 *)((long)plVar11 + 0x43) = param_4[3];
        *(undefined1 *)((long)plVar11 + 0x44) = param_4[4];
        *(undefined1 *)((long)plVar11 + 0x45) = param_4[5];
        *(undefined1 *)((long)plVar11 + 0x46) = param_4[6];
        *(undefined1 *)((long)plVar11 + 0x47) = param_4[7];
        *(undefined1 *)(plVar11 + 9) = param_4[8];
        *(undefined2 *)((long)plVar11 + 0x4a) = *(undefined2 *)(param_4 + 10);
        uVar9 = *param_5;
        *(undefined1 *)((long)plVar11 + 0x54) = 0;
        *(undefined8 *)((long)plVar11 + 0x4c) = uVar9;
        if (0x31 < (uint)uVar13) {
          return;
        }
LAB_028cd7b0:
        uVar6 = *(undefined4 *)((long)plVar1 + (uVar13 & 0xffffffff) * 4);
        if ((int)uVar13 != 0) {
          uVar15 = uVar13 & 0xffffffff;
          uVar12 = (int)uVar13 - 1;
          plVar11 = (long *)((long)param_1 + uVar15 * 4 + 0x1130);
          param_1 = (long *)((long)param_1 + (ulong)uVar12 * 4 + 0x1130);
          do {
            bVar7 = 0x31 < uVar12;
            uVar12 = uVar12 - 1;
            plVar2 = param_1;
            if (bVar7) {
              plVar2 = plVar1;
            }
            bVar7 = 0x31 < uVar15;
            uVar15 = uVar15 - 1;
            param_1 = (long *)((long)param_1 + -4);
            plVar3 = plVar11;
            if (bVar7) {
              plVar3 = plVar1;
            }
            *(int *)plVar3 = (int)*plVar2;
            plVar11 = (long *)((long)plVar11 + -4);
          } while (uVar12 != 0xffffffff);
        }
        *(undefined4 *)plVar1 = uVar6;
        return;
      }
      lVar14 = lVar14 + -1;
    } while (lVar14 != 1099);
  }
  return;
}

