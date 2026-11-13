
void FUN_011f0ae0(long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined *local_90;
  uint local_88;
  uint uStack_84;
  undefined *local_80;
  undefined *puStack_78;
  uint local_70;
  uint uStack_6c;
  undefined *local_68;
  uint local_60;
  uint uStack_5c;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar4 + 7);
  local_38 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb3238;
  local_90 = PTR_DAT_04bb2010;
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb6268 + 0x10;
  fVar5 = *(float *)(param_1 + 0x14) + -2.5;
  fVar6 = *(float *)(param_1 + 0x1c) + -2.5;
  puStack_78 = PTR_DAT_04bb2010 + 0x10;
  local_60 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  uStack_5c = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  local_70 = local_60 & 0xfffffffe;
  uStack_6c = uStack_5c & 0xfffffffe;
  local_80 = PTR_DAT_04bbc1a0 + 0x10;
  local_60 = local_60 | 1;
  uStack_5c = uStack_5c | 1;
  if ((*(int *)(param_1 + 8) != 1) && ((param_3 & 1) == 0)) {
    local_68 = puStack_78;
    local_58 = puStack_78;
    local_50 = local_70;
    uStack_4c = uStack_6c;
    FUN_011e56f0(&local_80,*(undefined4 *)PTR_DAT_04bb3238);
    FUN_011f3520(&local_48,0,&local_58);
    local_88 = local_50;
    uStack_84 = uStack_4c;
    local_90 = local_90 + 0x10;
    FUN_011e5580(&local_90,0,*(undefined4 *)puVar1);
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

