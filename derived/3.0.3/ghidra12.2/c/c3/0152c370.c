
void FUN_0152c370(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *__src;
  undefined1 *__dest;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined **local_148;
  char *local_140;
  undefined8 local_138;
  undefined1 local_b5;
  undefined **local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  long local_78;
  char *local_70;
  undefined **local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_60 = *(undefined2 *)(param_1 + 0x129c);
  bVar1 = *(byte *)(param_1 + 0x129e);
  lVar6 = param_1 + 0x129c;
  local_58 = 0;
  local_5d = *(undefined1 *)(param_1 + 0x129f);
  local_68 = &PTR_FUN_04a36b50;
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
      uVar3 = FUN_0277d6c4(lVar6);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
        local_58 = lVar9;
      }
    }
  }
  if ((bVar1 >> 3 & 1) == 0) {
    local_148 = &PTR_FUN_04a36b50;
    local_140 = *(char **)(param_1 + 0x129c);
    local_138 = 0;
    lVar9 = *(long *)puVar2;
    uVar3 = FUN_0277d6c4(&local_140);
    if (*(long *)puVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(lVar6);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
          local_138 = lVar9;
        }
      }
    }
    FUN_01adf970(&local_78,&local_148);
    if ((*(byte *)(param_1 + 0x1298) >> 2 & 1) != 0) {
      iVar8 = 0;
      do {
        piVar10 = (int *)((long)&DAT_053275f0 + (long)iVar8 * 0x138 + 4);
        if ((*piVar10 != 0xfffe) && (iVar4 = FUN_0277d6c4(lVar6), iVar4 == *piVar10)) {
          pcVar5 = (char *)(&DAT_05327600)[(long)iVar8 * 0x27];
          if (*pcVar5 != '\0') goto LAB_0152c528;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x1f);
    }
    pcVar5 = local_70;
LAB_0152c528:
    pcVar7 = *(char **)(param_1 + 0x280);
    if (pcVar7 != pcVar5) {
      lVar6 = 0;
      do {
        if (pcVar5[lVar6] == '\0') goto LAB_0152c668;
        if (pcVar5[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0152c668;
        }
        if (pcVar5[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0152c668;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0152c668:
      iVar8 = (int)lVar6;
      if (*(int *)(param_1 + 0x288) <= (int)lVar6) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pcVar7,pcVar5,(long)iVar8);
      pcVar7[iVar8] = '\0';
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
  }
  else {
    FUN_01ada670(&local_148,&local_68);
    pcVar7 = *(char **)(param_1 + 0x280);
    (*(code *)local_148[3])(&local_148);
    pcVar5 = local_140;
    if (pcVar7 != local_140) {
      (*(code *)local_148[3])(&local_148);
      lVar6 = 0;
      do {
        if (local_140[lVar6] == '\0') goto LAB_0152c6a0;
        if (local_140[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0152c6a0;
        }
        if (local_140[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0152c6a0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0152c6a0:
      iVar8 = (int)lVar6;
      if (*(int *)(param_1 + 0x288) <= (int)lVar6) {
        iVar8 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(pcVar7,pcVar5,(long)iVar8);
      pcVar7[iVar8] = '\0';
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    local_140 = (char *)((long)&local_138 + 4);
    local_a8 = local_9c;
    local_b5 = 0;
    local_a0 = 0x20;
    local_138 = CONCAT35(local_138._5_3_,0x80);
    local_7d = 0;
    local_9c[0] = 0;
    local_148 = (undefined **)&DAT_048fc708;
    local_b0 = &PTR_LAB_048f9700;
    FUN_01adf970(&local_78,&local_68);
    pcVar5 = local_140;
    (**(code **)(local_78 + 0x18))(&local_78);
    pcVar7 = local_70;
    if (pcVar5 != local_70) {
      (**(code **)(local_78 + 0x18))(&local_78);
      lVar6 = 0;
      do {
        if (local_70[lVar6] == '\0') goto LAB_0152c79c;
        if (local_70[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0152c79c;
        }
        if (local_70[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0152c79c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0152c79c:
      iVar8 = (int)lVar6;
      if ((int)local_138 <= (int)lVar6) {
        iVar8 = (int)local_138 + -1;
      }
      memcpy(pcVar5,pcVar7,(long)iVar8);
      pcVar5[iVar8] = '\0';
    }
    __dest = local_a8;
    (**(code **)(DAT_0520f2e8 + 0x18))(&DAT_0520f2e8);
    __src = DAT_0520f2f0;
    if (__dest != DAT_0520f2f0) {
      (**(code **)(DAT_0520f2e8 + 0x18))(&DAT_0520f2e8);
      lVar6 = 0;
      do {
        if (DAT_0520f2f0[lVar6] == '\0') goto LAB_0152c840;
        if (DAT_0520f2f0[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0152c840;
        }
        if (DAT_0520f2f0[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0152c840;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0152c840:
      iVar8 = (int)lVar6;
      if (local_a0 <= (int)lVar6) {
        iVar8 = local_a0 + -1;
      }
      memcpy(__dest,__src,(long)iVar8);
      __dest[iVar8] = 0;
    }
    FUN_0152da00(param_1,&local_148);
  }
  return;
}

