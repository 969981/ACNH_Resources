
/* WARNING: Removing unreachable block (ram,0x02269a24) */
/* WARNING: Removing unreachable block (ram,0x02269a28) */

uint FUN_02269800(undefined8 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,uint *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb3238;
  uVar4 = *(uint *)PTR_DAT_04bb3238;
  iVar5 = *param_2;
  if (iVar5 == 2) {
LAB_02269858:
    uVar4 = FUN_020e7d28(*(undefined8 *)PTR_DAT_04bb4128,param_1);
  }
  else if (iVar5 == 1) {
    uVar4 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,param_1);
  }
  else if (iVar5 == 0) goto LAB_02269858;
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    if ((((uVar4 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8)
         , plVar10 == (long *)0x0)) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar10 + 0x46) != uVar4)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02269924;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02269924:
      uVar6 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      if (((*PTR_DAT_04bb4160 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4160);
      }
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4158);
      uVar11 = 0;
      if ((int)lVar9 == 1) {
        uVar11 = uVar6;
      }
      if (((uVar8 & 1) != 0) && (uVar11 != 0)) {
        *(undefined4 *)((long)plVar10 + 0x48c) = *param_3;
        *(undefined4 *)(plVar10 + 0x92) = param_3[1];
        *(undefined4 *)((long)plVar10 + 0x494) = param_3[2];
        *(undefined4 *)(plVar10 + 0x93) = *param_4;
        *(uint *)(plVar10 + 0x83) = *(uint *)(plVar10 + 0x83) | 0x100;
        (**(code **)(*(long *)plVar10[0xd] + 0x160))();
        (**(code **)(*(long *)plVar10[0xd] + 0x140))((long *)plVar10[0xd],param_3,1);
      }
    }
  }
  uVar6 = *(uint *)puVar3;
  if (*param_2 != 0) goto LAB_022699dc;
  uVar6 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,param_1);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) goto LAB_022699dc;
  if ((((uVar6 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8),
       plVar10 == (long *)0x0)) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar6)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02269af0;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02269af0:
    uVar11 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4158);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      *(undefined4 *)((long)plVar10 + 0x48c) = *param_3;
      *(undefined4 *)(plVar10 + 0x92) = param_3[1];
      *(undefined4 *)((long)plVar10 + 0x494) = param_3[2];
      *(undefined4 *)(plVar10 + 0x93) = *param_4;
      *(uint *)(plVar10 + 0x83) = *(uint *)(plVar10 + 0x83) | 0x100;
      (**(code **)(*(long *)plVar10[0xd] + 0x160))();
      (**(code **)(*(long *)plVar10[0xd] + 0x140))((long *)plVar10[0xd],param_3,1);
    }
  }
LAB_022699dc:
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar6;
  }
  return uVar4;
}

