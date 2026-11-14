
void FUN_0152b770(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long local_1d0;
  undefined1 *local_1c8;
  undefined *local_138;
  char *local_130;
  int local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined **local_a0;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined **local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_58 = 0;
  bVar1 = *(byte *)(param_1 + 0x129e);
  local_5d = *(undefined1 *)(param_1 + 0x129f);
  local_60 = *(undefined2 *)(param_1 + 0x129c);
  local_5c = *(undefined4 *)(param_1 + 0x12a0);
  local_68 = &PTR_FUN_04a36b50;
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
    if ((*(byte *)(param_1 + 0x1298) >> 2 & 1) != 0) {
      iVar8 = 0;
      do {
        piVar10 = (int *)((long)&DAT_053275f0 + (long)iVar8 * 0x138 + 4);
        if ((*piVar10 != 0xfffe) && (iVar4 = FUN_0277d6c4(param_1 + 0x129c), iVar4 == *piVar10)) {
          pcVar5 = (char *)(&DAT_05327600)[(long)iVar8 * 0x27];
          if (*pcVar5 != '\0') goto LAB_0152b880;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x1f);
    }
    pcVar5 = local_130;
LAB_0152b880:
    pcVar6 = *(char **)(param_1 + 0x280);
    if (pcVar6 != pcVar5) {
      lVar9 = 0;
      do {
        if (pcVar5[lVar9] == '\0') goto LAB_0152b9d0;
        if (pcVar5[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0152b9d0;
        }
        if (pcVar5[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0152b9d0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0152b9d0:
      iVar8 = (int)lVar9;
      if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pcVar6,pcVar5,(long)iVar8);
      pcVar6[iVar8] = '\0';
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    if ((*(uint *)(param_1 + 0x1298) >> 1 & 1) != 0) {
      return;
    }
    local_a5 = 0;
    local_124[0] = 0;
    local_128 = 0x80;
    pcVar5 = local_124;
    local_90 = 0x20;
    local_98 = local_8c;
    local_138 = PTR_DAT_04bb2d88 + 0x10;
    local_6d = 0;
    local_8c[0] = 0;
    local_a0 = &PTR_LAB_048f9700;
    local_130 = pcVar5;
    if ((*(uint *)(param_1 + 0x1298) >> 10 & 1) == 0) {
      (**(code **)(DAT_0520f1d8 + 0x18))(&DAT_0520f1d8);
      puVar7 = DAT_0520f1e0;
      if (pcVar5 == DAT_0520f1e0) goto LAB_0152bd3c;
      (**(code **)(DAT_0520f1d8 + 0x18))(&DAT_0520f1d8);
      lVar9 = 0;
      do {
        if (DAT_0520f1e0[lVar9] == '\0') goto LAB_0152bc54;
        if (DAT_0520f1e0[lVar9 + 1] == '\0') goto LAB_0152bc48;
        if (DAT_0520f1e0[lVar9 + 2] == '\0') goto LAB_0152bc50;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
    }
    else {
      FUN_01532cb0(&local_1d0,param_1);
      pcVar5 = local_130;
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      puVar7 = local_1c8;
      if (pcVar5 == local_1c8) goto LAB_0152bd3c;
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      lVar9 = 0;
      do {
        if (local_1c8[lVar9] == '\0') goto LAB_0152bc54;
        if (local_1c8[lVar9 + 1] == '\0') goto LAB_0152bc48;
        if (local_1c8[lVar9 + 2] == '\0') goto LAB_0152bc50;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
    }
    lVar9 = 0;
    goto LAB_0152bc54;
  }
  FUN_01adf970(&local_138,&local_68);
  pcVar6 = *(char **)(param_1 + 0x280);
  (**(code **)(local_138 + 0x18))(&local_138);
  pcVar5 = local_130;
  if (pcVar6 != local_130) {
    (**(code **)(local_138 + 0x18))(&local_138);
    lVar9 = 0;
    do {
      if (local_130[lVar9] == '\0') goto LAB_0152bb44;
      if (local_130[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0152bb44;
      }
      if (local_130[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152bb44;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0152bb44:
    iVar8 = (int)lVar9;
    if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
      iVar8 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(pcVar6,pcVar5,(long)iVar8);
    pcVar6[iVar8] = '\0';
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) != 0) {
    return;
  }
  FUN_01ada670(&local_1d0,&local_68);
  local_a5 = 0;
  local_128 = 0x80;
  local_124[0] = 0;
  local_90 = 0x20;
  local_98 = local_8c;
  local_6d = 0;
  local_138 = PTR_DAT_04bb2d88 + 0x10;
  local_8c[0] = 0;
  local_a0 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  local_130 = local_124;
  (**(code **)(local_1d0 + 0x18))(&local_1d0);
  puVar7 = local_1c8;
  if (local_124 != local_1c8) {
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    lVar9 = 0;
    do {
      if (local_1c8[lVar9] == '\0') goto LAB_0152bc60;
      if (local_1c8[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0152bc60;
      }
      if (local_1c8[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152bc60;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0152bc60:
    iVar8 = (int)lVar9;
    if (local_128 <= (int)lVar9) {
      iVar8 = local_128 + -1;
    }
    memcpy(local_124,puVar7,(long)iVar8);
    local_124[iVar8] = 0;
  }
  pcVar5 = local_98;
  (**(code **)(DAT_0520f2a8 + 0x18))(&DAT_0520f2a8);
  puVar7 = DAT_0520f2b0;
  if (pcVar5 == DAT_0520f2b0) goto LAB_0152bd3c;
  (**(code **)(DAT_0520f2a8 + 0x18))(&DAT_0520f2a8);
  lVar9 = 0;
  do {
    iVar8 = local_90;
    if (DAT_0520f2b0[lVar9] == '\0') {
LAB_0152bd14:
      iVar4 = (int)lVar9;
      goto LAB_0152bd18;
    }
    if (DAT_0520f2b0[lVar9 + 1] == '\0') {
      iVar4 = (int)lVar9 + 1;
      goto LAB_0152bd18;
    }
    if (DAT_0520f2b0[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0152bd14;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  iVar4 = 0;
  goto LAB_0152bd18;
LAB_0152bc48:
  lVar9 = lVar9 + 1;
  goto LAB_0152bc54;
LAB_0152bc50:
  lVar9 = lVar9 + 2;
LAB_0152bc54:
  iVar4 = (int)lVar9;
  iVar8 = local_128;
LAB_0152bd18:
  if (iVar8 <= iVar4) {
    iVar4 = iVar8 + -1;
  }
  memcpy(pcVar5,puVar7,(long)iVar4);
  pcVar5[iVar4] = 0;
LAB_0152bd3c:
  FUN_0152da00(param_1,&local_138);
  return;
}

