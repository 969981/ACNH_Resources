
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02118e50(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  
  FUN_02119038();
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_02118ec4:
    if (7 < *pbVar7) {
LAB_02118ed0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        uVar6 = (uint)*pbVar7;
        if (*pbVar7 < 8) goto LAB_02118f40;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02118ec4;
      }
      goto LAB_02118ed0;
    }
  }
  uVar6 = (uint)*pbVar7;
  if (7 < uVar6) {
    uVar6 = 0xff;
  }
LAB_02118f40:
  if ((DAT_054f5738 == 0) || (7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar5 = &DAT_054f0c08;
      if (iVar3 != 0) {
        DAT_054f0c6c = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
        psVar5 = &DAT_054f0c08;
      }
    }
    else {
      psVar5 = &DAT_054f0c08;
    }
  }
  else {
    psVar5 = (short *)(DAT_054f5738 + (ulong)uVar6 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + (ulong)uVar6 * 4 + 0xd68) & 1) * 0x68 +
                      0x6e8);
  }
  if (((char)psVar5[0x32] == '\0') || (*psVar5 != DAT_04c487d4)) {
    uVar4 = 1;
  }
  else {
    uVar4 = *(undefined4 *)(psVar5 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x1620) = uVar4;
  return;
}

