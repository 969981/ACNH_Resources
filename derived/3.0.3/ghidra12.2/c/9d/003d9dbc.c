
void FUN_003d9dbc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x339) != '\0') {
    return;
  }
  uVar2 = FUN_003c5c08();
  lVar3 = FUN_003cbb70(uVar2,0xc0,0);
  *(undefined4 *)(lVar3 + 8) = 0x36;
  *(undefined2 *)(lVar3 + 0xba) = *(undefined2 *)(param_1 + 0x54);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x38) == 1) {
      bVar1 = FUN_003da600(param_1,lVar3,param_2,param_3,param_4);
      goto LAB_003d9e80;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      bVar1 = FUN_003d9ec0(param_1,lVar3,param_2,param_3,param_4,param_5,param_6);
      goto LAB_003d9e80;
    }
  }
  bVar1 = 0;
LAB_003d9e80:
  *(byte *)(lVar3 + 0xb8) = bVar1 & 1;
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  FUN_003cc15c(uVar2,lVar3);
  FUN_003cbf90(uVar2,1,0);
  return;
}

