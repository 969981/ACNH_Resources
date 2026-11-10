
void FUN_00168d10(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar1 = param_1[5];
  if ((ulong)param_1[6] < uVar1) {
    lVar7 = param_1[4];
    do {
      if (param_1[3] == 0) {
        return;
      }
      lVar3 = param_1[3] + -1;
      plVar8 = *(long **)(*param_1 + (param_1[2] + lVar3 & param_1[1]) * 8);
      lVar5 = *(long *)(*plVar8 + 0x18);
      lVar6 = *(long *)(plVar8[1] + 0x18);
      param_1[3] = lVar3;
      param_1[5] = (uVar1 - (lVar5 + lVar6)) + -0x20;
      if (param_2 != 0) {
        plVar4 = (long *)(param_2 + ((ulong)*(uint *)((long)plVar8 + 0x4c) & 0x7f) * 8);
        plVar2 = (long *)*plVar4;
        if (plVar2 != (long *)0x0) {
          if (plVar2 != plVar8) {
            do {
              plVar4 = plVar2;
              plVar2 = (long *)plVar4[8];
              if (plVar2 == (long *)0x0) goto LAB_00168dbc;
            } while (plVar2 != plVar8);
            plVar4 = plVar4 + 8;
          }
          *plVar4 = plVar8[8];
          plVar8[8] = 0;
        }
      }
LAB_00168dbc:
      FUN_0016b194(plVar8[1]);
      FUN_0016b194(*plVar8);
      FUN_001689f8(lVar7,plVar8);
      uVar1 = param_1[5];
    } while ((ulong)param_1[6] < uVar1);
  }
  return;
}

