
void FUN_0187413c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  short sVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_0187201c(param_1,param_2[4],&LAB_018744c0);
  param_1[0xa4] = &PTR_LAB_049cbfe0;
  param_1[0xa5] = *param_2;
  param_1[0xa6] = param_2[1];
  param_1[0xa7] = param_2[2];
  uVar8 = param_2[3];
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049cbc90;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((long)param_1 + 0x54c) = 0;
  param_1[0xa4] = &PTR_LAB_049cbfb0;
  param_1[0xa8] = uVar8;
  if (__dest != "InsectActionFieldPopStone") {
    iVar3 = 0x19;
    if (*(int *)(param_1 + 0xd) < 0x1a) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldPopStone",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x1a);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x1a & 1) != 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
      uVar7 = 7;
      if ((*puVar4 & 2) != 0) {
        uVar7 = 0;
      }
      goto LAB_01874284;
    }
  }
  uVar7 = 7;
LAB_01874284:
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,9,uVar7,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar9 = (undefined8 *)param_1[0x55];
  puVar9[2] = 0x2e0;
  puVar9[3] = 1;
  puVar9[4] = 0x2e8;
  puVar9[5] = 1;
  *puVar9 = &PTR_LAB_049cc010;
  puVar9[1] = param_1;
  puVar9[6] = 0x2f0;
  puVar9[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar9[2] = 0x2f8;
  puVar9[3] = 1;
  *puVar9 = &PTR_LAB_049cc010;
  puVar9[1] = param_1;
  puVar9[4] = 0x300;
  puVar9[5] = 1;
  puVar9[6] = 0x308;
  puVar9[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar5 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar5 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar9[2] = &LAB_018744c4;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_049cc010;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01874580;
  puVar9[5] = 0;
  puVar9[6] = &LAB_01874888;
  puVar9[7] = 0;
  pcStack_48 = "State::cPopOut";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar9[2] = &LAB_0187488c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_049cc010;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01874930;
  puVar9[5] = 0;
  puVar9[6] = &LAB_01874a00;
  puVar9[7] = 0;
  pcStack_48 = "State::cShrink";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,8,&local_50);
  puVar9 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar9[4] = &LAB_01874aa0;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_049cc010;
  puVar9[1] = param_1;
  puVar9[2] = &LAB_01874a04;
  puVar9[3] = 0;
  puVar9[6] = &LAB_01874e3c;
  puVar9[7] = 0;
  pcStack_48 = "State::cConfuse";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar5 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar5);
  *puVar2 = &PTR_LAB_049cc010;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01874e44;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01874e6c;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01874ea0;
  puVar2[7] = 0;
  return;
}

