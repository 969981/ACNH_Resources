
void FUN_03f82f18(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar1;
  uVar5 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    iVar6 = *(short *)(param_1 + ((ulong)(uVar5 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar5 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar2 = iVar6 + 0xc00;
    if ((uVar5 & 0x40fe00) != 0x4000) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
    uVar5 = FUN_03f5914c(param_1,uVar5);
    uVar5 = (uVar5 & 0xffff) + 1;
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar5;
    bVar4 = (uVar5 & 0xffff) != uVar5;
    FUN_03f83188(param_1,*param_2,uVar5);
    bVar3 = (byte)(uVar5 >> 0xf);
  }
  else {
    iVar6 = (int)*(short *)(param_1 + ((ulong)(uVar5 >> 0x10) & 0xff) * 0x20 +
                            ((ulong)(uVar5 >> 0xc) & 0xf) * 2 + 0x3861b8);
    iVar2 = iVar6 + 0x600;
    if ((uVar5 >> 0x10 & 0x40) != 0 || (uVar5 & 0xfe00) != 0x4000) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + iVar1;
    uVar5 = FUN_03f4bda8(param_1);
    uVar5 = (uVar5 & 0xff) + 1;
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar5;
    bVar4 = (uVar5 & 0xff) != uVar5;
    FUN_03f4d1a0(param_1,*param_2 >> 0x10,*param_2,uVar5);
    bVar3 = (byte)(uVar5 >> 7);
  }
  *(byte *)(param_1 + 0x34e0ca) = bVar3 & 1;
  *(bool *)(param_1 + 0x34e0c9) = bVar4;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

