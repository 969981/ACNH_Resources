
/* WARNING: Removing unreachable block (ram,0x0300ff90) */

void FUN_0300ff50(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_5d = 0;
  local_a0 = 0x40;
  uStack_b8 = 0xffffffffffffffff;
  local_4c = 0xffffffffffffffff;
  local_58 = *(byte *)(param_1 + 0x1f8);
  local_9c[0] = 0;
  local_54 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_50 = 0;
  if (7 < local_58) {
    local_58 = 0xff;
  }
  local_c0 = 0xffffffff00000004;
  local_a8 = local_9c;
  (**(code **)(DAT_056d6f08 + 0x18))(&DAT_056d6f08);
  puVar1 = DAT_056d6f10;
  if (local_9c != DAT_056d6f10) {
    (**(code **)(DAT_056d6f08 + 0x18))(&DAT_056d6f08);
    lVar4 = 0;
    do {
      if (DAT_056d6f10[lVar4] == '\0') goto LAB_030100a0;
      if (DAT_056d6f10[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_030100a0;
      }
      if (DAT_056d6f10[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_030100a0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_030100a0:
    iVar2 = (int)lVar4;
    if (local_a0 <= (int)lVar4) {
      iVar2 = local_a0 + -1;
    }
    memcpy(local_9c,puVar1,(long)iVar2);
    local_9c[iVar2] = 0;
  }
  FUN_02ee2b00(puVar5,&local_c0,1);
  puVar1 = local_a8;
  if ((*(uint *)(param_1 + 0x1b0) & 0xfffffffe) != 4) {
    local_c0 = CONCAT44(local_c0._4_4_,7);
    (**(code **)(DAT_056d6ef8 + 0x18))(&DAT_056d6ef8);
    puVar6 = DAT_056d6f00;
    if (puVar1 != DAT_056d6f00) {
      (**(code **)(DAT_056d6ef8 + 0x18))(&DAT_056d6ef8);
      lVar4 = 0;
      do {
        if (DAT_056d6f00[lVar4] == '\0') goto LAB_0301016c;
        if (DAT_056d6f00[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_0301016c;
        }
        if (DAT_056d6f00[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_0301016c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_0301016c:
      iVar2 = (int)lVar4;
      if (local_a0 <= (int)lVar4) {
        iVar2 = local_a0 + -1;
      }
      memcpy(puVar1,puVar6,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    FUN_02ee2b00(puVar5,&local_c0,1);
  }
  puVar1 = local_a8;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar4 == 0) {
    return;
  }
  local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
  if (*(int *)(param_1 + 0x1b0) == 5) {
    (**(code **)(DAT_056d6f38 + 0x18))(&DAT_056d6f38);
    puVar6 = DAT_056d6f40;
    if (puVar1 == DAT_056d6f40) goto LAB_03010358;
    (**(code **)(DAT_056d6f38 + 0x18))(&DAT_056d6f38);
    lVar4 = 0;
    do {
      if (DAT_056d6f40[lVar4] == '\0') goto LAB_0301032c;
      if (DAT_056d6f40[lVar4 + 1] == '\0') goto LAB_03010320;
      if (DAT_056d6f40[lVar4 + 2] == '\0') goto LAB_03010328;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else if (*(int *)(param_1 + 0x1b0) == 4) {
    (**(code **)(DAT_056d6f28 + 0x18))(&DAT_056d6f28);
    puVar6 = DAT_056d6f30;
    if (puVar1 == DAT_056d6f30) goto LAB_03010358;
    (**(code **)(DAT_056d6f28 + 0x18))(&DAT_056d6f28);
    lVar4 = 0;
    do {
      if (DAT_056d6f30[lVar4] == '\0') goto LAB_0301032c;
      if (DAT_056d6f30[lVar4 + 1] == '\0') goto LAB_03010320;
      if (DAT_056d6f30[lVar4 + 2] == '\0') goto LAB_03010328;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    (**(code **)(DAT_056d6f18 + 0x18))(&DAT_056d6f18);
    puVar6 = DAT_056d6f20;
    if (puVar1 == DAT_056d6f20) goto LAB_03010358;
    (**(code **)(DAT_056d6f18 + 0x18))(&DAT_056d6f18);
    lVar4 = 0;
    do {
      if (DAT_056d6f20[lVar4] == '\0') goto LAB_0301032c;
      if (DAT_056d6f20[lVar4 + 1] == '\0') goto LAB_03010320;
      if (DAT_056d6f20[lVar4 + 2] == '\0') goto LAB_03010328;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_0301032c:
  iVar2 = (int)lVar4;
  if (local_a0 <= (int)lVar4) {
    iVar2 = local_a0 + -1;
  }
  memcpy(puVar1,puVar6,(long)iVar2);
  puVar1[iVar2] = 0;
LAB_03010358:
  FUN_02ee2b00(puVar5,&local_c0,1);
  return;
LAB_03010320:
  lVar4 = lVar4 + 1;
  goto LAB_0301032c;
LAB_03010328:
  lVar4 = lVar4 + 2;
  goto LAB_0301032c;
}

