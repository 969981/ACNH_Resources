
void FUN_03f8bdc0(long param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(short *)(param_1 + 8) + 1;
  *(ushort *)(param_1 + 8) = uVar1;
  if (*(char *)(param_1 + 0x14088) == '\0') {
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096),*(undefined1 *)(param_1 + 10));
    uVar4 = *(ushort *)(param_1 + 0x14096) - 1;
    *(short *)(param_1 + 0x14096) = (short)uVar4;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
      uVar4 = (uint)*(ushort *)(param_1 + 0x14096);
    }
    uVar6 = (uint)*(ushort *)(param_1 + 8);
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x14096);
    uVar6 = uVar1 - 1;
  }
  FUN_03f5ef94(param_1,0,uVar4,uVar6 >> 8);
  iVar7 = *(ushort *)(param_1 + 0x14096) - 1;
  *(short *)(param_1 + 0x14096) = (short)iVar7;
  FUN_03f5ef94(param_1,0,iVar7,uVar6);
  *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
  bVar2 = *(char *)(param_1 + 0x14088) != '\0';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x14097) = 1;
  }
  if (*(char *)(param_1 + 0x14089) == '\0') {
    bVar5 = *(byte *)(param_1 + 0x1408a);
  }
  else {
    *(undefined1 *)(param_1 + 0x14089) = 0;
    bVar5 = *(char *)(param_1 + 0x14087) << 2;
    if (*(char *)(param_1 + 0x14086) != '\0') {
      bVar5 = bVar5 | 0x40;
    }
    bVar5 = bVar5 | *(byte *)(param_1 + 0x14083);
    if (*(char *)(param_1 + 0x14085) != '\0') {
      bVar5 = bVar5 | 0x10;
    }
    if (*(char *)(param_1 + 0x14084) != '\0') {
      bVar5 = bVar5 | 0x20;
    }
    if (*(char *)(param_1 + 0x14082) != '\0') {
      bVar5 = bVar5 | 0x80;
    }
    if (*(char *)(param_1 + 0x14081) != '\0') {
      bVar5 = bVar5 | 2;
    }
    if (*(char *)(param_1 + 0x14080) != '\0') {
      bVar5 = bVar5 | 8;
    }
    if (bVar2) {
      bVar5 = bVar5 | 0x30;
    }
    *(byte *)(param_1 + 0x1408a) = bVar5;
  }
  *(byte *)(param_1 + 0xc) = bVar5;
  FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096));
  *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
  if (*(char *)(param_1 + 0x14088) == '\0') {
    iVar7 = 0x400;
    uVar3 = 0xffe6;
  }
  else {
    iVar7 = 0x200;
    *(undefined1 *)(param_1 + 0x14097) = 1;
    uVar3 = 0xfffe;
  }
  *(undefined1 *)(param_1 + 0x14087) = 1;
  *(undefined1 *)(param_1 + 0x14089) = 1;
  *(char *)(param_1 + 0x14080) = '\0';
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(short *)(param_1 + 0x1003e) * 2;
  uVar4 = FUN_03f5f068(param_1,uVar3);
  *(uint *)(param_1 + 8) = uVar4 & 0xffff;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar7;
  return;
}

