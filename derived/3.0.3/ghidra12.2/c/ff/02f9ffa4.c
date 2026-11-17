
void FUN_02f9ffa4(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ImmQ_A_Complete";
  local_40 = puVar1;
  uVar3 = FUN_0273f0a0(&local_40);
  if ((uVar3 & 1) == 0) {
    pcStack_38 = "ImmQ_A_SetHousing";
    local_40 = puVar1;
    uVar3 = FUN_0273f0a0(&local_40);
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_1 | 0x3f;
    }
    else {
      pcStack_38 = "ImmQ_A_Interior1Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 8;
      }
      pcStack_38 = "ImmQ_A_Interior2Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x10;
      }
      local_40 = puVar2 + 0x10;
      pcStack_38 = "ImmQ_A_Interior3Donate";
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x20;
      }
      uVar3 = FUN_01e24634(&local_40,0,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 1;
      }
      uVar3 = FUN_01e24634(&local_40,0,1);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 2;
      }
      uVar3 = FUN_01e24634(&local_40,0,2);
      if ((uVar3 & 1) != 0) goto LAB_02fa00dc;
      uVar4 = *param_1 | 4;
    }
    *param_1 = uVar4;
  }
LAB_02fa00dc:
  pcStack_38 = "ImmQ_B_Complete";
  local_40 = puVar1;
  uVar3 = FUN_0273f0a0(&local_40);
  if ((uVar3 & 1) == 0) {
    pcStack_38 = "ImmQ_B_SetHousing";
    local_40 = puVar2 + 0x10;
    uVar3 = FUN_0273f0a0(&local_40);
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_1 | 0xfc0;
    }
    else {
      pcStack_38 = "ImmQ_B_Interior1Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x200;
      }
      pcStack_38 = "ImmQ_B_Interior2Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x400;
      }
      pcStack_38 = "ImmQ_B_Interior3Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x800;
      }
      uVar3 = FUN_01e24634(&local_40,1,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x40;
      }
      uVar3 = FUN_01e24634(&local_40,1,1);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x80;
      }
      uVar3 = FUN_01e24634(&local_40,1,2);
      if ((uVar3 & 1) != 0) goto LAB_02fa01ec;
      uVar4 = *param_1 | 0x100;
    }
    *param_1 = uVar4;
  }
LAB_02fa01ec:
  pcStack_38 = "ImmQ_C_Complete";
  local_40 = puVar2 + 0x10;
  uVar3 = FUN_0273f0a0(&local_40);
  if ((uVar3 & 1) == 0) {
    pcStack_38 = "ImmQ_C_SetHousing";
    local_40 = puVar2 + 0x10;
    uVar3 = FUN_0273f0a0(&local_40);
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_1 | 0x3f000;
    }
    else {
      pcStack_38 = "ImmQ_C_Interior1Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x8000;
      }
      pcStack_38 = "ImmQ_C_Interior2Donate";
      local_40 = puVar2 + 0x10;
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x10000;
      }
      local_40 = puVar2 + 0x10;
      pcStack_38 = "ImmQ_C_Interior3Donate";
      uVar3 = FUN_0273f0a0(&local_40);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x20000;
      }
      uVar3 = FUN_01e24634(&local_40,2,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x1000;
      }
      uVar3 = FUN_01e24634(&local_40,2,1);
      if ((uVar3 & 1) == 0) {
        *param_1 = *param_1 | 0x2000;
      }
      uVar3 = FUN_01e24634(&local_40,2,2);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar4 = *param_1 | 0x4000;
    }
    *param_1 = uVar4;
  }
  return;
}

