
void FUN_035fef88(undefined1 *param_1)

{
  size_t sVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  sVar1 = 0x2000;
  if (2 < (byte)param_1[-0xdee]) {
    sVar1 = 0x4000;
  }
  memset(*(void **)(param_1 + 0x10),0,sVar1);
  sVar1 = 0x2000;
  if (2 < (byte)param_1[-0xdee]) {
    sVar1 = 0x8000;
  }
  memset(*(void **)(param_1 + 0x20),0,sVar1);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)((long)puVar4 + 0x77) = 0;
  *puVar4 = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *param_1 = 0;
  iVar3 = *(int *)(&DAT_04194af0 + (long)(char)param_1[-0xdee] * 4);
  uVar5 = *(undefined8 *)(&DAT_04b3f1a0 + (long)(char)param_1[-0xdee] * 8);
  param_1[0x1c0] = 0;
  param_1[0x1de] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_04194af0 + iVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8);
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 8) + 0x4000;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x68) = lVar2;
  *(long *)(param_1 + 0x70) = lVar2 + 0x1000;
  *(long *)(param_1 + 0x78) = lVar2;
  *(long *)(param_1 + 0x80) = lVar2 + 0x1000;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = 0;
  param_1[0x1c2] = 2;
  param_1[0x1c4] = 2;
  param_1[0x1c6] = 2;
  param_1[0x1c8] = 3;
  param_1[0x1ca] = 3;
  param_1[0x1cc] = 3;
  param_1[0x1ce] = 3;
  param_1[0x1d0] = 4;
  param_1[0x1d2] = 4;
  param_1[0x1d4] = 5;
  param_1[0x1d6] = 5;
  param_1[0x1d8] = 6;
  param_1[0x1da] = 7;
  param_1[0x1dc] = 8;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0xffff0000;
  *(undefined4 *)(param_1 + 0x170) = 0xffff0000;
  *(undefined4 *)(param_1 + 0x178) = 0xffff0000;
  param_1[3] = ((byte)param_1[-0xdee] < 3) << 2;
  *(undefined4 *)(param_1 + 0x180) = 0xffff0000;
  *(undefined4 *)(param_1 + 0x188) = 0xffff0000;
  *(undefined2 *)(param_1 + 0x16c) = 0xffff;
  *(undefined2 *)(param_1 + 0x174) = 0xffff;
  *(undefined2 *)(param_1 + 0x17c) = 0xffff;
  *(undefined2 *)(param_1 + 0x184) = 0xffff;
  *(undefined2 *)(param_1 + 0x18c) = 0xffff;
  param_1[4] = 0;
  param_1[0x16e] = 0xff;
  param_1[5] = param_1[5] & 0xfe;
  param_1[0x176] = 0xff;
  param_1[0x17e] = 0xff;
  param_1[0x186] = 0xff;
  param_1[0x18e] = 0xff;
                    /* WARNING: Could not recover jumptable at 0x035ff180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_035ff184 + (ulong)(byte)(&DAT_04193506)[*(uint *)(param_1 + 0xa8)] * 4))();
  return;
}

