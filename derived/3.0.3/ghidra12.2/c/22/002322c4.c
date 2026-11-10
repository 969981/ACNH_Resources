
/* WARNING: Type propagation algorithm not settling */

void FUN_002322c4(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [384];
  
  param_1 = param_1 + 0x18;
  FUN_00240b90(param_1);
  uVar4 = FUN_0022cf7c(param_2);
  if ((uVar4 & 1) != 0) {
    uVar1 = FUN_0022cf74(param_2);
    FUN_00241248(param_1,uVar1);
  }
  FUN_0022d1f4();
  uVar1 = FUN_0022d414();
  FUN_00241250(param_1,uVar1);
  uVar4 = FUN_0022d03c(param_2,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022d03c(param_2,1);
  }
  else {
    uVar1 = FUN_0022d020(param_2,0);
    FUN_002414bc(param_1,0,uVar1);
    uVar4 = FUN_0022d03c(param_2,1);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022d03c(param_2,2);
  }
  else {
    uVar1 = FUN_0022d020(param_2,1);
    FUN_002414bc(param_1,1,uVar1);
    uVar4 = FUN_0022d03c(param_2,2);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022d03c(param_2,3);
  }
  else {
    uVar1 = FUN_0022d020(param_2,2);
    FUN_002414bc(param_1,2,uVar1);
    uVar4 = FUN_0022d03c(param_2,3);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022d03c(param_2,4);
  }
  else {
    uVar1 = FUN_0022d020(param_2,3);
    FUN_002414bc(param_1,3,uVar1);
    uVar4 = FUN_0022d03c(param_2,4);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022d03c(param_2,5);
  }
  else {
    uVar1 = FUN_0022d020(param_2,4);
    FUN_002414bc(param_1,4,uVar1);
    uVar4 = FUN_0022d03c(param_2,5);
  }
  if ((uVar4 & 1) != 0) {
    uVar1 = FUN_0022d020(param_2,5);
    FUN_002414bc(param_1,5,uVar1);
  }
  if (DAT_04c60f48 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0029b360();
    plVar5 = *(long **)(DAT_04c60f48 + 8);
    uVar4 = (**(code **)(*plVar5 + 0x90))(plVar5);
    if (((uVar4 & 1) != 0) && (uVar4 = (**(code **)(*plVar5 + 0x88))(plVar5), (uVar4 & 1) != 0)) {
      uVar2 = (**(code **)(*plVar5 + 0x80))(plVar5);
      uVar2 = uVar2 & 0xff;
    }
  }
  FUN_00241258(param_1,uVar2);
  uVar4 = FUN_002931bc(param_2);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_002931dc(param_2);
  }
  else {
    uVar1 = FUN_002931b4(param_2);
    FUN_00241260(param_1,uVar1);
    uVar4 = FUN_002931dc(param_2);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0022cfa4(param_2);
  }
  else {
    uVar1 = FUN_002931d4(param_2);
    FUN_00241268(param_1,uVar1);
    uVar4 = FUN_0022cfa4(param_2);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    uVar1 = FUN_0022cf9c(param_2);
    FUN_0024148c(param_1,uVar1);
    uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (((uVar4 & 1) != 0) && (iVar3 = (**(code **)(*param_2 + 0x30))(param_2), iVar3 != 0)) {
    (**(code **)(*param_2 + 0x28))(auStack_1c0,param_2,auStack_1b0,0x180);
    FUN_002414c8(param_1,auStack_1b0,iVar3);
  }
  uVar4 = FUN_0022d06c(param_2);
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_0022d064(param_2);
    FUN_00241270(param_1,uVar2 & 1);
  }
  FUN_00241494(param_1,8);
  FUN_0022d1f4();
  uVar1 = FUN_0022d3f8();
  FUN_002414a4(param_1,uVar1);
  return;
}

