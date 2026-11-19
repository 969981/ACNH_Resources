
void FUN_038377b4(byte *param_1,char *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  bVar1 = *param_1;
  cVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    return;
  }
  if (((bVar1 & 4) != 0 && param_3 == 0) && cVar2 == '\0') {
    return;
  }
  cVar3 = *param_2;
  fVar5 = 3.4028235e+38;
  if (cVar3 != '\0') {
    fVar5 = 0.0;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    FUN_03837a70(fVar5,param_1,param_3);
    if (*(int *)(param_1 + 4) == 1) {
      FUN_03837c10(fVar5,param_1);
      return;
    }
    break;
  case 1:
    FUN_03837c10(fVar5,param_1);
    iVar4 = *(int *)(param_1 + 4);
    goto LAB_03837874;
  case 2:
    FUN_03837d08(fVar5,param_1,param_3);
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    if (cVar3 == '\0') {
      FUN_03f45838(param_1 + 0x1420);
    }
    if (*(int *)(param_1 + 0x1428) != 3) {
      if (*(int *)(param_1 + 0x1428) == 2) {
        param_1[4] = 4;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = *param_1 | 2;
        return;
      }
      return;
    }
    goto LAB_038379f8;
  case 3:
    if (cVar3 == '\0') {
      FUN_03f45838(param_1 + 0x1420);
    }
    if (*(int *)(param_1 + 0x1428) != 3) {
      if (*(int *)(param_1 + 0x1428) != 2) {
        if (*(int *)(param_1 + 4) != 4) {
          return;
        }
        goto LAB_038379d0;
      }
LAB_038379bc:
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = *param_1 | 2;
LAB_038379d0:
      FUN_03837e58(fVar5,param_1,param_3,cVar2 != '\0');
      return;
    }
LAB_038379f8:
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    break;
  case 4:
    if ((bVar1 >> 2 & 1) != 0) {
      if (param_3 == 0) {
        return;
      }
      if (12544.0 <= fVar5) {
        if (fVar5 < 32400.0) {
          return;
        }
        *param_1 = bVar1 & 0xfd;
        param_1[4] = 6;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        FUN_0383a40c(DAT_05ae0928,*(undefined8 *)(param_3 + 8),param_1 + 0x1420);
        if (*(int *)(param_1 + 4) != 5) {
          return;
        }
        goto switchD_03837828_caseD_5;
      }
    }
    if (cVar2 == '\0') {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x198))();
      param_1[4] = 5;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      goto switchD_03837828_caseD_5;
    }
    break;
  case 5:
switchD_03837828_caseD_5:
    FUN_03837fec(fVar5,param_1,cVar2 != '\0');
    return;
  case 6:
    if (fVar5 < 28900.0) {
      FUN_03f45838(param_1 + 0x1420);
    }
    if (*(int *)(param_1 + 0x1428) == 3) goto LAB_038379bc;
    if (*(int *)(param_1 + 0x1428) == 2) {
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      goto LAB_0383799c;
    }
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 4) goto LAB_038379d0;
LAB_03837874:
    if (iVar4 == 2) {
LAB_0383799c:
      FUN_03837d08(fVar5,param_1,param_3);
      return;
    }
  }
  return;
}

