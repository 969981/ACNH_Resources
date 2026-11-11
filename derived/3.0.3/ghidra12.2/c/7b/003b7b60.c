
undefined1  [16] FUN_003b7b60(uint param_1,int param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float __x;
  float fVar12;
  undefined1 auVar13 [16];
  
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
    if ((long)param_2 != 0) {
      uVar1 = (long)((ulong)param_1 << 0x20) / (long)param_2;
    }
    fVar12 = 2.0 - (*(float *)(PTR_SinCosSampleTable_04bcef98 + (uVar1 >> 0x18 & 0xff) * 0x10) +
                   (float)((uint)uVar1 & 0xffffff) * 5.9604645e-08 *
                   *(float *)((long)(PTR_SinCosSampleTable_04bcef98 + (uVar1 >> 0x18 & 0xff) * 0x10)
                             + 8));
    __x = fVar12 * fVar12 + -1.0;
    fVar11 = SQRT(__x);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(__x);
    }
    uVar1 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = (uint)((fVar11 - fVar12) * -16384.0);
    uVar9 = (ulong)uVar8;
    uVar7 = (ulong)(0x4000 - uVar8);
  }
  else {
    iVar2 = 0;
    iVar10 = 0x17;
    do {
      while( true ) {
        iVar5 = iVar2 + iVar10;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 >> 1;
        if ((int)(uint)*(ushort *)(PTR_DAT_04bd0508 + (long)iVar5 * 2) < (int)param_1) break;
        if ((int)(uint)*(ushort *)(PTR_DAT_04bd0508 + (long)iVar5 * 2) <= (int)param_1)
        goto LAB_003b7bcc;
        iVar10 = iVar5 + -1;
        if (iVar10 < iVar2) goto LAB_003b7bc8;
      }
      iVar2 = iVar5 + 1;
    } while (iVar2 <= iVar10);
LAB_003b7bc8:
    iVar5 = -1;
LAB_003b7bcc:
    if (param_2 == 32000) {
      puVar3 = &DAT_041354f0;
    }
    else {
      if (param_2 != 48000) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
      puVar3 = &DAT_041355e0;
    }
    uVar7 = *(ulong *)(puVar3 + (long)iVar5 * 10);
    uVar1 = (ulong)(ushort)*(ulong *)((long)(puVar3 + (long)iVar5 * 10) + 8);
    uVar9 = uVar7 >> 0x30;
    uVar6 = uVar7 & 0xffff00000000;
    uVar4 = uVar7 & 0xffff0000;
  }
  auVar13._0_8_ = uVar6 | uVar9 << 0x30 | uVar4 | uVar7 & 0xffff;
  auVar13._8_8_ = uVar1;
  return auVar13;
}

