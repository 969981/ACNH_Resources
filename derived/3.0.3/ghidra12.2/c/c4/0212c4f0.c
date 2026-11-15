
int FUN_0212c4f0(long param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int local_8;
  int iStack_4;
  
  piVar2 = &DAT_04c9a0c8;
  iStack_4 = DAT_04c9a0c8;
  if (*(int *)(param_1 + 0x278) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x280);
    lVar4 = (long)*(int *)(param_1 + 0x278) << 3;
    do {
      piVar5 = (int *)*puVar3;
      if (*piVar5 == *param_2) {
        iStack_4 = piVar5[1];
        piVar1 = &iStack_4;
        piVar2 = &local_8;
        if (piVar5[3] != 0) {
          piVar1 = &local_8;
          piVar2 = &iStack_4;
        }
        if ((param_3 & 1) != 0) {
          piVar2 = piVar1;
        }
        break;
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return *piVar2;
}

