
undefined4 FUN_025581e0(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  
  uVar7 = (ulong)*param_1;
  if (7 < *param_1) {
    return 0xc;
  }
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar8 + 0x476) < 2) {
    iVar5 = FUN_02582d8c(param_1,2);
    if (iVar5 < 0) {
      return 0xc;
    }
    uVar7 = (ulong)*param_1;
    if (*param_1 < 8) goto LAB_0255826c;
    puVar9 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    bVar3 = *(byte *)(lVar8 + uVar7 * 4 + 0x44e);
    if ((long)(char)bVar3 == 0xffffffffffffffff) {
      return 0xc;
    }
    pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar8 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) == 0) {
      return 0xc;
    }
LAB_0255826c:
    puVar9 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar9 = (uint *)(DAT_054f5738 + uVar7 * 4 + 0xde8);
    }
  }
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0xc;
  }
  uVar11 = *puVar9;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x02558338;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02558338;
    }
  }
  uVar11 = 0;
joined_r0x02558338:
  if (plVar10 == (long *)0x0) {
    return 0xc;
  }
  lVar8 = plVar10[0x2a];
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar11;
  }
  if ((uVar7 & 1) == 0) {
    return 0xc;
  }
  if (uVar1 == 0) {
    return 0xc;
  }
  return (int)plVar10[0x3b3];
}

