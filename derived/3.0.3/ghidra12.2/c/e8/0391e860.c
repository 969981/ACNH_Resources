
void FUN_0391e860(undefined8 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined1 *__dest;
  char *pcVar10;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 local_65;
  
  puVar5 = PTR_DAT_04bd1088;
  uVar2 = crc32b(0xffffffff,0x65,0x4c11db7);
  *param_1 = &PTR_LAB_04b666d8;
  *(undefined1 *)(param_1 + 0xb) = 0;
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  param_1[6] = &PTR_LAB_04b667a0;
  param_1[7] = 0;
  uVar3 = crc32b(0xffffffff,0x6e,0x4c11db7);
  param_1[5] = 0;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  param_1[8] = puVar5 + 0x10;
  param_1[1] = param_1 + 8;
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  param_1[3] = 0;
  param_1[4] = 0;
  puVar6 = PTR_DAT_04bd11d0;
  puVar5 = PTR_DAT_04bb2028;
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  param_1[0xf] = PTR_DAT_04bb2028 + 0x10;
  uVar4 = crc32b(uVar2,0x65,0x4c11db7);
  local_90 = (char *)((long)&local_88 + 4);
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  local_88 = 0x766e6500000020;
  *(uint *)(param_1 + 9) = ~uVar4;
  param_1[0xe] = 0;
  uVar2 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar4 = crc32b(uVar2,0x65,0x4c11db7);
  plVar9 = param_1 + 0xc;
  *plVar9 = (long)(puVar6 + 0x10);
  __dest = (undefined1 *)((long)param_1 + 0x8c);
  *__dest = 0;
  param_1[0x10] = __dest;
  *(undefined4 *)(param_1 + 0x11) = 0x20;
  param_1[10] = plVar9;
  param_1[2] = plVar9;
  *(uint *)(param_1 + 0xd) = ~uVar4;
  *(undefined4 *)(param_1 + 3) = 2;
  if ((undefined **)(param_1 + 0xf) != &local_98) {
    lVar8 = 0;
    local_65 = 0;
    do {
      if (*(char *)((long)&local_88 + lVar8 + 4) == '\0') {
LAB_0391e9d4:
        iVar7 = (int)lVar8;
joined_r0x0391e9d8:
        if (0x1f < iVar7) {
          iVar7 = 0x1f;
        }
        goto LAB_0391e9e0;
      }
      if (*(char *)((long)&local_88 + lVar8 + 5) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0391e9d4;
      }
      if (*(char *)((long)&local_88 + lVar8 + 6) == '\0') {
        iVar7 = (int)lVar8 + 2;
        goto joined_r0x0391e9d8;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar7 = 0;
LAB_0391e9e0:
    memcpy(__dest,local_90,(long)iVar7);
    __dest[iVar7] = 0;
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb2) = 1;
  if (((DAT_05ae90e0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05ae90e0), iVar7 != 0)) {
    DAT_05ae90d0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05ae90d8 = "default";
    __cxa_guard_release(&DAT_05ae90e0);
  }
  local_88 = CONCAT44(local_88._4_4_,0x20);
  pcVar1 = (char *)((long)&local_88 + 4);
  local_65 = 0;
  local_98 = PTR_DAT_04bb2a08 + 0x10;
  local_90 = pcVar1;
  (**(code **)(DAT_05ae90d0 + 0x18))(&DAT_05ae90d0);
  pcVar10 = DAT_05ae90d8;
  if (pcVar1 != DAT_05ae90d8) {
    (**(code **)(DAT_05ae90d0 + 0x18))(&DAT_05ae90d0);
    lVar8 = 0;
    do {
      if (DAT_05ae90d8[lVar8] == '\0') goto LAB_0391eac0;
      if (DAT_05ae90d8[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0391eac0;
      }
      if (DAT_05ae90d8[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0391eac0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0391eac0:
    iVar7 = (int)lVar8;
    if ((int)local_88 <= (int)lVar8) {
      iVar7 = (int)local_88 + -1;
    }
    memcpy(pcVar1,pcVar10,(long)iVar7);
    pcVar1[iVar7] = '\0';
  }
  pcVar1 = local_90;
  local_98 = puVar5 + 0x10;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  puVar6 = PTR_DAT_04bd11d0;
  param_1[0x1a] = local_98;
  uVar2 = crc32b(0xffffffff,0x67,0x4c11db7);
  param_1[0x1b] = (undefined1 *)((long)param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x1c) = 0x20;
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = puVar6 + 0x10;
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar4 = crc32b(uVar2,0x70,0x4c11db7);
  *(uint *)(param_1 + 0x18) = ~uVar4;
  plVar9 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar9 = (long *)(param_1[2] + 0x10);
  }
  *plVar9 = (long)(param_1 + 0x17);
  param_1[2] = param_1 + 0x17;
  pcVar10 = (char *)param_1[0x1b];
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  local_90[(long)(int)local_88 + -1] = '\0';
  if (pcVar10 != local_90) {
    (**(code **)(puVar5 + 0x28))(&local_98);
    lVar8 = 0;
    do {
      if (local_90[lVar8] == '\0') goto LAB_0391ebec;
      if (local_90[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0391ebec;
      }
      if (local_90[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0391ebec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0391ebec:
    iVar7 = (int)lVar8;
    if (*(int *)(param_1 + 0x1c) <= (int)lVar8) {
      iVar7 = *(int *)(param_1 + 0x1c) + -1;
    }
    memcpy(pcVar10,pcVar1,(long)iVar7);
    pcVar10[iVar7] = '\0';
  }
  *(undefined2 *)(param_1 + 0x21) = 0xffff;
  return;
}

