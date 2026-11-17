
uint FUN_02b91660(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    if (((((int)param_1 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             (param_1 >> 0x14 & 0xfff) * 8), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || ((int)plVar8[0x46] != (int)param_1)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_02b91714;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02b91714:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5998);
      uVar4 = 0;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        local_40 = *param_2;
        local_38 = *(undefined4 *)(param_2 + 1);
        uStack_34 = *(undefined4 *)((long)param_2 + 0xc);
        uVar4 = FUN_02b833ec(plVar8,&local_40);
      }
      goto LAB_02b91790;
    }
  }
  uVar4 = 0;
LAB_02b91790:
  return uVar4 & 1;
}

