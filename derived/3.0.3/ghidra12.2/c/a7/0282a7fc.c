
void FUN_0282a7fc(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 1;
  param_1[1] = *(undefined1 *)(param_2 + 0xcc);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0xc0);
  param_1[6] = *(undefined1 *)(param_2 + 0xc2);
  param_1[7] = *(undefined1 *)(param_2 + 0xc3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined8 *)(param_2 + 0xce);
  uVar4 = *(undefined8 *)(param_2 + 0xe6);
  uVar3 = *(undefined8 *)(param_2 + 0xd6);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xee);
  uVar2 = *(undefined8 *)(param_2 + 0xf6);
  uVar4 = *(undefined8 *)(param_2 + 0x106);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x10e);
  uVar2 = *(undefined8 *)(param_2 + 0x116);
  uVar4 = *(undefined8 *)(param_2 + 0x126);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x11e);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  memcpy(param_1 + 0x70,(void *)(param_2 + 0x12e),0x1e0);
  uVar3 = *(undefined8 *)(param_2 + 0x316);
  uVar2 = *(undefined8 *)(param_2 + 0x31e);
  uVar4 = *(undefined8 *)(param_2 + 0x326);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x30e);
  *(undefined8 *)(param_1 + 0x268) = uVar4;
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  *(undefined8 *)(param_1 + 600) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x336);
  uVar2 = *(undefined8 *)(param_2 + 0x33e);
  uVar4 = *(undefined8 *)(param_2 + 0x346);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x32e);
  *(undefined8 *)(param_1 + 0x288) = uVar4;
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x356);
  uVar2 = *(undefined8 *)(param_2 + 0x35e);
  uVar4 = *(undefined8 *)(param_2 + 0x366);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x34e);
  *(undefined8 *)(param_1 + 0x2a8) = uVar4;
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  uVar1 = *(undefined1 *)(param_2 + 200);
  *(undefined2 *)(param_1 + 0x2b4) = 1;
  param_1[0x2b0] = uVar1;
  param_1[0x2b6] = *param_3;
  param_1[0x2b7] = param_3[1];
  uVar1 = FUN_020fd7d8(param_3);
  param_1[0x2b8] = uVar1;
  return;
}

