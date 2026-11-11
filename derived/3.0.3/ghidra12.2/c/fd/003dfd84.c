
void FUN_003dfd84(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0xa0,1);
  *(undefined4 *)(lVar3 + 8) = 0x14;
  *(long *)(lVar3 + 0x18) = param_1 + 0x238;
  uVar4 = *param_3;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar3 + 0x30) = param_3[2];
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  *(undefined8 *)(lVar3 + 0x38) = *param_2;
  *(undefined8 *)(lVar3 + 0x40) = param_2[1];
  *(undefined8 *)(lVar3 + 0x48) = param_2[7];
  uVar1 = ((undefined8 *)param_2[2])[1];
  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)param_2[2];
  *(undefined8 *)(lVar3 + 0x58) = uVar1;
  uVar1 = ((undefined8 *)param_2[3])[1];
  *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)param_2[3];
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  uVar1 = ((undefined8 *)param_2[4])[1];
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)param_2[4];
  *(undefined8 *)(lVar3 + 0x78) = uVar1;
  uVar1 = ((undefined8 *)param_2[5])[1];
  *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)param_2[5];
  *(undefined8 *)(lVar3 + 0x88) = uVar1;
  uVar1 = ((undefined8 *)param_2[6])[1];
  *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)param_2[6];
  *(undefined8 *)(lVar3 + 0x98) = uVar1;
  FUN_003cc15c(uVar2,lVar3);
  return;
}

