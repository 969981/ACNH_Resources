
uint FUN_01433994(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = &PTR_LAB_048fe480;
  uVar3 = FUN_014fd6bc(&local_48,*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    local_50 = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2c8);
    uStack_4c = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2cc);
    local_58 = PTR_DAT_04bb2010 + 0x10;
    uVar2 = FUN_0154df90(param_1 + 0x2c8);
    if (((uVar2 & 1) != 0) || ((param_2 & 1) != 0)) {
      FUN_014fd424(&local_48,uVar2 & param_2 & 1,&local_58,
                   *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
    }
  }
  return uVar2 & 1;
}

