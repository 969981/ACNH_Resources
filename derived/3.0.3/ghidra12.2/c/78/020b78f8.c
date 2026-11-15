
void FUN_020b78f8(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *local_70;
  char *pcStack_68;
  
  param_2[2] = 0x23080023;
  puVar1 = PTR_DAT_04bb2020;
  *(undefined2 *)(param_2 + 3) = 0x800;
  puVar1 = puVar1 + 0x10;
  pcStack_68 = "BDayMsgSenderNNpcUniqueID0";
  local_70 = puVar1;
  uVar2 = FUN_0274bce0(param_1,&local_70);
  pcStack_68 = "BDayMsgSenderNNpcUniqueID1";
  local_70 = puVar1;
  uVar3 = FUN_0274bce0(param_1,&local_70);
  pcStack_68 = "BDayMsgSenderSNpcUniqueID0";
  local_70 = puVar1;
  iVar4 = FUN_0274bce0(param_1,&local_70);
  pcStack_68 = "BDayMsgSenderSNpcUniqueID1";
  local_70 = puVar1;
  iVar5 = FUN_0274bce0(param_1,&local_70);
  pcStack_68 = "BDayMsgSenderNNpcUniqueID0";
  local_70 = puVar1;
  uVar6 = FUN_0274f6e0(&local_70);
  if (uVar2 != uVar6) {
    FUN_020fd218(param_2 + 2,(int)uVar2 >> 8,uVar2 & 0xff);
  }
  pcStack_68 = "BDayMsgSenderNNpcUniqueID1";
  local_70 = puVar1;
  uVar2 = FUN_0274f6e0(&local_70);
  if (uVar3 != uVar2) {
    FUN_020fd218((long)param_2 + 0xb,(int)uVar3 >> 8,uVar3 & 0xff);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "BDayMsgSenderSNpcUniqueID0";
  local_70 = puVar1;
  iVar7 = FUN_0274f6e0(&local_70);
  iVar8 = 0;
  if (iVar4 != iVar7) {
    iVar8 = iVar4;
  }
  *param_2 = iVar8;
  pcStack_68 = "BDayMsgSenderSNpcUniqueID1";
  local_70 = puVar1;
  iVar8 = FUN_0274f6e0(&local_70);
  iVar4 = 0;
  if (iVar5 != iVar8) {
    iVar4 = iVar5;
  }
  pcStack_68 = "BDayMsgRandomSead";
  param_2[1] = iVar4;
  local_70 = puVar1;
  uVar9 = FUN_0274bce0(param_1,&local_70);
  *param_3 = uVar9;
  return;
}

