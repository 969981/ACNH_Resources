
bool FUN_03455938(long param_1,undefined2 *param_2,byte *param_3,int *param_4,undefined4 *param_5)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  byte local_7c [4];
  byte local_78 [4];
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined4 local_44;
  
  uVar2 = FUN_0277e294(param_2);
  if (((uVar2 & 1) == 0) ||
     ((uVar2 = FUN_03422cc0(param_2), (uVar2 & 1) == 0 &&
      (uVar2 = FUN_03422a60(param_2,param_3), (uVar2 & 1) == 0)))) {
    bVar1 = false;
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  else {
    bVar3 = *param_3;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x4c) = bVar3;
    local_70 = FUN_03454db0(uVar2,param_2,param_3,1);
    if (local_70 == 0) {
      local_48 = *PTR_DAT_04bb32e0;
      local_58 = 0;
      uStack_50 = 0;
      local_44 = 0;
      local_68 = PTR_DAT_04bb2010 + 0x10;
      uStack_60 = 0;
      if (7 < local_48) {
        local_48 = 0xff;
      }
      local_70 = *(int *)PTR_DAT_04bb37e0;
      uStack_6c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      bVar3 = *param_3;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (*param_4 == 1) {
        local_78[0] = bVar3;
        local_74 = FUN_022cfaf8(&local_70,param_2,local_78);
      }
      else {
        local_7c[0] = bVar3;
        local_74 = FUN_022cf8f8(&local_70,param_2,local_7c);
      }
      bVar1 = local_74 == 9;
      if (local_74 == 9) {
        *(undefined4 *)(param_1 + 0x48) = 3;
        *(int *)(param_1 + 0x6c) = *param_4;
        *(undefined2 *)(param_1 + 0x70) = *param_2;
        *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 1);
        *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 2);
        bVar3 = *param_3;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(param_1 + 0x78) = bVar3;
        *(undefined4 *)(param_1 + 0x7c) = *param_5;
        *(undefined4 *)(param_1 + 0x80) = 6;
        FUN_03ebb160(param_1,5);
      }
      else {
        FUN_03455560(param_1,local_74,param_3,param_4);
      }
    }
    else {
      *(int *)(param_1 + 0x84) = local_70;
      *(undefined4 *)(param_1 + 0x48) = 3;
      FUN_03ebb160(param_1,8);
      bVar1 = false;
    }
  }
  return bVar1;
}

