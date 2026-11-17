
bool FUN_0308c2c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_2d7a [2];
  undefined1 auStack_2d78 [5792];
  int local_16d8;
  undefined1 auStack_16d2 [2];
  undefined *local_16d0;
  char *pcStack_16c8;
  
  FUN_007ef010(auStack_2d7a);
  FUN_007e4920(auStack_2d78,auStack_2d7a);
  uVar2 = FUN_007e4bb0(auStack_2d78);
  if ((uVar2 & 1) == 0) {
    return true;
  }
  FUN_007ef010(auStack_16d2,param_2);
  FUN_007e4920(&local_16d0,auStack_16d2);
  local_16d8 = FUN_007e68d0(&local_16d0);
  if (2 < local_16d8 - 0x1bU) {
    FUN_007ef010(auStack_16d2,param_2);
    FUN_007e4920(&local_16d0,auStack_16d2);
    local_16d8 = FUN_007e68d0(&local_16d0);
    if ((local_16d8 - 0x1aU & 0xfffffffb) != 0) {
      pcStack_16c8 = "MainmenuUnlockMydesingPro";
      goto LAB_0308c3b4;
    }
  }
  pcStack_16c8 = "UnlockMydesignPro2";
LAB_0308c3b4:
  local_16d0 = PTR_DAT_04bb2020 + 0x10;
  iVar1 = FUN_0274bce0(param_1,&local_16d0);
  return iVar1 != 0;
}

