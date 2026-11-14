
/* WARNING: Removing unreachable block (ram,0x0152a53c) */
/* WARNING: Removing unreachable block (ram,0x0152a564) */

void FUN_01529f40(long param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined *local_1d8;
  char *local_1d0;
  int local_1c8;
  char local_1c4 [127];
  undefined1 local_145;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [31];
  undefined1 local_10d;
  undefined **local_108;
  char *local_100;
  int local_f8;
  char local_f4 [127];
  undefined1 local_75;
  undefined **local_70;
  undefined2 local_68;
  byte local_66;
  undefined1 local_65;
  undefined4 local_64;
  long local_60;
  uint local_54;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_60 = 0;
  bVar2 = *(byte *)(param_1 + 0x129e);
  local_65 = *(undefined1 *)(param_1 + 0x129f);
  local_68 = *(undefined2 *)(param_1 + 0x129c);
  local_64 = *(undefined4 *)(param_1 + 0x12a0);
  local_70 = &PTR_FUN_04a36b50;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_66 = bVar2;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x129c);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), lVar9 != 0)) {
        local_60 = lVar9;
      }
    }
  }
  FUN_01adf970(&local_1d8,&local_70);
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar9 != 0) {
    FUN_0074ed40(lVar9,&local_1d8,0);
  }
  *(uint *)(param_1 + 0x1298) = *(uint *)(param_1 + 0x1298) | 8;
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_01ade370(&local_1d8,&local_70);
    if ((*(byte *)(param_1 + 0x1298) >> 2 & 1) != 0) {
      iVar8 = 0;
      do {
        piVar10 = (int *)((long)&DAT_053275f0 + (long)iVar8 * 0x138 + 4);
        if ((*piVar10 != 0xfffe) && (iVar5 = FUN_0277d6c4(param_1 + 0x129c), iVar5 == *piVar10)) {
          local_100 = (char *)(&DAT_05327600)[(long)iVar8 * 0x27];
          if (*(char *)(&DAT_05327600)[(long)iVar8 * 0x27] == '\0') {
            local_100 = local_1d0;
          }
          goto LAB_0152a090;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x1f);
    }
    local_100 = local_1d0;
LAB_0152a090:
    local_108 = &PTR_LAB_048f9770;
    if ((*(uint *)(param_1 + 0x1298) >> 1 & 1) != 0) {
      pcVar7 = *(char **)(param_1 + 0x280);
      if (pcVar7 != local_100) {
        lVar9 = 0;
        do {
          if (local_100[lVar9] == '\0') goto LAB_0152a4ec;
          if (local_100[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0152a4ec;
          }
          if (local_100[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0152a4ec;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0152a4ec:
        iVar8 = (int)lVar9;
        if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
          iVar8 = *(int *)(param_1 + 0x288) + -1;
        }
        memcpy(pcVar7,local_100,(long)iVar8);
        pcVar7[iVar8] = '\0';
      }
      *(undefined4 *)(param_1 + 0x10d8) = 0;
      FUN_01ade5d0(&local_1d8,&local_70);
      if (**(char **)(param_1 + 0x3b0) != '\0') {
        return;
      }
      local_54 = 1;
      (**(code **)(*(long *)(param_1 + 0x3a8) + 0x10))((long *)(param_1 + 0x3a8),&local_1d8);
      puVar1 = (undefined4 *)(param_1 + 0x10dc) + local_54;
      if (0x11 < local_54) {
        puVar1 = (undefined4 *)(param_1 + 0x10dc);
      }
      *puVar1 = 0;
      return;
    }
    if ((*(uint *)(param_1 + 0x1298) >> 10 & 1) == 0) {
      FUN_01ade5d0(&local_1d8,&local_70);
      pcVar6 = *(char **)(param_1 + 0x280);
      (**(code **)(local_1d8 + 0x18))(&local_1d8);
      pcVar7 = local_1d0;
      if (pcVar6 != local_1d0) {
        (**(code **)(local_1d8 + 0x18))(&local_1d8);
        lVar9 = 0;
        do {
          if (local_1d0[lVar9] == '\0') goto LAB_0152a5a0;
          if (local_1d0[lVar9 + 1] == '\0') goto LAB_0152a594;
          if (local_1d0[lVar9 + 2] == '\0') goto LAB_0152a59c;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
LAB_0152a2fc:
        lVar9 = 0;
        goto LAB_0152a5a0;
      }
    }
    else {
      FUN_01532800(&local_1d8,param_1);
      pcVar6 = *(char **)(param_1 + 0x280);
      (**(code **)(local_1d8 + 0x18))(&local_1d8);
      pcVar7 = local_1d0;
      if (pcVar6 != local_1d0) {
        (**(code **)(local_1d8 + 0x18))(&local_1d8);
        lVar9 = 0;
        do {
          if (local_1d0[lVar9] == '\0') goto LAB_0152a5a0;
          if (local_1d0[lVar9 + 1] == '\0') goto LAB_0152a594;
          if (local_1d0[lVar9 + 2] == '\0') goto LAB_0152a59c;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        goto LAB_0152a2fc;
      }
    }
    goto LAB_0152a5c8;
  }
  FUN_01ade370(&local_1d8,&local_70);
  local_f8 = 0x80;
  local_75 = 0;
  local_108 = &PTR_LAB_048fcff0;
  local_100 = local_f4;
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  pcVar7 = local_1d0;
  if (local_f4 != local_1d0) {
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    lVar9 = 0;
    do {
      if (local_1d0[lVar9] == '\0') goto LAB_0152a310;
      if (local_1d0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0152a310;
      }
      if (local_1d0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152a310;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0152a310:
    iVar8 = (int)lVar9;
    if (local_f8 <= (int)lVar9) {
      iVar8 = local_f8 + -1;
    }
    memcpy(local_f4,pcVar7,(long)iVar8);
    local_f4[iVar8] = '\0';
  }
  iVar8 = local_f8;
  pcVar7 = local_100;
  puVar3 = PTR_DAT_04bb2d88;
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffffffffff00);
  local_108 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  local_100[(long)local_f8 + -1] = '\0';
  (**(code **)(puVar3 + 0x28))(&local_108);
  lVar9 = 0;
  do {
    if (local_100[lVar9] == '\0') goto LAB_0152a3b0;
    if (local_100[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0152a3b0;
    }
    if (local_100[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0152a3b0;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_0152a3b0:
  FUN_038d0770(pcVar7,0,iVar8,pcVar7,lVar9,&DAT_0520f258,&DAT_0520f268,&local_1d8);
  if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) != 0) {
    pcVar6 = *(char **)(param_1 + 0x280);
    (*(code *)local_108[3])(&local_108);
    pcVar7 = local_100;
    if (pcVar6 != local_100) {
      (*(code *)local_108[3])(&local_108);
      lVar9 = 0;
      do {
        if (local_100[lVar9] == '\0') goto LAB_0152a798;
        if (local_100[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0152a798;
        }
        if (local_100[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0152a798;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0152a798:
      iVar8 = (int)lVar9;
      if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pcVar6,pcVar7,(long)iVar8);
      pcVar6[iVar8] = '\0';
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    return;
  }
  FUN_01ada670(&local_1d8,&local_70);
  pcVar6 = *(char **)(param_1 + 0x280);
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  pcVar7 = local_1d0;
  if (pcVar6 != local_1d0) {
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    lVar9 = 0;
    do {
      if (local_1d0[lVar9] == '\0') goto LAB_0152a680;
      if (local_1d0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0152a680;
      }
      if (local_1d0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0152a680;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0152a680:
    iVar8 = (int)lVar9;
    if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
      iVar8 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(pcVar6,pcVar7,(long)iVar8);
    pcVar6[iVar8] = '\0';
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  local_1c8 = 0x80;
  puStack_138 = local_12c;
  local_145 = 0;
  local_1d8 = puVar3 + 0x10;
  local_1c4[0] = '\0';
  local_130 = 0x20;
  local_10d = 0;
  local_12c[0] = 0;
  local_140 = PTR_DAT_04bb2028 + 0x10;
  local_1d0 = local_1c4;
  (*(code *)local_108[3])(&local_108);
  pcVar7 = local_100;
  if (local_1c4 == local_100) goto LAB_0152a784;
  (*(code *)local_108[3])(&local_108);
  lVar9 = 0;
  do {
    if (local_100[lVar9] == '\0') goto LAB_0152a75c;
    if (local_100[lVar9 + 1] == '\0') goto LAB_0152a750;
    if (local_100[lVar9 + 2] == '\0') goto LAB_0152a758;
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  goto LAB_0152a748;
LAB_0152a594:
  lVar9 = lVar9 + 1;
  goto LAB_0152a5a0;
LAB_0152a59c:
  lVar9 = lVar9 + 2;
LAB_0152a5a0:
  iVar8 = (int)lVar9;
  if (*(int *)(param_1 + 0x288) <= (int)lVar9) {
    iVar8 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(pcVar6,pcVar7,(long)iVar8);
  pcVar6[iVar8] = '\0';
LAB_0152a5c8:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  local_1c8 = 0x80;
  local_145 = 0;
  puStack_138 = local_12c;
  local_1c4[0] = '\0';
  local_130 = 0x20;
  local_1d8 = PTR_DAT_04bb2d88 + 0x10;
  local_10d = 0;
  local_12c[0] = 0;
  local_140 = PTR_DAT_04bb2028 + 0x10;
  local_1d0 = local_1c4;
  (*(code *)local_108[3])(&local_108);
  pcVar7 = local_100;
  if (local_1c4 == local_100) goto LAB_0152a784;
  (*(code *)local_108[3])(&local_108);
  lVar9 = 0;
  do {
    if (local_100[lVar9] == '\0') goto LAB_0152a75c;
    if (local_100[lVar9 + 1] == '\0') goto LAB_0152a750;
    if (local_100[lVar9 + 2] == '\0') goto LAB_0152a758;
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
LAB_0152a748:
  lVar9 = 0;
  goto LAB_0152a75c;
LAB_0152a750:
  lVar9 = lVar9 + 1;
  goto LAB_0152a75c;
LAB_0152a758:
  lVar9 = lVar9 + 2;
LAB_0152a75c:
  iVar8 = (int)lVar9;
  if (local_1c8 <= (int)lVar9) {
    iVar8 = local_1c8 + -1;
  }
  memcpy(local_1c4,pcVar7,(long)iVar8);
  local_1c4[iVar8] = '\0';
LAB_0152a784:
  FUN_0152da00(param_1,&local_1d8);
  return;
}

