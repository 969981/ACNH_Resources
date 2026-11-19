
void FUN_03c90960(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = param_1 + 2;
  *plVar4 = param_2;
  param_1[1] = param_2;
  param_1[3] = param_2;
  if (param_2 == 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    lVar3 = param_1[3];
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0xc9) + 8);
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = uVar2;
    if ((param_1[6] & 1) == 0) {
      uVar1 = (*(code *)param_1[5])();
    }
    else {
      uVar1 = (**(code **)((code *)param_1[5] +
                          *(long *)(*(long *)(param_2 + 0xc9) + ((long)param_1[6] >> 1))))();
    }
    if ((uVar1 & 1) == 0) {
      FUN_03c906a0(plVar4);
      lVar3 = param_1[3];
    }
    else {
      lVar3 = param_1[3];
    }
  }
  if (lVar3 != 0) {
    do {
      FUN_03c906a0(plVar4);
      if (param_1[3] == 0) {
        uVar2 = 0;
        goto LAB_03c90a3c;
      }
      plVar5 = *(long **)(param_1[3] + 0xc9);
      lVar6 = plVar5[2];
      lVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
    } while (lVar6 == lVar3);
    uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
LAB_03c90a3c:
    *param_1 = uVar2;
  }
  return;
}

