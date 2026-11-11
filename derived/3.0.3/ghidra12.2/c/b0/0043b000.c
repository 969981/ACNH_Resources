
void FUN_0043b000(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  (**(code **)(*param_2 + 0x70))(&local_50);
  local_48 = local_50;
  local_50 = 0;
  if (local_48 == 0) {
    *param_1 = 0;
  }
  else {
    if (0 < (int)param_2[4]) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        iVar1 = (**(code **)(param_2[3] + lVar2))
                          (&local_48,param_3,param_4,((undefined8 *)(param_2[3] + lVar2))[2]);
        if (iVar1 < 0) {
          *param_1 = 0;
          if (local_48 == 0) {
            return;
          }
          goto LAB_0043b0bc;
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x18;
      } while (lVar3 < (int)param_2[4]);
    }
    FUN_004435a0(local_48);
    *param_1 = local_48;
    if (local_48 != 0) {
LAB_0043b0bc:
      FUN_004435c0();
    }
  }
  return;
}

