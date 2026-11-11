
int FUN_003ad8d0(ushort *param_1,ushort *param_2,ushort *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  puVar6 = param_3;
  if (*param_2 <= *param_3) {
    puVar6 = param_2;
  }
  uVar3 = puVar6[1];
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (*param_2 <= *param_3) {
      param_2 = param_3;
    }
    do {
      if (param_2[1] == 0) break;
      uVar1 = (uint)*puVar6 + (uint)uVar3;
      uVar3 = *param_2;
      if (uVar3 < uVar1) {
        if (uVar1 < (uint)uVar3 + (uint)param_2[1]) {
          *param_1 = uVar3;
          iVar4 = iVar4 + 1;
          param_1[1] = (short)uVar1 - *param_2;
          uVar3 = puVar6[2];
          if (puVar6[2] <= param_2[2]) {
            uVar3 = param_2[2];
          }
          param_1[2] = uVar3;
          puVar7 = puVar6 + 3;
          param_1 = param_1 + 3;
          puVar6 = param_2;
        }
        else {
          uVar2 = *(undefined4 *)param_2;
          iVar4 = iVar4 + 1;
          param_1[2] = param_2[2];
          *(undefined4 *)param_1 = uVar2;
          puVar7 = param_2 + 3;
          uVar3 = puVar6[2];
          if (puVar6[2] <= param_2[2]) {
            uVar3 = param_2[2];
          }
          param_1[2] = uVar3;
          param_1 = param_1 + 3;
        }
      }
      else {
        puVar5 = puVar6 + 3;
        puVar7 = puVar5;
        puVar6 = param_2;
        if (*puVar5 <= uVar3) {
          puVar7 = param_2;
          puVar6 = puVar5;
        }
      }
      uVar3 = puVar6[1];
      param_2 = puVar7;
    } while (uVar3 != 0);
  }
  param_1[2] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  return iVar4;
}

