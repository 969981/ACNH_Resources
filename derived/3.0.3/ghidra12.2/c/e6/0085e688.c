
void FUN_0085e688(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar3 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar3;
  lVar3 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_38 = 8;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bb54b0 + 0x10);
  pcStack_60 = "mCreatePos";
  puStack_50 = &DAT_0407ebb1;
  puStack_40 = &DAT_0407ebb1;
  local_58 = local_68;
  local_48 = local_68;
  FUN_0086384c(param_1 + 6,&local_68,PTR_DAT_04bb2150,param_1);
  param_1[0x53] = 0;
  param_1[0x52] = (long)"mNumGenMin";
  param_1[0x54] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x55) = 8;
  param_1[0x56] = 0;
  param_1[0x51] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x51] + 0xf0))(param_1 + 0x51);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x55) >> 7 & 1) == 0) {
    param_1[0x56] = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  param_1[0x59] = 0;
  *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) & 0xfeffffff;
  param_1[0x58] = (long)"mNumGenMax";
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 8;
  param_1[0x57] = (long)(puVar1 + 0x10);
  param_1[0x5c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x57);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x57] + 0xf0))(param_1 + 0x57);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x5b) >> 7 & 1) == 0) {
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfeffffff;
  return;
}

