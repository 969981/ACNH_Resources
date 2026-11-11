
void FUN_003a2220(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00347c8c(*(long *)(param_1 + 0x40) + lVar1,param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x48;
    } while (uVar2 < *(byte *)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) ^ 1;
  return;
}

