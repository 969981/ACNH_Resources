
undefined8 FUN_02085e20(long param_1,undefined4 param_2,ulong param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *__dest;
  long *plVar12;
  undefined1 *puVar13;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  int local_54;
  
  if ((param_5 & 1) != 0) {
    piVar4 = (int *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x294) * 0x20;
    if (4 < *(uint *)(param_1 + 0x294)) {
      piVar4 = (int *)(param_1 + 0x10);
    }
    local_54 = *piVar4;
    if (local_54 == 4) {
      return 0;
    }
  }
  uVar8 = FUN_02085a50(param_1,4,param_2);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  lVar1 = param_1 + 0x10;
  lVar11 = lVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
  if (4 < *(uint *)(param_1 + 0x294)) {
    lVar11 = lVar1;
  }
  iVar7 = (int)param_3;
  *(int *)(lVar11 + 8) = iVar7;
  local_5d = 0;
  local_a0 = 0x40;
  lVar11 = lVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
  if (4 < *(uint *)(param_1 + 0x294)) {
    lVar11 = lVar1;
  }
  local_b0 = PTR_DAT_04bb2f70 + 0x10;
  local_a8 = local_9c;
  (**(code **)(*param_4 + 0x18))(param_4);
  puVar13 = (undefined1 *)param_4[1];
  if (local_9c != puVar13) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar10 = 0;
    do {
      if (*(char *)(param_4[1] + lVar10) == '\0') goto LAB_02085f54;
      lVar2 = param_4[1] + lVar10;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_02085f54;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_02085f54;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_02085f54:
    iVar3 = (int)lVar10;
    if (local_a0 <= (int)lVar10) {
      iVar3 = local_a0 + -1;
    }
    memcpy(local_9c,puVar13,(long)iVar3);
    local_9c[iVar3] = 0;
  }
  puVar13 = local_a8;
  puVar5 = PTR_DAT_04bb2bc0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  __dest = *(undefined1 **)(lVar11 + 0x20);
  local_a8[(long)local_a0 + -1] = 0;
  if (__dest != local_a8) {
    (**(code **)(puVar5 + 0x28))(&local_b0);
    lVar10 = 0;
    do {
      if (local_a8[lVar10] == '\0') goto LAB_02086000;
      if (local_a8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_02086000;
      }
      if (local_a8[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_02086000;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_02086000:
    iVar3 = (int)lVar10;
    if (*(int *)(lVar11 + 0x28) <= (int)lVar10) {
      iVar3 = *(int *)(lVar11 + 0x28) + -1;
    }
    memcpy(__dest,puVar13,(long)iVar3);
    __dest[iVar3] = 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    if ((((iVar7 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              (param_3 >> 0x14 & 0xfff) * 8), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || ((int)plVar12[0x46] != iVar7)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar9 + 0x60))();
    }
  }
  lVar11 = lVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
  if (4 < *(uint *)(param_1 + 0x294)) {
    lVar11 = lVar1;
  }
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (plVar12 == (long *)0x0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3758);
  }
  *(byte *)(lVar11 + 0x7c) = bVar6 & 1;
  return 1;
}

