
void FUN_03692c40(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  *(uint *)(param_1 + 0x2730) = param_2;
  *(undefined1 *)(param_1 + 0x272c) = 1;
  *(char *)(param_1 + 0x2734) = (char)(1 << (ulong)(param_2 & 0x1f));
  FUN_03694f70();
  *(undefined1 *)(param_1 + 0x272c) = 0;
  *(undefined1 *)(param_1 + 0x2734) = 0;
  *(undefined4 *)(param_1 + 0x2730) = 0xffffffff;
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)param_2) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x40);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x03692d4c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03692d4c;
    }
  }
  uVar9 = 0;
joined_r0x03692d4c:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3740);
    if (((uVar9 & uVar3) == 1) && (plVar8 = (long *)plVar8[0xc], plVar8 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
      if ((uVar5 & 1) != 0) {
        *(uint *)(param_1 + 0x2738) = param_2;
        puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar9 = *puVar6 ^ *puVar6 << 0xb;
        uVar3 = puVar6[3];
        *puVar6 = puVar6[1];
        puVar6[1] = puVar6[2];
        uVar9 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3;
        puVar6[2] = uVar3;
        puVar6[3] = uVar9;
        *(int *)(param_1 + 0x273c) = (int)((ulong)uVar9 * 6 >> 0x20);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "ClosetUIPoseType";
        if (((plVar8[0x227] != 0) && (lVar7 = *(long *)(plVar8[0x227] + 0x78), lVar7 != 0)) &&
           (plVar4 = *(long **)(lVar7 + 0x48), plVar4 != (long *)0x0)) {
          local_40 = puVar1;
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_40);
        }
        pcStack_38 = "CommonClosetUISameSelecting";
        local_40 = puVar1;
        FUN_017081d0(plVar8,&local_40,6,0,0);
      }
    }
  }
  return;
}

