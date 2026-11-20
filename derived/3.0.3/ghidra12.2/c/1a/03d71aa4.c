
void FUN_03d71aa4(long *param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = param_1 + (ulong)param_2 * 4;
  if (4 < param_2) {
    plVar1 = param_1;
  }
  uVar2 = (**(code **)(*plVar1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    plVar1 = param_1 + (ulong)param_2 * 4;
    if (4 < param_2) {
      plVar1 = param_1;
    }
    uVar2 = (**(code **)*plVar1)(plVar1,(ulong)param_2,param_3);
    if (((((uVar2 & 1) != 0) && (param_2 == *(uint *)(param_1 + 0x16))) &&
        (lVar4 = param_1[0x15], lVar4 != 0)) &&
       (*(long *)(lVar4 + 0x18) == 0 && *(long *)(lVar4 + 0x10) == 0)) {
      lVar3 = *(long *)(lVar4 + 0x38);
      plVar1 = (long *)(*(int *)(lVar3 + 0x54) + lVar4);
      plVar5 = (long *)(lVar3 + 0x40);
      lVar4 = *plVar5;
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    }
  }
  return;
}

