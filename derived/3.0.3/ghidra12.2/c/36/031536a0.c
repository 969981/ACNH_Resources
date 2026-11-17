
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_031536a0(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    iVar2 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar2 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        iVar2 = 0;
        if ((iVar1 == 0x758f7eaf) && (iVar2 = 0, DAT_05aed670 != 0)) {
          iVar2 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_05292434 == iVar2) {
      if (DAT_0523a180 == 0) {
        return 0;
      }
      uVar4 = 0;
LAB_031538c0:
      uVar7 = FUN_016b7080(DAT_0523a180,uVar4);
      return uVar7;
    }
    if (DAT_05abbc58 == 0) {
      return 0;
    }
    uVar4 = 0;
LAB_031538f0:
    uVar7 = FUN_0372dfb0(DAT_05abbc58,uVar4);
    return uVar7;
  }
  if (param_1 == 2) {
    iVar2 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar2 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        iVar2 = 0;
        if ((iVar1 == 0x758f7eaf) && (iVar2 = 0, DAT_05aed670 != 0)) {
          iVar2 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_05292434 != iVar2) {
      if (DAT_05abbc58 == 0) {
        return 0;
      }
      uVar4 = 1;
      goto LAB_031538f0;
    }
    if (DAT_0523adf0 != 0) {
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        if (DAT_053e0208 == 0) {
          return 0;
        }
        uVar7 = FUN_020b8730(DAT_053e0208,1);
        return uVar7;
      }
      if (DAT_0523a180 == 0) {
        return 0;
      }
      uVar4 = 1;
      goto LAB_031538c0;
    }
  }
  else if (param_1 == 1) {
    if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_2, 7 < uVar7)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar6 = &DAT_054f0c08;
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
          psVar6 = &DAT_054f0c08;
        }
      }
      else {
        psVar6 = &DAT_054f0c08;
      }
    }
    else {
      psVar6 = (short *)(DAT_054f5738 + uVar7 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((char)psVar6[0x32] == '\0') || (*psVar6 != DAT_04c487d4)) ||
       (uVar5 = *(uint *)(psVar6 + 2), 0x148 < uVar5)) {
      uVar5 = 0;
    }
    return (ulong)(uVar5 != 0xf3);
  }
  return 0;
}

