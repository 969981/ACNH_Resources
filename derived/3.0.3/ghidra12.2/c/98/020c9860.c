
void FUN_020c9860(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  byte local_38 [4];
  byte local_34 [4];
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x020c9920;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020c9920;
    }
  }
  uVar8 = 0;
joined_r0x020c9920:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) &&
       (plVar7 = (long *)plVar7[0x77], plVar7 != (long *)0x0)) {
      local_38[0] = *(byte *)(param_1 + 8);
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      local_34[0] = local_38[0];
      (**(code **)(*plVar7 + 0x2f0))(plVar7,local_34);
      if (((((uint)plVar7[0x15ab] >> 8 & 1) != 0) && ((*(byte *)(plVar7 + 0xf25) & 1) != 0)) &&
         (4 < (int)plVar7[0xef6] - 3U)) {
        plVar7[0x15ab] = plVar7[0x15ab] | 0x20000000000000;
        FUN_01ea5c80(plVar7,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,1,local_38);
        plVar7[0x15ab] = plVar7[0x15ab] & 0xffdfffffffffffff;
      }
    }
  }
  return;
}

