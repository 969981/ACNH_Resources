
void FUN_0203f428(float *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_80;
  char *pcStack_78;
  
  puVar3 = PTR_DAT_04bb2020;
  lVar11 = *(long *)PTR_DAT_04bb27f8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "TutorialDone";
  local_80 = puVar1;
  iVar6 = FUN_02758850(&local_80);
  pcStack_78 = "SeqUniformTutorialOngoing";
  local_80 = puVar1;
  iVar7 = FUN_02758850(&local_80);
  if (*(int *)(lVar11 + 0x14) == 8) {
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
      bVar4 = *(int *)(lVar11 + 0x10) == 1;
    }
    else {
      bVar4 = ((uVar2 ^ 0xffff) & 3) == 0;
    }
  }
  else {
    pcStack_78 = "MncGenerateInOfficeTemp";
    local_80 = puVar1;
    iVar8 = FUN_02758850(&local_80);
    bVar4 = iVar8 != 0;
  }
  pcStack_78 = "SeqOtgSickOngoing";
  local_80 = puVar3 + 0x10;
  iVar8 = FUN_02758850(&local_80);
  if (iVar8 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(lVar11 + 0x18) != 1;
  }
  pcStack_78 = "MncGenerateInOfficeRestaurantEdit2";
  local_80 = puVar3 + 0x10;
  iVar8 = FUN_02758850(&local_80);
  if (iVar8 == 0) {
    local_80 = puVar3 + 0x10;
    pcStack_78 = "MncEntryOfficeReserve";
    iVar8 = FUN_02758850(&local_80);
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (iVar8 == 0) {
      fVar14 = 160.0;
      if (!bVar5) {
        fVar14 = 185.0;
      }
      fVar15 = 200.0;
      if (!bVar5) {
        fVar15 = 170.0;
      }
      if (!bVar4 && !bVar5) {
        fVar14 = 185.0;
        if (iVar6 != 0) {
          fVar14 = 170.0;
        }
        fVar15 = 170.0;
        if (iVar6 != 0) {
          fVar15 = 156.0;
        }
      }
    }
  }
  else {
    fVar15 = 156.0;
    fVar14 = 170.0;
  }
  local_80 = puVar3 + 0x10;
  uVar9 = 0x4e38e380;
  pcStack_78 = "MncGenerateInOfficeRestaurantEdit2";
  iVar8 = FUN_02758850(&local_80);
  puVar1 = PTR_DAT_04bb2720;
  if (iVar8 != 0) goto LAB_0203f5ec;
  if (bVar5) {
    uVar9 = 0xeaaaab00;
    lVar11 = *(long *)PTR_DAT_04bb2720;
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x330) == 0)) goto LAB_0203f5ec;
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
    iVar6 = FUN_006bd550(*puVar10,0);
    if (((iVar6 != 0x758f7eaf) ||
        (((*(long *)puVar1 == 0 || (lVar11 = *(long *)(*(long *)puVar1 + 0x330), lVar11 == 0)) ||
         (*(int *)(lVar11 + 0x260) == 0)))) ||
       ((lVar11 = *(long *)(lVar11 + 600), lVar11 == 0 || (lVar11 == 0x40)))) goto LAB_0203f5ec;
    fVar13 = *(float *)(lVar11 + -0x2c);
    fVar12 = *(float *)(lVar11 + -0x34);
  }
  else {
    if (bVar4) {
      uVar9 = 0x80000000;
      goto LAB_0203f5ec;
    }
    if (*(int *)(lVar11 + 0x14) == 8) goto LAB_0203f5ec;
    fVar12 = 156.0;
    if (iVar6 != 0) {
      fVar12 = 200.0;
    }
    fVar13 = 170.0;
    if ((iVar6 != 0) && (fVar13 = 160.0, iVar7 == 0)) {
      uVar9 = 0;
      goto LAB_0203f5ec;
    }
  }
  uVar9 = FUN_006f0400(fVar12 - fVar15,fVar13 - fVar14);
LAB_0203f5ec:
  *param_1 = fVar15;
  param_1[2] = fVar14;
  param_1[1] = 0.0;
  *param_2 = uVar9;
  return;
}

