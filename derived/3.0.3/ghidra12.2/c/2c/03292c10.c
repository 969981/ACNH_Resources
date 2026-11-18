
/* WARNING: Removing unreachable block (ram,0x03292c4c) */

void FUN_03292c10(long param_1,undefined4 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar2 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x168) + 0x30))(*(long **)(param_1 + 0x168),200,8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 1;
  *(undefined4 *)((long)puVar2 + 0x34) = 0x101;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[7] = &PTR_LAB_04b182a0;
  puVar2[8] = 0;
  puVar2[0xd] = &PTR_LAB_04b182a0;
  puVar2[0xe] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[0x13] = &PTR_LAB_04b182b8;
  puVar2[0x14] = 0;
  *(undefined4 *)(puVar2 + 5) = *param_2;
  if (param_3 == 0) {
    fVar6 = *(float *)(param_1 + 0x178);
    fVar7 = fVar6 + (float)param_2[1];
    fVar8 = *(float *)(param_1 + 0x17c);
    *(float *)(param_1 + 0x178) = fVar7;
    fVar9 = fVar8 + (float)param_2[2];
    *(float *)(param_1 + 0x17c) = fVar9;
    *(float *)(puVar2 + 3) = fVar6;
    *(float *)((long)puVar2 + 0x1c) = fVar8;
    *(float *)(puVar2 + 4) = fVar7;
    *(float *)((long)puVar2 + 0x24) = fVar9;
    plVar3 = (long *)puVar2[8];
  }
  else {
    fVar8 = *(float *)(param_1 + 0x178);
    fVar6 = *(float *)(param_3 + 0x50) + fVar8;
    fVar9 = *(float *)(param_1 + 0x17c);
    fVar7 = *(float *)(param_3 + 0x54) + fVar9;
    *(float *)(param_1 + 0x178) = fVar6;
    *(float *)(param_1 + 0x17c) = fVar7;
    *(float *)(puVar2 + 3) = fVar8;
    *(float *)((long)puVar2 + 0x1c) = fVar9;
    *(float *)(puVar2 + 4) = fVar6;
    *(float *)((long)puVar2 + 0x24) = fVar7;
    *(byte *)((long)puVar2 + 0x36) = *(byte *)(param_3 + 0x5b) & 3;
    *(byte *)((long)puVar2 + 0x37) = *(byte *)(param_3 + 0x5b) >> 2 & 3;
    plVar3 = (long *)puVar2[8];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(param_2 + 6);
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar2 + 9);
  }
  puVar2[8] = uVar4;
  if ((long *)puVar2[0xe] != (long *)0x0) {
    (**(code **)(*(long *)puVar2[0xe] + 8))();
  }
  plVar3 = *(long **)(param_2 + 0x12);
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar2 + 0xf);
  }
  puVar2[0xe] = uVar4;
  if ((long *)puVar2[0x14] != (long *)0x0) {
    (**(code **)(*(long *)puVar2[0x14] + 8))();
  }
  plVar3 = *(long **)(param_2 + 0x1e);
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar2 + 0x15);
  }
  puVar2[0x14] = uVar4;
  *(undefined4 *)(puVar2 + 6) = param_2[3];
  puVar1 = *(undefined8 **)(param_1 + 0x158);
  if (*(undefined8 **)(param_1 + 0x158) == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 0x158);
    *puVar5 = puVar2;
  }
  else {
    do {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)puVar5[2];
    } while ((undefined8 *)puVar5[2] != (undefined8 *)0x0);
    puVar5[2] = puVar2;
    puVar2[1] = puVar5;
    puVar5 = (undefined8 *)*puVar5;
  }
  *puVar2 = puVar5;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x178);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x17c);
  fVar6 = (float)param_2[3];
  *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + fVar6;
  *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x17c) + fVar6;
  return;
}

