
void FUN_03f54700(long param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x22a);
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 2;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(ushort *)(param_1 + 0x14) = uVar2;
  *(ushort *)(param_1 + 0x1a) = uVar2;
  if (uVar2 == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar3 = (uint)uVar2;
    uVar2 = 0;
    do {
      uVar5 = uVar2;
      uVar4 = uVar3;
      uVar3 = uVar4 << 1;
      uVar2 = uVar5 + 1;
    } while ((uVar4 >> 0xe & 1) == (uVar4 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar4;
    *(short *)(param_1 + 0x14) = (short)uVar4;
    *(ushort *)(param_1 + 0x16) = *(short *)(param_1 + 0x22c) - uVar5;
    *(ushort *)(param_1 + 0x24) = uVar5 & 0xf0;
  }
  FUN_03f577f4(param_1);
  *(undefined2 *)(param_1 + 0x240 + (long)*(int *)(param_1 + 0x250) * 2) =
       *(undefined2 *)(param_1 + 0x14);
  lVar1 = (long)*(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = (int)lVar1;
  *(undefined2 *)(param_1 + 0x240 + lVar1 * 2) = *(undefined2 *)(param_1 + 0x16);
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

