
void FUN_00398c20(long param_1,long param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  ushort uVar6;
  
  sVar5 = *(short *)(param_2 + 0x54);
  *(short *)(param_1 + 0xd2) = sVar5;
  sVar1 = *(short *)(param_2 + 0x56);
  *(short *)(param_1 + 0xd4) = sVar1;
  sVar2 = *(short *)(param_2 + 0x58);
  *(short *)(param_1 + 0xd6) = sVar2;
  sVar3 = *(short *)(param_2 + 0x5a);
  *(short *)(param_1 + 0xd8) = sVar3;
  if (((sVar5 != 0 || sVar1 != 0) || sVar2 != 0) || sVar3 != 0) {
    *(byte *)(param_1 + 0x10a) = *(byte *)(param_1 + 0x10a) | 8;
  }
  if (*(char *)(param_1 + 0x108) == '\x02') {
    sVar5 = (short)(int)*(float *)(param_1 + 0x50) - *(short *)(param_2 + 0x5e);
  }
  else {
    if (*(char *)(param_1 + 0x108) != '\x01') {
      *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(param_2 + 0x5c);
      *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(param_2 + 0x5e);
      *(undefined2 *)(param_1 + 0xde) = *(undefined2 *)(param_2 + 0x60);
      *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0x62);
      return;
    }
    sVar5 = *(short *)(param_2 + 0x5c);
  }
  *(short *)(param_1 + 0xda) = sVar5;
  *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)(param_1 + 0xde) = *(undefined2 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0x62);
  uVar6 = *(ushort *)(param_2 + 0x60);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  uVar4 = NEON_ucvtf((uint)uVar6);
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  return;
}

