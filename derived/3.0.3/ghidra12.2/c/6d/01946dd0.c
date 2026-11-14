
void FUN_01946dd0(undefined4 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  *(undefined4 *)(param_2 + 3) = 0;
  uVar6 = *(uint *)(param_3 + 8);
  uVar7 = *(uint *)(param_3 + 0xc);
  *(uint *)(param_2 + 2) = uVar6;
  *(uint *)((long)param_2 + 0x14) = uVar7;
  if ((uVar6 & 0x80000001) == 1) {
    *(uint *)(param_2 + 2) = uVar6 - 1;
  }
  if ((uVar7 & 0x80000001) == 1) {
    *(uint *)((long)param_2 + 0x14) = uVar7 - 1;
  }
  lVar10 = 0;
  do {
    fVar11 = (float)(*(int *)(param_2 + 2) + (&DAT_04057f60)[lVar10 * 2]) * 0.5;
    uVar6 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar6 = (uint)(fVar11 < 0.0);
    }
    fVar12 = (float)(*(int *)((long)param_2 + 0x14) + (&DAT_04057f64)[lVar10 * 2]) * 0.5;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    fVar11 = (float)(int)((int)fVar11 - uVar6) * 10.0;
    fVar13 = fVar11 + 2.5;
    fVar12 = (float)(int)((int)fVar12 - uVar7) * 10.0;
    fVar11 = fVar11 + 10.0 + -2.5;
    fVar14 = fVar12 + 2.5;
    fVar12 = fVar12 + 10.0 + -2.5;
    iVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar4 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar2 = iVar3;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar9 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar4 = iVar8;
    if (iVar8 <= iVar9) {
      iVar4 = iVar9;
    }
    if (iVar9 <= iVar8) {
      iVar8 = iVar9;
    }
    if (iVar4 + 1 == iVar8) {
      bVar5 = 1;
    }
    else {
      iVar9 = iVar2;
      do {
        bVar5 = (*(code *)*param_2)(param_1,iVar9,iVar8,param_4);
        if ((bVar5 & 1) == 0) break;
        if (iVar9 < iVar3) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          iVar9 = iVar2;
        }
      } while ((iVar2 != iVar9) || (iVar4 + 1 != iVar8));
    }
    lVar1 = lVar10 + 1;
    *(byte *)((long)param_2 + lVar10 + 0x18) = bVar5 & 1;
    lVar10 = lVar1;
    if (lVar1 == 4) {
      return;
    }
  } while( true );
}

