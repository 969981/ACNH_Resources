
void FUN_002694ac(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_60 [4];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba640(*(undefined8 *)PTR_DAT_04bc1510);
  if (*param_1 != 0) {
    (**(code **)(*plVar2 + 0x150))(plVar2);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*plVar2 + 0x158))(plVar2);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*plVar2 + 0x168))(plVar2);
    param_1[2] = 0;
  }
  puVar4 = (undefined8 *)param_1[3];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*plVar2 + 0x170))(plVar2);
    param_1[4] = 0;
  }
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[5] = 0;
  }
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    (**(code **)(*plVar2 + 0x198))(plVar2);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    (**(code **)(*plVar2 + 0x1a0))(plVar2);
    param_1[8] = 0;
  }
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[9] = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_00280a08();
    lVar5 = param_1[0x6a];
    if (lVar5 != 0) {
      FUN_0028054c(lVar5);
      FUN_00285dc0(lVar5);
    }
    param_1[0x6a] = 0;
  }
  if (param_1[0x6b] != 0) {
    FUN_00283910();
    lVar5 = param_1[0x6b];
    if (lVar5 != 0) {
      FUN_002833e0(lVar5);
      FUN_00285dc0(lVar5);
    }
    param_1[0x6b] = 0;
  }
  if (param_1[0x6c] != 0) {
    FUN_00260b50();
    lVar5 = param_1[0x6c];
    if (lVar5 != 0) {
      FUN_00260ab0(lVar5);
      FUN_00285dc0(lVar5);
    }
    param_1[0x6c] = 0;
  }
  if (param_1[0x6d] != 0) {
    FUN_00261c90();
    lVar5 = param_1[0x6d];
    if (lVar5 != 0) {
      FUN_00261c10(lVar5);
      FUN_00285dc0(lVar5);
    }
    param_1[0x6d] = 0;
  }
  if (param_1[10] != 0) {
    (**(code **)(*plVar2 + 0x160))(plVar2);
    param_1[10] = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_0026ebf0();
  }
  if (*(long *)puVar1 != 0) {
    FUN_002aafe0(*(long *)puVar1 + 0x10,(int)param_1[0xf]);
    FUN_002aafe0(*(long *)puVar1 + 0x10,(int)param_1[0x11]);
    FUN_002ab430(*(long *)puVar1 + 0x10);
    uVar3 = *(undefined8 *)puVar1;
    local_50 = 0x10c08;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_60);
    FUN_002296c4(auStack_40,&local_50);
    FUN_002ba4a4(local_60,uVar3,auStack_40);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((long)param_1 + 0xae) = 0;
  FUN_00220f6c(param_1 + 0x1b);
  return;
}

