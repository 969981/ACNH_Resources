
void FUN_027b1e28(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_640;
  undefined *puStack_638;
  undefined *local_630;
  char *pcStack_628;
  undefined1 auStack_620 [32];
  undefined1 *local_600;
  undefined8 uStack_5f8;
  undefined1 *local_5f0;
  undefined1 auStack_5a8 [1024];
  undefined1 auStack_1a8 [320];
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = param_1 + 4;
  uVar5 = FUN_027ae998(lVar1,param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0x60) = *param_2;
  *(undefined1 *)(param_1 + 0x61) = param_2[1];
  uVar4 = FUN_020fd7d8(param_2);
  *(undefined1 *)(param_1 + 0x62) = uVar4;
  uVar3 = param_3[1];
  uVar4 = *(undefined1 *)(param_3 + 3);
  uVar6 = *param_3;
  *(undefined8 *)(param_1 + 0x74) = param_3[2];
  *(undefined8 *)(param_1 + 100) = uVar6;
  *(undefined1 *)(param_1 + 0x7c) = uVar4;
  *(undefined8 *)(param_1 + 0x6c) = uVar3;
  if ((*(char *)(param_1 + 0xcc) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    FUN_01bdde78(auStack_620);
    local_60 = 0;
    local_600 = auStack_5a8;
    local_68 = param_1 + 0xce;
    uStack_5f8 = 0;
    local_58 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_5f0 = (undefined1 *)0x0;
    pcStack_628 = "MAIL_PlayerDefault";
    puStack_638 = &DAT_040962e2;
    local_640 = puVar2;
    local_630 = puVar2;
    FUN_01bdd228(auStack_620,&local_630,&local_640,lVar1,param_2);
    if ((uVar5 & 1) != 0) {
      local_58 = param_1 + 0x30e;
      local_68 = 0;
      local_60 = 0;
      local_5f0 = auStack_1a8;
      local_600 = (undefined1 *)0x0;
      uStack_5f8 = 0;
      pcStack_628 = "MAIL_PlayerDefault";
      puStack_638 = &DAT_040cfd58;
      local_640 = puVar2;
      local_630 = puVar2;
      FUN_01bdd738(auStack_620,&local_630,&local_640,lVar1,param_2,1);
    }
  }
  return;
}

