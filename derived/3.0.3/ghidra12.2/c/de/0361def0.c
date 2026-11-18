
bool FUN_0361def0(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0xd2) < 3) {
    lVar2 = ((ulong)(param_2 - *(long *)(param_1 + 0x110)) >> 2) + 1;
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        return true;
      }
      FUN_0361bf5c(param_1);
      bVar1 = *(byte *)(param_1 + 0xd1);
      if ((bVar1 >> 3 & 1) != 0) {
        return lVar2 == 0;
      }
    } while ((bVar1 >> 2 & 1) == 0);
  }
  else if (*(char *)(param_1 + 0x200) < '\0') {
    lVar2 = ((ulong)(param_2 - *(long *)(param_1 + 0x110)) >> 1) + 1;
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        return true;
      }
      FUN_0361d4d4(param_1);
      bVar1 = *(byte *)(param_1 + 0xd1);
      if ((bVar1 >> 3 & 1) != 0) {
        return lVar2 == 0;
      }
    } while ((bVar1 >> 2 & 1) == 0);
  }
  else {
    lVar2 = ((ulong)(param_2 - *(long *)(param_1 + 0x110)) >> 2) + 1;
    if ((*(byte *)(param_1 + 0xec3) >> 2 & 1) == 0) {
      do {
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return true;
        }
        FUN_0361cd78(param_1);
        bVar1 = *(byte *)(param_1 + 0xd1);
        if ((bVar1 >> 3 & 1) != 0) {
          return lVar2 == 0;
        }
      } while ((bVar1 >> 2 & 1) == 0);
    }
    else {
      do {
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return true;
        }
        FUN_0361c670(param_1);
        bVar1 = *(byte *)(param_1 + 0xd1);
        if ((bVar1 >> 3 & 1) != 0) {
          return lVar2 == 0;
        }
      } while ((bVar1 >> 2 & 1) == 0);
    }
  }
  *(byte *)(param_1 + 0xd1) = bVar1 & 0xfb;
  return *(long *)(param_1 + 0x110) == param_2;
}

