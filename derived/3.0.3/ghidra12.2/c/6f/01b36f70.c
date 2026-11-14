
void FUN_01b36f70(void)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    local_20 = 0;
    local_1e = 0;
    local_18 = 0;
    local_14 = 0;
    local_1c = 0x101;
    local_38 = 1;
    local_40 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_30 = 0;
    uStack_28 = 0x10100000000;
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

