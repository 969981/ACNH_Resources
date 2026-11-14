
void FUN_018781fc(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  uint local_38;
  undefined4 local_34;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = (int)((float)(int)*(float *)(param_1 + 0x328) / 5.0) -
             (uint)(*(float *)(param_1 + 0x328) < 0.0);
  iStack_24 = (int)((float)(int)*(float *)(param_1 + 0x330) / 5.0) -
              (uint)(*(float *)(param_1 + 0x330) < 0.0);
  uVar1 = FUN_01a1ddd0(&local_30,PTR_LAB_04bbe978);
  if ((uVar1 & 1) == 0) {
    local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)(param_1 + 0x494)) ^ 1;
    local_34 = *(undefined4 *)(param_1 + 0x4a8);
    uVar1 = (**(code **)(param_1 + 0x498))
                      (*(undefined4 *)(param_1 + 0x338),local_28,iStack_24,&local_38);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x338);
      goto LAB_018782d4;
    }
  }
  local_38 = 0;
  uVar2 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x328,&local_38);
LAB_018782d4:
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  return;
}

