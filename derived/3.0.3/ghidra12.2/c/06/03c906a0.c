
void FUN_03c906a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x28);
    if (lVar6 != lVar4 + 0x20) {
      param_1[1] = lVar6 + -8;
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      pcVar5 = (code *)param_1[3];
      plVar1 = (long *)(*(long *)(lVar6 + 0xc1) + (param_1[4] >> 1));
      if ((param_1[4] & 1U) != 0) {
        pcVar5 = *(code **)(pcVar5 + *plVar1);
      }
      uVar3 = (*pcVar5)(plVar1,param_1[2]);
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar4 = param_1[1];
    }
    lVar7 = *(long *)(lVar4 + 0x18);
    lVar6 = *param_1;
    if (lVar7 != 0 && lVar4 != lVar6) {
      do {
        if (lVar4 == *(long *)(lVar7 + 0x20) + -8) {
          param_1[1] = lVar7;
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          lVar2 = *(long *)(lVar7 + 0x18);
          lVar4 = lVar7;
        }
        else {
          lVar4 = *(long *)(lVar4 + 0x10);
          param_1[1] = lVar4 + -8;
          pcVar5 = (code *)param_1[3];
          plVar1 = (long *)(*(long *)(lVar4 + 0xc1) + (param_1[4] >> 1));
          if ((param_1[4] & 1U) != 0) {
            pcVar5 = *(code **)(pcVar5 + *plVar1);
          }
          uVar3 = (*pcVar5)(plVar1,param_1[2]);
          if ((uVar3 & 1) != 0) {
            return;
          }
          lVar6 = *param_1;
          lVar4 = param_1[1];
          lVar2 = *(long *)(lVar4 + 0x18);
        }
        lVar7 = lVar2;
      } while ((lVar7 != 0) && (lVar4 != lVar6));
    }
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}

