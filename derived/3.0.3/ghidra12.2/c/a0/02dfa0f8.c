
undefined8 FUN_02dfa0f8(undefined8 param_1)

{
  long *plVar1;
  
  FUN_02dfa190(DAT_05690d38,param_1);
  plVar1 = DAT_05690d38;
  if (4 < (int)DAT_05690d38[0x15] - 3U) {
    if ((int)DAT_05690d38[0x15] == 5 || (int)DAT_05690d38[0x15] == 2) {
      FUN_0386b170(DAT_05690d38[0x13],DAT_05690d38);
      *(undefined1 *)((long)plVar1 + 0x165) = 1;
      return 1;
    }
    if (6 < *(uint *)(DAT_05690d38 + 0x15) ||
        (1 << (ulong)(*(uint *)(DAT_05690d38 + 0x15) & 0x1f) & 0x58U) == 0) {
      return 1;
    }
  }
  (**(code **)(*DAT_05690d38 + 0xa8))(DAT_05690d38);
  return 1;
}

