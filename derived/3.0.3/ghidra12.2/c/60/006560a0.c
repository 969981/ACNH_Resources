
void FUN_006560a0(long param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return;
  }
  param_4 = param_4 * param_3;
  if (param_2 == param_3) {
    FUN_0043a4d0(param_1,0);
    return;
  }
  lVar2 = (long)param_4;
  if ((param_3 & 3) == 0) {
    switch((int)param_3 >> 2) {
    case 1:
      if (param_4 != 0) {
        lVar3 = 0;
        do {
          *(undefined4 *)(param_1 + lVar3) = 0;
          lVar3 = lVar3 + (int)param_2;
        } while (lVar2 != lVar3);
      }
      break;
    case 2:
      if (param_4 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(param_1 + lVar3) = 0;
          lVar3 = lVar3 + (int)param_2;
        } while (lVar2 != lVar3);
      }
      break;
    case 3:
      if (param_4 != 0) {
        lVar3 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
        } while (lVar2 != lVar3);
      }
      break;
    case 4:
      if (param_4 != 0) {
        lVar3 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          *puVar1 = 0;
          puVar1[1] = 0;
        } while (lVar2 != lVar3);
      }
      break;
    default:
      goto switchD_00656154_default;
    }
  }
  else {
switchD_00656154_default:
    if (param_4 != 0) {
      lVar3 = 0;
      do {
        FUN_0043a4d0(param_1 + lVar3,0,param_3);
        lVar3 = lVar3 + (int)param_2;
      } while (lVar2 != lVar3);
    }
  }
  return;
}

