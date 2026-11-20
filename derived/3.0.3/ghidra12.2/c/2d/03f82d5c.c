
void FUN_03f82d5c(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    uVar5 = *param_2;
    uVar4 = *(undefined2 *)(param_1 + 0x34e0ea);
    iVar7 = *(short *)(param_1 + ((ulong)(uVar5 >> 0x10) & 0xff) * 0x20 +
                       ((ulong)(uVar5 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar2 = iVar7 + 0xc00;
    if ((uVar5 & 0x40fe00) != 0x4000) {
      iVar2 = iVar7;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + *(int *)(param_1 + 0x34e0bc);
    uVar6 = FUN_03f5914c(param_1);
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)((uint)uVar6 >> 8);
    FUN_03f83070(param_1,uVar4,uVar6);
    return;
  }
  uVar5 = *param_2;
  bVar3 = *(byte *)(param_1 + 0x34e0ea);
  iVar7 = (int)*(short *)(param_1 + ((ulong)(uVar5 >> 0x10) & 0xff) * 0x20 +
                          ((ulong)(uVar5 >> 0xc) & 0xf) * 2 + 0x3861b8);
  iVar2 = iVar7 + 0x600;
  if ((uVar5 >> 0x10 & 0x40) != 0 || (uVar5 & 0xfe00) != 0x4000) {
    iVar2 = iVar7;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar2 + *(int *)(param_1 + 0x34e0bc);
  uVar5 = FUN_03f4bda8(param_1);
  *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar5;
  uVar9 = (uint)bVar3;
  if (*(char *)(param_1 + 0x34e0c8) == '\0') {
    uVar8 = (uVar9 - (uVar5 & 0xff)) + (int)(char)(*(char *)(param_1 + 0x34e0cb) + -1);
    *(byte *)(param_1 + 0x34e0cb) = (byte)(uVar8 >> 0xf) & 1 ^ 1;
  }
  else {
    uVar1 = (uVar9 & 0xf) + (uint)*(byte *)(param_1 + 0x34e0cb) + (~uVar5 | 0xfffffff0);
    uVar8 = uVar1 + 10;
    if ((uVar1 & 0xff) < 10) {
      uVar8 = uVar1;
    }
    uVar1 = ((uint)(bVar3 >> 4) - ((uVar5 & 0xf0) >> 4)) - (uint)(9 < (uVar1 & 0xff));
    *(bool *)(param_1 + 0x34e0cb) = uVar1 < 10;
    iVar2 = uVar1 * 0x10;
    if (uVar1 >= 10) {
      iVar2 = uVar1 * 0x10 + -0x60;
    }
    uVar8 = iVar2 + uVar8;
  }
  *(char *)(param_1 + 0x34e0ea) = (char)uVar8;
  *(bool *)(param_1 + 0x34e0c9) = (uVar8 & 0xff) == 0;
  *(char *)(param_1 + 0x34e0ca) = (char)((uVar8 & 0xff) >> 7);
  *(byte *)(param_1 + 0x34e0ce) = (byte)(((uVar8 ^ uVar9) & (uVar5 ^ uVar9)) >> 7) & 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

