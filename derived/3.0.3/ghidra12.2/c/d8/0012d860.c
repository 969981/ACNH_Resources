
undefined8 FUN_0012d860(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0xae83;
  }
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x6f4b0) = 300;
    *(undefined8 *)(param_1 + 0x6f4e8) = 0;
    *(undefined8 *)(param_1 + 0x6f4e0) = 0;
    *(undefined8 *)(param_1 + 0x6f4d8) = 0;
    *(undefined8 *)(param_1 + 0x6f4d0) = 0;
    *(undefined8 *)(param_1 + 0x6f4c8) = 0;
    *(undefined8 *)(param_1 + 0x6f4c0) = 0;
    *(undefined8 *)(param_1 + 0x6f4b8) = 0;
    return 1;
  }
  uVar3 = param_2[3];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x6f4d0) = param_2[4];
  *(undefined8 *)(param_1 + 0x6f4c8) = uVar3;
  *(undefined8 *)(param_1 + 0x6f4c0) = uVar2;
  *(undefined8 *)(param_1 + 0x6f4b8) = uVar1;
  uVar3 = param_2[7];
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x6f4f0) = param_2[8];
  *(undefined8 *)(param_1 + 0x6f4e8) = uVar3;
  *(undefined8 *)(param_1 + 0x6f4e0) = uVar2;
  *(undefined8 *)(param_1 + 0x6f4d8) = uVar1;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x6f4b0) = uVar3;
  if (300 < ((uint)uVar3 & 0xffff)) {
    *(undefined2 *)(param_1 + 0x6f4b0) = 300;
  }
  return 1;
}

