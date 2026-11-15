
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_024f6c7c(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  long lVar9;
  short *psVar10;
  
  puVar2 = PTR_DAT_04bb4718;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_024f6d00;
LAB_024f6d60:
    uVar6 = (uint)*pbVar7;
    if (7 < uVar6) {
      uVar6 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if ((*pbVar7 < 8) ||
       (((*(int *)(lVar9 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar7 < 8)))) goto LAB_024f6d60;
LAB_024f6d00:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_024f6d58:
      pbVar7 = PTR_DAT_04bb5038;
      goto LAB_024f6d60;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar1 = *(byte *)(lVar9 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar1 != 0xffffffffffffffff) {
      puVar8 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
      if (7 < bVar1) {
        puVar8 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar8 & 8) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x471);
      }
    }
    uVar6 = (uint)*pbVar7;
    if (7 < *pbVar7) goto LAB_024f6d58;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar8 = (uint *)&DAT_054f0958;
    }
    else {
      puVar8 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar8 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar6 < 8) {
      puVar8 = puVar8 + (ulong)uVar6 * 2;
    }
  }
  if ((*puVar8 >> 2 & 1) != 0) {
    return 1;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_024f6e08:
    if (7 < *pbVar7) {
LAB_024f6e14:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar1 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar1 != 0xffffffffffffffff) {
          puVar8 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
          if (7 < bVar1) {
            puVar8 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar8 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        uVar6 = (uint)*pbVar7;
        if (*pbVar7 < 8) goto LAB_024f6e84;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (lVar9 = *(long *)puVar2, lVar9 != 0)) {
        pbVar7 = (byte *)(lVar9 + 0x11a5);
        goto LAB_024f6e08;
      }
      goto LAB_024f6e14;
    }
  }
  uVar6 = (uint)*pbVar7;
  if (7 < uVar6) {
    uVar6 = 0xff;
  }
LAB_024f6e84:
  lVar9 = *(long *)puVar2;
  if ((lVar9 == 0) || (7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar10 = &DAT_054f0c08;
      if (iVar3 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar10 = &DAT_054f0c08;
    }
  }
  else {
    psVar10 = (short *)(lVar9 + (ulong)uVar6 * 0xd0 +
                        (ulong)(*(uint *)(lVar9 + (ulong)uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((((char)psVar10[0x32] != '\0') && (*psVar10 == *(short *)PTR_DAT_04bb6298)) &&
      (*(uint *)(psVar10 + 2) < 0x149)) && (*(uint *)(psVar10 + 2) == 0xfe)) {
    return 1;
  }
  lVar9 = FUN_0252d9bc(0);
  lVar4 = FUN_0252dec4(0);
  if (lVar9 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_02520240(0,lVar9,lVar4 + 4);
  return uVar5;
}

