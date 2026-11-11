
void FUN_003e152c(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x28,1);
  *(undefined1 *)(lVar2 + 0x20) = param_2;
  *(undefined4 *)(lVar2 + 8) = 0x30;
  *(undefined1 *)(lVar2 + 0x21) = param_3;
  *(long *)(lVar2 + 0x18) = param_1 + 0x240;
  FUN_003cc15c(uVar1,lVar2);
  return;
}

