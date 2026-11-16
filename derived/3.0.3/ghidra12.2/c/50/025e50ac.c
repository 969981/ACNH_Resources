
void FUN_025e50ac(long param_1,undefined4 *param_2,long *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [88];
  
  lVar4 = FUN_0265c2a0(*param_2);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    iVar3 = FUN_020fd950(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_0071b954(auStack_98,"NNPCUniqueID_%s",param_3[1]);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),auStack_98,(long)iVar3);
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar1 = FUN_020fd7d8(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_0071b954(auStack_98,"NNPCLooks_%s",param_3[1]);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),auStack_98,uVar1);
    }
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(auStack_98,"NNPCSociality_%s",param_3[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),auStack_98,(long)(int)param_2[1]);
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(auStack_98,"NNPCPrevState_%s",param_3[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),auStack_98,(long)(int)param_2[2]);
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(auStack_98,"NNPCIsFixedWeight_%s",param_3[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),auStack_98,*(undefined1 *)(param_2 + 3));
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(auStack_98,"NNPCConversation_%s",param_3[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),auStack_98,(long)(int)param_2[4]);
  }
  return;
}

