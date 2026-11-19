
void FUN_038f98c0(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b65af0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = &PTR_LAB_04b65b18;
  param_1[6] = 0;
  FUN_038e18e4(param_1 + 7);
  FUN_038e18e4(param_1 + 0xf);
  puVar5 = PTR_DAT_04bd1150;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_1 + 0x1f;
  param_1[0x60] = 0x200;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = "untitled";
  param_1[0x17] = puVar5 + 0x10;
  param_1[0x18] = 0;
  FUN_038e18e4(param_1 + 0x65);
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = (long)param_1 + 0x3fc;
  *(undefined4 *)(param_1 + 0x7f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x43b) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x7d] = PTR_DAT_04bb2bc0 + 0x10;
  pcVar1 = (char *)((long)param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x8a) = 0x100;
  param_1[0x89] = pcVar1;
  *(undefined1 *)((long)param_1 + 0x553) = 0;
  uVar7 = s_untitiled_0409e2c6._0_8_;
  if (pcVar1 != "untitiled") {
    *(undefined1 *)((long)param_1 + 0x45d) = 0;
    *(undefined1 *)((long)param_1 + 0x45c) = 100;
    *(undefined8 *)pcVar1 = uVar7;
  }
  param_1[0x88] = PTR_DAT_04bb21f8 + 0x10;
  *(undefined4 *)(param_1 + 0xab) = 0xffffffff;
  FUN_038e18e4(param_1 + 0xac);
  param_1[0xb7] = 0;
  *(undefined8 *)((long)param_1 + 0x5be) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x9c08c9;
  *(undefined1 *)((long)param_1 + 0x5cc) = 4;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xc0] = 0;
  *(undefined2 *)((long)param_1 + 0x5fa) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  param_1[0xba] = &PTR_LAB_04b65b68;
  lVar6 = DAT_05ae77d8;
  uVar7 = *(undefined8 *)(DAT_05ae77d8 + 0x48);
  param_1[4] = 0;
  param_1[6] = uVar7;
  param_1[2] = param_1;
  param_1[3] = &LAB_038f9b60;
  *(undefined8 **)(lVar6 + 0x1d8) = param_1 + 1;
  lVar8 = param_1[0x7e];
  param_1[199] = 0;
  *(uint *)(param_1 + 0xb9) = *(uint *)(param_1 + 0xb9) | 0x20000;
  (**(code **)(param_1[0x7d] + 0x18))(param_1 + 0x7d);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[0x7e] + lVar6) == '\0') goto LAB_038f9b0c;
    lVar2 = param_1[0x7e] + lVar6;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038f9b0c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038f9b0c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038f9b0c:
  uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar4 = 7;
  if ((int)(*(int *)(param_1 + 0x7f) - uVar3) < 8) {
    uVar4 = *(int *)(param_1 + 0x7f) + ~uVar3;
  }
  if (0 < (int)uVar4) {
    memcpy((void *)(lVar8 + (ulong)uVar3),"Default",(ulong)uVar4);
    *(undefined1 *)(lVar8 + (ulong)uVar4 + (ulong)uVar3) = 0;
  }
  return;
}

