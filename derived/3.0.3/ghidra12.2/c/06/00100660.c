
void FUN_00100660(undefined1 *param_1,undefined1 *param_2,ushort param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_3 = param_3 - 1;
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    if (2 < uVar2) {
      do {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        puVar1 = param_2 + 3;
        param_3 = param_3 - 4;
        param_2 = param_2 + 4;
        param_1[3] = *puVar1;
        param_1 = param_1 + 4;
      } while (param_3 != 0);
    }
  }
  return;
}

