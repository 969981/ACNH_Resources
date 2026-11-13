
void FUN_013ce970(long param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x5a9) >> 2 & 1) != 0) {
    uVar3 = 0;
    cVar2 = '\0';
    iVar4 = 0;
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x59d);
      if (*(byte *)(param_1 + 0x59a) <= uVar3) {
        uVar1 = (uint)*(byte *)(param_1 + 0x59b) + (uint)*(byte *)(param_1 + 0x59a);
      }
      if ((uVar3 < uVar1) &&
         ((uVar3 < *(byte *)(param_1 + 0x59e) || (*(byte *)(param_1 + 0x59b) <= uVar3)))) {
        if (*(char *)(param_1 + (long)iVar4 * 0x20 + 0x291) == '\0') {
          *(undefined4 *)(param_1 + 0x5a4) = 0;
          break;
        }
        cVar2 = cVar2 + '\x01';
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (uVar3 != 0x14);
    if ((int)(uint)*(byte *)(param_1 + 0x59c) <= (int)cVar2) {
      *(byte *)(param_1 + 0x5a9) = *(byte *)(param_1 + 0x5a9) & 0xfb;
    }
  }
  return;
}

