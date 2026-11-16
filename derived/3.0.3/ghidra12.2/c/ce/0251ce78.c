
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0251ce78(byte *param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  short *psVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = (ulong)*param_1;
  fVar8 = 0.0;
  if (uVar5 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar7 = &DAT_054f0c08;
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
        psVar7 = &DAT_054f0c08;
      }
    }
    else {
      psVar7 = (short *)(DAT_054f5738 + uVar5 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar7[0x32] != '\0') && (*psVar7 == DAT_04c487d4)) {
      uVar5 = FUN_0231f070(*(undefined4 *)(psVar7 + 2),0);
      if ((uVar5 & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar1 = __cxa_guard_acquire(&DAT_054f0960);
            puVar6 = &DAT_054f0958;
            if (iVar1 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar6 = &DAT_054f0958;
          }
        }
        else {
          puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar6 = puVar6 + *param_1;
          }
        }
        if ((*(uint *)((long)puVar6 + 4) >> 0xf & 1) == 0) goto LAB_0251cf7c;
      }
      fVar8 = *(float *)(psVar7 + 0x28);
    }
  }
LAB_0251cf7c:
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x780) + 0xf0))(lVar2 + 0x780);
  fVar9 = *pfVar3;
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x7b0) + 0xf0))(lVar2 + 0x7b0);
  if (fVar9 * 0.1 <= fVar8) {
    if (fVar8 <= *pfVar3) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

