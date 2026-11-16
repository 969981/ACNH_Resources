
void FUN_0257a010(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x14);
  param_1[1] = (long)puVar1;
  *(undefined4 *)(param_1 + 2) = 0x40;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar9 = PTR_DAT_04bb2bc0;
  puVar1 = (undefined8 *)((long)param_1 + 0x6c);
  param_1[0xc] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xd) = 0x40;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  puVar2 = puVar9 + 0x10;
  *param_1 = (long)puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  pcVar3 = (char *)((long)param_1 + 0xc4);
  param_1[0xb] = (long)puVar2;
  param_1[0x17] = (long)pcVar3;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  if (pcVar3 != "PlayerComplete") {
    uVar8 = CONCAT26(s_PlayerComplete_040ee966._6_2_,s_PlayerComplete_040ee966._0_6_);
    *(undefined1 *)((long)param_1 + 0xd2) = 0;
    *(undefined8 *)pcVar3 = uVar8;
    *(ulong *)((long)param_1 + 0xca) =
         CONCAT62(s_PlayerComplete_040ee966._8_6_,s_PlayerComplete_040ee966._6_2_);
  }
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  puVar2 = PTR_DAT_04bb37e0;
  param_1[0x16] = (long)(puVar9 + 0x10);
  uVar7 = *(undefined2 *)puVar2;
  *(undefined4 *)((long)param_1 + 0x114) = 0xc;
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar4 = *(undefined4 *)(puVar2 + 4);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((long)param_1 + 0x112) = 1;
  *(undefined1 *)((long)param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x14c) = 0;
  *(undefined2 *)((long)param_1 + 0x124) = uVar7;
  *(undefined1 *)((long)param_1 + 0x126) = uVar5;
  *(undefined1 *)((long)param_1 + 0x127) = uVar6;
  *(undefined4 *)(param_1 + 0x25) = uVar4;
  *(undefined2 *)(param_1 + 0x28) = uVar7;
  *(undefined1 *)((long)param_1 + 0x142) = uVar5;
  *(undefined1 *)((long)param_1 + 0x143) = uVar6;
  *(undefined4 *)((long)param_1 + 0x144) = uVar4;
  return;
}

