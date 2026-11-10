
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00330500(float param_1,float *param_2,long param_3,long param_4,int param_5,float *param_6)

{
  float *pfVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_84;
  
  fVar16 = *(float *)(param_3 + 0x48);
  pcVar2 = *(char **)(*(long *)(param_3 + 0x240) + 0x248);
  iVar11 = *(int *)(pcVar2 + 0x10);
  if ((pcVar2[2] != '\0') &&
     (fVar6 = *(float *)(*(long *)(*(long *)(param_3 + 0x240) + 0x18) + 0x70),
     fVar6 = fVar6 + (1.0 - fVar16) * (1.0 - fVar6), fVar6 != 1.0)) {
    fVar3 = powf(fVar6,param_1);
    param_1 = (1.0 - fVar3) / (1.0 - fVar6);
  }
  fVar6 = (float)iVar11;
  if (*pcVar2 == '\0') {
    pfVar1 = (float *)(*(long *)(param_4 + 0x20) + (long)param_5 * 0x10);
    fVar3 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar12 = param_1 + *pfVar1 * fVar6;
    fVar9 = DAT_04c61c28 / (float)*(int *)(pcVar2 + 0x10);
    if (pcVar2[1] == '\0') {
      local_84 = (float)FUN_00330e90(fVar12 * fVar9,fVar12 * fVar9 + fVar9 * fVar16);
      fVar3 = (param_1 + fVar3 * fVar6) * fVar9;
      fVar3 = (float)FUN_00330e90(fVar3,fVar3 + fVar9 * fVar16);
      fVar6 = (param_1 + fVar8 * fVar6) * fVar9;
      fVar16 = (float)FUN_00330e90(fVar6,fVar6 + fVar9 * fVar16);
    }
    else {
      local_84 = (float)FUN_00330ac0(fVar16 + fVar12,fVar9,pcVar2);
      fVar12 = (float)FUN_00330ac0(fVar12,fVar9,pcVar2);
      local_84 = local_84 - fVar12;
      fVar12 = param_1 + fVar3 * fVar6;
      fVar3 = (float)FUN_00330ac0(fVar16 + fVar12,fVar9,pcVar2);
      fVar12 = (float)FUN_00330ac0(fVar12,fVar9,pcVar2);
      param_1 = param_1 + fVar8 * fVar6;
      fVar3 = fVar3 - fVar12;
      fVar16 = (float)FUN_00330ac0(fVar16 + param_1,fVar9,pcVar2);
      fVar6 = (float)FUN_00330ac0(param_1,fVar9,pcVar2);
      fVar16 = fVar16 - fVar6;
    }
  }
  else {
    fVar3 = (*(float *)(pcVar2 + 0x18) / 100.0) * fVar6;
    fVar8 = (*(float *)(pcVar2 + 0x14) / 100.0) * fVar6;
    pfVar1 = (float *)(*(long *)(param_4 + 0x20) + (long)param_5 * 0x10);
    fVar12 = fVar16 * fVar8;
    fVar9 = *(float *)(param_3 + 0x44) * fVar8 - fVar3;
    fVar3 = fVar3 + fVar3;
    fVar10 = (float)_DAT_04101f90 * fVar6 + fVar9 + *pfVar1 * fVar3;
    fVar14 = param_1 + fVar10;
    fVar8 = (float)_UNK_04101f98 * fVar6 + fVar9 + pfVar1[2] * fVar3;
    fVar3 = (float)((ulong)_DAT_04101f90 >> 0x20) * fVar6 + fVar9 + pfVar1[1] * fVar3;
    fVar6 = DAT_04c61c28 / (float)*(int *)(pcVar2 + 0x10);
    if (pcVar2[1] == '\0') {
      fVar14 = fVar14 * fVar6;
      fVar12 = fVar12 * fVar6;
      fVar10 = fVar10 * fVar6;
      fVar13 = fVar10 + fVar12;
      fVar15 = fVar12 + fVar14 + fVar6 * fVar16;
      fVar9 = (float)FUN_00330cb0(fVar14,fVar15,fVar10,fVar13,0x3fd55555,0x40800000);
      fVar4 = (float)FUN_00330cb0(fVar14,fVar15,fVar10,fVar13,0x40186186,0x40400000);
      fVar5 = (float)FUN_00330cb0(fVar14,fVar15,fVar10,fVar13,0x40186186,0x40000000);
      local_84 = (float)FUN_00330cb0(fVar14,fVar15,fVar10,fVar13,0x40186186,0x3fc00000);
      local_84 = fVar9 + fVar4 + fVar5 + local_84;
      fVar4 = fVar3 * fVar6;
      fVar3 = (param_1 + fVar3) * fVar6;
      fVar13 = fVar4 + fVar12;
      fVar5 = fVar12 + fVar3 + fVar6 * fVar16;
      fVar9 = (float)FUN_00330cb0(fVar3,fVar5,fVar4,fVar13,0x3fd55555,0x40800000);
      fVar10 = (float)FUN_00330cb0(fVar3,fVar5,fVar4,fVar13,0x40186186,0x40400000);
      fVar14 = (float)FUN_00330cb0(fVar3,fVar5,fVar4,fVar13,0x40186186,0x40000000);
      fVar3 = (float)FUN_00330cb0(fVar3,fVar5,fVar4,fVar13,0x40186186,0x3fc00000);
      fVar3 = fVar9 + fVar10 + fVar14 + fVar3;
      fVar14 = fVar8 * fVar6;
      fVar10 = (param_1 + fVar8) * fVar6;
      fVar4 = fVar14 + fVar12;
      fVar12 = fVar12 + fVar10 + fVar6 * fVar16;
      fVar6 = (float)FUN_00330cb0(fVar10,fVar12,fVar14,fVar4,0x3fd55555,0x40800000);
      fVar8 = (float)FUN_00330cb0(fVar10,fVar12,fVar14,fVar4,0x40186186,0x40400000);
      fVar9 = (float)FUN_00330cb0(fVar10,fVar12,fVar14,fVar4,0x40186186,0x40000000);
      fVar16 = (float)FUN_00330cb0(fVar10,fVar12,fVar14,fVar4,0x40186186,0x3fc00000);
      fVar16 = fVar6 + fVar8 + fVar9 + fVar16;
    }
    else {
      fVar9 = (float)FUN_00330ac0(fVar12 + fVar16 + fVar14,fVar6,pcVar2);
      fVar14 = (float)FUN_00330ac0(fVar14,fVar6,pcVar2);
      fVar4 = (float)FUN_00330ac0(fVar12 + fVar10,fVar6,pcVar2);
      fVar10 = (float)FUN_00330ac0(fVar10,fVar6,pcVar2);
      local_84 = (fVar9 - fVar14) - (fVar4 - fVar10);
      fVar9 = (float)FUN_00330ac0(fVar12 + fVar16 + param_1 + fVar3,fVar6,pcVar2);
      fVar10 = (float)FUN_00330ac0(param_1 + fVar3,fVar6,pcVar2);
      fVar14 = (float)FUN_00330ac0(fVar12 + fVar3,fVar6,pcVar2);
      fVar3 = (float)FUN_00330ac0(fVar3,fVar6,pcVar2);
      fVar3 = (fVar9 - fVar10) - (fVar14 - fVar3);
      fVar16 = (float)FUN_00330ac0(fVar12 + fVar16 + param_1 + fVar8,fVar6,pcVar2);
      fVar9 = (float)FUN_00330ac0(param_1 + fVar8,fVar6,pcVar2);
      fVar12 = (float)FUN_00330ac0(fVar12 + fVar8,fVar6,pcVar2);
      fVar6 = (float)FUN_00330ac0(fVar8,fVar6,pcVar2);
      fVar16 = (fVar16 - fVar9) - (fVar12 - fVar6);
    }
  }
  uVar7 = *(undefined8 *)param_2;
  *param_2 = (float)uVar7 + *param_6 * local_84;
  param_2[1] = (float)((ulong)uVar7 >> 0x20) + param_6[1] * fVar3;
  *(ulong *)(param_2 + 2) = (ulong)(uint)((float)*(undefined8 *)(param_2 + 2) + param_6[2] * fVar16)
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_2;
  return;
}

