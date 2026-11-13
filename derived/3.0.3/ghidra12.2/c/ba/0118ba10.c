
void FUN_0118ba10(undefined4 param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = FUN_0118d2d0(*(long *)PTR_DAT_04bb5c90 + 0x8c0,param_1);
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar4 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
  if (((lVar9 == 0) || ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar9 + 0x230) != uVar4)) {
    lVar9 = 0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    puVar1 = (undefined8 *)PTR_DAT_04bbb8a0;
    pbVar2 = PTR_DAT_04bbb8a8;
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto joined_r0x0118bae0;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0118bae0;
    }
  }
  uVar4 = 0;
  puVar1 = (undefined8 *)PTR_DAT_04bbb8a0;
  pbVar2 = PTR_DAT_04bbb8a8;
joined_r0x0118bae0:
  PTR_DAT_04bbb8a0 = (undefined *)puVar1;
  PTR_DAT_04bbb8a8 = pbVar2;
  if (lVar9 != 0) {
    uVar4 = uVar4 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar4 = 1;
    }
    if ((uVar4 == 0) && ((*(uint *)(lVar9 + 0x248) >> 4 & 1) != 0)) {
      if (*(long *)(lVar9 + 0xb0) != lVar9 + 0xa8) {
        lVar8 = (long)*(int *)(lVar9 + 0xbc);
        plVar6 = (long *)(*(long *)(lVar9 + 0xb0) - lVar8);
        do {
          if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
            *puVar1 = &PTR_LAB_04983b50;
            __cxa_guard_release(pbVar2);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar1), (uVar7 & 1) != 0)) {
            *(uint *)(plVar6 + 0x56) = *(uint *)(plVar6 + 0x56) | 2;
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((lVar9 + 0xa8) - lVar8));
      }
    }
  }
  return;
}

