
/* WARNING: Removing unreachable block (ram,0x01485c6c) */

void FUN_014858d0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 local_68;
  char *local_60;
  long local_58;
  int local_34;
  
  plVar10 = *(long **)(param_1 + 0x48);
  if ((int)plVar10[0x46] == 0) {
LAB_01485b04:
    local_68 = (undefined *)0x7f7fffff7f7fffff;
    local_60 = (char *)0xff7fffff7f7fffff;
    local_58 = 0xff7fffffff7fffff;
    FUN_039aa0a0(*(undefined8 *)(param_1 + 0x1150),&local_68,0);
    plVar10 = (long *)0x0;
    bVar8 = true;
    local_58._0_4_ = (float)local_58 - local_68._4_4_;
  }
  else {
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    if ((uVar7 & 1) == 0) goto LAB_01485b04;
    plVar1 = plVar10 + 0x51;
    iVar4 = FUN_0277d6c4(plVar1);
    puVar3 = PTR_DAT_04bb43c0;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(plVar1);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01485a48;
      local_58 = 0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = (char *)plVar10[0x51];
      uVar5 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(plVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
            local_58 = lVar11;
          }
        }
      }
      local_34 = 0xe;
      iVar6 = FUN_01ae7550(&local_68);
      if (iVar6 != local_34) goto LAB_01485a48;
LAB_01485cb4:
      uVar5 = *(uint *)(param_1 + 0x1418) | 8;
LAB_01485afc:
      *(uint *)(param_1 + 0x1418) = uVar5;
      goto LAB_01485bf0;
    }
LAB_01485a48:
    if ((((int)plVar10[0x5a] - 2U < 4) && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
       (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 6)) {
      FUN_0252d11c(&local_34);
      local_68 = PTR_DAT_04bb2020 + 0x10;
      local_60 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
      iVar6 = FUN_02753180(&local_34,&local_68);
      if (iVar6 == 0) goto LAB_01485cb4;
    }
    if (((iVar4 == 0x4fb) || (iVar4 == 0x351e)) || (iVar4 == 0x3349)) {
      uVar5 = *(uint *)(param_1 + 0x1418) & 0xfffffff7;
      goto LAB_01485afc;
    }
    local_58._0_4_ = (float)FUN_01472ee0(plVar10);
    bVar8 = false;
  }
  puVar2 = (uint *)(param_1 + 0x1418);
  if ((float)local_58 <= 15.0) {
    uVar5 = *puVar2 & 0xfffffff7;
  }
  else {
    uVar5 = *puVar2 | 8;
  }
  *puVar2 = uVar5;
  if ((!bVar8) && ((int)plVar10[0x5a] == 1)) {
    *puVar2 = *puVar2 | 8;
  }
LAB_01485bf0:
  if ((*(uint *)(param_1 + 0x1418) >> 3 & 1) == 0) {
    uVar9 = 0;
    uVar5 = *(uint *)(param_1 + 0x11a0) & 0xfffffff7;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x11a0) & 0xfffffff7;
    if ((*(uint *)(param_1 + 0x1418) >> 4 & 1) == 0) {
      uVar9 = 8;
    }
    else {
      uVar9 = 0;
    }
  }
  *(uint *)(param_1 + 0x11a0) = uVar9 | uVar5;
  return;
}

