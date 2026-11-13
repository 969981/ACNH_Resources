
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c7590c(long param_1)

{
  byte *pbVar1;
  int iVar2;
  short *psVar3;
  ulong uVar4;
  undefined4 local_24;
  
  local_24 = 0;
  FUN_00c756b0(&local_24,param_1 + 0xd8);
  if (DAT_054f5738 != 0) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = (ulong)*pbVar1;
    if (uVar4 < 8) {
      psVar3 = (short *)(DAT_054f5738 + uVar4 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      goto LAB_00c759a0;
    }
  }
  if ((DAT_054f0c70 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
    psVar3 = &DAT_054f0c08;
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
      psVar3 = &DAT_054f0c08;
    }
  }
  else {
    psVar3 = &DAT_054f0c08;
  }
LAB_00c759a0:
  if (((((char)psVar3[0x32] == '\0') || (*psVar3 != DAT_04c487d4)) ||
      (0x148 < *(uint *)(psVar3 + 2))) || (*(uint *)(psVar3 + 2) != 0x26)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  return;
}

