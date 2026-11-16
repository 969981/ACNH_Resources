
void FUN_028ee9e8(undefined2 *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined **local_58;
  undefined2 *puStack_50;
  undefined4 *local_48;
  undefined2 local_38 [2];
  undefined4 local_34;
  
  *param_1 = 0;
  memset(param_1 + 2,0,0x4014);
  FUN_028f8bb0(param_1 + 2);
  FUN_028f8bb0(param_1 + 0xab0);
  FUN_028f8bb0(param_1 + 0x155e);
  *(undefined8 *)(param_1 + 0x2038) = 0;
  *(undefined8 *)(param_1 + 0x2010) = 0;
  *(undefined8 *)(param_1 + 0x203b) = 0;
  *(undefined8 *)(param_1 + 0x200c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2014) = 0;
  *(undefined8 *)(param_1 + 0x2018) = 0;
  *(undefined8 *)(param_1 + 0x201c) = 0;
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2024) = 0;
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined8 *)(param_1 + 0x202c) = 0;
  *(undefined8 *)(param_1 + 0x2030) = 0;
  *(undefined8 *)(param_1 + 0x2034) = 0;
  *(undefined4 *)(param_1 + 0x203f) = 0x101;
  *(undefined1 *)(param_1 + 0x2041) = 0;
  param_1[0x2042] = 0;
  *(undefined4 *)(param_1 + 0x2044) = 0;
  local_34 = 0x20;
  local_38[0] = 0;
  local_58 = &PTR_LAB_04aa63e0;
  puStack_50 = local_38;
  local_48 = &local_34;
  uVar2 = FUN_02b7ca70(&local_58);
  uVar1 = local_38[0];
  local_34 = 0x20;
  local_38[0] = 0;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffff;
  }
  param_1[0x200c] = uVar1;
  local_58 = &PTR_LAB_04aa6408;
  puStack_50 = local_38;
  local_48 = &local_34;
  uVar2 = FUN_02b77dd0(&local_58);
  uVar1 = local_38[0];
  local_34 = 0x20;
  local_38[0] = 0;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffff;
  }
  param_1[0x200d] = uVar1;
  local_58 = &PTR_LAB_04aa6430;
  puStack_50 = local_38;
  local_48 = &local_34;
  uVar2 = FUN_02b718e0(&local_58);
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0xffff;
  }
  param_1[0x200e] = local_38[0];
  param_1[0x200f] = 0xffff;
  return;
}

