
/* WARNING: Removing unreachable block (ram,0x011cfda4) */
/* WARNING: Removing unreachable block (ram,0x011cff68) */

void FUN_011cfc08(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  FUN_0124c030(&local_90,param_1);
  iVar3 = FUN_0123db50(&uStack_88,local_80);
  puVar1 = PTR_DAT_04bb2200;
  bVar2 = iVar3 != 5;
  fVar6 = -2.5;
  if (bVar2) {
    fVar6 = -6.0;
  }
  fVar8 = 15.5;
  if (bVar2) {
    fVar8 = 16.8;
  }
  fVar7 = 3.2;
  if (bVar2) {
    fVar7 = 6.2;
  }
  local_60 = &DAT_3f8000003f800000;
  local_a0 = 0;
  uStack_98 = 0x3f80000000000000;
  local_58 = 0x3f800000;
  local_54 = 0;
  fVar5 = (float)*(undefined8 *)(param_1 + 8);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  local_90 = CONCAT44(fVar5 * -0.07925686 + fVar13 * 0.99306595 + fVar14 * 0.08682408 + 0.0,
                      fVar5 * 0.9924039 + fVar13 * 0.08682408 + fVar14 * -0.08715574 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                       fVar6 * fVar5 + fVar8 * fVar13 + fVar7 * fVar14,
                       fVar5 * 0.09408982 + fVar13 * -0.07925686 + fVar14 * 0.9924039 + 0.0);
  fVar5 = fVar15 * 0.9924039 + fVar16 * 0.08682408 + fVar17 * -0.08715574 + 0.0;
  uStack_68 = CONCAT44(fVar18 + fVar6 * fVar15 + fVar8 * fVar16 + fVar7 * fVar17,
                       fVar15 * 0.09408982 + fVar16 * -0.07925686 + fVar17 * 0.9924039 + 0.0);
  local_80 = CONCAT44(fVar9 * -0.07925686 + fVar10 * 0.99306595 + fVar11 * 0.08682408 + 0.0,
                      fVar9 * 0.9924039 + fVar10 * 0.08682408 + fVar11 * -0.08715574 + 0.0);
  uStack_78 = CONCAT44(fVar12 + fVar6 * fVar9 + fVar8 * fVar10 + fVar7 * fVar11,
                       fVar9 * 0.09408982 + fVar10 * -0.07925686 + fVar11 * 0.9924039 + 0.0);
  local_70 = CONCAT44(fVar15 * -0.07925686 + fVar16 * 0.99306595 + fVar17 * 0.08682408 + 0.0,fVar5);
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0x138;
  }
  FUN_0161c2a0(0x41300000,local_90,fVar5,CONCAT44(fVar18,fVar18),CONCAT44(fVar12,fVar12),
               param_2 + 0x11f0,param_1 + 0x70,&local_90,&local_60,&local_a0,lVar4,1);
  FUN_0124c030(&local_90,param_1);
  iVar3 = FUN_0123db50(&uStack_88,local_80);
  bVar2 = iVar3 != 5;
  local_60 = &DAT_3f8000003f800000;
  local_a0 = 0;
  uStack_98 = 0x3f80000000000000;
  local_58 = 0x3f800000;
  local_54 = 0;
  fVar6 = 16.3;
  if (bVar2) {
    fVar6 = 16.0;
  }
  fVar8 = 2.6;
  if (bVar2) {
    fVar8 = 6.2;
  }
  fVar7 = 2.3;
  if (bVar2) {
    fVar7 = 6.9;
  }
  fVar5 = (float)*(undefined8 *)(param_1 + 8);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar16 = (float)*(undefined8 *)(param_1 + 0x30);
  local_90 = CONCAT44(fVar5 * -0.3112588 + fVar9 * 0.7702182 + fVar10 * 0.5566704 + 0.0,
                      fVar5 * 0.16636568 + fVar9 * 0.6208852 + fVar10 * -0.76604444 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                       fVar8 * fVar5 + fVar6 * fVar9 + fVar7 * fVar10,
                       fVar5 * 0.9356497 + fVar9 * 0.14582723 + fVar10 * 0.32139385 + 0.0);
  uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                       fVar8 * fVar11 + fVar6 * fVar12 + fVar7 * fVar13,
                       fVar11 * 0.9356497 + fVar12 * 0.14582723 + fVar13 * 0.32139385 + 0.0);
  local_70 = CONCAT44(fVar14 * -0.3112588 + fVar15 * 0.7702182 + fVar16 * 0.5566704 + 0.0,
                      fVar14 * 0.16636568 + fVar15 * 0.6208852 + fVar16 * -0.76604444 + 0.0);
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                       fVar8 * fVar14 + fVar6 * fVar15 + fVar7 * fVar16,
                       fVar14 * 0.9356497 + fVar15 * 0.14582723 + fVar16 * 0.32139385 + 0.0);
  local_80 = CONCAT44(fVar11 * -0.3112588 + fVar12 * 0.7702182 + fVar13 * 0.5566704 + 0.0,
                      fVar11 * 0.16636568 + fVar12 * 0.6208852 + fVar13 * -0.76604444 + 0.0);
  if (*(long *)(*(long *)puVar1 + 0x58) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)puVar1 + 0x58) + 0x138;
  }
  FUN_0161c2a0(0x41300000,param_2 + 0x11f0,param_1 + 0x70,&local_90,&local_60,&local_a0,lVar4,1);
  return;
}

