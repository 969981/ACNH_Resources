
void FUN_00651e20(long param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 < 0x20) {
    if (iVar1 != 0) {
      pcVar2 = (char *)(param_1 + 3);
      lVar3 = (long)iVar1 << 3;
      do {
        if ((pcVar2[-1] == *(char *)((long)param_2 + 2)) &&
           (*pcVar2 == *(char *)((long)param_2 + 3))) {
          return;
        }
        pcVar2 = pcVar2 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    *(int *)(param_1 + 0x100) = iVar1 + 1;
    *(undefined8 *)(param_1 + (long)iVar1 * 8) = *param_2;
  }
  return;
}

