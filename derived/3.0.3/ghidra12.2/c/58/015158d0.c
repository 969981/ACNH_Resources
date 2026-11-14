
undefined8 FUN_015158d0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined **local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined **local_48;
  
  local_80 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar6 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = &PTR_LAB_048fe480;
  local_48 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_48);
  iVar1 = *(int *)(param_1 + 0x10);
  local_8c = *(int *)(param_1 + 0x14);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = *(int *)(param_1 + 0x24) + 1;
  local_90 = iVar1;
  if ((param_2 & 1) == 0) {
    if (iVar2 == local_8c) {
      return 1;
    }
    do {
      FUN_01a5033c(&local_70,&local_88,0,&local_98,0);
      local_48 = local_70;
      local_68 = (undefined2)local_70;
      local_66 = local_70._2_1_;
      local_65 = local_70._3_1_;
      local_64 = local_70._4_4_;
      local_70 = &PTR_LAB_04a88288;
      iVar3 = FUN_0277d6c4(&local_68);
      if (iVar3 - 0xf619U < 7) {
        return 0;
      }
      iVar3 = FUN_0277d6c4(&local_48);
      if (iVar3 != 0xea79) {
        iVar3 = FUN_0277ebd0(&local_48);
        local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar3);
        if (iVar3 != 0) {
          return 0;
        }
      }
      if (local_90 < *(int *)(param_1 + 0x20)) {
        local_90 = local_90 + 1;
      }
      else {
        local_8c = local_8c + 1;
        local_90 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar1 != local_90) || (iVar2 != local_8c));
  }
  else {
    if (iVar2 == local_8c) goto LAB_01515bc0;
    do {
      FUN_01a5033c(&local_70,&local_88,0,&local_98,0);
      local_48 = local_70;
      local_68 = (undefined2)local_70;
      local_66 = local_70._2_1_;
      local_65 = local_70._3_1_;
      local_64 = local_70._4_4_;
      local_70 = &PTR_LAB_04a88288;
      iVar3 = FUN_0277d6c4(&local_68);
      if (iVar3 - 0xf619U < 7) {
        return 0;
      }
      iVar3 = FUN_0277d6c4(&local_48);
      if (iVar3 == 0xea79) {
        return 0;
      }
      iVar3 = FUN_0277ebd0(&local_48);
      local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar3);
      if (iVar3 != 0) {
        return 0;
      }
      if (local_90 < *(int *)(param_1 + 0x20)) {
        local_90 = local_90 + 1;
      }
      else {
        local_8c = local_8c + 1;
        local_90 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar1 != local_90) || (iVar2 != local_8c));
  }
  if ((param_2 & 1) == 0) {
    return 1;
  }
LAB_01515bc0:
  uVar4 = FUN_01519e00(param_1);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}

