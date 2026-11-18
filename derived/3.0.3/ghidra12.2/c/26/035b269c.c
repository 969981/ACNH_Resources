
void FUN_035b269c(long param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  
  if (((short)*(ushort *)(param_1 + 0x10) < -0x6000) || (0xdfff < *(ushort *)(param_1 + 0x10))) {
    uVar6 = (uint)*(byte *)(param_1 + 0xe6e);
  }
  else {
    uVar6 = FUN_035fa640(param_1 + 0xd00);
  }
  FUN_035f40e8(param_1 + 0xd00,*(undefined2 *)(param_1 + 0x12),uVar6);
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  uVar2 = *(short *)(param_1 + 0x12) + 1;
  *(ushort *)(param_1 + 0x12) = uVar2;
  iVar3 = *(byte *)(param_1 + 0xf) + 1;
  *(char *)(param_1 + 0xf) = (char)iVar3;
  if (iVar3 == 0x10) {
    cVar5 = *(char *)(param_1 + 2) + '\x10';
    cVar1 = *(char *)(param_1 + 4) + '\x10';
    *(char *)(param_1 + 2) = cVar5;
    cVar4 = *(char *)(param_1 + 1);
    *(char *)(param_1 + 4) = cVar1;
    if (cVar5 == '\0') {
      cVar4 = cVar4 + '\x01';
    }
    cVar5 = *(char *)(param_1 + 3);
    *(char *)(param_1 + 1) = cVar4;
    if (cVar1 == '\0') {
      cVar5 = cVar5 + '\x01';
    }
    *(char *)(param_1 + 3) = cVar5;
    cVar5 = *(char *)(param_1 + 5);
    *(char *)(param_1 + 5) = cVar5 + -1;
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(ushort *)(param_1 + 0x12) = uVar2 & 0x9fff;
  }
  return;
}

