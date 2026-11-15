
byte FUN_01f78500(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s11;
  float fVar17;
  undefined *local_c8;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  float local_98;
  
  local_a0 = *(undefined8 *)param_2;
  fVar11 = *param_2;
  local_98 = param_2[2];
  fVar16 = param_2[2] + -71.0;
  uVar8 = FUN_016e37dc(&local_a0);
  bVar6 = 0;
  fVar12 = local_98 + -20.0;
  iVar9 = (int)((float)(int)(fVar11 + -26.0) / 5.0) - (uint)(fVar11 + -26.0 < 0.0);
  iVar4 = (int)((float)(int)((float)local_a0 + -20.0) / 5.0) - (uint)((float)local_a0 + -20.0 < 0.0)
  ;
  if (iVar9 <= iVar4) {
    iVar5 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    if (iVar5 <= (int)((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0))) {
      fVar11 = 0.0;
      bVar6 = 0;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      do {
        fVar17 = (float)iVar9 * 5.0 + 2.5;
        iVar10 = iVar5;
        do {
          iVar1 = iVar10 + 1;
          local_c8 = puVar2;
          puStack_c0 = puVar3;
          local_b8 = iVar9;
          iStack_b4 = iVar10;
          local_b0 = puVar3;
          local_a8 = iVar9 + 1;
          iStack_a4 = iVar1;
          uVar8 = FUN_01f78ba0(uVar8,&local_c8);
          if ((uVar8 & 1) != 0) {
            fVar13 = (float)iVar10 * 5.0 + 2.5;
            fVar14 = fVar17 - (float)local_a0;
            fVar15 = fVar13 - local_98;
            fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
            if (fVar11 < fVar14) {
              bVar6 = 1;
              fVar11 = fVar14;
              fVar16 = fVar13;
              unaff_s11 = fVar17;
            }
          }
          iVar10 = iVar1;
        } while (((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0)) + 1 != iVar1);
        bVar7 = iVar9 != iVar4;
        iVar9 = iVar9 + 1;
      } while (bVar7);
      if ((bool)(param_3 != (float *)0x0 & bVar6)) {
        bVar6 = 1;
        *param_3 = unaff_s11;
        param_3[1] = 0.0;
        param_3[2] = fVar16;
      }
    }
  }
  return bVar6;
}

