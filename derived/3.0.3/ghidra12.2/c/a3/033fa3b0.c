
bool FUN_033fa3b0(void)

{
  if ((DAT_05ab8198 != (ushort *)0x0) && ((*DAT_05ab8198 & 1) != 0)) {
    return false;
  }
  if (DAT_05ab5ea8 == 0) {
    return false;
  }
  if (*(int *)(DAT_05ab5ea8 + 0x14) == 4) {
    return true;
  }
  return *(int *)(DAT_05ab5ea8 + 0x14) == 5;
}

