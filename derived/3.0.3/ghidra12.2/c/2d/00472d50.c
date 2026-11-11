
void FUN_00472d50(undefined8 *param_1,long *param_2,long *param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = param_5;
  param_1[4] = param_6;
  if ((int)param_4 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)param_4;
    plVar4 = param_3;
    do {
      lVar8 = *plVar4;
      iVar3 = FUN_004737a0(*(undefined8 *)(lVar8 + 0x18));
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar3;
      iVar3 = FUN_004737a0(*(undefined8 *)(lVar8 + 0x20));
      uVar1 = *(int *)(param_1 + 2) + iVar3;
      uVar7 = uVar7 - 1;
      *(uint *)(param_1 + 2) = uVar1;
      plVar4 = plVar4 + 1;
    } while (uVar7 != 0);
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,uVar7,0);
  param_1[1] = plVar4;
  if (plVar4 != (long *)0x0) {
    if (0 < (int)param_4) {
      uVar7 = 0;
      do {
        lVar8 = param_3[uVar7];
        plVar5 = *(long **)(lVar8 + 0x18);
        plVar6 = plVar4;
        if (plVar5 != (long *)0x0) {
          do {
            plVar2 = plVar5;
            if ((long *)plVar5[1] != (long *)0x0) {
              plVar2 = (long *)plVar5[1];
            }
            plVar4 = plVar6 + 1;
            *plVar6 = (long)plVar2;
            plVar5 = (long *)*plVar5;
            plVar6 = plVar4;
          } while (plVar5 != (long *)0x0);
          lVar8 = param_3[uVar7];
        }
        for (plVar6 = *(long **)(lVar8 + 0x20); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          plVar5 = plVar6;
          if (plVar6[1] != 0) {
            plVar5 = (long *)plVar6[1];
          }
          *plVar4 = (long)plVar5;
          plVar4 = plVar4 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_4);
    }
    iVar3 = *(int *)(param_1 + 2) + -1;
    if (iVar3 != 0 && 0 < *(int *)(param_1 + 2)) {
      FUN_004732e0(param_1[1],0,iVar3);
      return;
    }
  }
  return;
}

