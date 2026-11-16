
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0251dab4(void)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  long lVar7;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08d8);
      if (iVar2 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
      puVar5 = &DAT_054f08d0;
    }
    else {
      puVar5 = &DAT_054f08d0;
    }
  }
  else {
    puVar5 = (uint *)(DAT_054f5738 + 0x200);
  }
  if ((*puVar5 >> 9 & 1) != 0) {
    return false;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_0251db74:
    if (7 < *pbVar6) {
LAB_0251db80:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar1 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar1 != 0xffffffffffffffff) {
          puVar5 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
          if (7 < bVar1) {
            puVar5 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar5 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        uVar4 = (uint)*pbVar6;
        if (*pbVar6 < 8) goto LAB_0251dbf0;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0251db74;
      }
      goto LAB_0251db80;
    }
  }
  uVar4 = (uint)*pbVar6;
  if (7 < uVar4) {
    uVar4 = 0xff;
  }
LAB_0251dbf0:
  if ((DAT_054f5738 == 0) || (7 < uVar4)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar3 = &DAT_054f0c08;
      if (iVar2 != 0) {
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
        psVar3 = &DAT_054f0c08;
      }
    }
    else {
      psVar3 = &DAT_054f0c08;
    }
  }
  else {
    psVar3 = (short *)(DAT_054f5738 + (ulong)uVar4 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + (ulong)uVar4 * 4 + 0xd68) & 1) * 0x68 +
                      0x6e8);
  }
  if ((((char)psVar3[0x32] == '\0') || (*psVar3 != DAT_04c487d4)) ||
     (uVar4 = *(uint *)(psVar3 + 2), 0x148 < uVar4)) {
    uVar4 = 0;
  }
  return uVar4 != 0xf7;
}

