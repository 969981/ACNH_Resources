
void FUN_033faf00(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (((DAT_05ab5ea8 == 0) || (*(int *)(DAT_05ab5ea8 + 0x14) == 0)) ||
     ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) {
    FUN_0082f294();
    return;
  }
  FUN_00830084(param_1,0);
  return;
}

