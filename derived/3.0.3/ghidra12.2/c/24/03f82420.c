
void FUN_03f82420(long param_1,uint *param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar1;
  uVar4 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    iVar6 = *(short *)(param_1 + ((ulong)(uVar4 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar4 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar3 = iVar6 + 0xc00;
    if ((uVar4 & 0x40fe00) != 0x4000) {
      iVar3 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar3 + iVar1;
    uVar5 = FUN_03f5914c(param_1,uVar4);
    uVar2 = *(ushort *)(param_1 + 0x34e0ea) & uVar5;
    *(byte *)(param_1 + 0x34e0b8) = (byte)uVar5 & ((byte)*(ushort *)(param_1 + 0x34e0ea) ^ 0xff);
    FUN_03f83188(param_1,*param_2);
  }
  else {
    iVar6 = (int)*(short *)(param_1 + ((ulong)(uVar4 >> 0x10) & 0xff) * 0x20 +
                            ((ulong)(uVar4 >> 0xc) & 0xf) * 2 + 0x3861b8);
    iVar3 = iVar6 + 0x600;
    if ((uVar4 >> 0x10 & 0x40) != 0 || (uVar4 & 0xfe00) != 0x4000) {
      iVar3 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar3 + iVar1;
    uVar5 = FUN_03f4bda8(param_1);
    uVar2 = *(byte *)(param_1 + 0x34e0ea) & uVar5;
    *(byte *)(param_1 + 0x34e0b8) = (byte)uVar5 & (*(byte *)(param_1 + 0x34e0ea) ^ 0xff);
    FUN_03f4d1a0(param_1,*param_2 >> 0x10);
  }
  *(bool *)(param_1 + 0x34e0c9) = uVar2 == 0;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

