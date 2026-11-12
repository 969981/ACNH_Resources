
void FUN_0068d1f0(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x91) = 1;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x90) = 1;
  while (0 < (int)uVar1) {
    bVar2 = 0;
    uVar3 = 0;
    lVar4 = 0x1a;
    do {
      if (1 < *(byte *)(*(long *)(param_1 + 0x38) + lVar4)) {
        bVar2 = FUN_0068d480(param_1,uVar3 & 0xffffffff);
        bVar2 = bVar2 & 1 | *(char *)(param_1 + 0x91) != '\0';
        *(byte *)(param_1 + 0x91) = bVar2;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar1 != uVar3);
    if (bVar2 == 0) break;
    uVar1 = *(uint *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}

