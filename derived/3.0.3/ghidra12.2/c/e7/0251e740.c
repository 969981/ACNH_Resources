
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0251e740(byte *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  short *psVar5;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = &DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar4 = &DAT_054f0958;
    }
  }
  else {
    puVar4 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar4 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
  }
  if (((*(uint *)((long)puVar4 + 4) >> 0xf & 1) != 0) && (uVar3 = (ulong)*param_1, uVar3 < 8)) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar5 = &DAT_054f0c08;
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
        psVar5 = &DAT_054f0c08;
      }
    }
    else {
      psVar5 = (short *)(DAT_054f5738 + uVar3 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar3 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar5[0x32] != '\0') && (*psVar5 == DAT_04c487d4)) {
      uVar3 = FUN_0231f070(*(undefined4 *)(psVar5 + 2),0);
      if ((uVar3 & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar1 = __cxa_guard_acquire(&DAT_054f0960);
            puVar4 = &DAT_054f0958;
            if (iVar1 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar4 = &DAT_054f0958;
          }
        }
        else {
          puVar4 = (undefined8 *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar4 = puVar4 + *param_1;
          }
        }
        if ((*(uint *)((long)puVar4 + 4) >> 0xf & 1) == 0) {
          return 0;
        }
      }
      uVar2 = FUN_016e946c(0,psVar5 + 6);
      return uVar2;
    }
  }
  return 0;
}

