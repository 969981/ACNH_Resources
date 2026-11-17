
void FUN_02a563f8(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_34 = 0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    if (((((int)param_2 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             (param_2 >> 0x14 & 0xfff) * 8), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || ((int)plVar9[0x46] != (int)param_2)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_02a564b0;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02a564b0:
      uVar10 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[0x2a];
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
      uVar6 = 0;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar10;
      }
      uVar8 = 0;
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        uVar6 = (undefined4)plVar9[0x59];
        uVar8 = *(undefined4 *)((long)plVar9 + 0x2cc);
        local_34 = (undefined4)plVar9[0x5a];
      }
      goto LAB_02a56524;
    }
  }
  uVar6 = 0;
  uVar8 = 0;
LAB_02a56524:
  *param_1 = uVar6;
  param_1[1] = uVar8;
  param_1[2] = local_34;
  return;
}

