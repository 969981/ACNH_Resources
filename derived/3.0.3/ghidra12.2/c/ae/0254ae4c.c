
bool FUN_0254ae4c(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint *puVar9;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*param_1 * 2;
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  if ((*puVar9 >> 0x1a & 1) == 0) {
    return false;
  }
  puVar9 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  uVar8 = *puVar9;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0254afb0;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0254afb0;
    }
  }
  uVar8 = 0;
joined_r0x0254afb0:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    uVar1 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
    if ((int)lVar6 != 1) {
      return false;
    }
    if ((uVar4 & uVar8) == 0) {
      return false;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return false;
    }
    if ((*(byte *)((long)plVar7 + 0x17d3) >> 1 & 1) == 0) {
      uVar8 = 0;
      if (plVar7[0xe] != 0) {
        uVar1 = *(uint *)(plVar7[0xe] + 0x280);
        uVar8 = 0;
        if (uVar1 < 0x149) {
          uVar8 = uVar1;
        }
      }
      return uVar8 != 8;
    }
  }
  return false;
}

