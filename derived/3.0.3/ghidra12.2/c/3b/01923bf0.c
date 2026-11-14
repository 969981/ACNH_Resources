
undefined8 FUN_01923bf0(long param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(**(long **)(param_1 + 0x38) + 0x78)) {
    pcVar1 = (char *)(**(code **)(*(long *)(param_1 + 0x590) + 0xf0))(param_1 + 0x590);
    if (*pcVar1 == '\0') {
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x638);
    if (0 < iVar3) {
      lVar5 = 0;
      do {
        lVar4 = (long)iVar3;
        if (lVar5 < lVar4) {
          piVar2 = (int *)(**(code **)(**(long **)(*(long *)(param_1 + 0x620) + lVar5 * 8) + 0xf0))
                                    ();
          if (*piVar2 != -1) {
            return 1;
          }
          iVar3 = *(int *)(param_1 + 0x638);
          lVar4 = (long)iVar3;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar4);
    }
  }
  return 0;
}

