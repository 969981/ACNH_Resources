
void FUN_02bf0fa4(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *local_1d0;
  char *pcStack_1c8;
  undefined *local_1c0;
  long *plStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  uint local_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 local_51;
  long *local_48;
  undefined *local_40;
  char *local_38;
  
  local_38 = (char *)(**(code **)(*param_1 + 0x168))(param_1,0);
  puVar1 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if (((*PTR_DAT_04bc4e88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e88), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e80 = PTR_DAT_04bc4e90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e88);
  }
  if ((param_2 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4e80), (uVar3 & 1) == 0)) {
    local_48 = (long *)0x0;
  }
  else {
    if (*(char *)param_2[8] != '\0') {
      local_38 = (char *)param_2[8];
    }
    local_48 = (long *)param_2[6];
  }
  local_1b0 = 0;
  lStack_1a8 = 0;
  puStack_178 = local_16c;
  local_1a0 = 0;
  lStack_198 = 0;
  local_170 = 0x100;
  local_6d = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  local_16c[0] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_51 = 0;
  local_1c0 = PTR_DAT_04bc51c0 + 0x10;
  plStack_1b8 = param_1;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x118))(local_48,&local_1c0);
  }
  uVar3 = (**(code **)(*(long *)param_1[0x82] + 0x10))();
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)param_1[0x82];
    puVar5[2] = 0x1a0;
    puVar5[3] = 1;
    *puVar5 = &PTR_LAB_04aab4a8;
    puVar5[1] = param_1;
  }
  local_1b0 = param_1[0x82];
  lStack_1a8 = param_1[0x83];
  local_1a0 = param_1[0x84];
  lStack_198 = param_1[0x85];
  local_190 = param_1[0x88];
  if ((*(uint *)(param_1 + 0xa6) & 1) == 0) {
    uVar6 = local_68 & 0xfffffffe;
  }
  else {
    uVar6 = local_68 | 1;
  }
  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,1);
  local_68 = uVar6 & 0xfffffffd;
  if ((*(uint *)(param_1 + 0xa6) >> 1 & 1) != 0) {
    local_68 = uVar6 | 2;
  }
  (**(code **)(local_40 + 0x18))(&local_40);
  local_1d0 = puVar1 + 0x10;
  pcStack_1c8 = local_38;
  lVar4 = FUN_02bf1d10(&local_1c0,&local_1d0);
  *(undefined8 *)param_1[0x81] = *(undefined8 *)(lVar4 + 0x1d0);
  *(long *)param_1[0x7f] = lVar4;
  return;
}

