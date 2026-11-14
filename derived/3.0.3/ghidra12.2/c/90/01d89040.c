
void FUN_01d89040(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = 0;
  do {
    if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01d890bc;
    lVar1 = param_2[1] + lVar3;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_01d890bc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      goto LAB_01d890bc;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_01d890bc:
  uVar2 = (uint)lVar3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (0x7e < (int)uVar2) {
    uVar2 = 0x7f;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  memcpy(param_1,(void *)param_2[1],(ulong)uVar2);
  return;
}

