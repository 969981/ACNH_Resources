
void FUN_01b36eb0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined1 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    local_24 = 0x101;
    local_1c = 0x101;
    local_38 = 1;
    local_26 = 0;
    local_20 = 0;
    local_1e = 0;
    local_18 = 0;
    local_14 = 0;
    local_40 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    local_30 = *param_1;
    local_28 = *(undefined2 *)((long)param_1 + 0x29);
    uVar1 = FUN_01b3694c(&local_40);
    if ((uVar1 & 1) != 0) {
      FUN_01b37020(&local_40);
      FUN_01b37320(&local_40);
      uVar1 = FUN_01b379d0(&local_40);
      if ((uVar1 & 1) != 0) {
        FUN_01b37b30(&local_40);
      }
    }
  }
  return;
}

