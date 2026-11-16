
undefined8 FUN_02539c48(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    uVar7 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02539cd0;
LAB_02539d3c:
    if (DAT_054f5738 == 0) goto LAB_02539d58;
    uVar12 = *(uint *)(DAT_054f5738 + uVar7 * 4 + 0xde8);
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    uVar7 = (ulong)*pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar9 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar7 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_02539d3c;
LAB_02539cd0:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar11 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar11 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar11 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      uVar7 = (ulong)*pbVar8;
      if (*pbVar8 < 8) goto LAB_02539d3c;
    }
    uVar7 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02539d3c;
LAB_02539d58:
    uVar12 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar12 == 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x02539e00;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02539e00;
    }
  }
  uVar12 = 0;
joined_r0x02539e00:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  uVar1 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar12) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  uVar7 = FUN_02546f34(plVar10 + 0x3dd,(int)plVar10[0x46]);
  if ((uVar7 & 1) == 0) {
    local_44 = 0;
    local_4c = 6;
    local_48 = 1;
    FUN_02374e74(plVar10,&local_4c);
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar11 = &DAT_054f08d0;
      if (iVar4 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar11 = &DAT_054f08d0;
    }
  }
  else {
    puVar11 = (uint *)(DAT_054f5738 + 0x200);
  }
  *puVar11 = *puVar11 & 0xfffffbff;
  return 1;
}

