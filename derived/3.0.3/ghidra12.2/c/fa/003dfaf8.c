
void FUN_003dfaf8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x50,1);
  *(undefined4 *)(lVar2 + 0x28) = param_3;
  *(undefined4 *)(lVar2 + 8) = 0x13;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  *(undefined1 *)(lVar2 + 0x38) = param_5;
  *(undefined1 *)(lVar2 + 0x39) = param_6;
  *(long *)(lVar2 + 0x18) = param_1 + 0x238;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x40) = param_7;
  *(undefined8 *)(lVar2 + 0x48) = param_8;
  FUN_003cc15c(uVar1,lVar2);
  return;
}

