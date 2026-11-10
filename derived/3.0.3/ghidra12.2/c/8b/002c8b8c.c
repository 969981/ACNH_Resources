
void FUN_002c8b8c(long param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auStack_c0 [16];
  undefined *local_b0;
  undefined1 auStack_a8 [36];
  int local_84 [4];
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_34 [4];
  
  FUN_002cb3a4(auStack_60);
  local_58 = FUN_002b43fc(param_1 + 0x50);
  local_48 = FUN_002b43f4(param_1 + 0x50);
  local_50 = *param_4;
  local_54 = param_2;
  FUN_002cb3c8(local_84,auStack_60,auStack_74,auStack_34,0x14);
  if (local_84[0] != 0) {
    return;
  }
  FUN_002b4378(&local_b0,param_3);
  uVar2 = FUN_002b4404(param_3);
  if (((uVar2 >> 7 & 1) == 0) && (uVar4 = FUN_00220038(auStack_a8), (uVar4 & 1) == 0)) {
    FUN_002c91b0(auStack_c0,param_1,&local_b0,auStack_74,0x14,1,param_5);
    FUN_00229780(local_84,auStack_c0);
    if (local_84[0] == 0) {
      if ((*(char *)(param_1 + 0x17c8) != '\0') &&
         (iVar1 = *(int *)(param_1 + 0x17d0), iVar3 = FUN_002b43fc(param_3), iVar1 == iVar3)) {
        *(char *)(param_1 + 0x17c8) = '\0';
      }
    }
  }
  local_b0 = PTR_DAT_04bcba18 + 0x10;
  FUN_0021f584(auStack_a8);
  return;
}

