
void FUN_03f17fa0(float param_1,long param_2,float *param_3,undefined4 *param_4)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  long local_98;
  undefined4 local_90;
  undefined *local_88;
  char *local_80;
  undefined1 local_78;
  
  if (param_3 == (float *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_2 + 0x80);
  if (lVar14 == 0) {
    return;
  }
  lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x20);
  if (lVar12 == 0) {
    return;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "Dummy";
  (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
  lVar10 = 0;
  do {
    if (*(char *)(*(long *)(lVar14 + 0x28) + lVar10) == '\0') {
LAB_03f18060:
      iVar6 = (int)lVar10;
joined_r0x03f18064:
      if (4 < iVar6) {
        uVar8 = 0;
        goto LAB_03f18090;
      }
      break;
    }
    lVar1 = *(long *)(lVar14 + 0x28) + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03f18060;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar6 = (int)lVar10 + 2;
      goto joined_r0x03f18064;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  goto LAB_03f1811c;
  while (uVar8 = uVar8 + 1, iVar6 - 4 != uVar8) {
LAB_03f18090:
    pcVar2 = (char *)(*(long *)(lVar14 + 0x28) + uVar8);
    (**(code **)(local_88 + 0x18))(&local_88);
    if ((pcVar2 == local_80) ||
       ((*pcVar2 == *local_80 &&
        ((*pcVar2 == '\0' ||
         ((pcVar2[1] == local_80[1] &&
          ((pcVar2[1] == '\0' ||
           ((pcVar2[2] == local_80[2] &&
            ((pcVar2[2] == '\0' ||
             ((pcVar2[3] == local_80[3] && ((pcVar2[3] == '\0' || (pcVar2[4] == local_80[4])))))))))
           ))))))))) {
      if ((int)uVar8 != -1) {
        return;
      }
      break;
    }
  }
LAB_03f1811c:
  lVar14 = *(long *)(param_2 + 0x80);
  plVar13 = (long *)(lVar14 + 0x20);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  local_98 = 0;
  local_90 = 0;
  lVar10 = *(long *)(lVar14 + 0x28);
  lVar14 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x30) + 0x18) + 0x20))();
  if (((lVar10 != 0) && (*(char *)(lVar14 + 0x78) != '\0')) &&
     (uVar8 = FUN_03bf46a8(lVar12,"searchAndEmit(%s)",lVar10), (uVar8 & 1) != 0)) {
    local_78 = 0;
    local_88 = PTR_DAT_04bcadf8 + 0x10;
    local_80 = (char *)FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar12 + 0x30) + 0x18),lVar10);
    if (local_80 != (char *)0x0) {
      FUN_03bf47b0(lVar12,&local_88,&local_98);
    }
  }
  *(long *)(param_2 + 0x10) = local_98;
  *(undefined4 *)(param_2 + 0x18) = local_90;
  lVar14 = *(long *)(param_2 + 0x10);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x20) != *(int *)(param_2 + 0x18))) {
    plVar13 = (long *)PTR_DAT_04bc3db0;
  }
  else {
    if (*(int *)(lVar14 + 0x70) == 1) {
      lVar12 = *(long *)(lVar14 + 0x68) - (long)*(int *)(lVar14 + 0x74);
    }
    else {
      lVar12 = 0;
    }
    plVar13 = (long *)0x0;
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0x68);
    }
  }
  lVar12 = plVar13[1];
  lVar10 = *plVar13;
  *(long *)(param_2 + 0x20) = lVar10;
  *(int *)(param_2 + 0x28) = (int)lVar12;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar10;
    if (*(int *)(param_2 + 0x28) != *(int *)(lVar10 + 0x10)) {
      lVar12 = 0;
    }
  }
  if (lVar14 == 0) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x20) != *(int *)(param_2 + 0x18)) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x28) != *(int *)(lVar10 + 0x10)) {
    return;
  }
  lVar14 = FUN_03f160e0(*(long *)(*(long *)(param_2 + 8) + 8) + 0x20,
                        *(undefined4 *)(*(long *)(param_2 + 0x80) + 0x98));
  if (lVar14 == 0) {
    dVar17 = (double)param_1;
LAB_03f182d0:
    fVar15 = *param_3;
  }
  else {
    dVar16 = (double)FUN_03f22ef8();
    dVar17 = (double)FUN_03f22ef8(lVar14);
    if (dVar16 <= 0.0) goto LAB_03f182d0;
    fVar15 = *param_3;
    dVar17 = dVar17 + (double)fVar15;
  }
  if (dVar17 <= 0.0) {
    uVar4 = 0;
    if (0.0 <= dVar17) goto LAB_03f183c4;
    fVar15 = (float)((double)fVar15 - dVar17);
    *param_3 = fVar15;
  }
  else {
    if (fVar15 < 0.25) {
      *param_3 = 0.25;
      dVar17 = dVar17 + (double)(0.25 - fVar15);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x3e800000;
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x120) + 8);
    lVar14 = *(long *)(lVar10 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar14 = lVar10 + 0x70;
    }
    uVar4 = FUN_03bc9e90(lVar14,0,0);
    uVar4 = (uint)(dVar17 * (double)uVar4);
    uVar5 = FUN_03bca0e0(lVar14,0,0);
    if (uVar5 < uVar4) {
      if ((*(byte *)(lVar14 + 0x11) & 0x21) == 0) {
        iVar6 = FUN_03bca0e0(lVar14,0,0);
        uVar4 = iVar6 - 1;
      }
      else {
        iVar6 = FUN_03bca080(lVar14);
        iVar7 = FUN_03bca014(lVar14);
        uVar5 = iVar6 - iVar7;
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = (uVar4 - iVar7) / uVar5;
        }
        uVar4 = ((uVar4 - iVar7) - uVar3 * uVar5) + iVar7;
      }
    }
LAB_03f183c4:
    fVar15 = *param_3;
  }
  if (fVar15 <= 0.005) {
    FUN_03b46140((float)uVar4,lVar12);
  }
  else {
    *(undefined1 *)(param_2 + 0x160) = 1;
    if ((-1 < (int)uVar4) && (*(int *)(lVar12 + 0xc) < 3)) {
      *(uint *)(lVar12 + 0x28) = uVar4;
      lVar14 = *(long *)(*(long *)(lVar12 + 0x120) + 8);
      if (DAT_05aebc00 == '\0') {
        puVar11 = (uint *)(lVar14 + 0x18);
      }
      else {
        if (*(char *)(lVar14 + 0x58) == '\0') goto LAB_03f18434;
        puVar11 = (uint *)(lVar14 + 0x60);
      }
      *puVar11 = uVar4;
    }
LAB_03f18434:
    if ((0.0 <= *param_3 + -0.005) && (*(int *)(lVar12 + 0xc) < 3)) {
      *(float *)(lVar12 + 0x2c) = *param_3 + -0.005;
      *(undefined4 *)(lVar12 + 0xc) = 2;
    }
  }
  lVar10 = *(long *)(param_2 + 0x80);
  lVar14 = *(long *)(lVar10 + 0x90);
  if (lVar14 == 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0xa8);
    lVar14 = *(long *)(*(long *)(param_2 + 8) + 0xb0);
    if (lVar1 != 0) {
      lVar14 = lVar1;
    }
    if (lVar14 == 0) goto LAB_03f184ac;
  }
  if ((*(int *)(lVar12 + 0xc) < 3) && (*(long *)(lVar12 + 0x118) == 0)) {
    *(long *)(lVar12 + 0x118) = lVar14;
    FUN_03b46430(lVar12);
    lVar10 = *(long *)(param_2 + 0x80);
  }
LAB_03f184ac:
  if (*(int *)(lVar10 + 0x98) != 0) {
    uVar9 = FUN_03f16214(*(long *)(*(long *)(param_2 + 8) + 8) + 0x20,*(int *)(lVar10 + 0x98),
                         (long *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0xa0) = uVar9;
  }
  return;
}

