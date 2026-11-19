
void FUN_0390b62c(undefined8 param_1,long param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  float fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined **local_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bc1010;
  lVar8 = *param_3;
  uVar1 = *(uint *)((long)param_3 + 0xc);
  lVar12 = 0;
  uVar11 = 0;
  uVar4 = *(ushort *)(lVar8 + 0x30) >> (ulong)(uVar1 & 0x1f);
  uVar2 = (uint)uVar4;
  if (uVar4 < 2) {
    uVar2 = 1;
  }
  uVar9 = (uint)*(ushort *)(lVar8 + 0x32);
  if (*(short *)(lVar8 + 0x3a) != 3) {
    uVar9 = 1;
  }
  uVar4 = *(ushort *)(lVar8 + 0x32) >> (ulong)(uVar1 & 0x1f);
  if (uVar9 <= uVar4) {
    uVar9 = (uint)uVar4;
  }
  switch(*(undefined2 *)(lVar8 + 0x98)) {
  case 0x2f:
  case 0x30:
    uVar11 = 0;
    lVar12 = 0x28;
    break;
  case 0x31:
  case 0x32:
  case 0x3b:
  case 0x3c:
    goto switchD_0390b6b4_caseD_31;
  case 0x33:
  case 0x34:
    uVar11 = 1;
    goto LAB_0390b6f0;
  case 0x35:
    uVar11 = 2;
    lVar12 = 0x28;
    break;
  case 0x36:
    uVar11 = 3;
    lVar12 = 0x28;
    break;
  case 0x37:
    uVar11 = 4;
    goto LAB_0390b6f0;
  case 0x38:
    uVar11 = 5;
LAB_0390b6f0:
    lVar12 = 0x2c;
  }
  local_60 = &local_88;
  lVar10 = *(long *)PTR_DAT_04bc1010;
  uVar3 = *(int *)(lVar8 + 0x50) - (uint)*(ushort *)(lVar10 + 0x3da);
  if (*(uint *)(lVar10 + 0x368) <= uVar3) {
    uVar3 = 0;
  }
  local_58 = *(undefined8 *)(*(long *)(lVar10 + 0x370) + (long)(int)uVar3 * 0x20 + 0x18);
  (**(code **)PTR_DAT_04bcf220)(&local_88);
  (**(code **)PTR_DAT_04bcf838)(&local_88,*(undefined2 *)(*param_3 + 0x3a));
  (**(code **)PTR_DAT_04bcf820)(&local_88,(&DAT_041b3598)[lVar12]);
  (**(code **)PTR_DAT_04bcf228)(&local_88,*(undefined4 *)((long)param_3 + 0xc),1);
  (**(code **)PTR_DAT_04bcf818)(&local_88,(int)param_3[1],1);
  (**(code **)PTR_DAT_04bcf1e0)(*(undefined8 *)(param_2 + 0xb8),1,&local_58,&local_60,0,0);
  fVar13 = (float)((((-uVar2 & 3) + uVar2 << (ulong)(uVar1 & 0x1f)) >> 2) >>
                  (ulong)(*(uint *)((long)param_3 + 0xc) & 0x1f));
  fVar14 = (float)((((-uVar9 & 3) + uVar9 << (ulong)(uVar1 & 0x1f)) >> 2) >>
                  (ulong)(*(uint *)((long)param_3 + 0xc) & 0x1f));
  lVar8 = param_3[0x17];
  *(float *)(lVar8 + 8) = fVar13;
  *(float *)(lVar8 + 0xc) = fVar14;
  lVar8 = param_3[0x17];
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(float *)(lVar8 + 0x18) = fVar13;
  *(float *)(lVar8 + 0x1c) = fVar14;
  local_78 = 0xff7fffffff7fffff;
  lVar8 = param_3[0x17];
  local_88 = PTR_DAT_04bd0f08 + 0x10;
  local_80 = 0x7f7fffff7f7fffff;
  local_70 = *(uint *)PTR_DAT_04bd0ea8;
  local_6c = 0x3f80000000000000;
  if (local_70 < 6) {
    if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
      fVar14 = *(float *)(lVar8 + 8);
      fVar13 = *(float *)(lVar8 + 0xc);
    }
    else {
      fVar13 = *(float *)(lVar8 + 8);
      fVar14 = *(float *)(lVar8 + 0xc);
    }
    fVar16 = fVar13;
    fVar5 = 0.0;
    if (fVar13 <= 0.0) {
      fVar16 = 0.0;
      fVar5 = fVar13;
    }
    fVar15 = fVar14;
    fVar13 = 0.0;
    if (fVar14 <= 0.0) {
      fVar15 = 0.0;
      fVar13 = fVar14;
    }
    local_80 = CONCAT44(fVar13,fVar5);
    local_78 = CONCAT44(fVar15,fVar16);
  }
  FUN_038e77e4(&local_88,param_2);
  if ((param_4 & 1) == 0) {
    FUN_0394c8e0(param_2,param_3 + 0x34,*(undefined4 *)((long)param_3 + 0x14),(int)param_3[2],uVar11
                );
  }
  else {
    FUN_0394cf80();
  }
  uVar7 = 0x1b;
  if ((*(uint *)(*(long *)puVar6 + 800) & 2) != 0) {
    uVar7 = 0x11b;
  }
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
  *(undefined8 *)(param_2 + 0x100) = 0;
switchD_0390b6b4_caseD_31:
  return;
}

