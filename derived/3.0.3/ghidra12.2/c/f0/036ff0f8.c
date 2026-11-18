
undefined8 FUN_036ff0f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  float local_3c [2];
  float local_34;
  
  local_3c[0] = 0.0;
  local_34 = 0.0;
  uVar8 = FUN_036f98d0(param_1,param_2,local_3c);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  cVar7 = DAT_0545c458 != 0xffffffff;
  if (DAT_0545c45c != 0xffffffff) {
    cVar7 = cVar7 + '\x01';
  }
  if (cVar7 != '\0') {
    iVar5 = (int)((float)(int)local_3c[0] / 5.0) - (uint)(local_3c[0] < 0.0);
    iVar6 = (int)((float)(int)local_34 / 5.0) - (uint)(local_34 < 0.0);
    if ((DAT_0545c458 != 0xffffffff) && ((int)DAT_0545c458 < 0x10)) {
      puVar9 = &DAT_0545b240 + (ulong)DAT_0545c458 * 0x118;
      if (0xf < DAT_0545c458) {
        puVar9 = &DAT_0545b240;
      }
      if ((puVar9[0x8c] != '\0') && (uVar8 = FUN_0277dedc(puVar9 + 0xac), (uVar8 & 1) == 0)) {
        iVar3 = *(int *)(puVar9 + 0xc0) + -2;
        iVar1 = *(int *)(puVar9 + 0xc0) + 3;
        iVar4 = *(int *)(puVar9 + 0xc4) + -2;
        iVar2 = *(int *)(puVar9 + 0xc4) + 3;
        if (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && iVar6 == iVar2 ||
            (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && iVar6 - iVar2 < 0) !=
            (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && SBORROW4(iVar6,iVar2))) {
          return 1;
        }
      }
    }
    if (((cVar7 != '\x01') && (DAT_0545c45c != 0xffffffff)) && ((int)DAT_0545c45c < 0x10)) {
      puVar9 = &DAT_0545b240 + (ulong)DAT_0545c45c * 0x118;
      if (0xf < DAT_0545c45c) {
        puVar9 = &DAT_0545b240;
      }
      if ((puVar9[0x8c] != '\0') && (uVar8 = FUN_0277dedc(puVar9 + 0xac), (uVar8 & 1) == 0)) {
        iVar3 = *(int *)(puVar9 + 0xc0) + -2;
        iVar1 = *(int *)(puVar9 + 0xc0) + 3;
        iVar4 = *(int *)(puVar9 + 0xc4) + -2;
        iVar2 = *(int *)(puVar9 + 0xc4) + 3;
        if (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && iVar6 == iVar2 ||
            (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && iVar6 - iVar2 < 0) !=
            (((iVar3 <= iVar5 && iVar5 <= iVar1) && iVar4 <= iVar6) && SBORROW4(iVar6,iVar2))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

