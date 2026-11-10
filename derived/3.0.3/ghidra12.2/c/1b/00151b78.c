
undefined4 FUN_00151b78(long param_1)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (((*(byte *)(*(long *)(param_1 + 0x440) + 0x84) >> 5 & 1) == 0) ||
     (*(char *)(param_1 + 0x41c) < '\0')) {
    pcVar1 = "";
    pcVar4 = "";
  }
  else {
    pcVar4 = "ftp@example.com";
    pcVar1 = "anonymous";
  }
  if (*(long *)(param_1 + 0x210) == 0) {
    lVar2 = FUN_00143320(pcVar1);
    *(long *)(param_1 + 0x210) = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
  }
  if (*(long *)(param_1 + 0x218) == 0) {
    lVar2 = FUN_00143320(pcVar4);
    uVar5 = 0x1b;
    if (lVar2 != 0) {
      uVar5 = 0;
    }
    *(long *)(param_1 + 0x218) = lVar2;
    uVar3 = uVar5;
    if ((*(long *)(param_1 + 0x210) != 0) && (lVar2 == 0)) {
      lVar2 = FUN_00143320(&DAT_0407ebb1);
      *(long *)(param_1 + 0x218) = lVar2;
      uVar3 = 0x1b;
      if (lVar2 != 0) {
        uVar3 = uVar5;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

