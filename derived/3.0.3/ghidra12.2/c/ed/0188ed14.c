
void FUN_0188ed14(undefined8 *param_1)

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
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *param_1 = &PTR_LAB_049ce460;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0xffffffff00000000;
  param_1[0x86] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((long)param_1 + 0x45d) = 0;
  __dest = (char *)param_1[0xc];
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  param_1[0x8f] = 0;
  *(undefined8 *)((long)param_1 + 0x47d) = 0;
  param_1[0x8a] = puVar1;
  param_1[0x8e] = puVar1;
  param_1[0x91] = puVar1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x8d] = 0;
  *(undefined8 *)((long)param_1 + 0x495) = 0;
  param_1[0x92] = 0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  if (__dest != "InsectActionMuseumFlyStraight") {
    iVar3 = 0x1d;
    if (*(int *)(param_1 + 0xd) < 0x1e) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumFlyStraight",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,6,1,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cMove";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = FUN_0188f068;
  puVar5[3] = 0;
  puVar5[4] = FUN_0188f178;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce658;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_0188f29c;
  puVar5[7] = 0;
  pcStack_38 = "State::cHovering";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[4] = &LAB_0188f3d0;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce658;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188f2a0;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188f6f0;
  puVar5[7] = 0;
  pcStack_38 = "State::cGyrate";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar5[4] = &LAB_0188f760;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce658;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188f6f4;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188f938;
  puVar5[7] = 0;
  pcStack_38 = "State::cApproach";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,3,&local_40);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0188f944;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049ce658;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0188f998;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0188fb18;
  puVar5[7] = 0;
  pcStack_38 = "State::cRest";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,4,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(4 < *(uint *)(param_1 + 0x54)) * 0x100);
  puVar5[4] = &LAB_0188fb94;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce658;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0188fb1c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0188fc64;
  puVar5[7] = 0;
  pcStack_38 = "State::cTakeOff";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_40);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049ce658;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_0188fd1c;
  puVar2[3] = 0;
  puVar2[4] = &LAB_0188fd7c;
  puVar2[5] = 0;
  puVar2[6] = &LAB_0188fe68;
  puVar2[7] = 0;
  return;
}

