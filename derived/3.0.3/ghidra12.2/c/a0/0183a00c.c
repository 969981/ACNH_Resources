
void FUN_0183a00c(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  char *__dest;
  char *__dest_00;
  float fVar10;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  *(undefined1 *)((long)param_1 + 0x4c4) = 0;
  puVar5 = PTR_DAT_04bbe980;
  param_1[0x97] = 0;
  puVar1 = PTR_DAT_04bcb470;
  *(undefined4 *)(param_1 + 0x95) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x98) = 0x96;
  puVar4 = PTR_FUN_04bbe748;
  __dest = "InsectActionFieldStraight";
  __dest_00 = (char *)param_1[0xc];
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  puVar1 = puVar1 + 0x10;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x93] = (long)puVar4;
  param_1[0x94] = (long)puVar4;
  param_1[0x96] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  if (__dest_00 != "InsectActionFieldStraight") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldStraight",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x9c] = (long)&PTR_LAB_049c7830;
  param_1[0x9d] = *param_2;
  param_1[0x9e] = param_2[1];
  param_1[0x9f] = param_2[2];
  lVar9 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c7500;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xa2] = (long)puVar1;
  param_1[0xa5] = (long)puVar1;
  param_1[0xa8] = (long)puVar1;
  param_1[0xab] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x56c) = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xae] = 0;
  *(undefined1 *)((long)param_1 + 0x58c) = 0;
  param_1[0x9c] = (long)&PTR_LAB_049c77e8;
  *(undefined4 *)(param_1 + 0xa1) = 1;
  *(undefined8 *)((long)param_1 + 0x51d) = 0;
  *(undefined8 *)((long)param_1 + 0x535) = 0;
  param_1[0xa0] = lVar9;
  *(undefined8 *)((long)param_1 + 0x54d) = 0;
  param_1[0xac] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xad) = 0x7fffffff;
  *(undefined8 *)((long)param_1 + 0x57c) = 0;
  *(undefined8 *)((long)param_1 + 0x584) = 0xffffffffffffffff;
  if (__dest != "InsectActionFieldDragonfly") {
    iVar3 = 0x1a;
    if ((int)param_1[0xd] < 0x1b) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldDragonfly",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
  FUN_03ebac90(plVar2,10,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_50);
  puVar8 = (undefined8 *)param_1[0x55];
  puVar8[2] = 0x2a8;
  puVar8[3] = 1;
  puVar8[4] = 0x2b0;
  puVar8[5] = 1;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[6] = 0x2b8;
  puVar8[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_50);
  puVar8 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar8[2] = 0x2c0;
  puVar8[3] = 1;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[4] = 0x2c8;
  puVar8[5] = 1;
  puVar8[6] = 0x2d0;
  puVar8[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_50);
  lVar9 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar9);
  puVar8[2] = FUN_0183a4e4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[4] = FUN_0183a524;
  puVar8[5] = 0;
  puVar8[6] = &LAB_0183a6f0;
  puVar8[7] = 0;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_50);
  lVar9 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar9);
  puVar8[2] = &LAB_0183a6f4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_0183a854;
  puVar8[5] = 0;
  puVar8[6] = &LAB_0183ac04;
  puVar8[7] = 0;
  pcStack_48 = "State::cApproach";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_50);
  lVar9 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar9);
  puVar8[2] = &LAB_0183ac08;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_0183aca4;
  puVar8[5] = 0;
  puVar8[6] = &LAB_0183af10;
  puVar8[7] = 0;
  pcStack_48 = "State::cRest";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_50);
  puVar8 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar8[4] = &LAB_0183af88;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[2] = &LAB_0183af1c;
  puVar8[3] = 0;
  puVar8[6] = &LAB_0183b13c;
  puVar8[7] = 0;
  pcStack_48 = "State::cTakeOff";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,9,&local_50);
  lVar9 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar9);
  puVar8[2] = &LAB_0183b150;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c7860;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_0183b21c;
  puVar8[5] = 0;
  puVar8[6] = &LAB_0183b3e8;
  puVar8[7] = 0;
  pfVar6 = (float *)(**(code **)(*(long *)(param_1[0x9f] + 0x120) + 0xf0))(param_1[0x9f] + 0x120);
  fVar10 = *pfVar6;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  uVar7 = (uint)fVar10;
  *(byte *)((long)param_1 + 0x53c) = (byte)(uVar7 >> 0x1f);
  *(uint *)((long)param_1 + 0x534) = uVar7 & (int)uVar7 >> 0x1f;
  *(uint *)(param_1 + 0xa7) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  pfVar6 = (float *)(**(code **)(*(long *)(param_1[0x9f] + 0x150) + 0xf0))(param_1[0x9f] + 0x150);
  fVar10 = *pfVar6;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  uVar7 = (uint)fVar10;
  *(byte *)((long)param_1 + 0x554) = (byte)(uVar7 >> 0x1f);
  *(uint *)(param_1 + 0xaa) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  *(uint *)((long)param_1 + 0x54c) = uVar7 & (int)uVar7 >> 0x1f;
  return;
}

