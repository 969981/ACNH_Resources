
void FUN_0230b330(char *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 local_9c;
  undefined *local_98;
  long local_90;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar6 = PTR_DAT_04bb4718;
  if (*param_1 == '\0') {
    return;
  }
  pbVar1 = (byte *)(param_1 + 1);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar9 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar12 = puVar12 + *pbVar1;
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,0x37);
  if ((*(uint *)((long)puVar12 + 4) >> 0x17 & 1) == 0) {
    return;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "sincerity_towel";
  FUN_025ffac8(&local_98,&local_50,pbVar1);
  puVar8 = PTR_DAT_04bc3428;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_98 = PTR_DAT_04bc3428 + 0x10;
  local_58 = 0;
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
    FUN_025da3c0(&local_98);
  }
  puVar7 = PTR_DAT_04bb6298;
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  if (*pbVar1 < 8) {
    if (uVar3 != 0xffff) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,6);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
      if (0xff < uVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar2 >> 6 & 1) != 0) && (uVar10 = FUN_02915598(pbVar1), (uVar10 & 1) != 0))
      goto LAB_0230b4cc;
    }
  }
  else if (uVar3 != 0xffff) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,6);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) != 0) {
LAB_0230b4cc:
      local_9c = 0;
      goto LAB_0230b608;
    }
  }
  if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (sVar4 = *(short *)puVar7, sVar4 != -1)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x19);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) == 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,7);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 7 & 1) != 0) {
        local_9c = 1;
        goto LAB_0230b608;
      }
    }
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar9 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar12 + 7) == -0x3e092032) || (*(int *)(puVar12 + 7) == -0x7975b8e8)) {
    local_9c = 2;
  }
  else {
    uVar10 = FUN_016cf9f0();
    if ((((uVar10 & 1) == 0) || (*(long *)PTR_DAT_04bb4938 == 0)) ||
       (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) == 0)) {
      uVar10 = FUN_016e6da8(pbVar1);
      if ((uVar10 & 1) == 0) {
        local_9c = 3;
      }
      else {
        local_9c = 5;
      }
    }
    else {
      local_9c = 4;
    }
  }
LAB_0230b608:
  FUN_02602950(&local_98,0x72);
  local_50 = puVar5 + 0x10;
  pcStack_48 = "Place";
  if (local_90 != 0) {
    FUN_02605660(local_90,&local_50,local_9c);
  }
  FUN_025da664(&local_98);
  FUN_025dab50(&local_98);
  if (*(long *)puVar6 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar9 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(*(long *)puVar6 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar12 = puVar12 + *pbVar1;
    }
  }
  local_50._0_4_ = 0x37;
  *(uint *)((long)puVar12 + 4) = *(uint *)((long)puVar12 + 4) & 0xff7fffff;
  local_98 = puVar8 + 0x10;
  iVar9 = FUN_025db060(&local_98);
  if (((iVar9 == -1) ||
      (local_50._0_4_ = (**(code **)(local_98 + 0x20))(&local_98), 0xc < (int)local_50)) &&
     (local_74 == 0)) {
    local_74 = 1;
  }
  FUN_02601530(&local_98);
  return;
}

