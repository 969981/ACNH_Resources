
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0252f488(byte *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*param_1, 7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar7 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
      if (iVar4 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
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
        cVar2 = DAT_054f0c6c;
      }
    }
    else {
      psVar7 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
    }
  }
  else {
    lVar5 = DAT_054f5738 + uVar6 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
    psVar7 = (short *)(lVar5 + 0x6e8);
    cVar2 = *(char *)(lVar5 + 0x74c);
  }
  if (((cVar2 == '\0') || (*psVar7 != DAT_04c487d4)) ||
     (uVar1 = *(uint *)(psVar7 + 2), 0x148 < uVar1)) goto switchD_0252f548_caseD_f8;
  bVar3 = true;
  switch(uVar1) {
  case 0xf6:
  case 0xfa:
    uVar6 = (ulong)*param_1;
    fVar9 = 0.0;
    if (uVar6 < 8) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar7 = &DAT_054f0c08;
          cVar2 = DAT_054f0c6c;
          if (iVar4 != 0) {
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c6c = '\0';
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
            cVar2 = DAT_054f0c6c;
          }
        }
        else {
          psVar7 = &DAT_054f0c08;
          cVar2 = DAT_054f0c6c;
        }
      }
      else {
        lVar5 = DAT_054f5738 + uVar6 * 0xd0 +
                (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
        psVar7 = (short *)(lVar5 + 0x6e8);
        cVar2 = *(char *)(lVar5 + 0x74c);
      }
      if (((cVar2 != '\0') && (*psVar7 == DAT_04c487d4)) &&
         ((uVar6 = FUN_0231f070(*(undefined4 *)(psVar7 + 2),0), (uVar6 & 1) != 0 ||
          (uVar6 = FUN_0251b2f8(param_1), (uVar6 & 1) != 0)))) {
        fVar9 = *(float *)(psVar7 + 0x26);
      }
    }
    fVar8 = -fVar9;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    bVar3 = 1.1920929e-07 < fVar8;
    break;
  case 0xf7:
  case 0xfb:
    break;
  default:
    if (uVar1 - 0xc < 2) {
      return true;
    }
  case 0xf8:
  case 0xf9:
switchD_0252f548_caseD_f8:
    bVar3 = false;
  }
  return bVar3;
}

