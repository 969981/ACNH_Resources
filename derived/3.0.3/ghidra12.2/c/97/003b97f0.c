
void FUN_003b97f0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
  if (*puVar1 == 0) {
    *param_2 = 0xffffffff;
    uVar2 = *puVar1;
  }
  else {
    *param_2 = puVar1[1];
    uVar2 = *puVar1;
  }
  if (uVar2 < 2) {
    param_2[1] = 0xffffffff;
    uVar2 = *puVar1;
  }
  else {
    param_2[1] = puVar1[2];
    uVar2 = *puVar1;
  }
  if (uVar2 < 3) {
    param_2[2] = 0xffffffff;
    uVar2 = *puVar1;
  }
  else {
    param_2[2] = puVar1[3];
    uVar2 = *puVar1;
  }
  if (uVar2 < 4) {
    param_2[3] = 0xffffffff;
    return;
  }
  param_2[3] = puVar1[4];
  return;
}

