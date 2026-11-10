
void FUN_002326a8(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [384];
  
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((uVar1 >> 4 & 1) != 0) {
    uVar2 = FUN_00243ecc(param_2);
    FUN_0024148c(param_1 + 0x18,uVar2);
  }
  if (((uVar1 >> 1 & 1) != 0) && (iVar3 = (**(code **)(*param_2 + 0x20))(param_2), iVar3 != 0)) {
    (**(code **)(*param_2 + 0x18))(auStack_1d0,param_2,auStack_1c0,0x180);
    FUN_002414c8(param_1 + 0x18,auStack_1c0,iVar3);
  }
  if ((param_3 & 1) != 0) {
    FUN_00241270(param_1 + 0x18,1);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = FUN_00243ebc(param_2);
    FUN_00241260(param_1 + 0x18,uVar2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar2 = FUN_00243ec4(param_2);
    FUN_00241268(param_1 + 0x18,uVar2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar2 = FUN_00243ed4(param_2,0);
    FUN_002414bc(param_1 + 0x18,0,uVar2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar2 = FUN_00243ed4(param_2,1);
    FUN_002414bc(param_1 + 0x18,1,uVar2);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar2 = FUN_00243ed4(param_2,2);
    FUN_002414bc(param_1 + 0x18,2,uVar2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar2 = FUN_00243ed4(param_2,3);
    FUN_002414bc(param_1 + 0x18,3,uVar2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = FUN_00243ed4(param_2,4);
    FUN_002414bc(param_1 + 0x18,4,uVar2);
  }
  if ((uVar1 >> 10 & 1) == 0) {
    return;
  }
  uVar2 = FUN_00243ed4(param_2,5);
  FUN_002414bc(param_1 + 0x18,5,uVar2);
  return;
}

