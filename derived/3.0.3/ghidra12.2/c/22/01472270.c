
void FUN_01472270(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  local_88 = PTR_DAT_04bbd460 + 0x10;
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_80 = local_68;
  uStack_70 = 0;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_88,param_2,param_3,param_4);
  local_98 = 0;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar5 + 7);
  local_90 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb3140;
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a50cb0(&local_a0,*(undefined4 *)(param_1 + 0x2d0),&local_78);
  uVar4 = FUN_014fd6bc(&local_a0,*(undefined4 *)(param_1 + 0x2d0));
  if ((uVar4 & 1) != 0) {
    FUN_014fd424(&local_a0,0,&local_78,*(undefined4 *)(param_1 + 0x2d0));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  local_60 = 0;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar5 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = puVar2 + 0x10;
  uVar4 = FUN_014fe6fc(&local_68,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_014ff084(&local_68,&local_78,uVar1);
    FUN_014ff6a8(&local_68,&local_78,uVar1);
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x2d0));
  FUN_01490890(0,&local_80,&local_78,&local_68);
  return;
}

