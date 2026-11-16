
void FUN_025b1d3c(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_48;
  char *pcStack_40;
  int local_34;
  
  puVar2 = PTR_DAT_04bb2020;
  local_34 = *param_2;
  if (local_34 == 0 && 7 < (uint)param_2[1]) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 6;
    }
  }
  else {
    if (local_34 == 2) {
      lVar3 = 9;
    }
    else if (local_34 == 1) {
      lVar3 = 8;
    }
    else if (local_34 == 0) {
      lVar3 = (long)param_2[1];
    }
    else {
      lVar3 = 0;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "Room";
    if (*(long *)(param_1 + 8) != 0) {
      local_48 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_48,lVar3);
      pcStack_40 = "OrderType";
      if (*(long *)(param_1 + 8) != 0) {
        local_48 = puVar1;
        FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)param_2[2]);
        pcStack_40 = "Visitor";
        if (*(long *)(param_1 + 8) != 0) {
          local_48 = puVar2 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)param_2[3]);
          pcStack_40 = "IsExistPhoto";
          if (*(long *)(param_1 + 8) != 0) {
            local_48 = puVar2 + 0x10;
            FUN_026054d0(*(long *)(param_1 + 8),&local_48,(char)param_2[4]);
          }
        }
      }
    }
  }
  return;
}

