
/* WARNING: Removing unreachable block (ram,0x02bbe878) */

void FUN_02bbe830(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
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
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
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
    if ((param_2 & 1) == 0) {
      local_e0 = 0xffffffff00000004;
      (**(code **)(DAT_05644b78 + 0x18))(&DAT_05644b78);
      puVar1 = DAT_05644b80;
      if (local_bc != DAT_05644b80) {
        (**(code **)(DAT_05644b78 + 0x18))(&DAT_05644b78);
        lVar5 = 0;
        do {
          if (DAT_05644b80[lVar5] == '\0') goto LAB_02bbe98c;
          if (DAT_05644b80[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_02bbe98c;
          }
          if (DAT_05644b80[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_02bbe98c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_02bbe98c:
        iVar3 = (int)lVar5;
        if (local_c0 <= (int)lVar5) {
          iVar3 = local_c0 + -1;
        }
        memcpy(local_bc,puVar1,(long)iVar3);
        local_bc[iVar3] = 0;
      }
      FUN_02ee2b00(puVar6,&local_e0,1);
    }
    puVar1 = local_c8;
    lVar5 = *(long *)(*(long *)(param_1 + 0x1c2c8) + 0xa0);
    if (lVar5 != 0) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar5 + 0x14));
      (**(code **)(DAT_05644b88 + 0x18))(&DAT_05644b88);
      puVar2 = DAT_05644b90;
      if (puVar1 != DAT_05644b90) {
        (**(code **)(DAT_05644b88 + 0x18))(&DAT_05644b88);
        lVar5 = 0;
        do {
          if (DAT_05644b90[lVar5] == '\0') goto LAB_02bbea6c;
          if (DAT_05644b90[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_02bbea6c;
          }
          if (DAT_05644b90[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_02bbea6c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_02bbea6c:
        iVar3 = (int)lVar5;
        if (local_c0 <= (int)lVar5) {
          iVar3 = local_c0 + -1;
        }
        memcpy(puVar1,puVar2,(long)iVar3);
        puVar1[iVar3] = 0;
      }
      FUN_02ee2b00(puVar6,&local_e0,1);
    }
    if ((param_2 & 1) == 0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "/L_SortWin_00";
      lVar5 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_60);
      puVar1 = local_c8;
      if (lVar5 != 0) {
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar5 + 0x2cc));
        (**(code **)(DAT_05644b98 + 0x18))(&DAT_05644b98);
        puVar2 = DAT_05644ba0;
        if (puVar1 != DAT_05644ba0) {
          (**(code **)(DAT_05644b98 + 0x18))(&DAT_05644b98);
          lVar5 = 0;
          do {
            if (DAT_05644ba0[lVar5] == '\0') goto LAB_02bbeb6c;
            if (DAT_05644ba0[lVar5 + 1] == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_02bbeb6c;
            }
            if (DAT_05644ba0[lVar5 + 2] == '\0') {
              lVar5 = lVar5 + 2;
              goto LAB_02bbeb6c;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_02bbeb6c:
          iVar3 = (int)lVar5;
          if (local_c0 <= (int)lVar5) {
            iVar3 = local_c0 + -1;
          }
          memcpy(puVar1,puVar2,(long)iVar3);
          puVar1[iVar3] = 0;
        }
        FUN_02ee2b00(puVar6,&local_e0,1);
      }
    }
  }
  return;
}

