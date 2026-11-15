
void FUN_01f769e0(long param_1,int *param_2,float *param_3)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  
  pcVar2 = (char *)(param_1 + 0xafa0);
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar9 = *(float *)(lVar4 + 0x278);
  fVar7 = *(float *)(lVar4 + 0x27c);
  fVar10 = *(float *)(lVar4 + 0x280);
  iVar8 = *(int *)(DAT_05462668 + 0x10);
  iVar11 = *(int *)(DAT_05462668 + 0x14);
  iVar13 = *(int *)(DAT_05462668 + 0x20);
  iVar15 = *(int *)(DAT_05462668 + 0x24);
  if (*(char *)(param_1 + 45000) == '\0') {
    *(float *)(param_1 + 0xafcc) = fVar9;
    *(float *)(param_1 + 0xafd0) = fVar7;
    *(float *)(param_1 + 0xafd4) = fVar10;
    *(undefined1 *)(param_1 + 45000) = 1;
  }
  if (*param_2 - 3U < 2) {
    fVar5 = fVar9 - *(float *)(param_1 + 0xafcc);
  }
  else if (*param_2 - 1U < 2) {
    fVar5 = fVar10 - *(float *)(param_1 + 0xafd4);
  }
  else {
    fVar5 = 0.0;
  }
  fVar6 = 14.0;
  fVar5 = sinf(fVar5 / 14.0);
  if (7 < *param_2 - 1U) goto LAB_01f76d30;
  fVar14 = (float)iVar8 * 5.0;
  fVar12 = (float)iVar11 * 5.0;
  fVar16 = (float)iVar13 * 5.0 + 5.0;
  fVar6 = (float)iVar15 * 5.0 + 5.0;
  fVar5 = fVar5 * 4.0 + fVar5 * 4.0;
  switch(*param_2) {
  case 1:
    fVar5 = fVar16 + 10.0 + fVar5;
    if (*pcVar2 == '\0') {
LAB_01f76b2c:
      fVar6 = fVar10 + -10.0;
      goto LAB_01f76d30;
    }
    goto LAB_01f76b10;
  case 2:
    fVar5 = fVar14 + -10.0 + fVar5;
    if (*pcVar2 != '\0') goto LAB_01f76b2c;
LAB_01f76b10:
    fVar6 = fVar10 + 10.0;
    goto LAB_01f76d30;
  case 3:
    fVar6 = fVar12 + -10.0 + fVar5;
    if (*pcVar2 == '\0') {
LAB_01f76b5c:
      fVar5 = fVar9 + -10.0;
      goto LAB_01f76d30;
    }
    goto LAB_01f76b44;
  case 4:
    fVar6 = fVar6 + 10.0 + fVar5;
    if (*pcVar2 != '\0') goto LAB_01f76b5c;
LAB_01f76b44:
    fVar5 = fVar9 + 10.0;
    goto LAB_01f76d30;
  case 5:
    cVar3 = *pcVar2;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    iVar11 = FUN_006f0400(*(float *)(lVar4 + 0x278) - fVar16,*(float *)(lVar4 + 0x280) - fVar12);
    iVar8 = -0x71c71c8;
    if (cVar3 == '\0') {
      iVar8 = 0x71c71c8;
    }
    uVar1 = (ulong)((uint)(iVar11 + iVar8) >> 0x18);
    fVar9 = (float)(iVar11 + iVar8 & 0xffffff) * 5.9604645e-08;
    fVar5 = fVar16 + ((float)(&DAT_04199798)[uVar1 * 4] + fVar9 * (float)(&DAT_0419979c)[uVar1 * 4])
                     * 10.0;
    fVar6 = fVar12 + ((float)(&DAT_041997a0)[uVar1 * 4] + fVar9 * (float)(&DAT_041997a4)[uVar1 * 4])
                     * 10.0;
    break;
  case 6:
    cVar3 = *pcVar2;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    iVar11 = FUN_006f0400(*(float *)(lVar4 + 0x278) - fVar16,*(float *)(lVar4 + 0x280) - fVar6);
    iVar8 = -0x71c71c8;
    if (cVar3 == '\0') {
      iVar8 = 0x71c71c8;
    }
    uVar1 = (ulong)((uint)(iVar11 + iVar8) >> 0x18);
    fVar9 = (float)(iVar11 + iVar8 & 0xffffff) * 5.9604645e-08;
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar9 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar5 = fVar16 + ((float)(&DAT_04199798)[uVar1 * 4] + fVar9 * (float)(&DAT_0419979c)[uVar1 * 4])
                     * 10.0;
    goto LAB_01f76d28;
  case 7:
    cVar3 = *pcVar2;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    iVar11 = FUN_006f0400(*(float *)(lVar4 + 0x278) - fVar14,*(float *)(lVar4 + 0x280) - fVar12);
    iVar8 = -0x71c71c8;
    if (cVar3 == '\0') {
      iVar8 = 0x71c71c8;
    }
    uVar1 = (ulong)((uint)(iVar11 + iVar8) >> 0x18);
    fVar9 = (float)(iVar11 + iVar8 & 0xffffff) * 5.9604645e-08;
    fVar5 = fVar14 + ((float)(&DAT_04199798)[uVar1 * 4] + fVar9 * (float)(&DAT_0419979c)[uVar1 * 4])
                     * 10.0;
    fVar6 = fVar12 + ((float)(&DAT_041997a0)[uVar1 * 4] + fVar9 * (float)(&DAT_041997a4)[uVar1 * 4])
                     * 10.0;
    break;
  case 8:
    cVar3 = *pcVar2;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    iVar11 = FUN_006f0400(*(float *)(lVar4 + 0x278) - fVar14,*(float *)(lVar4 + 0x280) - fVar6);
    iVar8 = -0x71c71c8;
    if (cVar3 == '\0') {
      iVar8 = 0x71c71c8;
    }
    uVar1 = (ulong)((uint)(iVar11 + iVar8) >> 0x18);
    fVar9 = (float)(iVar11 + iVar8 & 0xffffff) * 5.9604645e-08;
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar9 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar5 = fVar14 + ((float)(&DAT_04199798)[uVar1 * 4] + fVar9 * (float)(&DAT_0419979c)[uVar1 * 4])
                     * 10.0;
LAB_01f76d28:
    fVar6 = fVar6 + fVar10 * 10.0;
  }
  *(undefined1 *)(param_1 + 45000) = 0;
LAB_01f76d30:
  *param_3 = fVar5;
  param_3[1] = fVar7;
  param_3[2] = fVar6;
  return;
}

