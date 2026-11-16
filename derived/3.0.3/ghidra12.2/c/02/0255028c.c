
undefined8 FUN_0255028c(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar7 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar10 = *puVar7;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02550408;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02550408;
    }
  }
  uVar10 = 0;
joined_r0x02550408:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar9[0x2a];
  uVar1 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
  if ((int)lVar6 != 1) {
    return 0;
  }
  if ((uVar4 & uVar10) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)((long)plVar9 + 0x17d2) >> 3 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar8 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar8 = &DAT_054f0958;
      }
    }
    else {
      puVar8 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar8 = puVar8 + *param_1;
      }
    }
    *(uint *)((long)puVar8 + 4) = *(uint *)((long)puVar8 + 4) | 0x1000;
  }
  return 1;
}

