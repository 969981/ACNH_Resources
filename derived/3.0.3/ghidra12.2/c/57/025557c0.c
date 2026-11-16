
uint FUN_025557c0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 local_58 [4];
  byte local_54 [4];
  undefined4 local_50;
  undefined2 local_4c;
  byte local_48 [4];
  byte local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_35;
  undefined1 local_31;
  
  if (*param_1 < 8) {
    iVar1 = FUN_00a74b78();
    uVar2 = 1;
    if (iVar1 != 0xd) {
      local_44[0] = *param_1;
      local_31 = 0;
      local_35 = 0;
      local_40 = 0x2f;
      local_36 = 1;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      local_38 = 0x101;
      local_3c = param_2;
      uVar2 = FUN_02550b18(local_44,0);
    }
  }
  else {
    FUN_02507c6c(local_44,1,1,1,0);
    pbVar6 = &DAT_0548e140;
    if (DAT_04cd19d8 != 0) {
      pbVar6 = &DAT_0548e140;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
      }
    }
    local_48[0] = *pbVar6;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
    uVar4 = FUN_025557c0(local_48,param_2);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      local_50 = local_40;
      uVar7 = (uint)local_44[0];
      local_54[0] = 0xff;
      if (local_44[0] < 8) {
        local_54[0] = local_44[0];
      }
      uVar2 = 1;
      local_4c = (undefined2)local_3c;
      uVar3 = 1;
      if (local_44[0] < 8) {
        while( true ) {
          uVar2 = uVar3;
          local_58[0] = (undefined1)uVar7;
          if (7 < local_48[0] || local_48[0] != uVar7) {
            uVar3 = FUN_025557c0(local_58,param_2);
            uVar2 = uVar2 & uVar3;
          }
          uVar4 = (ulong)uVar7;
          do {
            uVar8 = uVar4;
            if (uVar8 == 7) goto LAB_02555934;
            uVar5 = FUN_02507924(local_54,&DAT_0548e169 + uVar8);
            uVar4 = uVar8 + 1;
          } while ((uVar5 & 1) == 0);
          local_54[0] = (&DAT_0548e169)[uVar8];
          uVar7 = (uint)local_54[0];
          if (7 < uVar7) break;
          uVar3 = uVar2;
        }
      }
    }
  }
LAB_02555934:
  return uVar2 & 1;
}

