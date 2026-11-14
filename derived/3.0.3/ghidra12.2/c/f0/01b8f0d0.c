
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8f0d0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *__s;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint local_84c;
  uint local_83c;
  uint local_838;
  uint local_834;
  uint uStack_830;
  uint local_82c;
  uint uStack_828;
  int local_824;
  undefined *local_820;
  undefined1 auStack_818 [1876];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  undefined **local_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [64];
  
  local_820 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_818,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_c4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 2;
  local_bc = (local_c0 ^ local_c0 >> 0x1e) * 0x6c078965 + 3;
  local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_820);
  memset(__s,0,0x754);
  local_824 = 0;
  uVar8 = (param_5 ^ param_5 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar1 = puVar9[3];
  uVar7 = *puVar9 ^ *puVar9 << 0xb;
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar14 = uVar7 ^ uVar1;
  uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar14;
  puVar9[2] = uVar1;
  puVar9[3] = uVar7;
  uVar8 = uVar8 ^ uVar8 * 0x800;
  uVar7 = (uVar7 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_84c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  local_838 = (local_84c ^ local_84c >> 0x1e) * 0x6c078965 + 3;
  local_83c = (local_838 ^ local_838 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 < 0x2a) {
    puStack_a8 = (undefined8 *)(&PTR_s_Package_04957b70)[param_2];
  }
  else {
    puStack_a8 = &DAT_0407ebb1;
  }
  uVar14 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
  local_b0 = &PTR_LAB_048f9770;
  local_834 = uVar7;
  uStack_830 = local_84c;
  local_82c = local_838;
  uStack_828 = local_83c;
  if ((DAT_05574040 == 0) || (lVar10 = FUN_026eec4c(DAT_05574040,param_4), lVar10 == 0)) {
    uVar2 = uVar2 ^ uVar2 * 0x800;
    lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
    uVar5 = DAT_0558600c;
    lVar10 = 0;
    iVar13 = 0;
    do {
      puVar9 = (uint *)(lVar12 + lVar10);
      lVar10 = lVar10 + 4;
      uVar8 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar13 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar13;
    } while (lVar10 != 0x754);
    if (iVar13 == 0) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar5;
    }
    else {
      uVar14 = uVar2 >> 8 ^ uVar14 >> 0x13 ^ uVar2 ^ uVar14;
      if (uVar14 != 0) {
        uVar7 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
        local_84c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
        local_838 = (local_84c ^ local_84c >> 0x1e) * 0x6c078965 + 3;
        local_83c = (local_838 ^ local_838 >> 0x1e) * 0x6c078965 + 4;
        local_834 = uVar7;
        uStack_830 = local_84c;
        local_82c = local_838;
        uStack_828 = local_83c;
      }
      lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
      lVar10 = 0;
      uVar14 = 0;
      do {
        puVar9 = (uint *)(lVar12 + lVar10);
        lVar10 = lVar10 + 4;
        uVar8 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        uVar14 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + uVar14;
      } while (lVar10 != 0x754);
      uVar7 = uVar7 ^ uVar7 << 0xb;
      uStack_830 = local_838;
      uStack_828 = uVar7 >> 8 ^ local_83c >> 0x13 ^ uVar7 ^ local_83c;
      local_82c = local_83c;
      local_834 = local_84c;
      FUN_00889f80(param_1,&local_820,(int)((ulong)uStack_828 * (ulong)uVar14 >> 0x20) + 1);
      FUN_01a4c66c(&local_834,param_1);
    }
  }
  else {
    if ((*(long **)(lVar10 + 0x17bb0) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17bb0), puVar11 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar11)();
      uVar8 = uVar8 ^ 1;
    }
    FUN_006d8678(auStack_a0,"1%02d",param_3);
    FUN_01b8e370(&local_820,&local_824,&local_b0,auStack_a0,
                 *(long *)(lVar10 + 0x17b98) + *(long *)(lVar10 + 0x17b90),uVar14);
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0x17bb0) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    iVar6 = local_824;
    uVar2 = uVar2 ^ uVar2 * 0x800;
    lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
    uVar5 = DAT_0558600c;
    lVar10 = 0;
    iVar13 = 0;
    do {
      puVar9 = (uint *)(lVar12 + lVar10);
      lVar10 = lVar10 + 4;
      uVar8 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar13 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar13;
    } while (lVar10 != 0x754);
    uVar14 = uVar2 >> 8 ^ uVar14 >> 0x13 ^ uVar2 ^ uVar14;
    if (iVar13 == 0) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar5;
    }
    else {
      if (uVar14 != 0) {
        uVar7 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
        local_84c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
        local_838 = (local_84c ^ local_84c >> 0x1e) * 0x6c078965 + 3;
        local_83c = (local_838 ^ local_838 >> 0x1e) * 0x6c078965 + 4;
        local_834 = uVar7;
        uStack_830 = local_84c;
        local_82c = local_838;
        uStack_828 = local_83c;
      }
      lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
      lVar10 = 0;
      uVar8 = 0;
      do {
        puVar9 = (uint *)(lVar12 + lVar10);
        lVar10 = lVar10 + 4;
        uVar2 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar8 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar8;
      } while (lVar10 != 0x754);
      uVar7 = uVar7 ^ uVar7 << 0xb;
      local_834 = local_84c;
      uStack_830 = local_838;
      uStack_828 = uVar7 >> 8 ^ local_83c >> 0x13 ^ uVar7 ^ local_83c;
      local_82c = local_83c;
      FUN_00889f80(param_1,&local_820,(int)((ulong)uStack_828 * (ulong)uVar8 >> 0x20) + 1);
      FUN_01a4c66c(&local_834,param_1);
    }
    if (iVar6 == 1) {
      uVar3 = uVar3 ^ uVar3 * 0x800;
      FUN_01a4d6e0(&local_834,param_1,uVar3 >> 8 ^ uVar14 >> 0x13 ^ uVar3 ^ uVar14,PTR_FUN_04bb67e0,
                   0);
    }
  }
  return;
}

