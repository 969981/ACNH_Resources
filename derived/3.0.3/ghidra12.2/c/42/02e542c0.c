
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02e542c0(byte *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  short *psVar4;
  undefined *local_30;
  char *pcStack_28;
  
  uVar2 = FUN_022040b0();
  if ((uVar2 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "AlwJuneBrideBalloonFlag";
    uVar2 = FUN_0274bce0(param_1,&local_30);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(long *)PTR_DAT_04bb3968 == 0) ||
       (lVar3 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar3 == 0)) {
      if ((param_2 & 1) == 0) {
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x1614);
      uVar2 = (ulong)(0 < iVar1);
      if (iVar1 < 1) {
        return uVar2;
      }
      if ((param_2 & 1) == 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_02538bb0(param_1);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)PTR_DAT_04bb4718;
      if ((lVar3 == 0) || (uVar2 = (ulong)*param_1, 7 < uVar2)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar4 = &DAT_054f0c08;
          if (iVar1 != 0) {
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c6c = 0;
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
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
        }
        else {
          psVar4 = &DAT_054f0c08;
        }
      }
      else {
        psVar4 = (short *)(lVar3 + uVar2 * 0xd0 +
                           (ulong)(*(uint *)(lVar3 + uVar2 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      }
      if (((char)psVar4[0x32] == '\0') || (*psVar4 != *(short *)PTR_DAT_04bb6298)) {
        iVar1 = 1;
      }
      else {
        iVar1 = *(int *)(psVar4 + 0x30);
      }
      if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
        return 1;
      }
    }
  }
  return 0;
}

