
void FUN_02774a70(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  bool bVar4;
  
  uVar2 = 0;
  bVar4 = false;
  piVar3 = (int *)(param_1 + 0x3a268);
  do {
    if ((bVar4) ||
       ((*piVar3 == *param_2 &&
        ((*(long *)(param_2 + 1) == *(long *)(piVar3 + 1) &&
         *(long *)(param_2 + 3) == *(long *)(piVar3 + 3)) && param_2[5] == piVar3[5])))) {
      if (uVar2 < 7) {
        *(undefined8 *)piVar3 = *(undefined8 *)(piVar3 + 7);
        *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 9);
        *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar3 + 0xb);
        uVar1 = piVar3[0xd];
        if (1 < uVar1) {
          uVar1 = 0;
        }
        piVar3[6] = uVar1;
        bVar4 = true;
      }
      else {
        bVar4 = true;
        *piVar3 = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
      }
    }
    else {
      bVar4 = false;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 7;
  } while (uVar2 != 8);
  return;
}

