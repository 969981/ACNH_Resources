
void FUN_0025a2a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *local_e8;
  undefined1 auStack_e0 [32];
  undefined *local_c0;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined1 auStack_90 [36];
  undefined8 local_6c;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bcba18;
  lVar4 = 0;
  puVar1 = PTR_DAT_04bcba18 + 0x10;
  do {
    lVar2 = param_1 + lVar4;
    if (*(char *)(lVar2 + 0xe4) != '\0') {
      FUN_00227258(&local_c0);
      FUN_00227440(&local_98,&local_c0,lVar2 + 0xb8);
      FUN_0022726c(&local_e8,&local_c0);
      local_64 = 0;
      local_6c = 0x40;
      FUN_00220138(auStack_e0,&local_6c);
      pcVar5 = *(code **)(param_1 + 0x528);
      if (pcVar5 != (code *)0x0) {
        FUN_0022726c(&local_98,&local_e8);
        (*pcVar5)(1,&local_98,*(undefined8 *)(param_1 + 0x530));
        local_98 = puVar3 + 0x10;
        FUN_0021f584(auStack_90);
      }
      local_e8 = puVar1;
      FUN_0021f584(auStack_e0);
      *(undefined1 *)(lVar2 + 0xe4) = 0;
      local_c0 = puVar1;
      FUN_0021f584(auStack_b8);
    }
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x200);
  return;
}

