
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0255b714(byte *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_2 & 1) != 0) {
    if ((DAT_054f5738 == 0) || (uVar5 = (ulong)*param_1, 7 < uVar5)) {
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
        psVar3 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
      else {
        psVar3 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
    }
    else {
      lVar4 = DAT_054f5738 + uVar5 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68;
      psVar3 = (short *)(lVar4 + 0x6e8);
      cVar1 = *(char *)(lVar4 + 0x74c);
    }
    if ((((cVar1 != '\0') && (*psVar3 == *(short *)PTR_DAT_04bb6298)) &&
        (*(uint *)(psVar3 + 2) < 0x149)) && (*(uint *)(psVar3 + 2) == 0x10)) {
      return 1;
    }
  }
  if ((DAT_054f5738 == 0) || (uVar5 = (ulong)*param_1, 7 < uVar5)) {
    if (((DAT_054f0c70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_054f0c70), iVar2 != 0)) {
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
    psVar3 = &DAT_054f0c08;
    cVar1 = DAT_054f0c6c;
  }
  else {
    lVar4 = DAT_054f5738 + uVar5 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68;
    psVar3 = (short *)(lVar4 + 0x6e8);
    cVar1 = *(char *)(lVar4 + 0x74c);
  }
  if (((cVar1 != '\0') && (*psVar3 == *(short *)PTR_DAT_04bb6298)) &&
     ((*(uint *)(psVar3 + 2) < 0x149 && (*(uint *)(psVar3 + 2) == 0x66)))) {
    return 1;
  }
  if ((DAT_054f5738 == 0) || (uVar5 = (ulong)*param_1, 7 < uVar5)) {
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
      psVar3 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
    }
    else {
      psVar3 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
    }
  }
  else {
    lVar4 = DAT_054f5738 + uVar5 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68;
    psVar3 = (short *)(lVar4 + 0x6e8);
    cVar1 = *(char *)(lVar4 + 0x74c);
  }
  if ((((cVar1 != '\0') && (*psVar3 == *(short *)PTR_DAT_04bb6298)) &&
      (*(uint *)(psVar3 + 2) < 0x149)) && (*(uint *)(psVar3 + 2) == 0x1a)) {
    if ((DAT_054f5738 == 0) || (uVar5 = (ulong)*param_1, 7 < uVar5)) {
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
        psVar3 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
      else {
        psVar3 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
    }
    else {
      lVar4 = DAT_054f5738 + uVar5 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68;
      psVar3 = (short *)(lVar4 + 0x6e8);
      cVar1 = *(char *)(lVar4 + 0x74c);
    }
    if (((cVar1 != '\0') && (*psVar3 == *(short *)PTR_DAT_04bb6298)) &&
       (0xfffffffd < *(int *)(psVar3 + 0x30) - 4U)) {
      return 1;
    }
  }
  return 0;
}

