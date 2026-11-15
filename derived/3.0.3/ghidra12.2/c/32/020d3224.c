
void FUN_020d3224(long param_1,byte *param_2,undefined2 *param_3)

{
  if ((ulong)*param_2 < 8) {
    param_1 = param_1 + (ulong)*param_2 * 0x30;
    *(undefined2 *)(param_1 + 8) = *param_3;
    *(undefined2 *)(param_1 + 10) = param_3[1];
    *(undefined2 *)(param_1 + 0xc) = param_3[2];
    *(undefined2 *)(param_1 + 0xe) = param_3[3];
    *(undefined2 *)(param_1 + 0x10) = param_3[4];
    *(undefined2 *)(param_1 + 0x12) = param_3[5];
    *(undefined2 *)(param_1 + 0x14) = param_3[6];
    *(undefined2 *)(param_1 + 0x16) = param_3[7];
    *(undefined2 *)(param_1 + 0x18) = param_3[8];
    *(undefined2 *)(param_1 + 0x1a) = param_3[9];
    *(undefined2 *)(param_1 + 0x1c) = param_3[10];
    *(undefined2 *)(param_1 + 0x1e) = param_3[0xb];
    *(undefined2 *)(param_1 + 0x20) = param_3[0xc];
    *(undefined2 *)(param_1 + 0x22) = param_3[0xd];
    *(undefined2 *)(param_1 + 0x24) = param_3[0xe];
    *(undefined2 *)(param_1 + 0x26) = param_3[0xf];
    *(undefined2 *)(param_1 + 0x28) = param_3[0x10];
    *(undefined2 *)(param_1 + 0x2a) = param_3[0x11];
    *(undefined2 *)(param_1 + 0x2c) = param_3[0x12];
    *(undefined2 *)(param_1 + 0x2e) = param_3[0x13];
    *(undefined2 *)(param_1 + 0x30) = param_3[0x14];
    *(undefined2 *)(param_1 + 0x32) = param_3[0x15];
    *(undefined2 *)(param_1 + 0x34) = param_3[0x16];
    *(undefined2 *)(param_1 + 0x36) = param_3[0x17];
  }
  return;
}

