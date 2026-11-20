
void FUN_03f82a98(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) != '\0' || *(char *)(param_1 + 0x34e0cc) != '\0') {
    iVar6 = (int)*(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                            ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8);
    iVar2 = iVar6 + 0x600;
    if ((uVar3 >> 0x10 & 0x40) != 0 || (uVar3 & 0xfe00) != 0x4000) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
    uVar5 = FUN_03f4bda8(param_1);
    cVar4 = *(char *)(param_1 + 0x34e0cb);
    *(byte *)(param_1 + 0x34e0cb) = (byte)uVar5 & 1;
    uVar3 = uVar5 >> 1 & 0x7f;
    if (cVar4 != '\0') {
      uVar3 = uVar5 >> 1 & 0x7f | 0xffffff80;
    }
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar3;
    *(bool *)(param_1 + 0x34e0c9) = uVar3 == 0;
    *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar3 >> 7) & 1;
    *(undefined1 *)(param_1 + 0x34e0d1) = 1;
    FUN_03f4d1a0(param_1,*param_2 >> 0x10);
    return;
  }
  iVar6 = *(short *)(param_1 + ((ulong)(uVar3 >> 0x10) & 0xff) * 0x20 +
                     ((ulong)(uVar3 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
  iVar2 = iVar6 + 0xc00;
  if ((uVar3 & 0x40fe00) != 0x4000) {
    iVar2 = iVar6;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
  uVar5 = FUN_03f5914c(param_1,uVar3);
  uVar3 = uVar5 >> 1 & 0x7fff;
  if (*(char *)(param_1 + 0x34e0cb) != '\0') {
    uVar3 = uVar5 >> 1 & 0x7fff | 0xffff8000;
  }
  *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar3;
  *(bool *)(param_1 + 0x34e0c9) = uVar3 == 0;
  *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar3 >> 0xf) & 1;
  *(byte *)(param_1 + 0x34e0cb) = (byte)uVar5 & 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  FUN_03f83188(param_1,*param_2);
  return;
}

