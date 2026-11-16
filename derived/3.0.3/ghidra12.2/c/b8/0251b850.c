
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0251b850(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined4 uVar5;
  
  uVar2 = (ulong)*param_1;
  uVar5 = 0;
  if (uVar2 < 8) {
    if (DAT_054f5738 == 0) {
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
      psVar4 = (short *)(DAT_054f5738 + uVar2 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar2 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar4[0x32] != '\0') && (*psVar4 == DAT_04c487d4)) {
      uVar2 = FUN_0231f070(*(undefined4 *)(psVar4 + 2),0);
      if ((uVar2 & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar1 = __cxa_guard_acquire(&DAT_054f0960);
            puVar3 = &DAT_054f0958;
            if (iVar1 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
              puVar3 = &DAT_054f0958;
            }
          }
          else {
            puVar3 = &DAT_054f0958;
          }
        }
        else {
          puVar3 = (undefined8 *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar3 = puVar3 + *param_1;
          }
        }
        if ((*(uint *)((long)puVar3 + 4) >> 0xf & 1) == 0) {
          return 0;
        }
      }
      uVar5 = *(undefined4 *)(psVar4 + 6);
      if ((((DAT_054f5738 == 0) || (7 < *param_1)) && ((DAT_054f0c70 & 1) == 0)) &&
         (iVar1 = __cxa_guard_acquire(&DAT_054f0c70), iVar1 != 0)) {
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
  }
  return uVar5;
}

