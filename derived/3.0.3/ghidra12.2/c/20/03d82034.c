
void FUN_03d82034(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_50;
  undefined4 local_48;
  
  fVar6 = *(float *)(param_1 + 0x244);
  fVar8 = 1.0 - fVar6 / 100.0;
  fVar7 = *(float *)(param_1 + 0x248);
  fVar9 = 1.0 - fVar7 / 100.0;
  if (fVar6 <= fVar7) {
    plVar5 = *(long **)(param_1 + 0x200);
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_50 = puVar1;
    if (fVar6 < fVar7) {
      local_48 = 0x15;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x168))(fVar9,plVar5[1]);
      plVar5 = *(long **)(param_1 + 0x208);
      local_48 = 0x15;
      local_50 = puVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x168))(fVar8,plVar5[1]);
      plVar5 = *(long **)(param_1 + 0x210);
      local_50 = PTR_DAT_04bc4e68 + 0x10;
      local_48 = 6;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      puVar4 = (undefined8 *)(plVar5[3] + 0x1b8);
      goto LAB_03d82284;
    }
    local_48 = 9;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_50);
    fVar9 = (float)(**(code **)(plVar5[3] + 0xb0))(plVar5[1]);
    plVar5 = *(long **)(param_1 + 0x200);
    local_48 = 0x14;
    fVar9 = fVar8 * fVar9;
    local_50 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 0x158))(fVar9,plVar5[1]);
    plVar5 = *(long **)(param_1 + 0x208);
    local_48 = 0x14;
    local_50 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    lVar2 = plVar5[1];
    pcVar3 = *(code **)(plVar5[3] + 0x158);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x200);
    local_48 = 0x15;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 0x168))(fVar8,plVar5[1]);
    plVar5 = *(long **)(param_1 + 0x208);
    local_48 = 0x15;
    local_50 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    lVar2 = plVar5[1];
    pcVar3 = *(code **)(plVar5[3] + 0x168);
  }
  (*pcVar3)(fVar9,lVar2);
  plVar5 = *(long **)(param_1 + 0x210);
  local_50 = PTR_DAT_04bc4e68 + 0x10;
  local_48 = 7;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  puVar4 = (undefined8 *)(plVar5[3] + 0x1c0);
LAB_03d82284:
  (*(code *)*puVar4)(plVar5[1]);
  return;
}

