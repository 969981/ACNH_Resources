
void FUN_0043a820(ulong param_1,ulong param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  
  if ((((param_3 < 8) || ((param_3 & 7) != 0)) || ((param_1 & 7) != 0)) || ((param_2 & 7) != 0)) {
    if (((param_3 < 4) || ((param_3 & 3) != 0)) || (((param_1 & 3) != 0 || ((param_2 & 3) != 0)))) {
      if (((param_3 < 2) || ((param_3 & 1) != 0)) || (((param_1 & 1) != 0 || ((param_2 & 1) != 0))))
      {
        uVar6 = param_3 - 1;
        if (0 < (long)param_3) {
          if ((param_3 & 3) != 0) {
            lVar11 = -(param_3 & 3);
            do {
              lVar11 = lVar11 + 1;
              *(undefined1 *)((param_1 - 1) + param_3) = *(undefined1 *)((param_2 - 1) + param_3);
              param_3 = param_3 - 1;
            } while (lVar11 != 0);
          }
          if (2 < uVar6) {
            do {
              puVar4 = (undefined1 *)((param_2 - 4) + param_3);
              puVar5 = (undefined1 *)((param_1 - 2) + param_3);
              param_3 = param_3 - 4;
              puVar5[1] = puVar4[3];
              *puVar5 = puVar4[2];
              puVar5[-1] = puVar4[1];
              puVar5[-2] = *puVar4;
            } while (0 < (long)param_3);
          }
        }
      }
      else {
        uVar6 = param_3 - 2;
        if (1 < (long)param_3) {
          uVar10 = param_3 >> 1;
          if (((uint)uVar6 >> 1 & 1) == 0) {
            uVar10 = uVar10 - 1;
            *(undefined2 *)(param_1 + uVar10 * 2) = *(undefined2 *)(param_2 + uVar10 * 2);
            param_3 = uVar6;
          }
          if (1 < uVar6) {
            lVar11 = uVar10 * 2 + -2;
            puVar7 = (undefined2 *)(param_2 + lVar11);
            puVar12 = (undefined2 *)(param_1 + lVar11);
            do {
              *puVar12 = *puVar7;
              puVar1 = puVar7 + -1;
              param_3 = param_3 - 4;
              puVar7 = puVar7 + -2;
              puVar12[-1] = *puVar1;
              puVar12 = puVar12 + -2;
            } while (1 < (long)param_3);
          }
        }
      }
    }
    else {
      uVar6 = param_3 - 4;
      if (3 < (long)param_3) {
        uVar10 = param_3 >> 2;
        if (((uint)uVar6 >> 2 & 1) == 0) {
          uVar10 = uVar10 - 1;
          *(undefined4 *)(param_1 + uVar10 * 4) = *(undefined4 *)(param_2 + uVar10 * 4);
          param_3 = uVar6;
        }
        if (3 < uVar6) {
          lVar11 = uVar10 * 4 + -4;
          puVar9 = (undefined4 *)(param_2 + lVar11);
          puVar14 = (undefined4 *)(param_1 + lVar11);
          do {
            *puVar14 = *puVar9;
            puVar3 = puVar9 + -1;
            param_3 = param_3 - 8;
            puVar9 = puVar9 + -2;
            puVar14[-1] = *puVar3;
            puVar14 = puVar14 + -2;
          } while (3 < (long)param_3);
        }
      }
    }
  }
  else {
    uVar6 = param_3 - 8;
    if (7 < (long)param_3) {
      uVar10 = param_3 >> 3;
      if (((uint)uVar6 >> 3 & 1) == 0) {
        uVar10 = uVar10 - 1;
        *(undefined8 *)(param_1 + uVar10 * 8) = *(undefined8 *)(param_2 + uVar10 * 8);
        param_3 = uVar6;
      }
      if (7 < uVar6) {
        lVar11 = uVar10 * 8 + -8;
        puVar8 = (undefined8 *)(param_2 + lVar11);
        puVar13 = (undefined8 *)(param_1 + lVar11);
        do {
          *puVar13 = *puVar8;
          puVar2 = puVar8 + -1;
          param_3 = param_3 - 0x10;
          puVar8 = puVar8 + -2;
          puVar13[-1] = *puVar2;
          puVar13 = puVar13 + -2;
        } while (7 < (long)param_3);
      }
    }
  }
  return;
}

