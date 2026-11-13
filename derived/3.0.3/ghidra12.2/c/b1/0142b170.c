
void FUN_0142b170(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0142b238;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0142b238;
    }
  }
  uVar9 = 0;
joined_r0x0142b238:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc7a0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) && (lVar6 = plVar8[0x5e], lVar6 != 0)) {
      if ((param_1 & 1) == 0) {
        bVar7 = *(byte *)(lVar6 + 0x5a9) & 0xfd;
      }
      else {
        bVar7 = *(byte *)(lVar6 + 0x5a9) | 2;
      }
      *(byte *)(lVar6 + 0x5a9) = bVar7;
      FUN_013cf9c0(plVar8[0x5e],param_1 & 1);
      return;
    }
  }
  return;
}

