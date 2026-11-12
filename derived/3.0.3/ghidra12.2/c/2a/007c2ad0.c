
byte FUN_007c2ad0(void)

{
  int iVar1;
  byte in_w9;
  
  if (DAT_05aec9a0 != 0) {
    iVar1 = *(int *)(DAT_05aec9a0 + 0x32c);
    in_w9 = 0;
    if (iVar1 != 0) {
      if (iVar1 == 0x120) {
        if ((*(char *)(DAT_05aec9a0 + 0x335) != '\0') &&
           ((*(int *)(DAT_05aec868 + 0x32c) == 1 ||
            (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) != '\0')))) {
          in_w9 = *(int *)(DAT_05aec9a0 + 0x344) != 0;
          goto LAB_007c2b84;
        }
      }
      else if (iVar1 == 0x100) {
        if (((*(char *)(DAT_05aec9a0 + 0x335) != '\0') &&
            ((*(int *)(DAT_05aec868 + 0x32c) == 1 ||
             (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) != '\0')))) ||
           ((in_w9 = 1, *(char *)(DAT_05aec9a0 + 0x336) != '\0' &&
            (*(int *)(DAT_05aec868 + 0x32c) == 2)))) {
          in_w9 = 0;
        }
        goto LAB_007c2b84;
      }
      in_w9 = 1;
    }
  }
LAB_007c2b84:
  return DAT_05aec9a0 != 0 & in_w9;
}

