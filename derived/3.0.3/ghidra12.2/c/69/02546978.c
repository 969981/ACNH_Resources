
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02546978(byte *param_1)

{
  short *psVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
    if (((DAT_054f0c70 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_054f0c70), iVar4 != 0)) {
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
    psVar1 = &DAT_054f0c08;
    cVar3 = DAT_054f0c6c;
  }
  else {
    lVar6 = DAT_054f5738 + uVar8 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68;
    psVar1 = (short *)(lVar6 + 0x6e8);
    cVar3 = *(char *)(lVar6 + 0x74c);
  }
  if (((cVar3 == '\0') || (psVar7 = &DAT_04c487d4, *psVar1 != DAT_04c487d4)) ||
     (uVar2 = *(uint *)(psVar1 + 2), 0x148 < uVar2)) {
    return 0;
  }
  if ((int)uVar2 < 0x6f) {
    if (((0x1a < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x4001020U) == 0)) && (uVar2 != 0x66)) {
      return 0;
    }
  }
  else if ((int)uVar2 < 0xf3) {
    if ((uVar2 != 0x6f) && (uVar2 != 0xc9)) {
      return 0;
    }
  }
  else if ((uVar2 != 0x114) && (uVar2 != 0xf3)) {
    return 0;
  }
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
    if (((DAT_054f0c70 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&DAT_054f0c70), psVar7 = (short *)PTR_DAT_04bb6298, iVar4 != 0))
    {
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
      psVar7 = (short *)PTR_DAT_04bb6298;
    }
    psVar1 = &DAT_054f0c08;
    cVar3 = DAT_054f0c6c;
  }
  else {
    lVar6 = DAT_054f5738 + uVar8 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68;
    psVar1 = (short *)(lVar6 + 0x6e8);
    cVar3 = *(char *)(lVar6 + 0x74c);
  }
  if (((cVar3 == '\0') || (*psVar1 != *psVar7)) ||
     ((0x148 < *(uint *)(psVar1 + 2) || (*(uint *)(psVar1 + 2) != 0xf3)))) {
    uVar5 = FUN_02546310();
    return uVar5;
  }
  uVar5 = FUN_025465c4(param_1);
  return uVar5;
}

