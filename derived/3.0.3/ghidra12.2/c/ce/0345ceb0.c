
void FUN_0345ceb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  undefined *local_70;
  undefined4 local_68;
  
  uVar6 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)((long)param_2 + 0x1c);
  puVar4 = PTR_DAT_04bc0cb8;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 4);
  do {
    lVar5 = (**(code **)param_2[5])(param_2 + 5,uVar6 & 0xffffffff);
    (param_1 + 4)[uVar6] = lVar5;
    if (lVar5 != 0 && param_1[0x241] == -1) {
      uVar2 = *(uint *)(param_1 + 0x23);
      if (*(uint *)(lVar5 + 0x208) <= uVar2) {
        uVar2 = 0;
      }
      plVar8 = *(long **)(*(long *)(lVar5 + 0x210) + (long)(int)uVar2 * 8);
      if (plVar8 != (long *)0x0) {
        local_68 = 0x1f;
        local_70 = puVar1;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
        (**(code **)(plVar8[3] + 0x210))(param_1 + 0x240,plVar8[1],0,0);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x1e);
  lVar5 = param_1[4];
  if ((((lVar5 != 0) && (param_1[5] != 0)) &&
      (plVar8 = *(long **)(lVar5 + 0x1d0), plVar8 != (long *)0x0)) &&
     (plVar7 = *(long **)(param_1[5] + 0x1d0), plVar7 != (long *)0x0)) {
    puVar1 = puVar4 + 0x10;
    local_68 = 8;
    local_70 = puVar1;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
    lVar5 = (**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
    fVar10 = *(float *)(lVar5 + 4);
    local_68 = 8;
    local_70 = puVar1;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
    lVar5 = (**(code **)(plVar7[3] + 0xa0))(plVar7[1]);
    fVar10 = fVar10 - *(float *)(lVar5 + 4);
    fVar3 = -fVar10;
    if (0.0 <= fVar10) {
      fVar3 = fVar10;
    }
    *(float *)(param_1 + 3) = fVar3;
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    local_70 = puVar4 + 0x10;
    local_68 = 8;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
    lVar5 = (**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
    uVar9 = *(undefined4 *)(lVar5 + 4);
  }
  *(undefined4 *)(param_1 + 0x244) = uVar9;
  return;
}

