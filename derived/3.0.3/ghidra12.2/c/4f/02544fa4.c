
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02544fa4(byte *param_1)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  ulong uVar4;
  
  if ((DAT_054f5738 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar3 = &DAT_054f0c08;
      if (iVar1 != 0) {
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
    psVar3 = (short *)(DAT_054f5738 + uVar4 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar3[0x32] == '\0') || (*psVar3 != DAT_04c487d4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(uint *)(psVar3 + 0x30);
  }
  return (uint)(8 < uVar2) | 99U >> (ulong)(uVar2 & 0x1f) & 1;
}

