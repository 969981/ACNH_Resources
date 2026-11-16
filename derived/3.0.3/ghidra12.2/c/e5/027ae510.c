
bool FUN_027ae510(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int local_24;
  
  puVar2 = PTR_DAT_04bb8aa8;
  puVar1 = PTR_DAT_04bb8aa0;
  if (*(char *)(param_1 + 0x58) == '\x02') {
    FUN_027af340(&local_24);
  }
  else {
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar4 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)puVar1) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar5 * 4) == 0) goto LAB_027ae588;
        uVar5 = uVar5 + 1;
      } while (*(uint *)puVar1 != uVar5);
    }
    uVar5 = 0;
LAB_027ae588:
    local_24 = (int)uVar5;
  }
  iVar4 = local_24;
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar3 != 0)) {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if ((int)*(uint *)puVar1 < 1) {
    iVar3 = -1;
  }
  else {
    uVar5 = 0;
    iVar3 = -1;
    do {
      if (*(int *)(*(long *)(puVar1 + 8) + uVar5 * 4) == 1) {
        iVar3 = (int)uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)puVar1 != uVar5);
  }
  return iVar4 == iVar3;
}

