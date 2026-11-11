
void FUN_003e3f00(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x48,1);
  *(undefined4 *)(lVar2 + 0x20) = param_2;
  *(undefined4 *)(lVar2 + 0x24) = param_3;
  *(undefined4 *)(lVar2 + 8) = 0x3d;
  *(long *)(lVar2 + 0x18) = param_1 + 0x300;
  *(undefined4 *)(lVar2 + 0x28) = *param_4;
  *(undefined4 *)(lVar2 + 0x2c) = param_4[1];
  *(undefined4 *)(lVar2 + 0x30) = param_4[2];
  *(undefined4 *)(lVar2 + 0x34) = param_4[3];
  *(undefined4 *)(lVar2 + 0x38) = param_4[4];
  *(undefined4 *)(lVar2 + 0x3c) = param_4[5];
  FUN_003cc15c(uVar1,lVar2);
  return;
}

