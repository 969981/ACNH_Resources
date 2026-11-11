
void FUN_003e3c3c(long param_1,void *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x300,1);
  *(undefined4 *)(lVar2 + 8) = 0x33;
  *(long *)(lVar2 + 0x18) = param_1 + 0x300;
  memcpy((void *)(lVar2 + 0x20),param_2,0x2d0);
  *(undefined8 *)(lVar2 + 0x2f0) = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(lVar2 + 0x2f8) = *(undefined8 *)(param_1 + 0x2c8);
  FUN_003cc15c(uVar1,lVar2);
  return;
}

