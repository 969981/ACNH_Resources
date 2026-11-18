
void FUN_03290d70(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = param_1[3];
  param_1[3] = 0;
  plVar3 = (long *)param_1[0x27];
  if (lVar4 != 0 && plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,0);
  }
  param_1[0xc] = 0;
  param_1[9] = (long)(param_1 + 5);
  param_1[10] = (long)(param_1 + 5);
  puVar2 = (undefined8 *)param_1[0xb];
  while (puVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    lVar4 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    if ((undefined8 *)param_1[0xb] == puVar2) {
      param_1[0xb] = (long)puVar5;
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = lVar4;
    }
    puVar2 = puVar5;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 0x10) = puVar5;
    }
  }
  if (*param_1 == 0) {
    param_1[1] = 0;
  }
  lVar4 = param_1[0x2c];
  param_1[2] = 0;
  param_1[4] = 0;
  if ((int)lVar4 != 0) {
    lVar6 = param_1[0x2d];
    uVar7 = 0;
    do {
      *(undefined8 *)(lVar6 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) = 0;
      uVar1 = uVar7 + 1;
      uVar7 = uVar1 & 0xffffffff;
    } while ((int)lVar4 != (int)uVar1);
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
    param_1[0x11] = 0;
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
    param_1[0x17] = 0;
  }
  if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x1c])();
    param_1[0x1c] = 0;
  }
  if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x21])();
    param_1[0x21] = 0;
  }
  return;
}

