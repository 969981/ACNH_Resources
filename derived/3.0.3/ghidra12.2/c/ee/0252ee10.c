
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0252ee10(byte *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  ulong uVar6;
  short *psVar7;
  
  if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*param_1, 7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar2 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
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
      psVar7 = &DAT_054f0c08;
    }
    else {
      psVar7 = &DAT_054f0c08;
    }
  }
  else {
    psVar7 = (short *)(DAT_054f5738 + uVar6 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((((char)psVar7[0x32] != '\0') && (*psVar7 == *(short *)PTR_DAT_04bb6298)) &&
      (*(uint *)(psVar7 + 2) < 0x149)) && (*(uint *)(psVar7 + 2) == 0x11)) {
    return true;
  }
  psVar7 = (short *)PTR_DAT_04bb6298;
  if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*param_1, 7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar2 != 0) {
        DAT_054f0c6c = '\0';
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
      }
      psVar5 = &DAT_054f0c08;
      psVar7 = &DAT_04c487d4;
      cVar1 = DAT_054f0c6c;
    }
    else {
      psVar5 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
    }
  }
  else {
    lVar4 = DAT_054f5738 + uVar6 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
    psVar5 = (short *)(lVar4 + 0x6e8);
    cVar1 = *(char *)(lVar4 + 0x74c);
  }
  if (((cVar1 == '\0') || (*psVar5 != *psVar7)) || (uVar3 = *(uint *)(psVar5 + 2), 0x148 < uVar3)) {
    uVar3 = 0;
  }
  return uVar3 == 0x6f;
}

