
void FUN_003e2190(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x38,1);
  *(undefined4 *)(lVar3 + 8) = 0x31;
  *(long *)(lVar3 + 0x18) = param_1 + 0x230;
  uVar4 = *param_2;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar3 + 0x30) = param_2[2];
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  FUN_003cc15c(uVar2,lVar3);
  return;
}

