
void FUN_01947010(undefined4 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 uint param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  param_2[3] = 0;
  lVar10 = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_3 + 0xc);
  fVar13 = (float)*(int *)(param_3 + 0xc) * 0.5;
  fVar11 = (float)*(int *)(param_3 + 8) * 0.5;
  uVar6 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar6 = (uint)(fVar11 < 0.0);
  }
  uVar7 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar7 = (uint)(fVar13 < 0.0);
  }
  do {
    fVar12 = (float)(int)(((int)fVar11 - uVar6) +
                         (int)((float)(int)(&DAT_04177458)[lVar10 * 2] * 0.5)) * 10.0;
    fVar15 = fVar12 + 2.5;
    fVar12 = fVar12 + 10.0 + -2.5;
    fVar14 = (float)(int)(((int)fVar13 - uVar7) +
                         (int)((float)(int)(&DAT_0417745c)[lVar10 * 2] * 0.5)) * 10.0;
    fVar16 = fVar14 + 2.5;
    fVar14 = fVar14 + 10.0 + -2.5;
    iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar8 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar1 = iVar3;
    if (iVar4 <= iVar3) {
      iVar1 = iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar9 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar4 = iVar8;
    if (iVar8 <= iVar9) {
      iVar4 = iVar9;
    }
    if (iVar9 <= iVar8) {
      iVar8 = iVar9;
    }
    if (iVar4 + 1 != iVar8) {
      iVar9 = iVar1;
      do {
        uVar5 = (*(code *)*param_2)(param_1,iVar9,iVar8,param_4);
        if ((uVar5 & 1) == 0) goto LAB_019470dc;
        if (iVar9 < iVar3) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          iVar9 = iVar1;
        }
      } while ((iVar1 != iVar9) || (iVar4 + 1 != iVar8));
    }
    *(undefined1 *)((long)param_2 + lVar10 + 0x18) = 1;
LAB_019470dc:
    lVar10 = lVar10 + 1;
    if (lVar10 == 8) {
      if ((param_5 & 1) == 0) {
        return;
      }
      if (*(char *)((long)param_2 + 0x1c) == '\0') {
        *(undefined1 *)((long)param_2 + 0x1d) = 0;
        *(undefined1 *)((long)param_2 + 0x1b) = 0;
        cVar2 = *(char *)(param_2 + 3);
      }
      else {
        cVar2 = *(char *)(param_2 + 3);
      }
      if (cVar2 == '\0') {
        *(undefined1 *)((long)param_2 + 0x1f) = 0;
        *(undefined1 *)((long)param_2 + 0x19) = 0;
        cVar2 = *(char *)((long)param_2 + 0x1e);
      }
      else {
        cVar2 = *(char *)((long)param_2 + 0x1e);
      }
      if (cVar2 == '\0') {
        *(undefined1 *)((long)param_2 + 0x1d) = 0;
        *(undefined1 *)((long)param_2 + 0x1f) = 0;
        cVar2 = *(char *)((long)param_2 + 0x1a);
      }
      else {
        cVar2 = *(char *)((long)param_2 + 0x1a);
      }
      if (cVar2 == '\0') {
        *(undefined1 *)((long)param_2 + 0x1b) = 0;
        *(undefined1 *)((long)param_2 + 0x19) = 0;
      }
      return;
    }
  } while( true );
}

