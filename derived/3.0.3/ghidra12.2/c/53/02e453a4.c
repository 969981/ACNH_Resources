
byte FUN_02e453a4(long param_1)

{
  undefined *puVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auStack_48 [24];
  undefined *local_30;
  char *pcStack_28;
  
  FUN_02645730(auStack_48,param_1 + 0x70);
  uVar5 = FUN_02645980(auStack_48);
  bVar3 = 0;
  if (((uVar5 & 1) != 0) && (*(byte *)(param_1 + 0x70) < 8)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "FriendListMainSwitch";
    iVar4 = FUN_0274bce0(param_1 + 0x70,&local_30);
    bVar3 = 0;
    if (iVar4 != 0) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 == -1) {
        bVar3 = *(int *)(param_1 + 0x2b0) == 2;
      }
      else {
        local_30 = (undefined *)CONCAT44(local_30._4_4_,0x20);
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
        if (0xff < (uint)(int)sVar2) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        bVar3 = *(int *)(param_1 + 0x2b0) == 2;
        if (((*(uint *)(puVar1 + 4) & 1) != 0) && (*(int *)(param_1 + 0x2b0) == 2)) {
          bVar3 = nn::pctl::IsFreeCommunicationAvailable();
        }
      }
    }
  }
  return bVar3 & 1;
}

