
undefined8
FUN_01302c88(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = 0;
  if ((((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) && (param_4 != (int *)0x0)) &&
     (param_5 != (int *)0x0)) {
    uVar7 = 0;
    fVar8 = (float)*(int *)(param_6 + 0xc) * 10.0 + 2.5;
    fVar10 = (float)*(int *)(param_6 + 8) * 10.0 + 2.5;
    fVar11 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
    fVar9 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
    iVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    fVar11 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
    fVar10 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
    iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar1 = iVar3;
    if (iVar5 <= iVar3) {
      iVar1 = iVar5;
    }
    iVar6 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    iVar5 = iVar4;
    if (iVar6 <= iVar4) {
      iVar5 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if ((iVar1 <= iVar2) && (iVar2 <= iVar3)) {
      iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      if ((iVar5 <= iVar3) && (iVar3 <= iVar4)) {
        iVar1 = (iVar2 - iVar1) * 2;
        iVar3 = (iVar3 - iVar5) * 2;
        *param_2 = iVar1;
        *param_3 = iVar3;
        uVar7 = 1;
        *param_4 = iVar1 + 3;
        *param_5 = iVar3 + 3;
      }
    }
  }
  return uVar7;
}

