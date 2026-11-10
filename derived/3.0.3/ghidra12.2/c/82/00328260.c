
int FUN_00328260(ulong param_1,undefined1 *param_2,long param_3,int param_4,long param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  uint *puVar11;
  undefined4 *puVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  
  uVar3 = *(uint *)(param_3 + 0xac);
  *(uint *)(param_3 + 0xac) = uVar3 * 0x41c64e6d + 0x3039;
  if (*(long *)(*(long *)(param_3 + 0x240) + 0x290) == 0) {
    pcVar13 = (code *)0x0;
    lVar8 = *(long *)(param_3 + 0x480);
    if (lVar8 != 0) goto LAB_003282d4;
LAB_0032833c:
    pcVar14 = (code *)0x0;
    lVar8 = *(long *)(param_3 + 0x470);
    if (lVar8 == 0) {
      pcVar9 = (code *)0x0;
    }
    else {
LAB_003282e4:
      pcVar9 = *(code **)(lVar8 + 0x38);
    }
  }
  else {
    pcVar13 = *(code **)(*(long *)(**(long **)(param_3 + 0x4d0) + 0x28) + 0x38);
    lVar8 = *(long *)(param_3 + 0x480);
    if (lVar8 == 0) goto LAB_0032833c;
LAB_003282d4:
    pcVar14 = *(code **)(lVar8 + 0x38);
    lVar8 = *(long *)(param_3 + 0x470);
    pcVar9 = (code *)0x0;
    if (lVar8 != 0) goto LAB_003282e4;
  }
  pcVar10 = (code *)0x0;
  if (*(long *)(param_3 + 0x478) != 0) {
    pcVar10 = *(code **)(*(long *)(param_3 + 0x478) + 0x38);
  }
  lVar8 = *(long *)(*(long *)(param_3 + 0x240) + 0x10);
  fVar19 = (float)uVar3 * 2.3283064e-10;
  if (*(int *)(lVar8 + 0x8bc) == 0) {
    cVar5 = *(char *)(lVar8 + 0x880);
    lVar8 = *(long *)(param_3 + 0xa0);
    if (cVar5 == '\r') {
      puVar11 = (uint *)(lVar8 + 0x8d0);
      puVar12 = (undefined4 *)(lVar8 + 0x8d4);
    }
    else {
      if (cVar5 != '\x02') goto LAB_0032838c;
      puVar11 = (uint *)(lVar8 + 0x8c8);
      puVar12 = (undefined4 *)(lVar8 + 0x8cc);
    }
    fVar18 = (float)NEON_ucvtf(*puVar12);
    param_4 = (*puVar11 - (int)(fVar19 * fVar18 * 0.01 * (float)*puVar11)) * param_4;
  }
LAB_0032838c:
  if (param_4 < 1) {
    iVar17 = -1;
  }
  else {
    iVar16 = 0;
    pcVar2 = pcVar9;
    if (pcVar9 == (code *)0x0) {
      pcVar2 = pcVar10;
    }
    iVar17 = -1;
    uVar6 = param_1;
    while( true ) {
      iVar4 = *(int *)(param_3 + 0x234);
      lVar15 = (long)iVar4;
      lVar8 = *(long *)(param_3 + 0xb0) + lVar15 * 0x20;
      if (*(float *)(param_3 + 0x44) - *(float *)(lVar8 + 8) < *(float *)(lVar8 + 0xc)) break;
      if ((*(long *)(lVar8 + 0x18) != 0) || (*(long *)(lVar8 + 0x10) != 0)) {
        if (*(char *)(*(long *)(param_3 + 0xa0) + 0x83a) == '\0') {
          FUN_0032c600(**(long **)(param_3 + 0x4d0) + 0x14,param_3,4);
          return iVar17;
        }
        return iVar17;
      }
      *param_2 = 1;
      lVar8 = param_3 + 0x1d0;
      if (*(char *)(*(long *)(param_3 + 0xa0) + 0x792) != '\0') {
        lVar8 = *(long *)(param_3 + 0xc0);
      }
      if (*(int *)(*(long *)(param_3 + 0x240) + 0x88) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(param_3 + 0xb8) + (long)iVar4 * 0x158;
      }
      uVar6 = FUN_003285d0(fVar19,uVar6,param_3,iVar4,*(long *)(param_3 + 0xb0) + lVar15 * 0x20,
                           lVar7,lVar8,iVar4,iVar16,param_4,param_5);
      if ((uVar6 & 1) != 0) {
        *(int *)(param_3 + 0x748) = iVar4;
        puVar12 = (undefined4 *)(*(long *)(lVar8 + 0x10) + lVar15 * 0x10);
        puVar1 = (undefined4 *)(*(long *)(lVar8 + 8) + lVar15 * 0x10);
        *puVar12 = *puVar1;
        puVar12[1] = puVar1[1];
        puVar12[2] = puVar1[2];
        if (*(long *)(param_3 + 0x5e0) != 0) {
          uVar6 = FUN_00327eac(param_1,param_3,iVar4);
        }
        if (param_5 == 0) {
          local_98 = 0;
        }
        else {
          local_98 = *(undefined8 *)(param_5 + 0x50);
        }
        local_7c = *(undefined4 *)(*(long *)(param_3 + 0xb0) + lVar15 * 0x20 + 0xc);
        local_90 = 0;
        local_80 = 0;
        lStack_88 = param_3;
        local_78 = iVar4;
        if (pcVar13 != (code *)0x0) {
          uVar6 = (*pcVar13)(&local_98);
        }
        if (pcVar14 != (code *)0x0) {
          uVar6 = (*pcVar14)(&local_98);
        }
        if (pcVar9 != (code *)0x0 || pcVar10 != (code *)0x0) {
          uVar6 = (*pcVar2)(&local_98);
        }
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar15 * 0x20 + 0x18) = local_90;
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar15 * 0x20 + 0x10) = local_98;
        iVar17 = 0;
        if (iVar4 + 1 < *(int *)(param_3 + 0x230)) {
          iVar17 = iVar4 + 1;
        }
        *(int *)(param_3 + 0x234) = iVar17;
        iVar17 = iVar4;
        if (*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x230)) {
          *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
        }
      }
      iVar16 = iVar16 + 1;
      if (param_4 == iVar16) {
        return iVar17;
      }
    }
  }
  return iVar17;
}

