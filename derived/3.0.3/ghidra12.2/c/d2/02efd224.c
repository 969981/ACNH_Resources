
/* WARNING: Removing unreachable block (ram,0x02efd42c) */

void FUN_02efd224(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined *local_40;
  char *pcStack_38;
  byte local_18 [4];
  undefined4 local_14;
  
  iVar2 = *param_2;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar2);
  if (iVar2 < 0x6e) {
    if (iVar2 - 0x24U < 0x38 && (1L << ((ulong)(iVar2 - 0x24U) & 0x3f) & 0x80000200000001U) != 0)
    goto LAB_02efd324;
  }
  else if (((iVar2 - 0x6eU < 0x25 && (1L << ((ulong)(iVar2 - 0x6eU) & 0x3f) & 0x100000000fU) != 0)
           || (iVar2 == 0xef)) || (iVar2 == 0xdb)) {
LAB_02efd324:
    if (*(int *)(param_1 + 0xeb0) != 0) {
      return;
    }
    if (iVar2 == 0x45) {
      plVar5 = *(long **)PTR_DAT_04bb48c8;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "InteriorModeTime";
      if ((char)plVar5[1] == '\0') {
        lVar4 = nn::oe::GetProgramTotalActiveTime();
        *plVar5 = lVar4;
        *(undefined1 *)(plVar5 + 1) = 1;
      }
      else {
        lVar4 = *plVar5;
      }
      auVar1 = SEXT816(lVar4 - *(long *)(param_1 + 0xf00)) * SEXT816(0x12533fe68fd3d1d);
      local_18[0] = *(byte *)(param_2 + 1);
      if (7 < local_18[0]) {
        local_18[0] = 0xff;
      }
      local_14 = FUN_02582fe0(local_18);
      FUN_021294b0(&local_40,(int)(auVar1._8_8_ >> 0x1c) - (auVar1._12_4_ >> 0x1f),&local_14);
    }
    param_2[3] = 4;
    uVar3 = (ulong)*(byte *)(param_1 + 0x200);
    if (*(int *)(param_1 + 0x1f0 + uVar3 * 4) != -1) {
      return;
    }
    uVar8 = 5;
    goto LAB_02efd3f0;
  }
  if (iVar2 == 0) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
    plVar5 = *(long **)(*(long *)PTR_DAT_04bb2230 + 0x88);
    if (((*PTR_DAT_04bc8628 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8628), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc8620 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc8628);
    }
    if (plVar5 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)*plVar5;
    puVar6 = PTR_DAT_04bc8620;
LAB_02efd49c:
    uVar3 = (*pcVar7)(plVar5,puVar6);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((char)param_2[4] != '\0') &&
       (uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar5 + 0xb0))(plVar5);
      *(undefined1 *)(param_2 + 4) = 0;
    }
    if (*(char *)((long)plVar5 + 0x201) != '\0') {
      if (param_2[2] == -1) {
        FUN_02ef97bc(param_1,param_2 + 1,*param_2);
        return;
      }
      return;
    }
    uVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5);
    if ((uVar3 & 1) == 0) {
      return;
    }
    param_2[3] = 3;
  }
  else {
    if (iVar2 != 10) {
      plVar5 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),iVar2,
                                    param_2 + 1);
      if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7c40);
      }
      if (plVar5 == (long *)0x0) {
        return;
      }
      pcVar7 = *(code **)*plVar5;
      puVar6 = PTR_DAT_04bb7c38;
      goto LAB_02efd49c;
    }
    if (*(int *)(param_1 + 0x448) != 0) {
      return;
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,3);
    uVar3 = FUN_0290cbcc(&local_40);
    if ((uVar3 & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "UseSmartphoneFieldTime";
      lVar4 = FUN_00811d20(param_1 + 0xf00);
      FUN_0212944c(&local_40,
                   (int)(SUB168(SEXT816(lVar4) * ZEXT816(0x8888888888888889),8) >> 5) -
                   (SUB164(SEXT816(lVar4) * ZEXT816(0x8888888888888889),0xc) >> 0x1f),param_2 + 1);
    }
    param_2[3] = 3;
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0x200);
  if (*(int *)(param_1 + 0x1f0 + uVar3 * 4) != -1) {
    return;
  }
  uVar8 = 2;
LAB_02efd3f0:
  *(undefined4 *)(param_1 + 0x1f0 + uVar3 * 4) = uVar8;
  return;
}

