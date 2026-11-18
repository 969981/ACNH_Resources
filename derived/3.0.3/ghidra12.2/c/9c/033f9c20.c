
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_033f9c20(byte *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  
  lVar3 = *(long *)PTR_DAT_04bb4718;
  if ((lVar3 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
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
    lVar3 = lVar3 + uVar4 * 0xd0 + (ulong)(*(uint *)(lVar3 + uVar4 * 4 + 0xd68) & 1) * 0x68;
    psVar5 = (short *)(lVar3 + 0x6e8);
    cVar1 = *(char *)(lVar3 + 0x74c);
  }
  if (((cVar1 != '\0') && (*psVar5 == *(short *)PTR_DAT_04bb6298)) && (*(int *)(psVar5 + 0x30) != 1)
     ) {
    lVar3 = *(long *)PTR_DAT_04bb4718;
    if ((lVar3 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
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
      lVar3 = lVar3 + uVar4 * 0xd0 + (ulong)(*(uint *)(lVar3 + uVar4 * 4 + 0xd68) & 1) * 0x68;
      psVar5 = (short *)(lVar3 + 0x6e8);
      cVar1 = *(char *)(lVar3 + 0x74c);
    }
    if (((cVar1 == '\0') || (*psVar5 != *(short *)PTR_DAT_04bb6298)) ||
       (*(int *)(psVar5 + 0x30) != 7)) {
      lVar3 = *(long *)PTR_DAT_04bb4718;
      if ((lVar3 == 0) || (uVar4 = (ulong)*param_1, 7 < uVar4)) {
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
        lVar3 = lVar3 + uVar4 * 0xd0 + (ulong)(*(uint *)(lVar3 + uVar4 * 4 + 0xd68) & 1) * 0x68;
        psVar5 = (short *)(lVar3 + 0x6e8);
        cVar1 = *(char *)(lVar3 + 0x74c);
      }
      if ((cVar1 == '\0') || (*psVar5 != *(short *)PTR_DAT_04bb6298)) {
        return false;
      }
      return *(int *)(psVar5 + 0x30) == 9;
    }
  }
  return true;
}

