
void FUN_0271e710(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *__s;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  puVar1 = param_1 + 0x254c;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar5 != 0) {
      param_1[4] = lVar5;
    }
  }
  *param_1 = &PTR_LAB_04a8e810;
  FUN_0271ea90(param_1 + 7,param_1,param_1[2]);
  FUN_0271ea90(param_1 + 0xc4e,param_1,param_1[2] + 0xac60);
  FUN_0271ed6c(param_1 + 0x1895,param_1,param_1[2] + 0x158c0);
  lVar5 = param_1[3];
  param_1[0x2551] = 0;
  param_1[0x254f] = 0;
  param_1[0x2550] = 0;
  *(undefined1 *)(param_1 + 0x2552) = 0;
  param_1[3] = puVar1;
  param_1[0x254d] = 0;
  param_1[0x254e] = param_1[2] + 0x20560;
  if (lVar5 != 0) {
    param_1[0x2550] = lVar5;
  }
  plVar2 = param_1 + 0xdbca;
  *puVar1 = &PTR_LAB_04a8eb50;
  __s = param_1 + 0xd8b3;
  FUN_0272042c(param_1 + 0x2553,puVar1);
  FUN_02720690(param_1 + 0x2592,puVar1,param_1[0x254e] + 0x18);
  lVar5 = param_1[0x254e];
  param_1[0xd891] = 0;
  param_1[0xd892] = lVar5 + 0x179d0;
  param_1[0xd893] = 0;
  param_1[0xd894] = 0;
  param_1[0xd895] = 0;
  *(undefined1 *)(param_1 + 0xd896) = 0;
  if (param_1[0x254f] != 0) {
    param_1[0xd894] = param_1[0x254f];
  }
  param_1[0xd897] = &DAT_04a8fe70;
  param_1[0xd898] = 0;
  param_1[0xd899] = lVar5 + 0x179d1;
  param_1[0xd89c] = 0;
  puVar3 = PTR_DAT_04bb4c40;
  *(undefined1 *)(param_1 + 0xd89d) = 0;
  param_1[0xd89a] = 0;
  param_1[0xd89b] = 0;
  param_1[0xd89f] = 0;
  param_1[0xd8a0] = lVar5 + 0x179d4;
  param_1[0xd8a3] = 0;
  *(undefined1 *)(param_1 + 0xd8a4) = 0;
  param_1[0xd890] = puVar3 + 0x10;
  param_1[0xd89b] = param_1 + 0xd890;
  plVar7 = param_1 + 0xd8af;
  *plVar7 = 0;
  plVar8 = param_1 + 0xd8ac;
  *(undefined1 *)(param_1 + 0xd8b2) = 0;
  param_1[0xd8a6] = 0;
  param_1[0xd8a7] = lVar5 + 0x179dc;
  *(undefined1 *)(param_1 + 0xd8ab) = 0;
  param_1[0xd8a8] = 0;
  param_1[0xd8a9] = 0;
  param_1[0xd8aa] = 0;
  *puVar1 = &PTR_LAB_04a8eb20;
  lVar4 = param_1[2];
  lVar6 = param_1[3];
  param_1[3] = plVar8;
  param_1[0xd8a1] = 0;
  param_1[0xd8a2] = 0;
  param_1[0xd8a2] = param_1 + 0xd897;
  param_1[0xd89e] = &DAT_04a80468;
  param_1[0xd8a5] = &DAT_04a80468;
  param_1[0x254f] = param_1 + 0xd8a5;
  lVar5 = lVar4 + 0x37f48;
  param_1[0xd8a9] = param_1 + 0xd89e;
  param_1[0xd8ad] = 0;
  param_1[0xd8ae] = lVar5;
  param_1[0xd8b0] = 0;
  param_1[0xd8b1] = 0;
  if (lVar6 != 0) {
    param_1[0xd8b0] = lVar6;
  }
  *plVar8 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x3170);
  FUN_02352bec(__s,0,0);
  puVar3 = PTR_DAT_04bc30c0 + 0x10;
  *__s = (long)puVar3;
  FUN_02352bec(plVar2,0,0);
  *plVar2 = (long)puVar3;
  *plVar8 = (long)&PTR_LAB_04a8ed30;
  lVar6 = *plVar7;
  *plVar7 = (long)__s;
  if (lVar6 != 0) {
    param_1[0xd8b7] = lVar6;
  }
  param_1[0xd8b5] = param_1[0xd8b5] + lVar5;
  FUN_026400e0(__s,lVar5);
  lVar5 = *plVar7;
  *plVar7 = (long)plVar2;
  if (lVar5 != 0) {
    param_1[0xdbce] = lVar5;
  }
  param_1[0xdbcc] = param_1[0xdbcc] + lVar4 + 0x390d8;
  FUN_026400e0(plVar2);
  FUN_0271ef70(param_1 + 0xdee1,param_1,param_1[2] + 0x3a268);
  return;
}

