
/* WARNING: Removing unreachable block (ram,0x0152d498) */
/* WARNING: Removing unreachable block (ram,0x0152d4c0) */

void FUN_0152cf90(long param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  char *pcVar10;
  long lVar11;
  undefined *local_148;
  void *local_140;
  undefined8 local_138;
  undefined1 local_b5;
  undefined *local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  uint local_60;
  undefined4 uStack_5c;
  void *local_58;
  
  if (((DAT_0520f398 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0520f398), iVar8 != 0)) {
    DAT_0520f388 = PTR_DAT_04bb2020 + 0x10;
    DAT_0520f390 = "FtrHaniwaStandWall";
    __cxa_guard_release(&DAT_0520f398);
  }
  if (((DAT_0520f3b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0520f3b0), iVar8 != 0)) {
    DAT_0520f3a0 = PTR_DAT_04bb2020 + 0x10;
    DAT_0520f3a8 = "StandHaniwa";
    __cxa_guard_release(&DAT_0520f3b0);
  }
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = *(undefined2 *)(param_1 + 0x129c);
  local_68 = 0;
  bVar2 = *(byte *)(param_1 + 0x129e);
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_6d = *(undefined1 *)(param_1 + 0x129f);
  local_6c = *(undefined4 *)(param_1 + 0x12a0);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_6e = bVar2;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_1 + 0x129c);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0)) {
        local_68 = lVar11;
      }
    }
  }
  if ((bVar2 >> 3 & 1) == 0) {
    local_148 = puVar4 + 0x10;
    local_140 = *(void **)(param_1 + 0x129c);
    local_138 = 0;
    lVar11 = *(long *)puVar3;
    uVar7 = FUN_0277d6c4(&local_140);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_1 + 0x129c);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0)) {
          local_138 = lVar11;
        }
      }
    }
    FUN_01adf970(&local_60,&local_148);
    pvVar9 = *(void **)(param_1 + 0x280);
    (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
    pvVar6 = local_58;
    if (pvVar9 != local_58) {
      (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
      lVar11 = 0;
      do {
        if (*(char *)((long)local_58 + lVar11) == '\0') goto LAB_0152d264;
        if (*(char *)((long)local_58 + lVar11 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0152d264;
        }
        if (*(char *)((long)local_58 + lVar11 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0152d264;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0152d264:
      iVar8 = (int)lVar11;
      if (*(int *)(param_1 + 0x288) <= (int)lVar11) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pvVar9,pvVar6,(long)iVar8);
      *(undefined1 *)((long)pvVar9 + (long)iVar8) = 0;
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
  }
  else {
    pcVar10 = *(char **)(param_1 + 0x280);
    (**(code **)(DAT_0520f388 + 0x18))(&DAT_0520f388);
    pcVar5 = DAT_0520f390;
    if (pcVar10 != DAT_0520f390) {
      (**(code **)(DAT_0520f388 + 0x18))(&DAT_0520f388);
      lVar11 = 0;
      do {
        if (DAT_0520f390[lVar11] == '\0') goto LAB_0152d298;
        if (DAT_0520f390[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0152d298;
        }
        if (DAT_0520f390[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0152d298;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0152d298:
      iVar8 = (int)lVar11;
      if (*(int *)(param_1 + 0x288) <= (int)lVar11) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pcVar10,pcVar5,(long)iVar8);
      pcVar10[iVar8] = '\0';
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    local_b5 = 0;
    local_138._4_4_ = local_138._4_4_ & 0xffffff00;
    local_148 = PTR_DAT_04bb2d88 + 0x10;
    local_138 = CONCAT44(local_138._4_4_,0x80);
    local_a0 = 0x20;
    local_140 = (void *)((long)&local_138 + 4);
    local_7d = 0;
    local_a8 = local_9c;
    local_9c[0] = '\0';
    local_b0 = PTR_DAT_04bb2028 + 0x10;
    FUN_01adf970(&local_60,&local_78);
    pvVar6 = local_140;
    (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
    pvVar9 = local_58;
    if (pvVar6 != local_58) {
      (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
      lVar11 = 0;
      do {
        if (*(char *)((long)local_58 + lVar11) == '\0') goto LAB_0152d390;
        if (*(char *)((long)local_58 + lVar11 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0152d390;
        }
        if (*(char *)((long)local_58 + lVar11 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0152d390;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0152d390:
      iVar8 = (int)lVar11;
      if ((int)local_138 <= (int)lVar11) {
        iVar8 = (int)local_138 + -1;
      }
      memcpy(pvVar6,pvVar9,(long)iVar8);
      *(undefined1 *)((long)pvVar6 + (long)iVar8) = 0;
    }
    pcVar10 = local_a8;
    (**(code **)(DAT_0520f3a0 + 0x18))(&DAT_0520f3a0);
    pcVar5 = DAT_0520f3a8;
    if (pcVar10 != DAT_0520f3a8) {
      (**(code **)(DAT_0520f3a0 + 0x18))(&DAT_0520f3a0);
      lVar11 = 0;
      do {
        if (DAT_0520f3a8[lVar11] == '\0') goto LAB_0152d43c;
        if (DAT_0520f3a8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0152d43c;
        }
        if (DAT_0520f3a8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0152d43c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0152d43c:
      iVar8 = (int)lVar11;
      if (local_a0 <= (int)lVar11) {
        iVar8 = local_a0 + -1;
      }
      memcpy(pcVar10,pcVar5,(long)iVar8);
      pcVar10[iVar8] = '\0';
    }
    FUN_0152da00(param_1,&local_148);
    FUN_01adf970(&local_148,&local_78);
    if (**(char **)(param_1 + 0x3b0) == '\0') {
      local_60 = 1;
      (**(code **)(*(long *)(param_1 + 0x3a8) + 0x10))((long *)(param_1 + 0x3a8),&local_148);
      puVar1 = (undefined4 *)(param_1 + 0x10dc) + local_60;
      if (0x11 < local_60) {
        puVar1 = (undefined4 *)(param_1 + 0x10dc);
      }
      *puVar1 = 0;
    }
  }
  return;
}

