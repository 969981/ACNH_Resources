
void FUN_03f822c4(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    iVar5 = *(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar2 = iVar5 + 0xc00;
    if ((uVar3 & 0x40fe00) != 0x4000) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
    uVar4 = FUN_03f5914c(param_1,uVar3);
    uVar3 = uVar4 << 1;
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar3;
    *(char *)(param_1 + 0x34e0ca) = (char)((uVar3 & 0xfffe) >> 0xf);
    *(bool *)(param_1 + 0x34e0c9) = (uVar3 & 0xfffe) == 0;
    *(byte *)(param_1 + 0x34e0cb) = (byte)(uVar4 >> 0xf) & 1;
    *(undefined1 *)(param_1 + 0x34e0d1) = 1;
    FUN_03f83188(param_1,*param_2);
    return;
  }
  iVar5 = (int)*(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                          ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8);
  iVar2 = iVar5 + 0x600;
  if ((uVar3 >> 0x10 & 0x40) != 0 || (uVar3 & 0xfe00) != 0x4000) {
    iVar2 = iVar5;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
  uVar4 = FUN_03f4bda8(param_1);
  uVar3 = uVar4 << 1;
  *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar3;
  *(char *)(param_1 + 0x34e0ca) = (char)((uVar3 & 0xfe) >> 7);
  *(bool *)(param_1 + 0x34e0c9) = (uVar3 & 0xfe) == 0;
  *(byte *)(param_1 + 0x34e0cb) = (byte)(uVar4 >> 7) & 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  FUN_03f4d1a0(param_1,*param_2 >> 0x10);
  return;
}

