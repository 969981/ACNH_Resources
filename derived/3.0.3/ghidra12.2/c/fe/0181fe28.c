
bool FUN_0181fe28(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_18[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_48 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  iStack_34 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  local_14 = *(undefined4 *)(param_1 + 0x4a8);
  iStack_44 = iStack_34 + -1;
  local_50 = puVar1;
  local_40 = puVar1;
  local_38 = local_48;
  uVar2 = FUN_01820f40(&local_50,&local_40,local_18);
  iStack_44 = iStack_34 + 1;
  local_48 = local_38;
  local_50 = puVar1;
  uVar4 = FUN_01820f40(&local_50,&local_40,local_18);
  uVar5 = 1;
  if ((uVar2 & 1) != 0) {
    uVar5 = 2;
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = uVar2 & 1;
  }
  local_48 = local_38 + -1;
  iStack_44 = iStack_34;
  local_50 = puVar1;
  uVar2 = FUN_01820f40(&local_50,&local_40,local_18);
  local_48 = local_38 + 1;
  iStack_44 = iStack_34;
  local_50 = puVar1;
  uVar3 = FUN_01820f40(&local_50,&local_40,local_18);
  return uVar5 + (uVar2 & 1) + (uVar3 & 1) < 2;
}

