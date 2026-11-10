
void FUN_002c7a50(long param_1,long *param_2,undefined4 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auStack_c0 [16];
  int local_b0 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [20];
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_70;
  undefined *local_68;
  undefined4 local_60 [8];
  
  FUN_002b4378(&local_68,param_2);
  uVar2 = FUN_0021fea0(local_60);
  puVar1 = PTR_DAT_04bcba18;
  local_68 = PTR_DAT_04bcba18 + 0x10;
  FUN_0021f584(local_60);
  if ((uVar2 & 1) == 0) {
    local_60[0] = 0;
    local_68 = (undefined *)0x40000;
    (**(code **)(*param_2 + 0x20))(param_2,&local_68);
    return;
  }
  FUN_002cb3a4(auStack_88);
  local_80 = FUN_002b43fc(param_1 + 0x50);
  local_70 = FUN_002b43f4(param_1 + 0x50);
  local_7c = 0xff;
  FUN_002cb3c8(local_b0,auStack_88,auStack_9c,auStack_a0,0x14);
  if ((local_b0[0] == 0) && (uVar3 = (uint)param_4, param_4 != 0)) {
    do {
      FUN_002b4378(&local_68,param_2);
      FUN_002c91b0(auStack_c0,param_1,&local_68,auStack_9c,0x14,1,param_3);
      local_68 = puVar1 + 0x10;
      FUN_0021f584(local_60);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

