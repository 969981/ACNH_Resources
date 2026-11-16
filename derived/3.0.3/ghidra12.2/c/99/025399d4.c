
undefined8 FUN_025399d4(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02539a54;
LAB_02539ac0:
    if (DAT_054f5738 == 0) goto LAB_02539adc;
    uVar13 = *(uint *)(DAT_054f5738 + uVar9 * 4 + 0xde8);
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    uVar9 = (ulong)*pbVar10;
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar9 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_02539ac0;
LAB_02539a54:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x471);
        }
      }
      uVar9 = (ulong)*pbVar10;
      if (*pbVar10 < 8) goto LAB_02539ac0;
    }
    uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02539ac0;
LAB_02539adc:
    uVar13 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar13 == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x02539b9c;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02539b9c;
    }
  }
  uVar13 = 0;
joined_r0x02539b9c:
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    uVar2 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3770);
    if ((((int)lVar11 == 1) && ((uVar6 & uVar13) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      uVar8 = FUN_023bb180(plVar12,0);
      return uVar8;
    }
  }
  return 0;
}

