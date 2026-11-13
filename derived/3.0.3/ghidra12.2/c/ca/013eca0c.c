
undefined8 FUN_013eca0c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar9 = *param_1;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x013ecac4;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013ecac4;
    }
  }
  uVar9 = 0;
joined_r0x013ecac4:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc7b0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    lVar7 = plVar8[0x58];
    if (lVar7 != 0) {
      if (((*(int *)(lVar7 + 0x280) != 7) || (*(int *)(lVar7 + 0x41c) < *(int *)(lVar7 + 0x420))) ||
         (*(float *)(lVar7 + 0x428) <= 0.0)) {
        *(byte *)(lVar7 + 0x300) = *(byte *)(lVar7 + 0x300) & 0xef;
        uVar6 = 0;
        if (*(int *)(lVar7 + 0x41c) < *(int *)(lVar7 + 0x420)) {
          return 0;
        }
        uVar10 = 0xbf800000;
      }
      else {
        *(byte *)(lVar7 + 0x300) = *(byte *)(lVar7 + 0x300) | 0x10;
        uVar10 = 0;
        uVar6 = 1;
      }
      *(undefined4 *)(lVar7 + 0x428) = uVar10;
      return uVar6;
    }
  }
  return 0;
}

