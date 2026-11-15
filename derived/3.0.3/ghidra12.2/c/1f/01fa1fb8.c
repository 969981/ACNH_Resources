
void FUN_01fa1fb8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  undefined2 local_28;
  
  local_30 = PTR_DAT_04bb7648 + 0x10;
  local_28 = FUN_0376baa0(*(long *)(param_1 + 8) + 0x3e0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "StandingUpFlag";
  iVar1 = FUN_0376c020(&local_30,&local_40);
  uVar2 = 0x1e;
  if (iVar1 != 1) {
    uVar2 = 300;
  }
  *(undefined4 *)(param_1 + 0xae70) = uVar2;
  return;
}

