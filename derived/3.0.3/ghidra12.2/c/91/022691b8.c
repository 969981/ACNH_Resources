
uint FUN_022691b8(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb4128 + 0x344 + (ulong)*param_1 * 8;
  if (6 < *param_1) {
    lVar8 = *(long *)PTR_DAT_04bb4128 + 0x344;
  }
  uVar2 = *(uint *)(lVar8 + 4);
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    if ((((uVar2 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar2)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar4;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
        if (*(uint *)(lVar8 + 0x5e8) < 5) {
          uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar3 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      if (((*PTR_DAT_04bb4160 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4160);
      }
      uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb4158);
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar3;
      }
      if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
        *(undefined4 *)((long)plVar9 + 0x48c) = *param_2;
        *(undefined4 *)(plVar9 + 0x92) = param_2[1];
        *(undefined4 *)((long)plVar9 + 0x494) = param_2[2];
        *(undefined4 *)(plVar9 + 0x93) = *param_3;
        *(uint *)(plVar9 + 0x83) = *(uint *)(plVar9 + 0x83) | 0x100;
        (**(code **)(*(long *)plVar9[0xd] + 0x160))((long *)plVar9[0xd],param_3);
        (**(code **)(*(long *)plVar9[0xd] + 0x140))((long *)plVar9[0xd],param_2,1);
      }
    }
  }
  return uVar2;
}

