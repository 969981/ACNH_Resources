
bool FUN_01fabcd0(undefined8 param_1,float *param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined8 *local_80;
  int local_78;
  int iStack_74;
  
  iVar9 = (*(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x10)) + 1;
  iVar13 = *(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x14);
  local_80 = &DAT_048f9750;
  fVar15 = ((float)*(int *)(param_3 + 0x10) * 5.0 + (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) *
           0.5;
  fVar16 = ((float)*(int *)(param_3 + 0x14) * 5.0 + (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0) *
           0.5;
  local_78 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  if (iVar9 <= iVar13 + 1) {
    iVar9 = iVar13 + 1;
  }
  iStack_74 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  if (iVar9 == 0) {
    bVar6 = false;
  }
  else {
    uVar2 = iVar9 * iVar9;
    iVar11 = 0;
    iVar13 = 0;
    uVar14 = 0;
    uVar12 = 1;
    bVar6 = true;
    iVar9 = 1;
    uVar1 = uVar2;
    if (uVar2 < 2) {
      uVar1 = 1;
    }
    bVar10 = false;
    do {
      if ((((*(int *)(param_3 + 0x10) <= local_78 && local_78 <= *(int *)(param_3 + 0x20)) &&
           (*(int *)(param_3 + 0x14) <= iStack_74)) && (iStack_74 <= *(int *)(param_3 + 0x24))) &&
         (uVar8 = (**(code **)*param_4)(param_4,&local_80), (uVar8 & 1) != 0)) {
        if (param_2 == (float *)0x0) {
          return bVar6;
        }
        param_2[2] = (float)iStack_74 * 5.0;
        *param_2 = (float)local_78 * 5.0;
        return bVar6;
      }
      iVar3 = iVar9 * 2 + -1;
      iVar3 = iVar3 * iVar3;
      bVar7 = uVar12 - 1 == iVar3 + -1;
      if (bVar7) {
        iVar9 = iVar9 + 1;
LAB_01fabe80:
        uVar14 = 0;
        iVar13 = 1;
      }
      else if (bVar10) {
LAB_01fabde0:
        iVar13 = 0;
        uVar14 = 0xffffffff;
      }
      else {
        iVar4 = iVar9 * 2 + -2;
        iVar5 = iVar11 + iVar3 + -1;
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = iVar5 / iVar4;
        }
        if (iVar5 == iVar3 * iVar4) {
          if (uVar14 == 1) goto LAB_01fabe80;
          if (iVar13 == 1) goto LAB_01fabde0;
          bVar6 = uVar14 == 0xffffffff;
          uVar14 = (uint)!bVar6;
          iVar13 = -(uint)bVar6;
        }
      }
      bVar6 = uVar12 < uVar2;
      iVar11 = iVar11 + -1;
      uVar12 = uVar12 + 1;
      local_78 = local_78 + uVar14;
      iStack_74 = iStack_74 + iVar13;
      bVar10 = bVar7;
    } while (-uVar1 != iVar11);
  }
  return bVar6;
}

