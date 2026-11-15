
undefined8 FUN_024efb20(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined8 *puVar5;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined *local_58;
  int local_50;
  int local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar5 + 7);
  local_38 = FUN_017baf44();
  local_68 = param_1 + 8;
  local_60 = param_1 + 0x18;
  local_38 = local_38 & 1;
  iVar1 = *(int *)(param_1 + 0x10);
  local_4c = *(int *)(param_1 + 0x14);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = *(int *)(param_1 + 0x24) + 1;
  if (iVar2 != local_4c) {
    local_50 = iVar1;
    do {
      psVar4 = (short *)FUN_01a5190c(&local_48,0,&local_58,0);
      local_6e = psVar4[1];
      local_70 = *psVar4;
      local_6c = *(undefined4 *)(psVar4 + 2);
      if ((local_70 != -2) && (iVar3 = FUN_0277d6c4(&local_70), iVar3 == 0xa12)) {
        return 1;
      }
      if (local_50 < *(int *)(local_60 + 8)) {
        local_50 = local_50 + 1;
      }
      else {
        local_4c = local_4c + 1;
        local_50 = *(int *)(local_68 + 8);
      }
    } while ((iVar1 != local_50) || (iVar2 != local_4c));
  }
  return 0;
}

