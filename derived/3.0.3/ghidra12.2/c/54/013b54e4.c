
void FUN_013b54e4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  char *pcVar12;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_00705c50();
  *(undefined2 *)(param_1 + 0x53) = 0;
  puVar1 = PTR_DAT_04bd4738;
  pcVar12 = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  puVar10 = param_1 + 0x4f;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x4f] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  param_1[0x58] = puVar1;
  param_1[0x5c] = puVar1;
  if (pcVar12 != "StateMachine") {
    iVar2 = 0xc;
    if (*(int *)(param_1 + 0xd) < 0xd) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar12,"StateMachine",(long)iVar2);
    pcVar12[iVar2] = '\0';
  }
  *param_1 = &PTR_LAB_04994338;
  *(undefined8 *)((long)param_1 + 0x304) = 2;
  *(undefined8 *)((long)param_1 + 0x30c) = 0x4170000000000000;
  *(undefined4 *)((long)param_1 + 0x314) = 0x41700000;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 2;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3ea00000;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0x3e8000003d000000;
  param_1[100] = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0x3fe6666600000000;
  *(undefined8 *)((long)param_1 + 0x364) = 0x3f99999a3f19999a;
  *(undefined8 *)((long)param_1 + 0x36c) = 0x3e4ccccd3c23d70a;
  param_1[0x65] = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0x3fc00000;
  param_1[0x70] = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x71) = 0x3d800000;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0x417000003fc00000;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0x41f00000;
  *(undefined4 *)((long)param_1 + 0x3c4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0x40a0000042b40000;
  *(undefined8 *)((long)param_1 + 0x414) = 0x4320000041900000;
  *(undefined8 *)((long)param_1 + 0x41c) = 0x400000000;
  *(undefined8 *)((long)param_1 + 0x424) = 0x41c00000;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0x4040000040c00000;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 10;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0x4000000040800000;
  uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  *(undefined4 *)((long)param_1 + 0x464) = uVar4;
  *(undefined8 *)((long)param_1 + 0x44c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  bVar11 = *PTR_DAT_04bb32e0;
  param_1[0x8e] = 0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  *(byte *)(param_1 + 0x8d) = bVar11;
  FUN_03ebac90(puVar10,0xd,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,0,&local_50);
  puVar6 = PTR_LAB_04bbc8b8;
  puVar9 = (undefined8 *)param_1[0x55];
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar8 = PTR_LAB_04bbc8c8;
  puVar7 = PTR_LAB_04bbc8c0;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  pcStack_48 = "State::cSpeedUp";
  puVar9[4] = puVar7;
  puVar9[5] = 0;
  puVar9[6] = puVar8;
  puVar9[7] = 0;
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,1,&local_50);
  puVar6 = PTR_LAB_04bbc870;
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar8 = PTR_LAB_04bbc880;
  puVar7 = PTR_LAB_04bbc878;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = puVar7;
  puVar9[5] = 0;
  puVar9[6] = puVar8;
  puVar9[7] = 0;
  pcStack_48 = "State::cSwimRiver";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,2,&local_50);
  puVar6 = PTR_LAB_04bbc888;
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar8 = PTR_LAB_04bbc898;
  puVar7 = PTR_LAB_04bbc890;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = puVar7;
  puVar9[5] = 0;
  puVar9[6] = puVar8;
  puVar9[7] = 0;
  pcStack_48 = "State::cSwimSea";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,3,&local_50);
  puVar6 = PTR_LAB_04bbc8a0;
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc8a8;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc8b0;
  puVar9[7] = 0;
  pcStack_48 = "State::cSpeedDown";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,4,&local_50);
  puVar6 = PTR_LAB_04bbc858;
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(4 < *(uint *)(param_1 + 0x54)) * 0x100);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar8 = PTR_LAB_04bbc868;
  puVar7 = PTR_LAB_04bbc860;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = puVar7;
  puVar9[5] = 0;
  puVar9[6] = puVar8;
  puVar9[7] = 0;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,5,&local_50);
  puVar6 = PTR_FUN_04bbc810;
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc818;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc820;
  puVar9[7] = 0;
  pcStack_48 = "State::cPick";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,6,&local_50);
  puVar6 = PTR_FUN_04bbc840;
  lVar3 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc848;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc850;
  puVar9[7] = 0;
  pcStack_48 = "State::cHit";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,7,&local_50);
  puVar6 = PTR_LAB_04bbc828;
  lVar3 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc830;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc838;
  puVar9[7] = 0;
  pcStack_48 = "State::cCaptured";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,8,&local_50);
  puVar6 = PTR_FUN_04bbc788;
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar8 = PTR_LAB_04bbc798;
  puVar7 = PTR_FUN_04bbc790;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = puVar7;
  puVar9[5] = 0;
  puVar9[6] = puVar8;
  puVar9[7] = 0;
  pcStack_48 = "State::cDriftRiver";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,9,&local_50);
  puVar6 = PTR_LAB_04bbc7e0;
  lVar3 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc7e8;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc7f0;
  puVar9[7] = 0;
  pcStack_48 = "State::cDriftSea";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,10,&local_50);
  puVar6 = PTR_LAB_04bbc7f8;
  lVar3 = 0x280;
  if (*(uint *)(param_1 + 0x54) < 0xb) {
    lVar3 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar9 = &PTR_LAB_04994440;
  puVar9[1] = param_1;
  puVar9[2] = puVar6;
  puVar9[3] = 0;
  puVar9[4] = PTR_LAB_04bbc800;
  puVar9[5] = 0;
  puVar9[6] = PTR_LAB_04bbc808;
  puVar9[7] = 0;
  pcStack_48 = "State::cDelete";
  local_50 = puVar1;
  FUN_03ebaf40(puVar10,0xb,&local_50);
  puVar6 = PTR_LAB_04bbc7d0;
  puVar1 = PTR_LAB_04bbc7c8;
  lVar3 = 0x2c0;
  if (*(uint *)(param_1 + 0x54) < 0xc) {
    lVar3 = 0;
  }
  puVar10 = (undefined8 *)(param_1[0x55] + lVar3);
  *puVar10 = &PTR_LAB_04994440;
  puVar10[1] = param_1;
  puVar10[2] = puVar1;
  puVar10[3] = 0;
  puVar1 = PTR_LAB_04bbc7d8;
  puVar10[4] = puVar6;
  puVar10[5] = 0;
  puVar10[6] = puVar1;
  puVar10[7] = 0;
  *(undefined1 *)((long)param_1 + 0x299) = 1;
  uVar5 = *(uint *)(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)((long)param_1 + 0x284);
  *(uint *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  *(undefined4 *)((long)param_1 + 0x28c) = uVar4;
  if (uVar5 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x54) <= uVar5) {
      uVar5 = 0;
    }
    puVar10 = *(undefined8 **)(param_1[0x55] + (long)(int)uVar5 * 0x40);
    if (puVar10 != (undefined8 *)0x0) {
      (*(code *)*puVar10)();
    }
  }
  pcVar12 = (char *)param_1[0xc];
  *(undefined2 *)(param_1 + 0x60) = 0;
  if (pcVar12 != "FishFieldAction") {
    iVar2 = 0xf;
    if (*(int *)(param_1 + 0xd) < 0x10) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar12,"FishFieldAction",(long)iVar2);
    pcVar12[iVar2] = '\0';
  }
  return;
}

