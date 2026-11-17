
undefined2 * FUN_02acf1d8(int param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined *local_20;
  char *pcStack_18;
  
  if (DAT_0561267c == param_1) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "CommuneExpanded";
    uVar1 = FUN_0273f0a0(&local_20);
    if ((uVar1 & 1) != 0) {
      return &DAT_05612678;
    }
  }
  puVar2 = &DAT_05612510;
  if ((((((DAT_05612514 != param_1) && (puVar2 = &DAT_05612538, DAT_0561253c != param_1)) &&
        (puVar2 = &DAT_05612560, DAT_05612564 != param_1)) &&
       ((puVar2 = &DAT_05612588, DAT_0561258c != param_1 &&
        (puVar2 = &DAT_056125b0, DAT_056125b4 != param_1)))) &&
      ((puVar2 = &DAT_056125d8, DAT_056125dc != param_1 &&
       ((puVar2 = &DAT_05612600, DAT_05612604 != param_1 &&
        (puVar2 = &DAT_05612628, DAT_0561262c != param_1)))))) &&
     (puVar2 = &DAT_05612650, DAT_05612654 != param_1)) {
    puVar2 = (undefined2 *)0x0;
  }
  return puVar2;
}

