
void FUN_0211f950(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long local_50;
  undefined1 local_48;
  undefined2 local_46;
  
  puVar3 = PTR_DAT_04bb27c0;
  local_48 = 0;
  local_50 = 0;
  local_46 = *(undefined2 *)PTR_DAT_04bb3170;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0211f9f8;
LAB_0211fa64:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_0211fa80;
    uVar13 = *(uint *)(*(long *)PTR_DAT_04bb4718 + uVar9 * 4 + 0xde8);
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    uVar9 = (ulong)*pbVar10;
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar9 = (ulong)bVar2, bVar2 < 8))))
    goto LAB_0211fa64;
LAB_0211f9f8:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x471);
        }
      }
      uVar9 = (ulong)*pbVar10;
      if (*pbVar10 < 8) goto LAB_0211fa64;
    }
    uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0211fa64;
LAB_0211fa80:
    uVar13 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar13 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0211fb30;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0211fb30:
    uVar13 = 0;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3770);
  puVar5 = PTR_DAT_04bb37a0;
  if ((uVar13 & uVar7) != 1) {
    return;
  }
  plVar12 = (long *)plVar12[0xc];
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb37a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37a0);
  }
  puVar4 = PTR_DAT_04bb3798;
  uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
  if ((uVar9 & 1) == 0) {
    return;
  }
  local_50 = plVar12[0x1835];
  local_48 = (undefined1)plVar12[0x1836];
  local_46 = *(undefined2 *)((long)plVar12 + 0xc1b2);
  uVar13 = *(uint *)(param_1 + 0xf0);
  if (uVar13 == 0) {
    return;
  }
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto LAB_0211fc7c;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto LAB_0211fc7c;
    }
  }
  uVar13 = 0;
LAB_0211fc7c:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if (((uVar13 & uVar7) == 1) && (plVar12 = (long *)plVar12[0xc], plVar12 != (long *)0x0)) {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar6 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
      if ((uVar9 & 1) != 0) {
        FUN_02346fe0(plVar12,&local_50);
      }
    }
  }
  return;
}

