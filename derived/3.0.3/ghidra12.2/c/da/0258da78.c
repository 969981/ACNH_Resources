
void FUN_0258da78(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_40 = 0x2400000023;
  uStack_38 = 0x2600000025;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_40 + (long)*(int *)(param_1 + 0x28) * 4));
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    FUN_0258db80(param_1,*param_2,*(undefined4 *)(param_2 + 2));
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "HasNew";
    uVar1 = FUN_026d51a0(*param_2,*(undefined4 *)(param_2 + 2));
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == 0) {
      return;
    }
    uVar1 = uVar1 & 1;
    break;
  case 1:
    FUN_0258e0b0(param_1,*param_2);
    return;
  case 2:
  case 3:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    lVar2 = *(long *)(param_1 + 8);
    pcStack_28 = "HandwriteVerticesNum";
    if (lVar2 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_2[1] + 0x7778);
    break;
  default:
    goto switchD_0258dad4_default;
  }
  FUN_026054d0(lVar2,&local_30,uVar1);
switchD_0258dad4_default:
  return;
}

