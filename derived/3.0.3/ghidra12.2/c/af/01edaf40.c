
void FUN_01edaf40(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_58;
  
  uVar16 = DAT_053e0cf8;
  uVar7 = DAT_053e0cec;
  uVar6 = DAT_053e0ce4;
  pfVar1 = (float *)(param_1 + 0x56ec);
  fVar20 = *pfVar1;
  fVar19 = *(float *)(param_1 + 0x56f0);
  fVar18 = *(float *)(param_1 + 0x56f4);
  *(undefined4 *)(param_1 + 0xaa34) = DAT_053e0cf4;
  *(undefined4 *)(param_1 + 0xaa38) = uVar16;
  uVar16 = DAT_053e0cfc;
  pfVar2 = (float *)(param_1 + 0x7830);
  iVar10 = *(int *)(param_1 + 0x7880);
  *(undefined8 *)(param_1 + 0xaa24) = uVar6;
  *(undefined8 *)(param_1 + 0xaa2c) = uVar7;
  *(undefined4 *)(param_1 + 0xaa3c) = uVar16;
  *(undefined4 *)(param_1 + 0xaa40) = DAT_053e0d00;
  if (((fVar20 == 0.0) && (fVar19 == 0.0)) && (fVar18 == 0.0)) {
LAB_01edb018:
    local_58 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_58 + 4,
                 &local_58,PTR_DAT_04bc1600,6);
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar15 = *(float *)(lVar13 + 0x278) - fVar20;
    fVar17 = *(float *)(lVar13 + 0x280) - fVar18;
    if (SQRT(fVar17 * fVar17 + fVar15 * fVar15) < 5.0) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      *(undefined4 *)(param_1 + 0x56f4) = 0;
      goto LAB_01edb018;
    }
    FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
    *(undefined8 *)(param_1 + 0xa9fc) = 0x100000000;
    *(float *)(param_1 + 0xa9f0) = fVar20;
    *(float *)(param_1 + 0xa9f4) = fVar19;
    *(float *)(param_1 + 0xa9f8) = fVar18;
    *(undefined1 *)(param_1 + 0xaa44) = 0;
    *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
    *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
    *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
    *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
    *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
  }
  fVar18 = *(float *)(param_1 + 0x895c);
  fVar19 = *(float *)(param_1 + 0x8960);
  bVar8 = false;
  if ((*(float *)(param_1 + 0x8964) == 0.0) && (bVar8 = false, !NAN(fVar19))) {
    bVar8 = fVar19 == 0.0;
  }
  bVar9 = false;
  if ((bVar8) && (bVar9 = false, !NAN(fVar18))) {
    bVar9 = fVar18 == 0.0;
  }
  if ((bVar9) || (iVar10 != 5)) {
    lVar13 = *(long *)(param_1 + 0x18);
    uVar11 = FUN_02085a50(lVar13,1,0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar13 + 0x801) = 1;
      lVar3 = lVar13 + 0x10 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar13 + 0x294)) {
        lVar3 = lVar13 + 0x10;
      }
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
    }
    switch(iVar10) {
    case 4:
      uVar16 = *(undefined4 *)(param_1 + 0xae6c);
      *(undefined8 *)pfVar2 = *(undefined8 *)(param_1 + 0xae64);
      break;
    default:
      goto switchD_01edb160_caseD_5;
    case 6:
    case 7:
    case 10:
      lVar13 = *(long *)PTR_DAT_04bb5c90;
      *pfVar2 = *(float *)(lVar13 + 0x40);
      *(undefined4 *)(param_1 + 0x7834) = *(undefined4 *)(lVar13 + 0x44);
      uVar16 = *(undefined4 *)(lVar13 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x7838) = uVar16;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x18);
    *pfVar2 = fVar18;
    *(float *)(param_1 + 0x7834) = fVar19;
    *(float *)(param_1 + 0x7838) = *(float *)(param_1 + 0x8964);
    uVar11 = FUN_02085a50(lVar13,1,0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar13 + 0x801) = 1;
      lVar3 = lVar13 + 0x10 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar13 + 0x294)) {
        lVar3 = lVar13 + 0x10;
      }
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
    }
  }
switchD_01edb160_caseD_5:
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    lVar13 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
    (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
    if (*(undefined1 **)(lVar13 + 1000) != &DAT_040b026f) {
      uVar11 = 0;
      bVar8 = true;
      do {
        cVar4 = (*(undefined1 **)(lVar13 + 1000))[uVar11];
        if (cVar4 != (&DAT_040b026f)[uVar11]) break;
        if (cVar4 == '\0') {
          if (bVar8) goto LAB_01edb2b4;
          break;
        }
        bVar8 = uVar11 < 0x80000;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x80001);
      lVar13 = *(long *)(param_1 + 8);
      (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
      (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
      pcVar14 = *(char **)(lVar13 + 1000);
      if (pcVar14 != "chm") {
        if (*pcVar14 != 'c') goto LAB_01edb2d0;
        lVar13 = 0;
        do {
          if ((lVar13 == 0x80000) || (lVar3 = lVar13 + 1, pcVar14[lVar3] != (&DAT_040bac99)[lVar13])
             ) goto LAB_01edb2d0;
          lVar13 = lVar13 + 1;
        } while (pcVar14[lVar3] != '\0');
      }
    }
LAB_01edb2b4:
    lVar13 = *(long *)(param_1 + 8);
    *pfVar2 = *(float *)(lVar13 + 0x6a8);
    *(undefined4 *)(param_1 + 0x7834) = *(undefined4 *)(lVar13 + 0x6ac);
    *(undefined4 *)(param_1 + 0x7838) = *(undefined4 *)(lVar13 + 0x6b0);
  }
LAB_01edb2d0:
  puVar5 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar13 = *(long *)PTR_DAT_04bb2720, lVar13 != 0)) &&
     (*(long *)(lVar13 + 0x330) != 0)) {
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
    iVar10 = FUN_006bd550(*puVar12,0);
    if (((iVar10 == 0x758f7eaf) && (*(long *)puVar5 != 0)) &&
       ((lVar13 = *(long *)(*(long *)puVar5 + 0x330), lVar13 != 0 &&
        ((*(int *)(lVar13 + 0x244) != 0 && (*(char *)(param_1 + 0xad5d) < '\0')))))) {
      *(undefined1 *)(param_1 + 0x789e) = 1;
    }
  }
  return;
}

