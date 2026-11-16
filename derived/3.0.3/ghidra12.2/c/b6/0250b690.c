
void FUN_0250b690(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  bVar2 = *(byte *)(param_2 + 0xb);
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  *(byte *)(param_1 + 0xb) = bVar2;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  uVar1 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar1;
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x4e) = *(undefined1 *)((long)param_2 + 0x4e);
  *(undefined1 *)((long)param_1 + 0x4f) = *(undefined1 *)((long)param_2 + 0x4f);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined1 *)((long)param_1 + 0x6a) = *(undefined1 *)((long)param_2 + 0x6a);
  *(undefined1 *)((long)param_1 + 0x6b) = *(undefined1 *)((long)param_2 + 0x6b);
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)(param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x96) = *(undefined1 *)((long)param_2 + 0x96);
  *(undefined1 *)((long)param_1 + 0x97) = *(undefined1 *)((long)param_2 + 0x97);
  param_1[0x68] = param_2[0x68];
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = param_2[0x6d];
  return;
}

