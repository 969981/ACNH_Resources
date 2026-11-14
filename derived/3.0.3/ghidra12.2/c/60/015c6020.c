
void FUN_015c6020(long *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined *local_50;
  char *local_48;
  
  if ((char)param_1[7] == '\0') {
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0xc0))();
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((char)param_1[0x17d] == '\0') {
    iVar1 = *(int *)((long)param_1 + 0xe04);
    lVar10 = *(long *)(param_1[0x50] + 8);
    piVar7 = (int *)(**(code **)(*(long *)(lVar10 + 0xcd0) + 0xf0))(lVar10 + 0xcd0);
    if ((iVar1 < *piVar7) || ((int)param_1[0x174] < 1)) {
      plVar13 = param_1 + 0x170;
      uVar5 = (**(code **)param_1[0x170])(plVar13);
      if (*(uint *)(param_1 + 0x16b) <= uVar5) {
        uVar5 = 0;
      }
      if (*(char *)(param_1[0x16c] + (long)(int)uVar5 * 0x18 + 0x10) != '\0') {
        uVar5 = (**(code **)(param_1[0x170] + 8))(plVar13);
        if (*(uint *)(param_1 + 0x16b) <= uVar5) {
          uVar5 = 0;
        }
        *(undefined1 *)(param_1[0x16c] + (long)(int)uVar5 * 0x18 + 0x10) = 0;
        uVar4 = (**(code **)(param_1[0x170] + (ulong)*(byte *)((long)param_1 + 0xb94) * 8))(plVar13)
        ;
        *(undefined4 *)(param_1 + 0x171) = uVar4;
        puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0xca0) + 0xf0))(lVar10 + 0xca0);
        *(undefined4 *)(param_1 + 0x174) = *puVar8;
        iVar1 = *(int *)((long)param_1 + 0xe04);
        piVar7 = (int *)(**(code **)(*(long *)(lVar10 + 0xcd0) + 0xf0))(lVar10 + 0xcd0);
        if (iVar1 < *piVar7) {
          *(int *)((long)param_1 + 0xe04) = *(int *)((long)param_1 + 0xe04) + 1;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x174) = (int)param_1[0x174] + -1;
    }
    if (param_1[0x173] == 0) {
      return;
    }
    plVar13 = *(long **)(param_1[0x173] + 8);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if ((int)plVar13[4] != 0) goto LAB_015c61f4;
    if ((*(byte *)(plVar13 + 1) & 1) != 0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)plVar13[0xd] == 0) {
      bVar3 = true;
    }
    else {
      lVar10 = (long)(int)plVar13[0xd] * 8;
      plVar9 = (long *)plVar13[0xe];
      do {
        lVar10 = lVar10 + -8;
        lVar12 = *plVar9;
        if (*(char *)(lVar12 + 0x104) < '\0') break;
        plVar9 = plVar9 + 1;
      } while (lVar10 != 0);
      bVar3 = -1 < *(char *)(lVar12 + 0x104);
    }
    bVar2 = *(byte *)(plVar13 + 1);
    (**(code **)(*plVar13 + 0x28))(plVar13);
    if ((bVar2 & 1) != 0) {
      (**(code **)(*plVar13 + 0x28))(plVar13);
    }
    if (!bVar3) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x171);
    if (*(uint *)(param_1 + 0x16b) <= uVar5) {
      uVar5 = 0;
    }
    if (*(char *)(param_1[0x16c] + (long)(int)uVar5 * 0x18 + 0x10) == '\0') {
      local_48 = "WaveSimyulation::initializeFlowMap_";
      puVar11 = &LAB_015cd840;
    }
    else {
      uVar5 = (**(code **)param_1[0x170])(param_1 + 0x170);
      if (*(uint *)(param_1 + 0x16b) <= uVar5) {
        uVar5 = 0;
      }
      if (*(char *)(param_1[0x16c] + (long)(int)uVar5 * 0x18 + 0x10) != '\0') {
        return;
      }
      local_48 = "WaveSimulation::createUpdatedFlowMap_";
      puVar11 = &LAB_015cdb90;
    }
    param_1[0x184] = (long)puVar11;
    param_1[0x183] = (long)param_1;
    param_1[0x185] = 0;
    lVar10 = *(long *)(param_1[0x173] + 0x20);
    if (lVar10 == 0) {
      return;
    }
    local_78 = *(undefined8 *)(param_1[0x173] + 8);
  }
  else {
    if (param_1[0x173] == 0) {
      return;
    }
    plVar13 = *(long **)(param_1[0x173] + 8);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if ((int)plVar13[4] != 0) {
LAB_015c61f4:
                    /* WARNING: Could not recover jumptable at 0x015c6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x28))(plVar13);
      return;
    }
    if ((*(byte *)(plVar13 + 1) & 1) != 0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)plVar13[0xd] == 0) {
      bVar3 = true;
    }
    else {
      lVar10 = (long)(int)plVar13[0xd] * 8;
      plVar9 = (long *)plVar13[0xe];
      do {
        lVar10 = lVar10 + -8;
        lVar12 = *plVar9;
        if (*(char *)(lVar12 + 0x104) < '\0') break;
        plVar9 = plVar9 + 1;
      } while (lVar10 != 0);
      bVar3 = -1 < *(char *)(lVar12 + 0x104);
    }
    bVar2 = *(byte *)(plVar13 + 1);
    (**(code **)(*plVar13 + 0x28))(plVar13);
    if ((bVar2 & 1) != 0) {
      (**(code **)(*plVar13 + 0x28))(plVar13);
    }
    if (!bVar3) {
      return;
    }
    memcpy((void *)param_1[0x181],(void *)param_1[0x17f],
           (ulong)(uint)((int)param_1[0x17e] * *(int *)((long)param_1 + 0xbf4) * 2));
    param_1[0x183] = (long)param_1;
    param_1[0x184] = (long)&LAB_015cba80;
    param_1[0x185] = 0;
    lVar10 = *(long *)(param_1[0x173] + 0x20);
    if (lVar10 == 0) {
      return;
    }
    local_78 = *(undefined8 *)(param_1[0x173] + 8);
    local_48 = "WaveSimulation::deconvolutionField";
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_90 = PTR_DAT_04bb5070 + 0x10;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_70 = param_1 + 0x182;
  local_80 = 0;
  local_86 = 0;
  local_88 = 0;
  local_98 = 0;
  ppuStack_a0 = &local_90;
  local_a8 = 0;
  FUN_03f45184(lVar10,&local_a8);
  return;
}

