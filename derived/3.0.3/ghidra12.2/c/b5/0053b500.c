
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b500(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar2 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar2 != 0) {
    FUN_00443a00(lVar2,"TtUpdate Particles AABB");
  }
  auVar6._8_8_ = _DAT_0413f508;
  auVar6._0_8_ = DAT_0413f500;
  uVar1 = *(uint *)(param_1 + 0x28);
  auVar7._0_4_ = -(float)DAT_0413f500;
  auVar7._4_4_ = -(float)((ulong)DAT_0413f500 >> 0x20);
  auVar7._8_4_ = -(float)_DAT_0413f508;
  auVar7._12_4_ = -(float)((ulong)_DAT_0413f508 >> 0x20);
  if (0 < (int)uVar1) {
    pauVar3 = *(undefined1 (**) [16])(param_1 + 0x20);
    if (uVar1 != 1) {
      iVar5 = (uVar1 & 1) - uVar1;
      pauVar4 = pauVar3;
      do {
        pauVar3 = pauVar4 + 2;
        auVar6 = NEON_fmin(auVar6,*pauVar4,4);
        auVar7 = NEON_fmax(auVar7,*pauVar4,4);
        iVar5 = iVar5 + 2;
        auVar6 = NEON_fmin(auVar6,pauVar4[1],4);
        auVar7 = NEON_fmax(auVar7,pauVar4[1],4);
        pauVar4 = pauVar3;
      } while (iVar5 != 0);
    }
    if ((uVar1 & 1) != 0) {
      auVar7 = NEON_fmax(auVar7,*pauVar3,4);
      auVar6 = NEON_fmin(auVar6,*pauVar3,4);
    }
  }
  *(long *)(param_1 + 0x68) = auVar6._8_8_;
  *(long *)(param_1 + 0x60) = auVar6._0_8_;
  *(long *)(param_1 + 0x78) = auVar7._8_8_;
  *(long *)(param_1 + 0x70) = auVar7._0_8_;
  if (lVar2 != 0) {
    FUN_00443a70(lVar2,&DAT_04085310);
  }
  return;
}

