
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02546c1c(byte *param_1)

{
  int iVar1;
  short *psVar2;
  ulong uVar3;
  
  if ((DAT_054f5738 == 0) || (uVar3 = (ulong)*param_1, 7 < uVar3)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar2 = &DAT_054f0c08;
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
        psVar2 = &DAT_054f0c08;
      }
    }
    else {
      psVar2 = &DAT_054f0c08;
    }
  }
  else {
    psVar2 = (short *)(DAT_054f5738 + uVar3 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar3 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((((char)psVar2[0x32] != '\0') && (*psVar2 == DAT_04c487d4)) && (*(uint *)(psVar2 + 2) < 0x149)
     ) {
    switch(*(uint *)(psVar2 + 2)) {
    case 0x2a:
    case 99:
    case 100:
    case 0x65:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcc:
    case 0xcd:
      return 1;
    }
  }
  return 0;
}

