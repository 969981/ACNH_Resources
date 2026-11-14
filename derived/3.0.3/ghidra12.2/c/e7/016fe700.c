
void FUN_016fe700(ulong param_1,byte param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  if (((((int)param_1 == 0) ||
       (lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8),
       lVar8 == 0)) || ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) ||
     (*(int *)(lVar8 + 0x230) != (int)param_1)) {
    lVar8 = 0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    plVar4 = (long *)PTR_DAT_04bb30c0;
    pbVar2 = PTR_DAT_04bb30c8;
    if (iVar3 < 0x11) {
      uVar6 = 1;
      goto joined_r0x016fe7bc;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x016fe7bc;
    }
  }
  uVar6 = 0;
  plVar4 = (long *)PTR_DAT_04bb30c0;
  pbVar2 = PTR_DAT_04bb30c8;
joined_r0x016fe7bc:
  PTR_DAT_04bb30c0 = (undefined *)plVar4;
  PTR_DAT_04bb30c8 = pbVar2;
  if (lVar8 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar8 + 0x150) != 1) {
      uVar6 = 1;
    }
    if ((uVar6 == 0) && ((*(uint *)(lVar8 + 0x248) >> 4 & 1) != 0)) {
      if (*(long *)(lVar8 + 0xb0) != lVar8 + 0xa8) {
        lVar7 = (long)*(int *)(lVar8 + 0xbc);
        plVar9 = (long *)(*(long *)(lVar8 + 0xb0) - lVar7);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*pbVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(pbVar2), iVar3 != 0)) {
            *plVar4 = (long)puVar1;
            __cxa_guard_release(pbVar2);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,plVar4), (uVar5 & 1) != 0)) {
            *(byte *)(plVar9 + 0x67) = param_2 & 1;
            return;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar7 + 8) - lVar7);
        } while (plVar9 != (long *)((lVar8 + 0xa8) - lVar7));
      }
    }
  }
  return;
}

