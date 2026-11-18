
void FUN_0369208c(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
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
      goto joined_r0x03692168;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03692168;
    }
  }
  uVar9 = 0;
joined_r0x03692168:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3740);
    if ((((uVar9 & uVar3) == 1) && (uVar5 = FUN_03692280(param_1,(ulong)param_2), (uVar5 & 1) == 0))
       && (plVar8[0x76] != 0)) {
      if (*(char *)((long)plVar8 + 0x484) == '\0') {
        uVar6 = 0;
        pcStack_38 = "PlayerClosetUIChangePause";
      }
      else {
        uVar5 = (ulong)*(uint *)(plVar8 + 0x91);
        uVar6 = 1;
        if (1 < *(uint *)(plVar8 + 0x91)) {
          uVar5 = 0;
        }
        pcStack_38 = (&PTR_s_MannequinPause04_04906ac8)[uVar5];
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      FUN_017081d0(plVar8[0x76],&local_40,6,uVar6,0);
    }
  }
  return;
}

