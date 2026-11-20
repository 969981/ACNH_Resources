
void FUN_03f70598(long param_1)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = (uint *)(param_1 + 0x34e0b4);
  uVar3 = *(ushort *)puVar1;
  *(ushort *)puVar1 = uVar3 + 1;
  if (*(char *)(param_1 + 0x34e0d0) == '\0') {
    FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),*(undefined1 *)(param_1 + 0x34e0b6));
    uVar5 = *(ushort *)(param_1 + 0x34e0e8) - 1;
    *(short *)(param_1 + 0x34e0e8) = (short)uVar5;
    if (*(char *)(param_1 + 0x34e0d0) != '\0') {
      *(undefined1 *)(param_1 + 0x34e0e9) = 1;
      uVar5 = (uint)*(ushort *)(param_1 + 0x34e0e8);
    }
    uVar6 = (uint)*(ushort *)puVar1;
  }
  else {
    uVar5 = (uint)*(ushort *)(param_1 + 0x34e0e8);
    uVar6 = (ushort)(uVar3 + 1) - 1;
  }
  FUN_03f4d1a0(param_1,0,uVar5,uVar6 >> 8);
  iVar7 = *(ushort *)(param_1 + 0x34e0e8) - 1;
  *(short *)(param_1 + 0x34e0e8) = (short)iVar7;
  FUN_03f4d1a0(param_1,0,iVar7,uVar6);
  *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
  bVar2 = *(char *)(param_1 + 0x34e0d0) != '\0';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x34e0e9) = 1;
  }
  if (*(char *)(param_1 + 0x34e0d1) == '\0') {
    uVar5 = (uint)*(byte *)(param_1 + 0x34e0d2);
  }
  else {
    *(undefined1 *)(param_1 + 0x34e0d1) = 0;
    uVar5 = (uint)*(byte *)(param_1 + 0x34e0cf) << 2;
    if (*(char *)(param_1 + 0x34e0ce) != '\0') {
      uVar5 = uVar5 | 0x40;
    }
    uVar5 = uVar5 | *(byte *)(param_1 + 0x34e0cb);
    if (*(char *)(param_1 + 0x34e0cd) != '\0') {
      uVar5 = uVar5 | 0x10;
    }
    if (*(char *)(param_1 + 0x34e0cc) != '\0') {
      uVar5 = uVar5 | 0x20;
    }
    if (*(char *)(param_1 + 0x34e0ca) != '\0') {
      uVar5 = uVar5 | 0xffffff80;
    }
    if (*(char *)(param_1 + 0x34e0c9) != '\0') {
      uVar5 = uVar5 | 2;
    }
    if (*(char *)(param_1 + 0x34e0c8) != '\0') {
      uVar5 = uVar5 | 8;
    }
    if (bVar2) {
      uVar5 = uVar5 | 0x30;
    }
    *(char *)(param_1 + 0x34e0d2) = (char)uVar5;
  }
  FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar5);
  *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
  if (*(char *)(param_1 + 0x34e0d0) == '\0') {
    iVar7 = 0xc00;
    uVar4 = 0xffe4;
  }
  else {
    iVar7 = 0x600;
    *(undefined1 *)(param_1 + 0x34e0e9) = 1;
    uVar4 = 0xfff4;
  }
  *(undefined1 *)(param_1 + 0x34e0cf) = 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  *(undefined1 *)(param_1 + 0x34e0c8) = 0;
  *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + *(short *)(param_1 + 0x3861d6) * 2;
  uVar5 = FUN_03f5914c(param_1,uVar4);
  *(char *)(param_1 + 0x34e0b8) = (char)(uVar5 >> 8);
  *puVar1 = uVar5 & 0xffff;
  *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + iVar7;
  return;
}

