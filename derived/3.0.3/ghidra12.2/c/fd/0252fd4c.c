
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0252fd4c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  short *psVar5;
  byte local_4 [4];
  
  FUN_0252fe74(local_4,*param_1);
  uVar4 = (ulong)local_4[0];
  if (uVar4 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar5 = &DAT_054f0c08;
        if (iVar2 != 0) {
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
          psVar5 = &DAT_054f0c08;
        }
      }
      else {
        psVar5 = &DAT_054f0c08;
      }
    }
    else {
      psVar5 = (short *)(DAT_054f5738 + uVar4 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((char)psVar5[0x32] == '\0') || (*psVar5 != DAT_04c487d4)) ||
       (uVar3 = *(uint *)(psVar5 + 2), 0x148 < uVar3)) {
      uVar3 = 0;
    }
    bVar1 = uVar3 == 0x7e;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

