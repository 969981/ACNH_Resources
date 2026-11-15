
void FUN_02108098(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  char *__src;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *local_60;
  int local_58;
  char local_54 [31];
  undefined1 local_35;
  
  local_35 = 0;
  local_58 = 0x20;
  local_60 = local_54;
  local_54[0] = '\0';
  local_68 = PTR_DAT_04bb2028 + 0x10;
  if (*param_1 == 1) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "bey";
    uVar6 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_78,PTR_DAT_04bb3238,1);
    if (local_60 != "BLN_bey_FishFesStart_001") {
      __src = "BLN_bey_FishFesStart_001";
      bVar4 = SBORROW4(local_58,0x18);
      iVar7 = local_58 + -0x18;
      bVar5 = local_58 == 0x18;
      iVar10 = 0x18;
      goto LAB_021081b8;
    }
  }
  else {
    if (*param_1 != 0) {
      return;
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "chy";
    uVar6 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_78,PTR_DAT_04bb3238,1);
    if (local_60 != "BLN_Chy_InsectFesStart_001") {
      __src = "BLN_Chy_InsectFesStart_001";
      bVar4 = SBORROW4(local_58,0x1a);
      iVar7 = local_58 + -0x1a;
      bVar5 = local_58 == 0x1a;
      iVar10 = 0x1a;
LAB_021081b8:
      pcVar3 = local_60;
      if (bVar5 || iVar7 < 0 != bVar4) {
        iVar10 = local_58 + -1;
      }
      memcpy(local_60,__src,(long)iVar10);
      pcVar3[iVar10] = '\0';
    }
  }
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar6 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8);
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar6)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar1;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar6 = 1;
      goto joined_r0x02108284;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02108284;
    }
  }
  uVar6 = 0;
joined_r0x02108284:
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    uVar2 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((((int)lVar11 == 1) && ((uVar8 & uVar6) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "BLN_GEvent_FishInsectFes";
      puStack_80 = &DAT_0407ebb1;
      local_88 = puVar1;
      local_78 = puVar1;
      FUN_02051bb0(plVar12 + 0xa8,2,&local_78,&local_68,&local_88);
      *(undefined4 *)((long)plVar12 + 0x58c) = 0x28;
      pcStack_70 = "FesEnterBalloon";
      local_78 = puVar1;
      FUN_02743234(&local_78,1);
    }
  }
  return;
}

