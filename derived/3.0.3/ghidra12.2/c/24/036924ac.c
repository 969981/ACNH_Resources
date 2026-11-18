
void FUN_036924ac(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)param_2) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x40);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0369257c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0369257c;
    }
  }
  uVar9 = 0;
joined_r0x0369257c:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3740);
    if (((uVar9 & uVar3) == 1) && (plVar8[0x76] != 0)) {
      if (*(char *)((long)plVar8 + 0x484) == '\0') {
        uVar5 = 0;
        pcStack_28 = "PlayerClosetUIChangePause";
      }
      else {
        uVar7 = (ulong)*(uint *)(plVar8 + 0x91);
        uVar5 = 1;
        if (1 < *(uint *)(plVar8 + 0x91)) {
          uVar7 = 0;
        }
        pcStack_28 = (&PTR_s_MannequinPause04_04906ac8)[uVar7];
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      FUN_017081d0(plVar8[0x76],&local_30,6,uVar5,0);
    }
  }
  return;
}

