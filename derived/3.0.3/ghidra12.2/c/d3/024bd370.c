
undefined4 FUN_024bd370(float param_1,float *param_2,uint *param_3)

{
  float *pfVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_98;
  undefined4 uStack_94;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  
  puVar2 = PTR_DAT_04bb2d00;
  fVar8 = param_2[2];
  fVar9 = *param_2;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
  fVar12 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar1 + fVar12 * pfVar1[1];
  fVar12 = pfVar1[2] + fVar12 * pfVar1[3];
  fVar14 = fVar13 * 0.0;
  fVar15 = fVar8 + (fVar12 * 0.0 * 0.0 - fVar13 * 0.0) + param_1 * fVar12;
  fVar13 = fVar9 + fVar14 * 0.0 + fVar12 * 0.0 + param_1 * (fVar13 + 0.0);
  local_8c = CONCAT44(param_2[1] +
                      (fVar14 * 0.0 + 1.0) * 0.0 + fVar12 * 0.0 * 0.0 + param_1 * fVar14,fVar13);
  local_84 = fVar15;
  FUN_016e026c(0,param_2,0,0);
  FUN_016e026c(0,&local_8c,0,0);
  fVar9 = ((float)(int)((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0) & 0xfffffffe) * 5.0 +
          5.0) - ((float)(int)((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0) & 0xfffffffe)
                  * 5.0 + 5.0);
  fVar8 = ((float)(int)((int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0) & 0xfffffffe) * 5.0 +
          5.0) - ((float)(int)((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0) & 0xfffffffe)
                  * 5.0 + 5.0);
  if (SQRT(fVar8 * fVar8 + fVar9 * fVar9) <= 1.0) {
    fVar9 = (float)FUN_016e4798(param_3);
    fVar8 = -fVar9;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    pfVar1 = (float *)(puVar2 + ((ulong)(*param_3 >> 0x14) & 0xff0));
    fVar9 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
    fVar12 = *pfVar1 + fVar9 * pfVar1[1];
    param_1 = param_1 + (fVar8 / 45.0) * (param_1 * 1.4142135 - param_1);
    fVar8 = pfVar1[2] + fVar9 * pfVar1[3];
    fVar9 = fVar12 * 0.0;
    local_78 = param_2[2] + (fVar8 * 0.0 * 0.0 - fVar12 * 0.0) + param_1 * fVar8;
    local_80 = CONCAT44(param_2[1] + (fVar9 * 0.0 + 1.0) * 0.0 + fVar8 * 0.0 * 0.0 + param_1 * fVar9
                        ,*param_2 + fVar9 * 0.0 + fVar8 * 0.0 + param_1 * (fVar12 + 0.0));
    uVar5 = FUN_016e1014(&local_80,0,0);
    iVar10 = (int)(float)local_80;
    bVar3 = (float)local_80 < 0.0;
    bVar4 = local_78 < 0.0;
    iVar11 = (int)local_78;
    uStack_94 = FUN_016e026c(0,&local_80,0,0);
    local_98 = (float)(int)((int)((float)iVar10 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0;
    local_90 = (float)(int)((int)((float)iVar11 / 5.0) - (uint)bVar4 & 0xfffffffe) * 5.0 + 5.0;
    uVar6 = FUN_016e1014(&local_98,0,0);
    uVar7 = FUN_0277d7b4(uVar6,uVar5);
    if ((uVar7 & 1) != 0) {
      local_80 = CONCAT44(uStack_94,local_98);
    }
  }
  else {
    uVar5 = FUN_016e1014(&local_8c,0,0);
    iVar10 = (int)(float)local_8c;
    bVar3 = (float)local_8c < 0.0;
    bVar4 = local_84 < 0.0;
    iVar11 = (int)local_84;
    uStack_94 = FUN_016e026c(0,&local_8c,0,0);
    local_98 = (float)(int)((int)((float)iVar10 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0;
    local_90 = (float)(int)((int)((float)iVar11 / 5.0) - (uint)bVar4 & 0xfffffffe) * 5.0 + 5.0;
    uVar6 = FUN_016e1014(&local_98,0,0);
    uVar7 = FUN_0277d7b4(uVar6,uVar5);
    if ((uVar7 & 1) != 0) {
      local_8c = CONCAT44(uStack_94,local_98);
    }
    local_80 = local_8c;
  }
  return (float)local_80;
}

