
void FUN_001a34a0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *param_2;
  lVar11 = *param_3;
  if (lVar10 != lVar11) {
    do {
      plVar7 = (long *)param_4[1];
      if (plVar7 == (long *)param_4[2]) {
        uVar5 = (long)plVar7 - *param_4;
        lVar12 = (long)uVar5 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          uVar4 = FUN_001a3490(param_4);
          FUN_001a0880();
          FUN_00185ac4(uVar4);
          return;
        }
        uVar2 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= uVar1) {
          uVar2 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar3 = 0;
          plVar7 = (long *)(lVar12 * 8);
          plVar8 = plVar7 + 1;
          *plVar7 = lVar10;
          plVar9 = (long *)*param_4;
          plVar6 = (long *)param_4[1];
          if (plVar6 != plVar9) goto LAB_001a3570;
        }
        else {
          lVar3 = FUN_00187df4(uVar2 << 3);
          plVar7 = (long *)(lVar3 + lVar12 * 8);
          plVar8 = plVar7 + 1;
          *plVar7 = lVar10;
          plVar9 = (long *)*param_4;
          plVar6 = (long *)param_4[1];
          if (plVar6 != plVar9) {
LAB_001a3570:
            do {
              plVar6 = plVar6 + -1;
              plVar7 = plVar7 + -1;
              *plVar7 = *plVar6;
            } while (plVar6 != plVar9);
            plVar6 = (long *)*param_4;
          }
        }
        *param_4 = (long)plVar7;
        param_4[1] = (long)plVar8;
        param_4[2] = lVar3 + uVar2 * 8;
        if (plVar6 != (long *)0x0) {
          FUN_00187e4c(plVar6);
        }
      }
      else {
        *plVar7 = lVar10;
        param_4[1] = (long)(plVar7 + 1);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
    } while (lVar10 != lVar11);
    lVar10 = lVar11;
  }
  *param_1 = lVar10;
  param_1[1] = (long)param_4;
  return;
}

