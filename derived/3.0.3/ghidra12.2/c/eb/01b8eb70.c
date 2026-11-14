
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8eb70(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_834;
  uint local_828;
  uint local_824;
  uint uStack_820;
  uint local_81c;
  uint uStack_818;
  int local_814;
  undefined *local_810;
  undefined1 auStack_808 [1876];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  undefined1 auStack_a0 [64];
  
  local_810 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_808,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_b4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_b0 = (local_b4 ^ local_b4 >> 0x1e) * 0x6c078965 + 2;
  local_ac = (local_b0 ^ local_b0 >> 0x1e) * 0x6c078965 + 3;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_810);
  memset(__s,0,0x754);
  local_814 = 0;
  uVar14 = (param_5 ^ param_5 >> 0x1e) * 0x6c078965 + 1;
  uVar12 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar5 = *puVar7 ^ *puVar7 << 0xb;
  uVar6 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar13 = uVar5 ^ uVar6;
  uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar13;
  uVar14 = uVar14 ^ uVar14 * 0x800;
  puVar7[2] = uVar6;
  puVar7[3] = uVar5;
  uVar13 = (uVar5 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar14 >> 8 ^ uVar2 >> 0x13 ^ uVar14 ^ uVar2;
  local_834 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
  uVar14 = (local_834 ^ local_834 >> 0x1e) * 0x6c078965 + 3;
  local_828 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
  local_824 = uVar13;
  uStack_820 = local_834;
  local_81c = uVar14;
  uStack_818 = local_828;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar8 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_4), lVar8 == 0)) {
    uVar12 = uVar12 ^ uVar12 * 0x800;
    lVar10 = (**(code **)(local_810 + 0x20))(&local_810);
    uVar3 = DAT_0558600c;
    lVar8 = 0;
    iVar11 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar8);
      lVar8 = lVar8 + 4;
      uVar1 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      iVar11 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + iVar11;
    } while (lVar8 != 0x754);
    if (iVar11 == 0) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar3;
    }
    else {
      uVar5 = uVar12 >> 8 ^ uVar5 >> 0x13 ^ uVar12 ^ uVar5;
      if (uVar5 != 0) {
        uVar13 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        local_834 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (local_834 ^ local_834 >> 0x1e) * 0x6c078965 + 3;
        local_828 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
        local_824 = uVar13;
        uStack_820 = local_834;
        local_81c = uVar14;
        uStack_818 = local_828;
      }
      lVar10 = (**(code **)(local_810 + 0x20))(&local_810);
      lVar8 = 0;
      uVar5 = 0;
      do {
        puVar7 = (uint *)(lVar10 + lVar8);
        lVar8 = lVar8 + 4;
        uVar12 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar5 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar5;
      } while (lVar8 != 0x754);
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uStack_818 = uVar13 >> 8 ^ local_828 >> 0x13 ^ uVar13 ^ local_828;
      local_81c = local_828;
      local_824 = local_834;
      uStack_820 = uVar14;
      FUN_00889f80(param_1,&local_810,(int)((ulong)uStack_818 * (ulong)uVar5 >> 0x20) + 1);
      FUN_01a4c66c(&local_824,param_1);
    }
  }
  else {
    if ((*(long **)(lVar8 + 0x17bb0) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    FUN_006d8678(auStack_a0,"1%02d",param_3);
    FUN_01b8e370(&local_810,&local_814,param_2,auStack_a0,
                 *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90),uVar5);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    iVar4 = local_814;
    uVar12 = uVar12 ^ uVar12 * 0x800;
    lVar10 = (**(code **)(local_810 + 0x20))(&local_810);
    uVar3 = DAT_0558600c;
    lVar8 = 0;
    iVar11 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar8);
      lVar8 = lVar8 + 4;
      uVar6 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar11 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar11;
    } while (lVar8 != 0x754);
    uVar5 = uVar12 >> 8 ^ uVar5 >> 0x13 ^ uVar12 ^ uVar5;
    if (iVar11 == 0) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar3;
    }
    else {
      if (uVar5 != 0) {
        uVar13 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        local_834 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (local_834 ^ local_834 >> 0x1e) * 0x6c078965 + 3;
        local_828 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
        local_824 = uVar13;
        uStack_820 = local_834;
        local_81c = uVar14;
        uStack_818 = local_828;
      }
      lVar10 = (**(code **)(local_810 + 0x20))(&local_810);
      lVar8 = 0;
      uVar12 = 0;
      do {
        puVar7 = (uint *)(lVar10 + lVar8);
        lVar8 = lVar8 + 4;
        uVar6 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        uVar12 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar12;
      } while (lVar8 != 0x754);
      uVar13 = uVar13 ^ uVar13 << 0xb;
      local_824 = local_834;
      uStack_818 = uVar13 >> 8 ^ local_828 >> 0x13 ^ uVar13 ^ local_828;
      local_81c = local_828;
      uStack_820 = uVar14;
      FUN_00889f80(param_1,&local_810,(int)((ulong)uStack_818 * (ulong)uVar12 >> 0x20) + 1);
      FUN_01a4c66c(&local_824,param_1);
    }
    if (iVar4 == 1) {
      uVar1 = uVar1 ^ uVar1 * 0x800;
      FUN_01a4d6e0(&local_824,param_1,uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5,PTR_FUN_04bb67e0,0)
      ;
    }
  }
  return;
}

