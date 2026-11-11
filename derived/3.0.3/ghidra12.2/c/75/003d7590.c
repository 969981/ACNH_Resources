
undefined8
FUN_003d7590(long *param_1,ulong param_2,uint *param_3,short param_4,uint param_5,uint param_6,
            long param_7)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((char)param_1[0x1b] == '\0') {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  else if (*(short *)((long)param_1 + 300) == param_4) {
    if (((*(char *)((long)param_1 + 0xdd) == '\0') && (*(char *)((long)param_1 + 0xd9) != '\0')) &&
       (uVar2 = *(uint *)(param_1 + 0x21), 0 < (int)uVar2)) {
      uVar7 = 0;
      bVar9 = false;
      do {
        piVar11 = (int *)((long)param_1 + uVar7 * 0x40 + 0x4c4);
        while( true ) {
          if (*piVar11 != 0) break;
          uVar7 = uVar7 + 1;
          piVar11 = piVar11 + 0x10;
          if (uVar2 == uVar7) {
            if (bVar9) goto LAB_003d7688;
            goto LAB_003d76ec;
          }
        }
        if (*piVar11 != 3) goto LAB_003d76ec;
        bVar4 = (ulong)uVar2 - 1 != uVar7;
        uVar7 = uVar7 + 1;
        bVar9 = true;
      } while (bVar4);
LAB_003d7688:
      *(undefined2 *)((long)param_1 + 0xdf) = 0x101;
      *(undefined1 *)((long)param_1 + 0xdd) = 1;
      if (*(char *)((long)param_1 + 0xdc) == '\0') {
        iVar5 = (int)param_1[0x8d];
        if (0 < iVar5) {
          lVar13 = 0;
          plVar12 = param_1 + 0x91;
          do {
            if (*plVar12 != 0) {
              FUN_003c0db0(*plVar12,1);
              iVar5 = (int)param_1[0x8d];
            }
            lVar13 = lVar13 + 1;
            plVar12 = plVar12 + 0x210;
          } while (lVar13 < iVar5);
        }
        *(undefined1 *)((long)param_1 + 0xdc) = 1;
      }
    }
LAB_003d76ec:
    if (*(long *)(param_3 + 2) != 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 0x8d);
      if (0 < (int)*(uint *)(param_1 + 0x8d)) {
        if ((param_5 & 1) == 0) {
          lVar13 = 0;
          plVar12 = param_1 + 0x198;
          lVar15 = 0x2a;
          do {
            uVar2 = *param_3;
            plVar1 = plVar12 + (ulong)uVar2 * 8;
            lVar14 = param_1[0x2f];
            if ((char)param_3[10] == '\0') {
              plVar6 = (long *)0x0;
            }
            else {
              uVar3 = *(undefined4 *)((long)param_3 + lVar15);
              *(undefined2 *)((long)plVar1 + 4) =
                   *(undefined2 *)((undefined4 *)((long)param_3 + lVar15) + 1);
              *(undefined4 *)plVar1 = uVar3;
              plVar6 = plVar1;
            }
            lVar8 = plVar12[-0x108];
            plVar1[-0x104] = 0;
            plVar1[-0x103] = 0;
            plVar1[-0x102] = 0;
            plVar1[-0x101] = 0;
            *(undefined1 *)(plVar1 + -0x100) = 0;
            *(undefined4 *)((long)plVar1 + -0x7fc) = 0;
            plVar1[-0xff] = 0;
            plVar1[-0x106] = lVar8 + (lVar14 + 0x900) * (ulong)uVar2;
            plVar1[-0x105] = 0;
            plVar1[-0x105] = *(long *)(param_3 + 8);
            plVar1[-0x104] = *(long *)(param_3 + 2);
            lVar14 = *(long *)(param_3 + 6);
            plVar1[-0x102] = (long)plVar6;
            plVar1[-0x103] = lVar14;
            FUN_003ddaf8(plVar12 + -0x108,plVar1 + -0x106,(char)param_3[0x24]);
            lVar13 = lVar13 + 1;
            plVar12 = plVar12 + 0x210;
            lVar15 = lVar15 + 6;
          } while (lVar13 < (int)param_1[0x8d]);
        }
        else {
          lVar14 = 0;
          lVar13 = 0;
          plVar12 = param_1 + 0x198;
          lVar15 = 0x2a;
          do {
            plVar1 = plVar12 + (ulong)*param_3 * 8;
            lVar10 = param_1[0x8a];
            lVar8 = param_1[0x2f];
            if ((char)param_3[10] == '\0') {
              plVar6 = (long *)0x0;
            }
            else {
              uVar3 = *(undefined4 *)((long)param_3 + lVar15);
              *(undefined2 *)((long)plVar1 + 4) =
                   *(undefined2 *)((undefined4 *)((long)param_3 + lVar15) + 1);
              *(undefined4 *)plVar1 = uVar3;
              plVar6 = plVar1;
            }
            plVar1[-0x104] = 0;
            plVar1[-0x103] = 0;
            plVar1[-0x102] = 0;
            plVar1[-0x101] = 0;
            *(undefined1 *)(plVar1 + -0x100) = 0;
            *(undefined4 *)((long)plVar1 + -0x7fc) = 0;
            plVar1[-0xff] = 0;
            plVar1[-0x106] = lVar10 + (long)(int)uVar7 * (ulong)param_6 * lVar8 + lVar14;
            plVar1[-0x105] = 0;
            plVar1[-0x105] = lVar8;
            plVar1[-0x104] = *(long *)(param_3 + 2);
            plVar1[-0x103] = *(long *)(param_3 + 6);
            plVar1[-0x102] = (long)plVar6;
            FUN_003ddaf8(plVar12 + -0x108,plVar1 + -0x106,(char)param_3[0x24]);
            uVar7 = (ulong)(int)param_1[0x8d];
            lVar13 = lVar13 + 1;
            plVar12 = plVar12 + 0x210;
            lVar15 = lVar15 + 6;
            lVar14 = lVar14 + param_7;
          } while (lVar13 < (long)uVar7);
        }
      }
      uVar2 = *param_3;
      param_1[(ulong)uVar2 * 3 + 0x2211] = *(long *)(param_3 + 4);
      param_1[(ulong)uVar2 * 3 + 0x2212] = *(long *)(param_3 + 2);
      *(uint *)(param_1 + (ulong)uVar2 * 3 + 0x2213) = param_3[0x23];
    }
    if ((char)param_3[0x24] != '\0') {
      *(undefined1 *)((long)param_1 + 0xde) = 1;
    }
    if (*(char *)((long)param_1 + 0xd9) != '\0') {
      return 1;
    }
    if ((param_5 & 1) != 0) {
      return 1;
    }
    iVar5 = *(int *)((long)param_1 + 0xec) + -1;
    *(int *)((long)param_1 + 0xec) = iVar5;
    if ((iVar5 != 0) && (*(char *)((long)param_1 + 0xde) == '\0')) {
      return 1;
    }
    *(undefined1 *)((long)param_1 + 0xd9) = 1;
    if (((char)param_1[7] == '\0') || ((char)param_1[0x2190] == '\0')) {
      param_1[0x233f] = -1;
      param_1[0x2340] = -1;
      return 1;
    }
    return 1;
  }
  return 0;
}

