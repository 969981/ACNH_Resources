
void FUN_020667c4(long *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)((long)param_1 + 0xdc) == 3) {
    return;
  }
  if (*(int *)((long)param_1 + 0xdc) == 1) {
    iVar1 = *(int *)((long)param_1 + 0xc4);
    if ((int)param_1[0x19] != -1) {
      iVar1 = (int)param_1[0x19] + 10;
    }
    FUN_02066960(param_1,(long)param_1 + 0x84,iVar1);
    (**(code **)(*param_1 + 0x28))(param_1,(long)param_1 + 0x84);
  }
  if ((int)param_1[4] == 2) {
    if ((int)param_1[6] == 3) {
      fVar2 = -50.0;
    }
    else {
      if ((int)param_1[6] != 4) goto LAB_02066874;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)((long)param_1 + 0x24);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)((long)param_1 + 0x24) = fVar3;
  }
LAB_02066874:
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = 0xbf800000;
  if ((int)param_1[8] == 2) {
    if ((int)param_1[10] == 3) {
      fVar2 = -50.0;
    }
    else {
      if ((int)param_1[10] != 4) goto LAB_020668dc;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)((long)param_1 + 0x44);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)((long)param_1 + 0x44) = fVar3;
  }
LAB_020668dc:
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  if ((int)param_1[0xc] == 2) {
    if ((int)param_1[0xe] == 3) {
      fVar2 = -50.0;
    }
    else {
      if ((int)param_1[0xe] != 4) goto LAB_02066940;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)((long)param_1 + 100);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)((long)param_1 + 100) = fVar3;
  }
LAB_02066940:
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  return;
}

