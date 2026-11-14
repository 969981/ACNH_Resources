
void FUN_01dd1588(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[2] = 0;
  *param_2 = 0xffffffff00000000;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar2 = *(long *)(param_1 + 0xd8);
  if (((((int)param_3 < 0) || (*(int *)(lVar2 + 0x68) <= (int)param_3)) ||
      (plVar3 = *(long **)(*(long *)(lVar2 + 0x70) + (ulong)param_3 * 8), plVar3 == (long *)0x0)) ||
     (*plVar3 == 0)) {
    if ((int)param_3 < *(int *)(lVar2 + 0x9c)) {
      *(undefined4 *)param_2 = 3;
      *(uint *)((long)param_2 + 4) = param_3;
    }
    return;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = 0xffffffff00000001;
  plVar1 = &DAT_04178a58;
  if ((char)plVar3[0xd8] != '\0') {
    plVar1 = plVar3 + 1;
  }
  lVar2 = *plVar1;
  *(uint *)((long)param_2 + 4) = param_3;
  param_2[1] = lVar2;
  param_2[2] = plVar3 + 1;
  FUN_01d6cda0(param_2);
  return;
}

