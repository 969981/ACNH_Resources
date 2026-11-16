
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0253c2c0(byte *param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  short *psVar7;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_4;
  
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
      if (DAT_054f0c6c == '\0') {
        return 0;
      }
    }
    else {
      psVar7 = &DAT_054f0c08;
      if (DAT_054f0c6c == '\0') {
        return 0;
      }
    }
  }
  else {
    lVar4 = DAT_054f5738 + uVar6 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
    psVar7 = (short *)(lVar4 + 0x6e8);
    if (*(char *)(lVar4 + 0x74c) == '\0') {
      return 0;
    }
  }
  bVar3 = 0;
  if (((*psVar7 == *(short *)PTR_DAT_04bb6298) && (*(uint *)(psVar7 + 2) < 0x149)) &&
     (*(uint *)(psVar7 + 2) == 0x3c)) {
    if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    else {
      puVar5 = (undefined4 *)PTR_DAT_04bb3238;
    }
    local_4 = *puVar5;
    FUN_0071c8d0(&local_30,&local_4,PTR_DAT_04bb3238,0);
    plVar1 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar6 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
      if ((uVar6 & 1) == 0) {
        local_27 = '\0';
      }
    }
    bVar3 = 0;
    if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
       (local_26 != '\0')) {
      bVar3 = *(byte *)((long)local_30 + 0x17ce) >> 7;
    }
  }
  return bVar3;
}

