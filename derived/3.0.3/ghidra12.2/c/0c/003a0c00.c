
void FUN_003a0c00(long param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar1 != 0) {
    uVar3 = 0;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = *(long *)(param_1 + 0x20) + uVar3 * 0x48;
      pcVar2 = *(char **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (*pcVar2 != '\0') {
        FUN_00347c8c(pcVar2,param_2);
        FUN_00347b98(pcVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != bVar1);
  }
  return;
}

