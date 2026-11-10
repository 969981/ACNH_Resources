
void FUN_0025bf70(long param_1,undefined4 param_2)

{
  undefined1 auStack_104 [176];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_0028d520(auStack_30);
  *(undefined4 *)(param_1 + 0x4d0) = param_2;
  FUN_0021f210(&local_44);
  local_44 = *(int *)(param_1 + 0x4d8);
  if (local_44 == 0) {
    memset(auStack_40,0,0x10);
  }
  else {
    local_54 = FUN_0028d5ac(auStack_30);
    local_50 = FUN_0028d5ac(auStack_30);
    local_4c = FUN_0028d5ac(auStack_30);
    local_48 = FUN_0028d5ac(auStack_30);
    FUN_00222150(auStack_104,param_1 + 0x4dc,0x10,1);
    FUN_00222540(auStack_104,auStack_40,0x10,&local_54,0x10);
    FUN_00222140(auStack_104);
  }
  if ((DAT_04c60f48 == 0) || (*(long *)(DAT_04c60f48 + 8) == 0)) {
    return;
  }
  FUN_002973a8(*(long *)(DAT_04c60f48 + 8),&local_44);
  return;
}

