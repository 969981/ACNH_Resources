
float FUN_0124fa64(float param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_4c [3];
  
  lVar2 = param_2 + 8;
  fVar8 = (float)(int)(*(uint *)(param_3 + 8) & 0xfffffffe) * 5.0 + 5.0;
  fVar9 = (float)(int)(*(uint *)(param_3 + 0xc) & 0xfffffffe) * 5.0 + 5.0;
  local_4c[0] = fVar8;
  local_4c[2] = fVar9;
  iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10));
  if (((iVar4 == 0x21) ||
      (iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10)), iVar4 == 0x22)) &&
     ((iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10)), iVar4 == 0x21 ||
      (iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10)), iVar4 == 0x22)))) {
    uVar5 = (uint)(long)((float)(*(byte *)(param_2 + 10) >> 2 & 7) * 45.0 * 11930465.0);
  }
  else {
    uVar5 = 0;
  }
  iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10));
  if (((iVar4 == 0x21) ||
      (iVar4 = FUN_0123db50(lVar2,*(undefined8 *)(param_2 + 0x10)), iVar4 == 0x22)) &&
     ((uVar3 = *(byte *)(param_2 + 10) >> 2 & 7, 6 < uVar3 || ((1 << (ulong)uVar3 & 0x55U) == 0))))
  {
    uVar1 = (ulong)(uVar5 >> 0x18);
    fVar6 = (float)(uVar5 & 0xffffff) * 5.9604645e-08;
    fVar7 = (float)(&DAT_04199798)[uVar1 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar1 * 4];
    fVar6 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar1 * 4];
    local_4c[1] = NAN;
    local_4c[0] = fVar8 + fVar7 * 0.0 * 0.0 + fVar6 * 0.0 + (param_1 + 0.8) * (fVar7 + 0.0);
    local_4c[2] = fVar9 + (fVar6 * 0.0 * 0.0 - fVar7 * 0.0) + (param_1 + 0.8) * fVar6;
    FUN_0093a950(DAT_04cfae30 + 0x28,local_4c,0);
  }
  else {
    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,local_4c,0);
    uVar1 = (ulong)(uVar5 >> 0x18);
    fVar8 = (float)(uVar5 & 0xffffff) * 5.9604645e-08;
    fVar9 = (float)(&DAT_04199798)[uVar1 * 4] + fVar8 * (float)(&DAT_0419979c)[uVar1 * 4];
    local_4c[0] = local_4c[0] +
                  fVar9 * 0.0 * 0.0 +
                  ((float)(&DAT_041997a0)[uVar1 * 4] + fVar8 * (float)(&DAT_041997a4)[uVar1 * 4]) *
                  0.0 + (param_1 + -5.0) * (fVar9 + 0.0);
  }
  return local_4c[0];
}

