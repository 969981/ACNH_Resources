
undefined8 FUN_01c9a970(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  char local_28 [4];
  int local_24;
  
  uVar5 = *(uint *)(param_1 + 0x30);
  if (uVar5 == 0xffffffff) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    if (uVar1 <= uVar5) {
      uVar5 = 0;
    }
    if (*(char *)(lVar4 + (long)(int)uVar5 * 0x38 + 0x30) == '\0') {
      return 0;
    }
  }
  if (uVar1 != 0) {
    uVar5 = 0;
    if ((param_2 & 1) == 0) {
      do {
        lVar2 = lVar4 + (long)(int)uVar5 * 0x38;
        if (*(char *)(lVar2 + 0x2c) == '\0' || *(char *)(lVar2 + 0x2d) != '\0') {
          local_24 = 0;
          puVar3 = (undefined4 *)(lVar4 + (long)(int)uVar5 * 0x38);
          FUN_01c9aadc(&local_24,local_28,*puVar3,puVar3[10]);
          if (((2 < local_24) && ((local_28[0] == '\0' || (local_24 == 3)))) &&
             (*(char *)(lVar4 + (long)(int)uVar5 * 0x38 + 0x30) == '\0')) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    else {
      do {
        lVar2 = lVar4 + (long)(int)uVar5 * 0x38;
        if (*(char *)(lVar2 + 0x2c) == '\0' || *(char *)(lVar2 + 0x2d) != '\0') {
          local_24 = 0;
          puVar3 = (undefined4 *)(lVar4 + (long)(int)uVar5 * 0x38);
          FUN_01c9aadc(&local_24,local_28,*puVar3,puVar3[10]);
          if ((0 < local_24) &&
             (((local_28[0] == '\0' || (local_24 == 3)) &&
              (*(char *)(lVar4 + (long)(int)uVar5 * 0x38 + 0x30) == '\0')))) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return 1;
}

