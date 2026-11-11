
void FUN_003a1490(undefined4 param_1,long param_2,undefined4 *param_3,char *param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 0x22);
  if (uVar2 != 0) {
    pcVar3 = (char *)(*(long *)(param_2 + 0x18) + 8);
    do {
      if (*param_4 != -1) {
        cVar1 = *pcVar3;
        if (cVar1 != -1) {
          uVar4 = FUN_0039dbd4(param_1,*(long *)(param_2 + 8) + (long)(int)cVar1 * 0x30,
                               param_5 + (long)(int)cVar1 * 0xc);
          *param_3 = uVar4;
        }
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - 1;
      pcVar3 = pcVar3 + 0x10;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}

