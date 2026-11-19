
void FUN_03b60f94(float param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05aebc00 == '\0') {
    plVar3 = *(long **)(param_2 + 0x48);
    if (((plVar3 != (long *)0x0) && (DAT_05aebb78 != 0)) && (*(long *)(DAT_05aebb78 + 0x10) != 0)) {
      iVar1 = (int)(param_1 / *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c));
      if ((param_3 & 1) == 0) {
        if (*(int *)(param_2 + 0x10) != 2) {
          return;
        }
        if (*plVar3 != 0) {
          FUN_003cec34(*plVar3,0,iVar1);
        }
        uVar2 = 1;
      }
      else {
        if (*(int *)(param_2 + 0x10) != 1) {
          return;
        }
        if (*plVar3 != 0) {
          FUN_003cec34(*plVar3,1,iVar1);
        }
        uVar2 = 2;
      }
      *(undefined4 *)(param_2 + 0x10) = uVar2;
    }
  }
  else if (*(long *)(param_2 + 0x128) != 0) {
    switch(*(undefined4 *)(param_2 + 0x5c)) {
    case 0:
    case 2:
    case 3:
      if ((param_3 & 1) != 0) {
        return;
      }
      uVar2 = 1;
      break;
    case 1:
      if ((param_3 & 1) == 0) {
        return;
      }
      uVar2 = 2;
      break;
    default:
      goto switchD_03b60fdc_default;
    }
    *(undefined4 *)(param_2 + 0x5c) = uVar2;
    if ((((*(char *)(param_2 + 0x58) != '\0') && (lVar4 = *(long *)(param_2 + 0x130), lVar4 != 0))
        && ((*(char *)(lVar4 + 8) != '\0' &&
            ((*(int **)(lVar4 + 0x10) != (int *)0x0 && (**(int **)(lVar4 + 0x10) == 0x56415742))))))
       && (*(short *)(lVar4 + 0x30) != 0)) {
      FUN_03b62ad0(*(undefined8 *)(param_2 + 0x128),param_3 & 1,*(undefined4 *)(param_2 + 0x6c),0);
      return;
    }
  }
switchD_03b60fdc_default:
  return;
}

