
undefined8 FUN_022ba528(long param_1,long param_2,undefined1 *param_3,float *param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 local_88;
  undefined4 local_84;
  short local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined8 *local_60;
  uint local_58;
  uint local_54;
  
  if ((param_4 == (float *)0x0) &&
     (param_4 = (float *)FUN_0251b3b0(param_1 + 0x10,0), param_4 == (float *)0x0)) {
    return 0;
  }
  if (param_5 == (int *)0x0) {
    lVar2 = FUN_0251bdc4(param_1 + 0x10,0);
    if (lVar2 == 0) {
      return 0;
    }
    param_5 = (int *)(lVar2 + 4);
  }
  uVar4 = (int)((float)(int)*param_4 / 5.0) - (uint)(*param_4 < 0.0);
  uVar5 = (int)((float)(int)param_4[2] / 5.0) - (uint)(param_4[2] < 0.0);
  uVar7 = uVar4 & 0xfffffffe;
  uVar6 = uVar5 & 0xfffffffe;
  uVar4 = uVar4 | 1;
  uVar5 = uVar5 | 1;
  local_58 = uVar7;
  local_54 = uVar6;
  switch(*param_5 + 0x20000000U >> 0x1e) {
  case 0:
    local_70 = 0;
    local_60 = &DAT_048f9750;
    if (DAT_05aed670 == 0) {
      puVar8 = &DAT_055c04a0;
      local_58 = uVar4;
      local_54 = uVar5;
    }
    else {
      puVar8 = &DAT_055c04a0;
      local_58 = uVar4;
      local_54 = uVar5;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar8 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_80,&local_78,0,&local_60,0);
    if ((local_80 != -2) && (local_88 = FUN_0277ebd0(&local_80), local_88 != 0)) {
      return 0;
    }
    local_58 = local_58 - 1;
    FUN_01a5033c(&local_88,&local_78,0,&local_60,0);
    local_7e = local_88._2_2_;
    local_80 = (short)local_88;
    local_7c = local_84;
    if (((short)local_88 != -2) && (iVar1 = FUN_0277ebd0(&local_80), iVar1 != 0)) {
      return 0;
    }
    uVar6 = uVar6 + 2;
    uVar5 = uVar5 + 2;
    break;
  case 1:
    local_70 = 0;
    local_60 = &DAT_048f9750;
    if (DAT_05aed670 == 0) {
      puVar8 = &DAT_055c04a0;
      local_58 = uVar4;
      local_54 = uVar5;
    }
    else {
      puVar8 = &DAT_055c04a0;
      local_58 = uVar4;
      local_54 = uVar5;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar8 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_80,&local_78,0,&local_60,0);
    if ((local_80 != -2) && (local_88 = FUN_0277ebd0(&local_80), local_88 != 0)) {
      return 0;
    }
    local_54 = local_54 - 1;
    FUN_01a5033c(&local_88,&local_78,0,&local_60,0);
    local_7e = local_88._2_2_;
    local_80 = (short)local_88;
    local_7c = local_84;
    if (((short)local_88 != -2) && (iVar1 = FUN_0277ebd0(&local_80), iVar1 != 0)) {
      return 0;
    }
    uVar7 = uVar7 + 2;
    uVar4 = uVar4 + 2;
    goto joined_r0x022bab48;
  case 2:
    local_70 = 0;
    local_60 = &DAT_048f9750;
    if (DAT_05aed670 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar8 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_80,&local_78,0,&local_60,0);
    if ((local_80 != -2) && (local_88 = FUN_0277ebd0(&local_80), local_88 != 0)) {
      return 0;
    }
    local_58 = local_58 + 1;
    FUN_01a5033c(&local_88,&local_78,0,&local_60,0);
    local_7e = local_88._2_2_;
    local_80 = (short)local_88;
    local_7c = local_84;
    if (((short)local_88 != -2) && (iVar1 = FUN_0277ebd0(&local_80), iVar1 != 0)) {
      return 0;
    }
    uVar6 = uVar6 - 2;
    uVar5 = uVar5 - 2;
    break;
  case 3:
    local_70 = 0;
    local_60 = &DAT_048f9750;
    if (DAT_05aed670 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar8 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_80,&local_78,0,&local_60,0);
    if ((local_80 != -2) && (local_88 = FUN_0277ebd0(&local_80), local_88 != 0)) {
      return 0;
    }
    local_54 = local_54 + 1;
    FUN_01a5033c(&local_88,&local_78,0,&local_60,0);
    local_7e = local_88._2_2_;
    local_80 = (short)local_88;
    local_7c = local_84;
    if (((short)local_88 != -2) && (iVar1 = FUN_0277ebd0(&local_80), iVar1 != 0)) {
      return 0;
    }
    uVar7 = uVar7 - 2;
    uVar4 = uVar4 - 2;
joined_r0x022bab48:
    if (param_3 == (undefined1 *)0x0) goto switchD_022ba610_default;
    uVar3 = 0;
    goto LAB_022bab50;
  default:
    goto switchD_022ba610_default;
  }
  if (param_3 != (undefined1 *)0x0) {
    uVar3 = 1;
LAB_022bab50:
    *param_3 = uVar3;
  }
switchD_022ba610_default:
  *(uint *)(param_2 + 0x10) = uVar7;
  *(uint *)(param_2 + 0x14) = uVar6;
  *(uint *)(param_2 + 0x20) = uVar4;
  *(uint *)(param_2 + 0x24) = uVar5;
  return 1;
}

