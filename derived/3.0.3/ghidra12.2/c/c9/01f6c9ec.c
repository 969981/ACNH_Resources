
void FUN_01f6c9ec(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined4 local_14;
  
  uVar2 = FUN_021b8f60(&DAT_053fe348,*(long *)(param_1 + 8) + 0x508,0);
  local_40 = PTR_DAT_04bb2020;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x13684) = 0;
    *(undefined4 *)(param_1 + 0x1368c) = 0;
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
    local_40 = local_40 + 0x10;
    pcStack_38 = "ArrivedInEventPlaza";
    local_14 = uVar1;
    FUN_021be8c0(&local_14,&local_40,0);
    local_14._0_2_ = (ushort)(byte)uVar1;
    uVar2 = (ulong)local_40 >> 0x30;
    local_40 = (undefined *)CONCAT26((ushort)uVar2 & 0xff00,0xff0000000000);
    if (-1 < DAT_053d1340) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1340,&local_40,&local_14,2,0);
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x136bc) = 0;
  return;
}

