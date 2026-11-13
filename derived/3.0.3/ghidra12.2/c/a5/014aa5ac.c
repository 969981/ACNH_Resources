
void FUN_014aa5ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined *local_60;
  char *pcStack_58;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x2a8) < 5) {
    uVar5 = *(undefined4 *)(&DAT_04175718 + (long)(int)*(uint *)(param_1 + 0x2a8) * 4);
  }
  else {
    uVar5 = 0;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar5);
  lVar1 = lVar7 + 0x278;
  FUN_03ebac90(lVar1,0xd,uVar5,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cWait";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_60);
  plVar6 = *(long **)(lVar7 + 0x2a8);
  plVar6[2] = (long)&LAB_014aaa58;
  plVar6[3] = 0;
  puVar3 = PTR_DAT_04bbce68;
  plVar6[4] = (long)&LAB_014aaa5c;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014aaa60;
  plVar6[7] = 0;
  puVar3 = puVar3 + 0x10;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  pcStack_58 = "State::cLeaf";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_60);
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + (ulong)(1 < *(uint *)(lVar7 + 0x2a0)) * 0x40);
  plVar6[4] = (long)&LAB_014aad18;
  plVar6[5] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014aaa64;
  plVar6[3] = 0;
  plVar6[6] = (long)&LAB_014aafd4;
  plVar6[7] = 0;
  pcStack_58 = "State::cBirth";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_60);
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + (ulong)(2 < *(uint *)(lVar7 + 0x2a0)) * 0x80);
  plVar6[4] = (long)&LAB_014ab554;
  plVar6[5] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014ab2a0;
  plVar6[3] = 0;
  plVar6[6] = (long)&LAB_014ab680;
  plVar6[7] = 0;
  pcStack_58 = "State::cDemise";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_60);
  lVar4 = 0xc0;
  if (*(uint *)(lVar7 + 0x2a0) < 4) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014ab6a4;
  plVar6[3] = 0;
  plVar6[4] = (long)&LAB_014ab6a8;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014ab780;
  plVar6[7] = 0;
  pcStack_58 = "State::cPick";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_60);
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + (ulong)(4 < *(uint *)(lVar7 + 0x2a0)) * 0x100);
  plVar6[4] = (long)&LAB_014ab788;
  plVar6[5] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014ab784;
  plVar6[3] = 0;
  plVar6[6] = (long)&LAB_014ab78c;
  plVar6[7] = 0;
  pcStack_58 = "State::cPush";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_60);
  lVar4 = 0x140;
  if (*(uint *)(lVar7 + 0x2a0) < 6) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  plVar6[2] = (long)&LAB_014ab790;
  plVar6[3] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[4] = (long)&LAB_014abb30;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014abfbc;
  plVar6[7] = 0;
  pcStack_58 = "State::cPull";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_60);
  lVar4 = 0x180;
  if (*(uint *)(lVar7 + 0x2a0) < 7) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  plVar6[2] = (long)&LAB_014ac120;
  plVar6[3] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[4] = (long)&LAB_014ac4c0;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014ac94c;
  plVar6[7] = 0;
  pcStack_58 = "State::cMove";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,7,&local_60);
  lVar4 = 0x1c0;
  if (*(uint *)(lVar7 + 0x2a0) < 8) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  plVar6[2] = (long)&LAB_014acaa8;
  plVar6[3] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[4] = (long)&LAB_014acaac;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014acb10;
  plVar6[7] = 0;
  pcStack_58 = "State::cRotate";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,8,&local_60);
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + (ulong)(8 < *(uint *)(lVar7 + 0x2a0)) * 0x200);
  plVar6[4] = (long)&LAB_014acd10;
  plVar6[5] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014acb30;
  plVar6[3] = 0;
  plVar6[6] = (long)&LAB_014acfa0;
  plVar6[7] = 0;
  pcStack_58 = "State::cHide";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,9,&local_60);
  lVar4 = 0x240;
  if (*(uint *)(lVar7 + 0x2a0) < 10) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  plVar6[2] = (long)&LAB_014ad288;
  plVar6[3] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[4] = (long)&LAB_014ad29c;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014ad2a0;
  plVar6[7] = 0;
  pcStack_58 = "State::cCatalog";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,10,&local_60);
  lVar4 = 0x280;
  if (*(uint *)(lVar7 + 0x2a0) < 0xb) {
    lVar4 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar4);
  plVar6[2] = (long)&LAB_014ad2b4;
  plVar6[3] = 0;
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[4] = (long)&LAB_014ad2b8;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014ad2bc;
  plVar6[7] = 0;
  pcStack_58 = "State::cDemiseNoEffect";
  local_60 = puVar2;
  FUN_03ebaf40(lVar1,0xb,&local_60);
  lVar1 = 0x2c0;
  if (*(uint *)(lVar7 + 0x2a0) < 0xc) {
    lVar1 = 0;
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x2a8) + lVar1);
  *plVar6 = (long)puVar3;
  plVar6[1] = param_1;
  plVar6[2] = (long)&LAB_014ab6a4;
  plVar6[3] = 0;
  plVar6[4] = (long)&LAB_014ab6a8;
  plVar6[5] = 0;
  plVar6[6] = (long)&LAB_014ab780;
  plVar6[7] = 0;
  return;
}

