
uint FUN_02555e90(byte *param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_54 [4];
  byte local_50 [4];
  undefined4 local_4c;
  undefined2 local_48;
  byte local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  byte local_36;
  undefined4 local_35;
  undefined1 local_31;
  
  if (*param_1 < 8) {
    iVar2 = FUN_00a74b78();
    if (iVar2 != 0xe) {
      local_44[0] = *param_1;
      local_36 = param_3 & 1;
      local_31 = 0;
      local_35 = 0;
      local_40 = 0x2f;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      local_38 = 0x101;
      local_3c = param_2;
      uVar3 = FUN_02530cec(local_44);
      goto LAB_02555f4c;
    }
  }
  else {
    FUN_02507c6c(local_44,1,1,1,0);
    local_4c = local_40;
    local_50[0] = 0xff;
    if (local_44[0] < 8) {
      local_50[0] = local_44[0];
    }
    local_48 = (undefined2)local_3c;
    if (local_44[0] < 8) {
      local_54[0] = local_44[0];
      uVar4 = FUN_02555e90(local_54,param_2,param_3 & 1);
      bVar1 = local_44[0];
      while ((uVar4 & 1) != 0) {
        uVar4 = (ulong)bVar1;
        do {
          uVar6 = uVar4;
          if (uVar6 == 7) goto LAB_02555f48;
          uVar5 = FUN_02507924(local_50,&DAT_0548e169 + uVar6);
          uVar4 = uVar6 + 1;
        } while ((uVar5 & 1) == 0);
        bVar1 = (&DAT_0548e169)[uVar6];
        if (7 < bVar1) goto LAB_02555f48;
        local_54[0] = bVar1;
        local_50[0] = bVar1;
        uVar4 = FUN_02555e90(local_54,param_2,param_3 & 1);
      }
      uVar3 = 0;
      goto LAB_02555f4c;
    }
  }
LAB_02555f48:
  uVar3 = 1;
LAB_02555f4c:
  return uVar3 & 1;
}

