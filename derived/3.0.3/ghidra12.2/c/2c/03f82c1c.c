
void FUN_03f82c1c(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x34e0bc) + 0x600;
  *(int *)(param_1 + 0x34e0bc) = iVar3;
  uVar2 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    iVar5 = *(short *)(param_1 + ((ulong)(uVar2 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar2 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar1 = iVar5 + 0xc00;
    if ((uVar2 & 0x40fe00) != 0x4000) {
      iVar1 = iVar5;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar1 + iVar3;
    iVar3 = FUN_03f5914c(param_1,uVar2);
    uVar2 = iVar3 - 1;
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar2;
    FUN_03f83188(param_1,*param_2,uVar2);
    uVar2 = uVar2 & 0xffff;
    uVar4 = (undefined1)(uVar2 >> 0xf);
  }
  else {
    iVar5 = (int)*(short *)(param_1 + ((ulong)(uVar2 >> 0x10) & 0xff) * 0x20 +
                            ((ulong)(uVar2 >> 0xc) & 0xf) * 2 + 0x3861b8);
    iVar1 = iVar5 + 0x600;
    if ((uVar2 >> 0x10 & 0x40) != 0 || (uVar2 & 0xfe00) != 0x4000) {
      iVar1 = iVar5;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar1 + iVar3;
    iVar3 = FUN_03f4bda8(param_1);
    uVar2 = iVar3 - 1;
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar2;
    FUN_03f4d1a0(param_1,*param_2 >> 0x10,*param_2,uVar2);
    uVar2 = uVar2 & 0xff;
    uVar4 = (undefined1)(uVar2 >> 7);
  }
  *(bool *)(param_1 + 0x34e0c9) = uVar2 == 0;
  *(undefined1 *)(param_1 + 0x34e0ca) = uVar4;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

