
void FUN_0188b744(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  char *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01889870();
  param_1[0x7f] = 0;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  param_1[0x81] = 0;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049cdff0;
  *(undefined4 *)(param_1 + 0x82) = 0x5a;
  param_1[0x83] = 0;
  param_1[0x80] = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0xbfc8106200000000;
  *(undefined4 *)((long)param_1 + 0x434) = 0xbe200d1b;
  *(undefined4 *)((long)param_1 + 0x424) = 0x42700000;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined2 *)((long)param_1 + 0x42a) = 0x1e;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x44c) = 0;
  if (__dest != "InsectActionMuseumBeetleBattle") {
    iVar3 = 0x1e;
    if (*(int *)(param_1 + 0xd) < 0x1f) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumBeetleBattle",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,8,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cStop";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = &LAB_0188bb1c;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0188bb34;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_0188bc14;
  puVar5[7] = 0;
  pcStack_38 = "State::cStare";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[4] = &LAB_0188bd88;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188bc18;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188beb4;
  puVar5[7] = 0;
  pcStack_38 = "State::cAttack";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar5[4] = &LAB_0188bfac;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188beb8;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188c18c;
  puVar5[7] = 0;
  pcStack_38 = "State::cGrapple";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,3,&local_40);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0188c190;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0188c300;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0188c474;
  puVar5[7] = 0;
  pcStack_38 = "State::cBreak";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,4,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(4 < *(uint *)(param_1 + 0x54)) * 0x100);
  puVar5[4] = &LAB_0188c670;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188c478;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188c8b4;
  puVar5[7] = 0;
  pcStack_38 = "State::cThrow";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_40);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0188c8b8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0188c90c;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0188c910;
  puVar5[7] = 0;
  pcStack_38 = "State::cIsThrown";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_40);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0188c914;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049ce1e8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0188c984;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0188ca10;
  puVar5[7] = 0;
  pcStack_38 = "State::cFly";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_40);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049ce1e8;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_0188ca14;
  puVar2[3] = 0;
  puVar2[4] = &LAB_0188caf0;
  puVar2[5] = 0;
  puVar2[6] = &LAB_0188cd24;
  puVar2[7] = 0;
  return;
}

