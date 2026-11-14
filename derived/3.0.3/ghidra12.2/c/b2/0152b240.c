
/* WARNING: Removing unreachable block (ram,0x0152b6f0) */
/* WARNING: Removing unreachable block (ram,0x0152b71c) */

void FUN_0152b240(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  int local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined **local_a0;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined *local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_60 = *(undefined2 *)(param_1 + 0x129c);
  bVar3 = *(byte *)(param_1 + 0x129e);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_5d = *(undefined1 *)(param_1 + 0x129f);
  local_5c = *(undefined4 *)(param_1 + 0x12a0);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_5e = bVar3;
  uVar5 = FUN_0277d6c4(&local_60);
  lVar6 = DAT_0532a768;
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar5 = FUN_0277d6c4(param_1 + 0x129c);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
        local_58 = lVar6;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x1298);
  *(uint *)(param_1 + 0x1298) = uVar5 | 0x40;
  if ((bVar3 >> 3 & 1) == 0) {
    FUN_01adf970(&local_138,&local_68);
    puVar7 = *(undefined1 **)(param_1 + 0x280);
    (**(code **)(local_138 + 0x18))(&local_138);
    puVar9 = local_130;
    if (puVar7 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar6 = 0;
      do {
        if (local_130[lVar6] == '\0') goto LAB_0152b4cc;
        if (local_130[lVar6 + 1] == '\0') goto LAB_0152b4c0;
        if (local_130[lVar6 + 2] == '\0') goto LAB_0152b4c8;
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
LAB_0152b4b8:
      lVar6 = 0;
      goto LAB_0152b4cc;
    }
  }
  else {
    if ((uVar5 >> 1 & 1) == 0) {
      FUN_01ada670(&local_138,&local_68);
      puVar7 = *(undefined1 **)(param_1 + 0x280);
      (**(code **)(local_138 + 0x18))(&local_138);
      puVar9 = local_130;
      if (puVar7 != local_130) {
        (**(code **)(local_138 + 0x18))(&local_138);
        lVar6 = 0;
        do {
          if (local_130[lVar6] == '\0') goto LAB_0152b508;
          if (local_130[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0152b508;
          }
          if (local_130[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0152b508;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0152b508:
        iVar1 = (int)lVar6;
        if (*(int *)(param_1 + 0x288) <= (int)lVar6) {
          iVar1 = *(int *)(param_1 + 0x288) + -1;
        }
        memcpy(puVar7,puVar9,(long)iVar1);
        puVar7[iVar1] = 0;
      }
      *(undefined4 *)(param_1 + 0x10d8) = 0;
      local_130 = local_124;
      local_128 = 0x80;
      local_98 = local_8c;
      local_a5 = 0;
      local_90 = 0x20;
      local_124[0] = 0;
      local_6d = 0;
      local_8c[0] = 0;
      local_138 = &DAT_048fc708;
      local_a0 = &PTR_LAB_048f9700;
      FUN_01adf970(&local_148,&local_68);
      puVar7 = local_130;
      (**(code **)(local_148 + 0x18))(&local_148);
      puVar9 = local_140;
      if (puVar7 != local_140) {
        (**(code **)(local_148 + 0x18))(&local_148);
        lVar6 = 0;
        do {
          if (local_140[lVar6] == '\0') goto LAB_0152b5fc;
          if (local_140[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0152b5fc;
          }
          if (local_140[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0152b5fc;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0152b5fc:
        iVar1 = (int)lVar6;
        if (local_128 <= (int)lVar6) {
          iVar1 = local_128 + -1;
        }
        memcpy(puVar7,puVar9,(long)iVar1);
        puVar7[iVar1] = 0;
      }
      puVar7 = local_98;
      (**(code **)(DAT_0520f2c8 + 0x18))(&DAT_0520f2c8);
      puVar9 = DAT_0520f2d0;
      if (puVar7 != DAT_0520f2d0) {
        (**(code **)(DAT_0520f2c8 + 0x18))(&DAT_0520f2c8);
        lVar6 = 0;
        do {
          if (DAT_0520f2d0[lVar6] == '\0') goto LAB_0152b6a0;
          if (DAT_0520f2d0[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0152b6a0;
          }
          if (DAT_0520f2d0[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0152b6a0;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0152b6a0:
        iVar1 = (int)lVar6;
        if (local_90 <= (int)lVar6) {
          iVar1 = local_90 + -1;
        }
        memcpy(puVar7,puVar9,(long)iVar1);
        puVar7[iVar1] = 0;
      }
      FUN_0152da00(param_1,&local_138);
      goto LAB_0152b6d4;
    }
    FUN_01adf970(&local_138,&local_68);
    puVar7 = *(undefined1 **)(param_1 + 0x280);
    (**(code **)(local_138 + 0x18))(&local_138);
    puVar9 = local_130;
    if (puVar7 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar6 = 0;
      do {
        if (local_130[lVar6] == '\0') goto LAB_0152b4cc;
        if (local_130[lVar6 + 1] == '\0') goto LAB_0152b4c0;
        if (local_130[lVar6 + 2] == '\0') goto LAB_0152b4c8;
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      goto LAB_0152b4b8;
    }
  }
  goto LAB_0152b4f4;
LAB_0152b4c0:
  lVar6 = lVar6 + 1;
  goto LAB_0152b4cc;
LAB_0152b4c8:
  lVar6 = lVar6 + 2;
LAB_0152b4cc:
  iVar1 = (int)lVar6;
  if (*(int *)(param_1 + 0x288) <= (int)lVar6) {
    iVar1 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(puVar7,puVar9,(long)iVar1);
  puVar7[iVar1] = 0;
LAB_0152b4f4:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
LAB_0152b6d4:
  if (**(char **)(param_1 + 0x3b0) == '\0') {
    local_138 = (undefined1 *)CONCAT44(local_138._4_4_,1);
    (**(code **)(*(long *)(param_1 + 0x3a8) + 0x10))((long *)(param_1 + 0x3a8),&DAT_0520f1f8);
    puVar2 = (undefined4 *)(param_1 + 0x10dc) + ((ulong)local_138 & 0xffffffff);
    if (0x11 < (uint)local_138) {
      puVar2 = (undefined4 *)(param_1 + 0x10dc);
    }
    *puVar2 = 0;
  }
  return;
}

