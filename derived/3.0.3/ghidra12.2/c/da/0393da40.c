
void FUN_0393da40(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (*(char *)((long)param_1 + 0x14) != '\0') {
    return;
  }
  if (0 < (int)param_1[2]) {
    uVar6 = 0;
    do {
      if (uVar6 != param_2) {
        uVar1 = param_2;
        if (*(uint *)(param_1 + 4) <= param_2) {
          uVar1 = 0;
        }
        uVar5 = (**(code **)*param_1)(0,param_1,uVar6,param_1[5] + (long)(int)uVar1 * 0x30,0);
        if ((uVar5 & 1) != 0) {
          uVar3 = *(uint *)(param_1 + 4);
          lVar9 = param_1[5];
          uVar1 = uVar6;
          if (uVar3 <= uVar6) {
            uVar1 = 0;
          }
          plVar7 = (long *)(lVar9 + (ulong)uVar1 * 0x30);
          uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if ((uVar5 & 1) != 0) {
            uVar2 = param_2;
            if (uVar3 <= param_2) {
              uVar2 = 0;
            }
            plVar8 = *(long **)(lVar9 + (long)(int)uVar2 * 0x30 + 8);
            if (plVar8 != (long *)0x0) {
              plVar10 = *(long **)(lVar9 + (ulong)uVar1 * 0x30 + 8);
              do {
                plVar4 = plVar10;
                if ((int)plVar8[1] == (int)plVar10[1]) goto joined_r0x0393db78;
                plVar8 = (long *)plVar8[2];
              } while (plVar8 != (long *)0x0);
            }
LAB_0393da84:
            (**(code **)(*plVar7 + 0x38))(plVar7);
          }
          uVar1 = param_2;
          if (*(uint *)(param_1 + 4) <= param_2) {
            uVar1 = 0;
          }
          (**(code **)(*param_1 + 8))(0,param_1,uVar6,param_1[5] + (long)(int)uVar1 * 0x30,0);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)param_1[2]);
  }
  return;
joined_r0x0393db78:
  if (plVar4 == (long *)0x0) goto LAB_0393da84;
  (**(code **)(*plVar10 + 0x10))(plVar10,plVar8);
  plVar10 = (long *)plVar10[2];
  if (plVar10 == (long *)0x0) goto LAB_0393da84;
  plVar8 = (long *)plVar8[2];
  plVar4 = plVar8;
  goto joined_r0x0393db78;
}

