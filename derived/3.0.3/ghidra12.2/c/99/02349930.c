
void FUN_02349930(ulong param_1,uint param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if (((((int)param_1 == 0) ||
       (lVar8 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8),
       lVar8 == 0)) || ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) ||
     (*(int *)(lVar8 + 0x230) != (int)param_1)) {
    lVar8 = 0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    plVar4 = (long *)PTR_DAT_04bb30c0;
    pbVar2 = PTR_DAT_04bb30c8;
    if (iVar3 < 0x11) {
      uVar7 = 1;
      goto joined_r0x023499ec;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x023499ec;
    }
  }
  uVar7 = 0;
  plVar4 = (long *)PTR_DAT_04bb30c0;
  pbVar2 = PTR_DAT_04bb30c8;
joined_r0x023499ec:
  PTR_DAT_04bb30c0 = (undefined *)plVar4;
  PTR_DAT_04bb30c8 = pbVar2;
  if (lVar8 != 0) {
    uVar7 = uVar7 ^ 1;
    if (*(int *)(lVar8 + 0x150) != 1) {
      uVar7 = 1;
    }
    if (uVar7 == 0) {
      if (*(long *)(lVar8 + 0xb0) != lVar8 + 0xa8) {
        lVar6 = (long)*(int *)(lVar8 + 0xbc);
        plVar9 = (long *)(*(long *)(lVar8 + 0xb0) - lVar6);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*pbVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(pbVar2), iVar3 != 0)) {
            *plVar4 = (long)puVar1;
            __cxa_guard_release(pbVar2);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,plVar4), (uVar5 & 1) != 0)) {
            lVar6 = plVar9[0x51];
            if (lVar6 == 0) {
              return;
            }
            if ((param_2 & 1) == (*(uint *)(lVar6 + 0x48) & 0x10000) >> 0x10) {
              return;
            }
            uVar7 = 0x10000;
            if ((param_2 & 1) == 0) {
              uVar7 = 0;
            }
            *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) & 0xfffeffff | uVar7;
            return;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar6 + 8) - lVar6);
        } while (plVar9 != (long *)((lVar8 + 0xa8) - lVar6));
      }
    }
  }
  return;
}

