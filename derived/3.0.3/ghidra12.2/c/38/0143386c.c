
void FUN_0143386c(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  cVar1 = *(char *)(param_1 + 0x308);
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar6 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = &PTR_LAB_048fe480;
  uVar4 = FUN_014fd6bc(&local_48,*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
  if ((uVar4 & 1) != 0) {
    local_50 = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2c8);
    uStack_4c = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2cc);
    local_58 = PTR_DAT_04bb2010 + 0x10;
    bVar2 = FUN_0154df90(param_1 + 0x2c8);
    if ((cVar1 != '\0') || ((bVar2 & 1) != 0)) {
      FUN_014fd424(&local_48,cVar1 != '\0' & bVar2,&local_58,
                   *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
    }
  }
  return;
}

