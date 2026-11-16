
void FUN_025e7124(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_02602950(param_1,0xf);
  FUN_02603510(param_1,*param_2);
  FUN_026035e0(param_1,*param_2);
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar7 = 1;
    goto LAB_025e7200;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar5 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar5 + 0x476))) {
    if (*(int *)(lVar5 + 0x508) != 0 && *(char *)(lVar5 + 0x55d) != '\0') {
      uVar7 = 2;
      goto LAB_025e7200;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar7 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar7 = 0;
      }
      goto LAB_025e7200;
    }
  }
  uVar7 = 0;
LAB_025e7200:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    local_60 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_60,uVar7);
  }
  pcStack_58 = "EndMesageFileHash";
  local_60 = puVar1;
  FUN_026018a0(param_1,&local_60,param_2 + 2);
  pcStack_58 = "EndMesageLabel";
  local_60 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605980(*(long *)(param_1 + 8),&local_60,param_2 + 0x28);
  }
  lVar5 = FUN_02602770(param_1,*param_2);
  if (lVar5 != 0) {
    if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    puVar1 = puVar2 + 0x10;
    pcStack_58 = "ContinuousTalkCount";
    local_60 = puVar1;
    iVar4 = FUN_02746e10(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40),&local_60);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    pcStack_58 = "ContinuousTalkCount";
    local_60 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_60,(long)iVar4);
    }
    if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    puVar1 = puVar2 + 0x10;
    pcStack_58 = "TalkCountToday";
    local_60 = puVar1;
    iVar4 = FUN_02746e10(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40),&local_60);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    pcStack_58 = "TalkCountToday";
    local_60 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_60,(long)iVar4);
    }
  }
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_60 = puVar2 + 0x10;
  pcStack_58 = "CurStageHash";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_60,*(undefined4 *)(puVar6 + 7));
  }
  return;
}

