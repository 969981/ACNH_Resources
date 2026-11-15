
void FUN_0212a194(undefined4 *param_1,byte *param_2)

{
  undefined *local_60;
  char *pcStack_58;
  byte local_28 [4];
  undefined4 local_24;
  
  FUN_006d8678(&local_60,"TalkNpc%dCount",*param_1);
  local_28[0] = *param_2;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  local_24 = FUN_02582fe0(local_28);
  FUN_021294b0(&local_60,1,&local_24);
  local_28[0] = *param_2;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "TalkAllNpcCount";
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  local_24 = FUN_02582fe0(local_28);
  FUN_021294b0(&local_60,1,&local_24);
  return;
}

