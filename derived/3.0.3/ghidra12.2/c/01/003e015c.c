
void FUN_003e015c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x20,1);
  *(long *)(lVar3 + 0x18) = param_1;
  *(undefined4 *)(lVar3 + 8) = 0x44;
  FUN_003cc15c(uVar2,lVar3);
  uVar1 = FUN_003cc180(uVar2,1);
  FUN_003cc0c0(uVar2,uVar1);
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  return;
}

