
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03279418(long param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  ulong uVar6;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 1 & 1) == 0) {
    return 0;
  }
  if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*(byte *)(param_1 + 0x1f8), 7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar3 != 0) {
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
      cVar2 = DAT_054f0c6c;
    }
    else {
      psVar5 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
    }
  }
  else {
    lVar4 = DAT_054f5738 + uVar6 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
    psVar5 = (short *)(lVar4 + 0x6e8);
    cVar2 = *(char *)(lVar4 + 0x74c);
  }
  if ((cVar2 == '\0') || (*psVar5 != DAT_04c487d4)) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(psVar5 + 0x30);
  }
  if (iVar3 - 7U < 0xfffffffe) {
    return 1;
  }
  return 0;
}

