
void FUN_00820f90(void)

{
  long lVar1;
  
  if (DAT_054ee400 != 0) {
    FUN_02509b80();
  }
  if (DAT_05574040 != 0) {
    if (DAT_04ca9180 != 0) {
      if ((*(long *)(DAT_04ca9180 + 0x140) != 0 || *(long *)(DAT_04ca9180 + 0x148) != 0) &&
         (*(long *)(DAT_04ca9180 + 0x140) == *(long *)(DAT_05574040 + 0x4c8) &&
          *(long *)(DAT_04ca9180 + 0x148) == *(long *)(DAT_05574040 + 0x4d0))) goto LAB_00821004;
    }
    FUN_027026a0();
  }
LAB_00821004:
  lVar1 = 1;
  do {
    FUN_0154c780(lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x39);
  FUN_01b358f0(DAT_0532d278);
  return;
}

