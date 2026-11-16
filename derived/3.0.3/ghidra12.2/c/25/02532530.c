
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02532530(byte *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  
  if ((DAT_054f5738 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
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
      psVar5 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
    }
    else {
      psVar5 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
    }
  }
  else {
    lVar3 = DAT_054f5738 + uVar4 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68;
    psVar5 = (short *)(lVar3 + 0x6e8);
    cVar1 = *(char *)(lVar3 + 0x74c);
  }
  if ((((cVar1 != '\0') && (*psVar5 == DAT_04c487d4)) && (*(uint *)(psVar5 + 2) < 0x149)) &&
     (*(uint *)(psVar5 + 2) == 0x19)) {
    if ((DAT_054f5738 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
      if (((DAT_054f0c70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_054f0c70), iVar2 != 0)) {
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
      cVar1 = DAT_054f0c6c;
    }
    else {
      lVar3 = DAT_054f5738 + uVar4 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68;
      psVar5 = (short *)(lVar3 + 0x6e8);
      cVar1 = *(char *)(lVar3 + 0x74c);
    }
    if (cVar1 == '\0') {
      return 1;
    }
    if (*psVar5 != DAT_04c487d4) {
      return 1;
    }
    if (*(int *)(psVar5 + 0x30) == 1) {
      return 1;
    }
  }
  return 0;
}

