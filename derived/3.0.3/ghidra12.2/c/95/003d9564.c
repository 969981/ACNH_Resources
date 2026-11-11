
void FUN_003d9564(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_003c5c08();
  lVar3 = FUN_003cbb70(uVar2,0xa8,0);
  *(undefined4 *)(lVar3 + 8) = 0x35;
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined2 *)(lVar3 + 0xa2) = *(undefined2 *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x38) == 1) {
    bVar1 = FUN_003d98f0(param_1,lVar3,1,*(undefined4 *)(param_1 + 0x3c));
  }
  else {
    bVar1 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      bVar1 = FUN_003d9610(param_1,lVar3);
    }
  }
  *(byte *)(lVar3 + 0xa0) = bVar1 & 1;
  FUN_003cc15c(uVar2,lVar3);
  FUN_003cbf90(uVar2,1,0);
  return;
}

