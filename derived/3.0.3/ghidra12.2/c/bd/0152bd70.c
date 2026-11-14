
void FUN_0152bd70(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long local_148;
  undefined1 *local_140;
  undefined *local_138;
  undefined1 *local_130;
  int local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined *local_a0;
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
  
  puVar2 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_60 = *(undefined2 *)(param_1 + 0x129c);
  bVar1 = *(byte *)(param_1 + 0x129e);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_5d = *(undefined1 *)(param_1 + 0x129f);
  local_5c = *(undefined4 *)(param_1 + 0x12a0);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_5e = bVar1;
  uVar3 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x129c);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
        local_58 = lVar9;
      }
    }
  }
  if ((bVar1 >> 3 & 1) == 0) {
    FUN_01adf970(&local_138,&local_68);
    pvVar7 = *(void **)(param_1 + 0x280);
    (**(code **)(local_138 + 0x18))(&local_138);
    puVar8 = local_130;
    if (pvVar7 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar9 = 0;
      do {
        if (*(char *)((long)local_130 + lVar9) == '\0') goto LAB_0152c01c;
        if (*(char *)((long)local_130 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0152c01c;
        }
        if (*(char *)((long)local_130 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0152c01c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0152c01c:
      iVar6 = (int)lVar9;
      if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
        iVar6 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pvVar7,puVar8,(long)iVar6);
      *(undefined1 *)((long)pvVar7 + (long)iVar6) = 0;
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) != 0) {
      return;
    }
    puVar8 = local_124;
    local_128 = 0x80;
    local_a5 = 0;
    local_6d = 0;
    local_98 = local_8c;
    local_138 = PTR_DAT_04bb2d88 + 0x10;
    local_90 = 0x20;
    local_8c[0] = 0;
    local_124[0] = 0;
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    local_130 = puVar8;
    (**(code **)(DAT_0520f208 + 0x18))(&DAT_0520f208);
    puVar10 = DAT_0520f210;
    if (puVar8 == DAT_0520f210) goto LAB_0152c33c;
    (**(code **)(DAT_0520f208 + 0x18))(&DAT_0520f208);
    lVar9 = 0;
    do {
      if (DAT_0520f210[lVar9] == '\0') goto LAB_0152c250;
      if (DAT_0520f210[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0152c250;
      }
      if (DAT_0520f210[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152c250;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0152c250:
    iVar5 = (int)lVar9;
    iVar6 = local_128;
  }
  else {
    if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) != 0) {
      FUN_01adf970(&local_138,&local_68);
      pvVar7 = *(void **)(param_1 + 0x280);
      (**(code **)(local_138 + 0x18))(&local_138);
      puVar8 = local_130;
      if (pvVar7 != local_130) {
        (**(code **)(local_138 + 0x18))(&local_138);
        lVar9 = 0;
        do {
          if (*(char *)((long)local_130 + lVar9) == '\0') goto LAB_0152c120;
          if (*(char *)((long)local_130 + lVar9 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0152c120;
          }
          if (*(char *)((long)local_130 + lVar9 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0152c120;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0152c120:
        iVar6 = (int)lVar9;
        if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
          iVar6 = *(int *)(param_1 + 0x288) + -1;
        }
        memcpy(pvVar7,puVar8,(long)iVar6);
        *(undefined1 *)((long)pvVar7 + (long)iVar6) = 0;
      }
      *(undefined4 *)(param_1 + 0x10d8) = 0;
      return;
    }
    uVar4 = FUN_01aec8b4(&local_68);
    if ((uVar4 & 1) == 0) {
      FUN_01ada670(&local_138,&local_68);
    }
    else {
      local_138 = PTR_DAT_04bb2020 + 0x10;
      local_130 = DAT_0520f230;
    }
    pvVar7 = *(void **)(param_1 + 0x280);
    (**(code **)(local_138 + 0x18))(&local_138);
    puVar8 = local_130;
    if (pvVar7 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar9 = 0;
      do {
        if (*(char *)((long)local_130 + lVar9) == '\0') goto LAB_0152c15c;
        if (*(char *)((long)local_130 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0152c15c;
        }
        if (*(char *)((long)local_130 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0152c15c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0152c15c:
      iVar6 = (int)lVar9;
      if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
        iVar6 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pvVar7,puVar8,(long)iVar6);
      *(undefined1 *)((long)pvVar7 + (long)iVar6) = 0;
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    local_130 = local_124;
    local_128 = 0x80;
    local_98 = local_8c;
    local_a5 = 0;
    local_90 = 0x20;
    local_138 = PTR_DAT_04bb2d88 + 0x10;
    local_124[0] = 0;
    local_6d = 0;
    local_8c[0] = 0;
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    FUN_01adf970(&local_148,&local_68);
    puVar10 = local_130;
    (**(code **)(local_148 + 0x18))(&local_148);
    puVar8 = local_140;
    if (puVar10 != local_140) {
      (**(code **)(local_148 + 0x18))(&local_148);
      lVar9 = 0;
      do {
        if (local_140[lVar9] == '\0') goto LAB_0152c264;
        if (local_140[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0152c264;
        }
        if (local_140[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0152c264;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0152c264:
      iVar6 = (int)lVar9;
      if (local_128 <= (int)lVar9) {
        iVar6 = local_128 + -1;
      }
      memcpy(puVar10,puVar8,(long)iVar6);
      puVar10[iVar6] = 0;
    }
    puVar8 = local_98;
    (**(code **)(DAT_0520f2b8 + 0x18))(&DAT_0520f2b8);
    puVar10 = DAT_0520f2c0;
    if (puVar8 == DAT_0520f2c0) goto LAB_0152c33c;
    (**(code **)(DAT_0520f2b8 + 0x18))(&DAT_0520f2b8);
    lVar9 = 0;
    do {
      iVar6 = local_90;
      if (DAT_0520f2c0[lVar9] == '\0') {
LAB_0152c314:
        iVar5 = (int)lVar9;
        goto LAB_0152c318;
      }
      if (DAT_0520f2c0[lVar9 + 1] == '\0') {
        iVar5 = (int)lVar9 + 1;
        goto LAB_0152c318;
      }
      if (DAT_0520f2c0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152c314;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar5 = 0;
  }
LAB_0152c318:
  if (iVar6 <= iVar5) {
    iVar5 = iVar6 + -1;
  }
  memcpy(puVar8,puVar10,(long)iVar5);
  puVar8[iVar5] = 0;
LAB_0152c33c:
  FUN_0152da00(param_1,&local_138);
  return;
}

