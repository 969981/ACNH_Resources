
void FUN_02448ae4(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_180 [8];
  char *local_178;
  int local_170;
  char *local_120;
  int local_118;
  char *local_c8;
  int local_c0;
  undefined1 local_78;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  FUN_0257a010(auStack_180);
  if (local_c8 != "PlayerWait") {
    iVar1 = 10;
    if (local_c0 < 0xb) {
      iVar1 = local_c0 + -1;
    }
    memcpy(local_c8,"PlayerWait",(long)iVar1);
    local_c8[iVar1] = '\0';
  }
  if (local_178 != "Player_GetDemo_Recipe_DIY") {
    iVar1 = 0x19;
    if (local_170 < 0x1a) {
      iVar1 = local_170 + -1;
    }
    memcpy(local_178,"Player_GetDemo_Recipe_DIY",(long)iVar1);
    local_178[iVar1] = '\0';
  }
  if (local_120 != "GetDemo_Normal") {
    iVar1 = 0xe;
    if (local_118 < 0xf) {
      iVar1 = local_118 + -1;
    }
    memcpy(local_120,"GetDemo_Normal",(long)iVar1);
    local_120[iVar1] = '\0';
  }
  local_54 = 0;
  local_78 = 1;
  local_4c = 1;
  local_50 = 5;
  FUN_024480f0(param_1,auStack_180);
  return;
}

