
void FUN_003e1428(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x88,1);
  *(undefined4 *)(lVar3 + 8) = 0x2e;
  *(long *)(lVar3 + 0x18) = param_1 + 0x240;
  uVar4 = *param_3;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar3 + 0x30) = param_3[2];
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  uVar1 = param_3[4];
  uVar4 = param_3[5];
  uVar5 = param_3[3];
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  *(undefined8 *)(lVar3 + 0x60) = param_2[1];
  *(undefined8 *)(lVar3 + 0x58) = *param_2;
  *(undefined8 *)(lVar3 + 0x68) = param_2[3];
  uVar1 = ((undefined8 *)param_2[2])[1];
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)param_2[2];
  *(undefined8 *)(lVar3 + 0x78) = uVar1;
  *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)param_3;
  FUN_003cc15c(uVar2,lVar3);
  return;
}

