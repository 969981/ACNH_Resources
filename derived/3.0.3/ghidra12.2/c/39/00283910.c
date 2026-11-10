
void FUN_00283910(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    uVar1 = (ulong)*(uint *)((long)param_1 + 0x5f4);
    if (*(uint *)((long)param_1 + 0x5f4) != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(param_1[3] + uVar4 * 8);
        if (lVar2 != 0) {
          FUN_00285e00(lVar2);
          FUN_00285dc0(lVar2);
          uVar1 = (ulong)*(uint *)((long)param_1 + 0x5f4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    puVar3 = (undefined8 *)param_1[6];
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = FUN_00285e00(puVar3);
      if (0x27 < uVar1) {
        uVar1 = uVar1 / 0x28;
        puVar5 = puVar3;
        do {
          (**(code **)*puVar5)(puVar5);
          uVar1 = uVar1 - 1;
          puVar5 = puVar5 + 5;
        } while (uVar1 != 0);
      }
      FUN_00285dc0(puVar3);
    }
    lVar2 = param_1[7];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    lVar2 = param_1[8];
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

