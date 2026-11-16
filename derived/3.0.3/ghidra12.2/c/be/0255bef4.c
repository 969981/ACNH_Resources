
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0255bef4(byte *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
    if (((DAT_054f0c70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_054f0c70), iVar3 != 0)) {
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
    psVar5 = &DAT_054f0c08;
    cVar1 = DAT_054f0c6c;
  }
  else {
    lVar6 = DAT_054f5738 + uVar7 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68;
    psVar5 = (short *)(lVar6 + 0x6e8);
    cVar1 = *(char *)(lVar6 + 0x74c);
  }
  if ((cVar1 == '\0') || (*psVar5 != DAT_04c487d4)) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(psVar5 + 0x30);
  }
  if (iVar3 == 2) {
    if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar5 = &DAT_054f0c08;
        if (iVar3 != 0) {
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
          psVar5 = &DAT_054f0c08;
        }
      }
      else {
        psVar5 = &DAT_054f0c08;
      }
    }
    else {
      psVar5 = (short *)(DAT_054f5738 + uVar7 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((char)psVar5[0x32] == '\0') || (*psVar5 != DAT_04c487d4)) ||
       (uVar4 = *(uint *)(psVar5 + 2), 0x148 < uVar4)) {
      uVar4 = 0;
    }
    bVar2 = uVar4 - 0xda < 3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

