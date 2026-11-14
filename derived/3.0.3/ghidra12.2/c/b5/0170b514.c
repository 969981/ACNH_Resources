
/* WARNING: Removing unreachable block (ram,0x0170b630) */
/* WARNING: Removing unreachable block (ram,0x0170b654) */
/* WARNING: Removing unreachable block (ram,0x0170b690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170b514(long param_1,float *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar4 = _UNK_04102888;
  uVar3 = _DAT_04102880;
  uVar2 = _DAT_04102200;
  uVar1 = *(uint *)(param_1 + 0x14a8);
  *(undefined8 *)(param_2 + 2) = _UNK_04102208;
  *(undefined8 *)param_2 = uVar2;
  *(undefined8 *)(param_2 + 6) = uVar4;
  *(undefined8 *)(param_2 + 4) = uVar3;
  uVar2 = _DAT_041023d0;
  fVar7 = 0.0;
  *(undefined8 *)(param_2 + 10) = _UNK_041023d8;
  *(undefined8 *)(param_2 + 8) = uVar2;
  fVar6 = 1.0;
  if (uVar1 < 0xffff0000) {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar13 = 1.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar12 = 1.0;
    if ((uVar1 & 0xffff) != 0xffff) {
      plVar5 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                         (-((ulong)(uVar1 >> 0xf) & 1) & 0xfffffffffff80000 |
                         ((ulong)uVar1 & 0xffff) << 3));
      (**(code **)(*plVar5 + 0x70))(plVar5,param_2,(int)uVar1 >> 0x10);
      fVar12 = *param_2;
      fVar14 = param_2[1];
      fVar11 = param_2[2];
      fVar10 = param_2[4];
      fVar13 = param_2[5];
      fVar9 = param_2[6];
      fVar8 = param_2[8];
      fVar7 = param_2[9];
      fVar6 = param_2[10];
    }
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar13 = 1.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 1.0;
    fVar14 = 0.0;
  }
  if (*(int *)(param_1 + 0x5ee4) == 1) {
    fVar15 = *(float *)(param_1 + 0x15ec);
    fVar16 = *(float *)(param_1 + 0x15f0);
  }
  else {
    fVar15 = *(float *)(param_1 + 0x1580) - *(float *)(param_1 + 0x14fc);
    fVar16 = *(float *)(param_1 + 0x1584) - *(float *)(param_1 + 0x1500);
  }
  param_2[3] = param_2[3] + fVar14 * fVar15 + fVar12 * 0.0 + fVar16 * fVar11 + 0.0;
  param_2[7] = fVar13 * fVar15 + fVar10 * 0.0 + fVar16 * fVar9 + 0.0 + param_2[7];
  param_2[0xb] = fVar7 * fVar15 + fVar8 * 0.0 + fVar16 * fVar6 + 0.0 + param_2[0xb];
  return;
}

