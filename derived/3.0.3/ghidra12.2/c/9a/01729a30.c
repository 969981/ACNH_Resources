
void FUN_01729a30(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte local_54 [4];
  undefined *local_50;
  char *pcStack_48;
  
  pbVar1 = (byte *)(param_1 + 0x188);
  if (*(long *)(param_1 + 600) == 0) {
    local_54[0] = *pbVar1;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_54,1);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "UpgradePocket40";
      local_50 = puVar2;
      iVar4 = FUN_0274b8d0(lVar5,&local_50);
      if (iVar4 == 0) {
        pcStack_48 = "UpgradePocket30";
        local_50 = puVar2;
        iVar4 = FUN_0274b8d0(lVar5,&local_50);
        uVar8 = (uint)(iVar4 != 0);
      }
      else {
        uVar8 = 2;
      }
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar8);
    lVar5 = 0;
    lVar6 = 0x1e;
    if (uVar8 != 1) {
      lVar6 = 0x14;
    }
    lVar3 = 0x28;
    if (uVar8 != 2) {
      lVar3 = lVar6;
    }
    do {
      lVar6 = FUN_02677ea0(pbVar1,lVar5);
      uVar7 = FUN_0277d7b4(param_1 + 0x238,lVar6);
      if ((((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x23b) == *(char *)(lVar6 + 3))) &&
         (*(int *)(param_1 + 0x23c) == *(int *)(lVar6 + 4))) {
        FUN_02675b70(pbVar1,lVar5);
        return;
      }
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  else {
    FUN_02675ed0(pbVar1,(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
  }
  return;
}

