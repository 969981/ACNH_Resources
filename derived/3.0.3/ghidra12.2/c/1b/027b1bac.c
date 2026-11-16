
void FUN_027b1bac(long param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_640;
  undefined *puStack_638;
  undefined *local_630;
  char *pcStack_628;
  undefined1 auStack_620 [32];
  undefined1 *local_600;
  undefined8 local_5f8;
  undefined1 *local_5f0;
  undefined1 auStack_5a8 [1024];
  undefined1 auStack_1a8 [320];
  long local_68;
  undefined8 local_60;
  long local_58;
  
  piVar1 = (int *)(param_1 + 4);
  uVar5 = FUN_027ae998(piVar1,param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  uVar6 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)param_2;
  *(char *)(param_1 + 0x78) = (char)param_2[6];
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 9);
  uVar2 = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  *(undefined8 *)(param_1 + 0x84) = uVar6;
  uVar3 = param_2[0xd];
  if (1 < uVar3) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  if (*(char *)(param_1 + 0xcc) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return;
  }
  FUN_01bdde78(auStack_620);
  puVar4 = PTR_DAT_04bb2020;
  if ((*(int *)(param_1 + 0x20) == param_2[7]) &&
     ((*(long *)(param_2 + 8) == *(long *)(param_1 + 0x24) &&
      *(long *)(param_2 + 10) == *(long *)(param_1 + 0x2c)) &&
      param_2[0xc] == *(int *)(param_1 + 0x34))) {
    if ((*(short *)(param_1 + 8) == 0) || ((short)param_2[1] == 0)) {
      if (*piVar1 != *param_2) goto LAB_027b1c78;
    }
    else if ((*piVar1 != *param_2) ||
            ((*(long *)(param_2 + 1) != *(long *)(param_1 + 8) ||
             *(long *)(param_2 + 3) != *(long *)(param_1 + 0x10)) ||
             param_2[5] != *(int *)(param_1 + 0x18))) goto LAB_027b1c78;
    local_58 = param_1 + 0x30e;
    local_68 = param_1 + 0xce;
    local_5f0 = auStack_1a8;
    local_600 = auStack_5a8;
    local_5f8 = 0;
    local_60 = 0;
    local_640 = PTR_DAT_04bb2020 + 0x10;
    pcStack_628 = "MAIL_PlayerDefault";
    puStack_638 = &DAT_040b0e00;
    local_630 = local_640;
    FUN_01bdcf80(auStack_620,&local_630,&local_640,piVar1,param_2);
    uVar6 = 0;
    puStack_638 = &DAT_040ab29d;
  }
  else {
LAB_027b1c78:
    local_60 = 0;
    local_600 = auStack_5a8;
    local_68 = param_1 + 0xce;
    local_5f8 = 0;
    local_58 = 0;
    local_640 = PTR_DAT_04bb2020 + 0x10;
    local_5f0 = (undefined1 *)0x0;
    pcStack_628 = "MAIL_PlayerDefault";
    puStack_638 = &DAT_040c47ff;
    local_630 = local_640;
    FUN_01bdcf80(auStack_620,&local_630,&local_640,piVar1,param_2);
    if ((uVar5 & 1) == 0) {
      return;
    }
    local_58 = param_1 + 0x30e;
    local_68 = 0;
    local_60 = 0;
    local_5f0 = auStack_1a8;
    local_600 = (undefined1 *)0x0;
    local_5f8 = 0;
    uVar6 = 1;
    puStack_638 = &DAT_04097228;
  }
  local_640 = puVar4 + 0x10;
  pcStack_628 = "MAIL_PlayerDefault";
  local_630 = local_640;
  FUN_01bdd480(auStack_620,&local_630,&local_640,piVar1,param_2,uVar6);
  return;
}

