
undefined8 FUN_0252abe0(byte *param_1,long *param_2,byte param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined1 *__src;
  undefined *local_b0;
  undefined1 *puStack_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  byte local_46;
  
  puVar4 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar2 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar2 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar10 = *puVar2;
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar10 == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0252adf8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252adf8;
    }
  }
  uVar10 = 0;
joined_r0x0252adf8:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar8 = plVar9[0x2a];
  uVar3 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
  if ((int)lVar8 != 1) {
    return 0;
  }
  if ((uVar6 & uVar10) == 0) {
    return 0;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    return 0;
  }
  local_5d = 0;
  local_a0 = 0x40;
  local_48 = 0;
  local_46 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_9c[0] = 0;
  lVar8 = plVar9[0xd];
  local_4c = *(undefined4 *)(lVar8 + 0x2b4);
  local_50 = *(undefined4 *)(lVar8 + 0x280);
  local_58 = *(undefined8 *)(lVar8 + 0x278);
  puStack_a8 = local_9c;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (local_9c != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0252ae24;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0252ae24;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0252ae24;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0252ae24:
    iVar5 = (int)lVar8;
    if (local_a0 <= (int)lVar8) {
      iVar5 = local_a0 + -1;
    }
    memcpy(local_9c,__src,(long)iVar5);
    local_9c[iVar5] = 0;
  }
  local_46 = param_3 & 1;
  FUN_02412054(plVar9,&local_b0);
  return 1;
}

