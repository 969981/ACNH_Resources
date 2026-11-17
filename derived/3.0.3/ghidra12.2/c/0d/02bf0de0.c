
void FUN_02bf0de0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  long *plStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
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
  undefined8 local_48;
  
  local_1b0 = 0;
  uStack_1a8 = 0;
  puStack_178 = local_16c;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_170 = 0x100;
  local_6d = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  local_16c[0] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_51 = 0;
  local_1c0 = PTR_DAT_04bc51c0 + 0x10;
  local_48 = 0;
  plStack_1b8 = param_2;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x410) + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x410);
    puVar6[2] = param_3;
    puVar6[3] = param_4;
    *puVar6 = &PTR_LAB_04aab4a8;
    puVar6[1] = param_2;
  }
  local_1b0 = *(undefined8 *)(param_1 + 0x410);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x418);
  local_1a0 = *(undefined8 *)(param_1 + 0x420);
  uStack_198 = *(undefined8 *)(param_1 + 0x428);
  local_190 = *(undefined8 *)(param_1 + 0x440);
  if ((*(uint *)(param_1 + 0x530) & 1) == 0) {
    uVar7 = local_68 & 0xfffffffe;
  }
  else {
    uVar7 = local_68 | 1;
  }
  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,1);
  uVar3 = *(uint *)(param_1 + 0x3f0);
  local_68 = uVar7 & 0xfffffffd;
  if ((*(uint *)(param_1 + 0x530) >> 1 & 1) != 0) {
    local_68 = uVar7 | 2;
  }
  if (0 < (int)uVar3) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uStack_1c8 = (**(code **)(*param_2 + 0x168))(param_2,uVar7);
      local_1d0 = puVar1;
      lVar5 = FUN_02bf1d10(&local_1c0,&local_1d0);
      uVar2 = uVar7;
      if (*(uint *)(param_1 + 0x400) <= uVar7) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x408) + (ulong)uVar2 * 8) =
           *(undefined8 *)(lVar5 + 0x1d0);
      uVar2 = uVar7;
      if (*(uint *)(param_1 + 0x3f0) <= uVar7) {
        uVar2 = 0;
      }
      uVar7 = uVar7 + 1;
      *(long *)(*(long *)(param_1 + 0x3f8) + (ulong)uVar2 * 8) = lVar5;
    } while (uVar3 != uVar7);
  }
  return;
}

