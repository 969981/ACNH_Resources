
void FUN_0082103c(void)

{
  undefined2 local_8 [2];
  undefined4 local_4;
  
  if (DAT_054ee400 != 0) {
    FUN_02509b80();
  }
  if ((DAT_05574040 == 0) || (FUN_026f8990(), DAT_05574040 == 0)) goto LAB_008210cc;
  if (DAT_04ca9180 == 0) {
LAB_008210bc:
    FUN_027026a0();
    if (DAT_05574040 == 0) goto LAB_008210cc;
  }
  else if (((*(long *)(DAT_04ca9180 + 0x140) == 0 && *(long *)(DAT_04ca9180 + 0x148) == 0) ||
           (*(long *)(DAT_04ca9180 + 0x140) != *(long *)(DAT_05574040 + 0x4c8))) ||
          (*(long *)(DAT_04ca9180 + 0x148) != *(long *)(DAT_05574040 + 0x4d0))) goto LAB_008210bc;
  FUN_026f8c3c();
LAB_008210cc:
  FUN_013668a0();
  local_4 = 0;
  local_8[0] = 1;
  FUN_01384940(local_8);
  return;
}

