
void FUN_00a710c0(undefined8 param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  int local_14;
  
  if (-1 < (int)DAT_04c47dc0) {
    uVar2 = 0;
    piVar3 = &DAT_04d9fe90;
    do {
      piVar1 = piVar3;
      if (999 < uVar2) {
        piVar1 = &DAT_04d9fe90;
      }
      if ((*piVar1 != 0) && (*(long *)(piVar1 + 2) == param_2)) {
        if ((uint)uVar2 != 0xffffffff) {
          if (999 < (uint)uVar2) {
            piVar3 = &DAT_04d9fe90;
          }
          local_14 = *piVar3;
          goto LAB_00a7113c;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar2);
  }
  local_14 = 0;
LAB_00a7113c:
  FUN_0071c7c4(param_1,&local_14,0);
  return;
}

