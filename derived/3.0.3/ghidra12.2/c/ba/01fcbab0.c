
void FUN_01fcbab0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined *local_40;
  undefined2 local_38;
  
  FUN_01ed8340();
  *(undefined4 *)(param_1 + 0x1614) = 0;
  local_40 = PTR_DAT_04bb7648 + 0x10;
  local_38 = FUN_0376baa0(param_1[1] + 0x3e0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "StandingUpFlag";
  local_50 = puVar1;
  iVar2 = FUN_0376c020(&local_40,&local_50);
  if (iVar2 == 1) {
    pcStack_48 = "StandingUpFlag";
    local_50 = puVar1;
    FUN_0376c130(&local_40,&local_50,0);
    pcStack_48 = "KeepStandingUpFlag";
    local_50 = puVar1;
    FUN_0376c130(&local_40,&local_50,1);
  }
  uVar3 = (**(code **)(*param_1 + 0x5c0))(param_1);
  if ((uVar3 & 1) != 0) {
    if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) ||
        ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4 &&
         (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)))) &&
       (uVar3 = (**(code **)(*param_1 + 0x540))(param_1), (uVar3 & 1) != 0)) {
      FUN_021e67f0(&local_50,param_1[1] + 0x3e0);
      *(undefined4 *)((long)param_1 + 0xae84) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x15d1) = local_50._4_4_;
    }
  }
  return;
}

