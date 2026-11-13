
byte FUN_013965e8(long param_1)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))();
    if (lVar3 != 0) {
      lVar5 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar5 + 0x473);
      pcVar4 = PTR_DAT_04bc1220;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pcVar4 = (char *)(lVar5 + 0x473);
        }
      }
      if (*(char *)(lVar3 + 0x16) == *pcVar4) goto LAB_01396690;
    }
    if (((*(long **)(param_1 + 0x58) != (long *)0x0) &&
        (lVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar3 != 0)) &&
       ((*(byte *)(lVar3 + 8) >> 5 & 1) != 0)) {
      return 1;
    }
  }
LAB_01396690:
  return *(byte *)(param_1 + 0x28) & 1;
}

