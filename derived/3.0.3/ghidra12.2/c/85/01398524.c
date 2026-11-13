
void FUN_01398524(undefined8 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04993e98;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(char *)((long)param_1 + 10) = (char)uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = *param_2;
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)(param_2 + 0x18);
  bVar2 = *(byte *)((long)param_2 + 0x31);
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  *(byte *)((long)param_1 + 0x17) = bVar2;
  param_1[3] = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = 0xffff0000;
  *(undefined2 *)((long)param_1 + 0x24) = param_2[0x19];
  *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x4f);
  bVar2 = *(byte *)(param_2 + 0x20);
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)((long)param_2 + 0x43) << 1;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)(param_2 + 0x22) << 2;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)((long)param_2 + 0x45) << 3;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)(param_2 + 0x26) << 4;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)((long)param_2 + 0x4d) << 6;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = bVar2 | *(char *)(param_2 + 0x27) << 5;
  *(byte *)(param_1 + 1) = bVar2;
  *(byte *)(param_1 + 1) = bVar2 | (*(char *)(param_2 + 0x21) != '\0') << 7;
  *(short *)((long)param_1 + 0xc) = (short)*(undefined4 *)(param_2 + 0xc);
  *(short *)((long)param_1 + 0xe) = (short)*(undefined4 *)(param_2 + 0xe);
  *(short *)(param_1 + 2) = (short)*(undefined4 *)(param_2 + 0x14);
  *(short *)((long)param_1 + 0x12) = (short)*(undefined4 *)(param_2 + 0x16);
  *(short *)(param_1 + 4) = (short)(int)*(float *)(param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x41);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  return;
}

