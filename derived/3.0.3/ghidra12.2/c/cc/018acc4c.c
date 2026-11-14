
void FUN_018acc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *(uint *)PTR_DAT_04bbea10;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x018acd28;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018acd28;
    }
  }
  uVar8 = 0;
joined_r0x018acd28:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbe9e8);
    if ((uVar8 & uVar3) == 1) {
      puVar5 = (undefined4 *)(**(code **)(plVar7[0xe2] + 0xf0))(plVar7 + 0xe2);
      local_34 = *puVar5;
      FUN_018acdf4(param_1,param_2,param_3,param_4,&local_34,param_5);
    }
  }
  return;
}

