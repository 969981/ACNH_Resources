
void FUN_03f8255c(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    iVar4 = *(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar2 = iVar4 + 0xc00;
    if ((uVar3 & 0x40fe00) != 0x4000) {
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
    uVar3 = FUN_03f5914c(param_1,uVar3);
    *(byte *)(param_1 + 0x34e0b8) = *(byte *)(param_1 + 0x34e0cb) | (byte)(uVar3 << 1);
    *(bool *)(param_1 + 0x34e0c9) = *(byte *)(param_1 + 0x34e0cb) == 0 && (uVar3 << 1 & 0xffff) == 0
    ;
    *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar3 >> 0xe) & 1;
    *(byte *)(param_1 + 0x34e0cb) = (byte)(uVar3 >> 0xf) & 1;
    *(undefined1 *)(param_1 + 0x34e0d1) = 1;
    FUN_03f83188(param_1,*param_2);
    return;
  }
  iVar4 = (int)*(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                          ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8);
  iVar2 = iVar4 + 0x600;
  if ((uVar3 >> 0x10 & 0x40) != 0 || (uVar3 & 0xfe00) != 0x4000) {
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
  uVar3 = FUN_03f4bda8(param_1);
  *(byte *)(param_1 + 0x34e0b8) = *(byte *)(param_1 + 0x34e0cb) | (byte)(uVar3 << 1);
  *(bool *)(param_1 + 0x34e0c9) = *(byte *)(param_1 + 0x34e0cb) == 0 && (uVar3 << 1 & 0xff) == 0;
  *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar3 >> 6) & 1;
  *(byte *)(param_1 + 0x34e0cb) = (byte)(uVar3 >> 7) & 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  FUN_03f4d1a0(param_1,*param_2 >> 0x10);
  return;
}

