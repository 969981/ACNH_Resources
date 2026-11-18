
void FUN_0365bf84(long param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *(uint *)(param_1 + 0x21a8);
  cVar3 = *(char *)(param_1 + 0x21a5);
  cVar1 = cVar3;
  if (0x400 < uVar2) {
    cVar1 = *(char *)(param_1 + 0x2055);
  }
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x204c) != 0)) &&
     (*(int *)(param_1 + 0x204c) = *(int *)(param_1 + 0x204c) + -1,
     *(uint *)(param_1 + 0x2050) < 0x401)) {
    *(uint *)(param_1 + 0x204c) = (uint)(byte)(&DAT_041979c4)[*(byte *)(param_1 + 0x2054)];
    *(undefined4 *)(param_1 + 0x2050) = 0xffffffff;
  }
  cVar1 = cVar3;
  if (0x400 < uVar2) {
    cVar1 = *(char *)(param_1 + 0x20a1);
  }
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x2098) != 0)) &&
     (*(int *)(param_1 + 0x2098) = *(int *)(param_1 + 0x2098) + -1,
     *(uint *)(param_1 + 0x209c) < 0x401)) {
    *(uint *)(param_1 + 0x2098) = (uint)(byte)(&DAT_041979c4)[*(byte *)(param_1 + 0x20a0)];
    *(undefined4 *)(param_1 + 0x209c) = 0xffffffff;
  }
  cVar1 = cVar3;
  if (0x400 < uVar2) {
    cVar1 = *(char *)(param_1 + 0x20ed);
  }
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x20e4) != 0)) &&
     (*(int *)(param_1 + 0x20e4) = *(int *)(param_1 + 0x20e4) + -1,
     *(uint *)(param_1 + 0x20e8) < 0x401)) {
    *(uint *)(param_1 + 0x20e4) = (uint)(byte)(&DAT_041979c4)[*(byte *)(param_1 + 0x20ec)];
    *(undefined4 *)(param_1 + 0x20e8) = 0xffffffff;
  }
  if (0x400 < uVar2) {
    cVar3 = *(char *)(param_1 + 0x211d);
  }
  if (((cVar3 == '\0') && (*(int *)(param_1 + 0x2114) != 0)) &&
     (*(int *)(param_1 + 0x2114) = *(int *)(param_1 + 0x2114) + -1,
     *(uint *)(param_1 + 0x2118) < 0x401)) {
    *(uint *)(param_1 + 0x2114) = (uint)(byte)(&DAT_041979c4)[*(byte *)(param_1 + 0x211c)];
    *(undefined4 *)(param_1 + 0x2118) = 0xffffffff;
    return;
  }
  return;
}

