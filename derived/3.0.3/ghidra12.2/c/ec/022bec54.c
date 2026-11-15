
uint FUN_022bec54(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_90;
  undefined *puStack_88;
  uint local_80;
  uint uStack_7c;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  uint local_48;
  uint local_44;
  
  local_48 = *(uint *)(param_2 + 8);
  local_44 = *(uint *)(param_2 + 0xc);
  local_50 = PTR_DAT_04bbbad8 + 0x10;
  if ((local_48 & 1) != 0) {
    local_48 = local_48 - 1;
  }
  uVar3 = local_48;
  if ((local_44 & 1) != 0) {
    local_44 = local_44 - 1;
  }
  uVar1 = local_44;
  local_60 = 0;
  if (DAT_05aed670 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar4 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb6268 + 0x10;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_70 = uVar3 + 1;
  iStack_6c = uVar1 + 1;
  local_80 = uVar3;
  uStack_7c = uVar1;
  local_78 = puStack_88;
  uVar3 = FUN_011f3270(&local_68,0,&local_90);
  if ((uVar3 & 1) != 0) {
    FUN_011f3880(&local_68,0,param_1,&local_50);
    FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_50,~param_3 & 1);
  }
  return uVar3 & 1;
}

