
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e5625c(byte *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  short *psVar6;
  undefined *local_30;
  char *pcStack_28;
  
  uVar3 = FUN_022040b0();
  if ((uVar3 & 1) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "AlwJuneBrideBalloonFlag";
    local_30 = puVar1;
    uVar4 = FUN_0274bce0(param_1,&local_30);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    pcStack_28 = "AlwJuneBridePartyTalkFlag";
    local_30 = puVar1;
    uVar4 = FUN_0274bce0(param_1,&local_30);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (((*(long *)PTR_DAT_04bb3968 == 0) || (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) == 0))
       || (iVar2 = FUN_02123550(), 0 < iVar2)) {
      lVar5 = *(long *)PTR_DAT_04bb4718;
      if ((lVar5 == 0) || (uVar3 = (ulong)*param_1, 7 < uVar3)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar6 = &DAT_054f0c08;
          if (iVar2 != 0) {
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
          psVar6 = &DAT_054f0c08;
        }
      }
      else {
        psVar6 = (short *)(lVar5 + uVar3 * 0xd0 +
                           (ulong)(*(uint *)(lVar5 + uVar3 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      }
      if (((char)psVar6[0x32] == '\0') || (*psVar6 != *(short *)PTR_DAT_04bb6298)) {
        iVar2 = 1;
      }
      else {
        iVar2 = *(int *)(psVar6 + 0x30);
      }
      if ((iVar2 == 1) || (iVar2 == 2)) {
        return 1;
      }
    }
  }
  return 0;
}

