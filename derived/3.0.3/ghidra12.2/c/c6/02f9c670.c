
/* WARNING: Removing unreachable block (ram,0x02f9c6b8) */

void FUN_02f9c670(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined *local_60;
  char *pcStack_58;
  
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar12 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc7278), (uVar7 & 1) != 0)) {
    local_7d = 0;
    local_c0 = 0x40;
    local_6c = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    uStack_d8 = 0xffffffffffffffff;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_bc[0] = 0;
    local_74 = 0;
    local_70 = 0;
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    local_c8 = local_bc;
    if (((param_2 & 1) == 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x578) + 0xa0), lVar8 != 0)) {
      local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar8 + 0x14));
      (**(code **)(DAT_056cb998 + 0x18))(&DAT_056cb998);
      puVar3 = DAT_056cb9a0;
      if (local_bc != DAT_056cb9a0) {
        (**(code **)(DAT_056cb998 + 0x18))(&DAT_056cb998);
        lVar8 = 0;
        do {
          if (DAT_056cb9a0[lVar8] == '\0') goto LAB_02f9c7dc;
          if (DAT_056cb9a0[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02f9c7dc;
          }
          if (DAT_056cb9a0[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02f9c7dc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02f9c7dc:
        iVar6 = (int)lVar8;
        if (local_c0 <= (int)lVar8) {
          iVar6 = local_c0 + -1;
        }
        memcpy(local_bc,puVar3,(long)iVar6);
        local_bc[iVar6] = 0;
      }
      FUN_02ee2b00(puVar12,&local_e0,1);
    }
    puVar3 = local_c8;
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
    if (lVar8 != 0) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar8 + 0x14));
      (**(code **)(DAT_056cb9a8 + 0x18))(&DAT_056cb9a8);
      puVar4 = DAT_056cb9b0;
      if (puVar3 != DAT_056cb9b0) {
        (**(code **)(DAT_056cb9a8 + 0x18))(&DAT_056cb9a8);
        lVar8 = 0;
        do {
          if (DAT_056cb9b0[lVar8] == '\0') goto LAB_02f9c8b0;
          if (DAT_056cb9b0[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02f9c8b0;
          }
          if (DAT_056cb9b0[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02f9c8b0;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02f9c8b0:
        iVar6 = (int)lVar8;
        if (local_c0 <= (int)lVar8) {
          iVar6 = local_c0 + -1;
        }
        memcpy(puVar3,puVar4,(long)iVar6);
        puVar3[iVar6] = 0;
      }
      FUN_02ee2b00(puVar12,&local_e0,1);
    }
    uVar2 = *(uint *)(param_1 + 0x298);
    bVar5 = false;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x280))) {
      uVar9 = uVar2 + 1;
      lVar8 = param_1 + 0x270;
      uVar1 = uVar9 & 3;
      lVar10 = lVar8;
      if (2 < uVar2) {
        uVar11 = uVar9 & 0xfffffffc;
        do {
          uVar11 = uVar11 - 4;
          lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 8) + 8);
        } while (uVar11 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar10 = *(long *)(lVar10 + 8);
      }
      if (((lVar10 != 0) && (lVar10 = lVar10 - *(int *)(param_1 + 0x284), lVar10 != 0)) &&
         (*(int *)(lVar10 + 0x270) == 0x1a)) {
        return;
      }
      uVar1 = uVar9 & 3;
      if (2 < uVar2) {
        uVar9 = uVar9 & 0xfffffffc;
        do {
          uVar9 = uVar9 - 4;
          lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
        } while (uVar9 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar8 = *(long *)(lVar8 + 8);
      }
      bVar5 = false;
      if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x284), lVar8 != 0)) {
        bVar5 = *(int *)(lVar8 + 0x270) == 0x1b;
      }
    }
    if ((!bVar5) && ((param_2 & 1) == 0)) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "/L_SortWin_00";
      lVar8 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_60);
      puVar3 = local_c8;
      if (lVar8 != 0) {
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar8 + 0x2cc));
        (**(code **)(DAT_056cb9b8 + 0x18))(&DAT_056cb9b8);
        puVar4 = DAT_056cb9c0;
        if (puVar3 != DAT_056cb9c0) {
          (**(code **)(DAT_056cb9b8 + 0x18))(&DAT_056cb9b8);
          lVar8 = 0;
          do {
            if (DAT_056cb9c0[lVar8] == '\0') goto LAB_02f9ca9c;
            if (DAT_056cb9c0[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_02f9ca9c;
            }
            if (DAT_056cb9c0[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_02f9ca9c;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_02f9ca9c:
          iVar6 = (int)lVar8;
          if (local_c0 <= (int)lVar8) {
            iVar6 = local_c0 + -1;
          }
          memcpy(puVar3,puVar4,(long)iVar6);
          puVar3[iVar6] = 0;
        }
        FUN_02ee2b00(puVar12,&local_e0,1);
      }
    }
  }
  return;
}

