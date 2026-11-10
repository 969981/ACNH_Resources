
long * FUN_001de410(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar12 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  lVar13 = (long)param_2 - (long)plVar12;
  uVar11 = lVar13 >> 4;
  if (plVar10 < (long *)param_1[2]) {
    if (param_2 == plVar10) {
      *(undefined2 *)param_2 = 0;
      *(short *)param_2 = (short)*param_3;
      lVar13 = param_3[1];
      param_1[1] = (long)(param_2 + 2);
      plVar12[uVar11 * 2 + 1] = lVar13;
      return param_2;
    }
    plVar6 = plVar10 + -2;
    plVar7 = plVar10;
    if (plVar6 < plVar10) {
      plVar8 = plVar6;
      do {
        *(undefined2 *)plVar7 = 0;
        *(short *)plVar7 = (short)*plVar8;
        plVar9 = plVar8 + 1;
        plVar8 = plVar8 + 2;
        plVar7[1] = *plVar9;
        plVar7 = plVar7 + 2;
      } while (plVar8 < plVar10);
    }
    param_1[1] = (long)plVar7;
    if (plVar10 != param_2 + 2) {
      uVar3 = (long)plVar10 + (-0x10 - (long)(param_2 + 2));
      plVar7 = plVar10;
      if (((uint)uVar3 >> 4 & 1) == 0) {
        plVar6 = plVar10 + -4;
        plVar7 = plVar10 + -2;
        *(short *)plVar7 = (short)*plVar6;
        plVar10[-1] = plVar10[-3];
      }
      if (0xf < uVar3) {
        lVar13 = 0;
        do {
          lVar4 = lVar13 + -0x20;
          *(undefined2 *)((long)plVar7 + lVar13 + -0x10) =
               *(undefined2 *)((long)plVar6 + lVar13 + -0x10);
          *(undefined8 *)((long)plVar7 + lVar13 + -8) = *(undefined8 *)((long)plVar6 + lVar13 + -8);
          *(undefined2 *)((long)plVar7 + lVar13 + -0x20) =
               *(undefined2 *)((long)plVar6 + lVar13 + -0x20);
          *(undefined8 *)((long)plVar7 + lVar13 + -0x18) =
               *(undefined8 *)((long)plVar6 + lVar13 + -0x18);
          lVar13 = lVar4;
        } while ((long *)((long)plVar6 + lVar4) != param_2);
      }
      plVar7 = (long *)param_1[1];
    }
    *(short *)param_2 =
         (short)param_3[(ulong)((param_2 <= param_3 && param_3 <= plVar7) &&
                               (param_3 < param_2 || plVar7 != param_3)) * 2];
    plVar12[uVar11 * 2 + 1] =
         (param_3 +
         (ulong)((param_2 <= param_3 && param_3 <= plVar7) &&
                (param_3 < param_2 || plVar7 != param_3)) * 2)[1];
    return param_2;
  }
  uVar3 = ((long)plVar10 - (long)plVar12 >> 4) + 1;
  if (uVar3 >> 0x3c != 0) {
    auVar14 = FUN_001de3f8(param_1);
    lVar13 = auVar14._8_8_;
    plVar10 = (long *)(auVar14._0_8_ + 8);
    plVar12 = (long *)*plVar10;
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar10;
      do {
        lVar4 = FUN_001e14d8(plVar12 + 4);
        lVar1 = FUN_001e14d8(lVar13);
        if (lVar4 < lVar1) {
          plVar12 = plVar12 + 1;
        }
        else {
          lVar4 = FUN_001e14d8(plVar12 + 4);
          lVar1 = FUN_001e14d8(lVar13);
          if (lVar4 == lVar1) {
            plVar6 = plVar12;
            if (*(uint *)(plVar12 + 0x15) < *(uint *)(lVar13 + 0x88)) {
              plVar12 = plVar12 + 1;
              plVar6 = plVar7;
            }
            plVar7 = plVar6;
          }
          else {
            plVar7 = plVar12;
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
      if (plVar7 != plVar10) {
        lVar4 = FUN_001e14d8(lVar13);
        lVar1 = FUN_001e14d8(plVar7 + 4);
        if (lVar1 <= lVar4) {
          lVar4 = FUN_001e14d8(lVar13);
          lVar1 = FUN_001e14d8(plVar7 + 4);
          if (lVar4 != lVar1) {
            return plVar7;
          }
          if (*(uint *)(plVar7 + 0x15) <= *(uint *)(lVar13 + 0x88)) {
            return plVar7;
          }
        }
      }
    }
    return plVar10;
  }
  uVar2 = param_1[2] - (long)plVar12;
  uVar5 = (long)uVar2 >> 3;
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  if (0x7fffffffffffffef < uVar2) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    lVar1 = 0;
    plVar10 = (long *)(uVar11 << 4);
    lVar4 = 0;
    if (uVar11 != 0) goto LAB_001de614;
  }
  else {
    lVar1 = FUN_00187df4(uVar5 << 4);
    plVar10 = (long *)(lVar1 + uVar11 * 0x10);
    lVar4 = lVar1 + uVar5 * 0x10;
    if (uVar11 != uVar5) goto LAB_001de614;
  }
  if (lVar13 < 1) {
    uVar11 = lVar13 >> 3;
    if (plVar12 == param_2) {
      uVar11 = 1;
    }
    lVar13 = FUN_00187df4(uVar11 * 0x10);
    lVar4 = lVar13 + uVar11 * 0x10;
    plVar10 = (long *)(lVar13 + (uVar11 >> 2) * 0x10);
    if (lVar1 != 0) {
      FUN_00187e4c(lVar1);
    }
  }
  else {
    uVar3 = uVar11 + 2;
    if (-2 < (long)uVar11) {
      uVar3 = uVar11 + 1;
    }
    plVar10 = plVar10 + (uVar3 >> 1) * -2;
  }
LAB_001de614:
  *(undefined2 *)plVar10 = 0;
  *(short *)plVar10 = (short)*param_3;
  plVar7 = (long *)*param_1;
  plVar10[1] = param_3[1];
  plVar12 = plVar10;
  if (plVar7 != param_2) {
    plVar6 = plVar10;
    plVar8 = param_2;
    do {
      plVar12 = plVar6 + -2;
      *(undefined2 *)plVar12 = 0;
      plVar9 = plVar8 + -2;
      *(short *)plVar12 = (short)*plVar9;
      plVar6[-1] = plVar8[-1];
      plVar6 = plVar12;
      plVar8 = plVar9;
    } while (plVar9 != plVar7);
  }
  plVar6 = (long *)param_1[1];
  plVar7 = plVar10;
  for (; plVar8 = plVar7 + 2, plVar6 != param_2; param_2 = param_2 + 2) {
    *(undefined2 *)plVar8 = 0;
    *(short *)plVar8 = (short)*param_2;
    plVar7[3] = param_2[1];
    plVar7 = plVar8;
  }
  lVar13 = *param_1;
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar8;
  param_1[2] = lVar4;
  if (lVar13 != 0) {
    FUN_00187e4c();
  }
  return plVar10;
}

