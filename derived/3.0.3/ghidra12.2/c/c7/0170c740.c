
void FUN_0170c740(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_1 == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x20 + 0x28);
  if (uVar7 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar7 >> 0x11) & 0x7ff8));
  if (((lVar11 == 0) || ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar11 + 0x230) != uVar7)) {
    lVar11 = 0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    plVar5 = (long *)PTR_DAT_04bb30c0;
    pbVar3 = PTR_DAT_04bb30c8;
    if (iVar4 < 0x11) {
      uVar7 = 1;
      goto joined_r0x0170c814;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0170c814;
    }
  }
  uVar7 = 0;
  plVar5 = (long *)PTR_DAT_04bb30c0;
  pbVar3 = PTR_DAT_04bb30c8;
joined_r0x0170c814:
  PTR_DAT_04bb30c0 = (undefined *)plVar5;
  PTR_DAT_04bb30c8 = pbVar3;
  if (lVar11 != 0) {
    uVar7 = uVar7 ^ 1;
    if (*(int *)(lVar11 + 0x150) != 1) {
      uVar7 = 1;
    }
    if (uVar7 == 0) {
      if (*(long *)(lVar11 + 0xb0) != lVar11 + 0xa8) {
        lVar8 = (long)*(int *)(lVar11 + 0xbc);
        plVar12 = (long *)(*(long *)(lVar11 + 0xb0) - lVar8);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*pbVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar3), iVar4 != 0)) {
            *plVar5 = (long)puVar1;
            __cxa_guard_release(pbVar3);
          }
          if ((plVar12 != (long *)0x0) &&
             (uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,plVar5), (uVar6 & 1) != 0)) {
            lVar8 = plVar12[0x51];
            if (lVar8 == 0) {
              return;
            }
            uVar7 = *(uint *)(lVar8 + 0x10);
            if ((int)uVar7 < 1) {
              return;
            }
            uVar9 = 0;
            uVar10 = 0x10000000;
            if ((param_2 & 1) == 0) {
              uVar10 = 0;
            }
            do {
              uVar2 = uVar9;
              if (*(uint *)(lVar8 + 0x10) <= uVar9) {
                uVar2 = 0;
              }
              uVar9 = uVar9 + 1;
              lVar11 = *(long *)(lVar8 + 0x18) + (ulong)uVar2 * 0x48;
              *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) & 0xefffffff | uVar10;
            } while (uVar7 != uVar9);
            return;
          }
          plVar12 = (long *)(*(long *)((long)plVar12 + lVar8 + 8) - lVar8);
        } while (plVar12 != (long *)((lVar11 + 0xa8) - lVar8));
      }
    }
  }
  return;
}

