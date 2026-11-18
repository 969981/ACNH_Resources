
void FUN_0361e030(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0361def0();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0xd1) >> 3 & 1) == 0)) {
    do {
      if (*(byte *)(param_1 + 0xd2) < 3) {
        FUN_0361bf5c(param_1);
      }
      else if (*(char *)(param_1 + 0x200) < '\0') {
        FUN_0361d4d4(param_1);
      }
      else if ((*(byte *)(param_1 + 0xec3) >> 2 & 1) == 0) {
        FUN_0361cd78(param_1);
      }
      else {
        FUN_0361c670(param_1);
      }
    } while (*(ulong *)(param_1 + 0x110) < param_2);
  }
  return;
}

