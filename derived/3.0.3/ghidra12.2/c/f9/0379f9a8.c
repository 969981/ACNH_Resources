
bool FUN_0379f9a8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  float fVar10;
  float fVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 (*pauVar14) [12];
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar13 = (**(code **)(*param_1 + 0x10))();
  if (param_3 != (undefined4 *)0x0 && lVar13 != 0) {
    pauVar14 = (undefined1 (*) [12])(**(code **)(*param_1 + 0x10))(param_1,param_2);
    auVar8 = *pauVar14;
    auVar6 = *pauVar14;
    uVar17 = *(undefined8 *)pauVar14[2];
    uVar2 = *(undefined8 *)(pauVar14[1] + 4);
    uVar19 = *(undefined8 *)(pauVar14[3] + 4);
    uVar3 = *(undefined8 *)(pauVar14[2] + 8);
    pauVar1 = pauVar14 + 4;
    uVar5 = *(undefined8 *)(pauVar14[4] + 8);
    uVar4 = *(undefined8 *)*pauVar1;
    auVar9 = *pauVar1;
    auVar7 = *pauVar1;
    fVar21 = (float)((ulong)uVar4 >> 0x20);
    *param_3 = auVar6._0_4_;
    param_3[1] = (int)uVar2;
    param_3[2] = (int)uVar3;
    param_3[3] = auVar7._0_4_;
    param_3[8] = auVar8._8_4_;
    param_3[9] = (int)uVar17;
    param_3[10] = (int)uVar19;
    param_3[0xb] = auVar9._8_4_;
    *(ulong *)(param_3 + 6) = CONCAT44(auVar7._4_4_,(int)((ulong)uVar3 >> 0x20));
    *(ulong *)(param_3 + 4) = CONCAT44((int)((ulong)uVar2 >> 0x20),auVar6._4_4_);
    puVar12 = PTR_DAT_04bb2200;
    if (((*(long *)PTR_DAT_04bb2200 != 0) &&
        (lVar15 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78), lVar15 != 0)) &&
       (*(float *)(lVar15 + 0x3c) != 0.0)) {
      fVar10 = (float)uVar5;
      fVar22 = *(float *)(lVar15 + 0x40) * 0.017453292 *
               ((fVar10 + *(float *)(lVar15 + 0x38)) / 160.0);
      fVar11 = 57600.0 / (*(float *)(lVar15 + 0x40) * 6.2831855) + fVar21;
      fVar16 = cosf(fVar22);
      if (fVar16 == 0.0) {
        fVar16 = 0.001;
      }
      else {
        fVar16 = cosf(fVar22);
      }
      fVar22 = sinf(fVar22);
      fVar18 = *(float *)(*(long *)(*(long *)puVar12 + 0x78) + 0x3c);
      fVar20 = *(float *)(*(long *)(*(long *)puVar12 + 0x78) + 0x40);
      param_3[0xb] = fVar22 * fVar11 * fVar18 + (1.0 - fVar18) * fVar10;
      param_3[3] = (int)uVar4;
      param_3[7] = fVar21 * (1.0 - fVar18) +
                   fVar18 * (fVar16 * fVar11 + -57600.0 / (fVar20 * 6.2831855));
    }
  }
  return param_3 != (undefined4 *)0x0 && lVar13 != 0;
}

