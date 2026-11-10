
uint FUN_0012d570(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0xae41;
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
  }
  else {
    uVar4 = param_2[3];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined8 *)(param_1 + 0x6f4d0) = param_2[4];
    *(undefined8 *)(param_1 + 0x6f4c8) = uVar4;
    *(undefined8 *)(param_1 + 0x6f4c0) = uVar2;
    *(undefined8 *)(param_1 + 0x6f4b8) = uVar1;
    uVar4 = param_2[7];
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    *(undefined8 *)(param_1 + 0x6f4f0) = param_2[8];
    *(undefined8 *)(param_1 + 0x6f4e8) = uVar4;
    *(undefined8 *)(param_1 + 0x6f4e0) = uVar2;
    *(undefined8 *)(param_1 + 0x6f4d8) = uVar1;
    uVar4 = *param_2;
    *(undefined8 *)(param_1 + 0x6f4b0) = uVar4;
    if (300 < ((uint)uVar4 & 0xffff)) {
      *(undefined2 *)(param_1 + 0x6f4b0) = 300;
    }
  }
  *(undefined2 *)(param_1 + 0x62750) = 4;
  *(undefined4 *)(param_1 + 0x64288) = 0;
  *(undefined8 *)(param_1 + 0x64280) = 0;
  *(undefined8 *)(param_1 + 0x64278) = 0;
  *(undefined8 *)(param_1 + 0x64270) = 0;
  *(undefined8 *)(param_1 + 0x64268) = 0;
  *(undefined8 *)(param_1 + 0x64260) = 0;
  *(undefined8 *)(param_1 + 0x64258) = 0;
  *(undefined8 *)(param_1 + 0x64250) = 0;
  *(undefined8 *)(param_1 + 0x64248) = 0;
  *(undefined8 *)(param_1 + 0x64240) = 0;
  *(undefined8 *)(param_1 + 0x64238) = 0;
  *(undefined8 *)(param_1 + 0x64230) = 0;
  *(undefined8 *)(param_1 + 0x64228) = 0;
  *(undefined8 *)(param_1 + 0x64220) = 0;
  *(undefined8 *)(param_1 + 0x64218) = 0;
  *(undefined8 *)(param_1 + 0x64210) = 0;
  *(undefined8 *)(param_1 + 0x64208) = 0;
  *(undefined8 *)(param_1 + 0x64200) = 0;
  *(undefined8 *)(param_1 + 0x641f8) = 0;
  *(undefined8 *)(param_1 + 0x641f0) = 0;
  *(undefined8 *)(param_1 + 0x641e8) = 0;
  if (*(long *)(param_1 + 0x6f4e8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x6f4e8) + 0x15d8) = 0;
  }
  FUN_0011bcc0(param_1);
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_00130cc0(param_1);
  FUN_00105ae0(param_1);
  *(undefined1 *)(param_1 + 0x70306) = 0;
  *(undefined4 *)(param_1 + 0x702f8) = 0;
  *(undefined8 *)(param_1 + 0x702f0) = 0;
  *(undefined8 *)(param_1 + 0x702e8) = 0;
  *(undefined8 *)(param_1 + 0x702e0) = 0;
  *(undefined8 *)(param_1 + 0x702d8) = 0;
  *(undefined8 *)(param_1 + 0x702d0) = 0;
  *(undefined8 *)(param_1 + 0x702c8) = 0;
  *(undefined8 *)(param_1 + 0x702c0) = 0;
  *(undefined8 *)(param_1 + 0x702b8) = 0;
  *(undefined **)(param_1 + 0x702b0) = &DAT_04058a16;
  uVar3 = FUN_0012d980();
  return uVar3 & (int)(short)uVar3 >> 0xf;
}

