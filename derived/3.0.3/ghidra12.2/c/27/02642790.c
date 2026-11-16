
void FUN_02642790(undefined8 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar6 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    *(undefined2 *)((long)param_1 + 10) = DAT_04cb6038;
  }
  else {
    if ((*(long **)(lVar6 + 0x3278) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x3278), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = (undefined4 *)(*(long *)(lVar6 + 0x3260) + *(long *)(lVar6 + 0x3258));
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uVar4 = *(undefined2 *)((long)puVar1 + 10);
    *(undefined4 *)param_1 = *puVar1;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    *(undefined2 *)((long)param_1 + 10) = uVar4;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x3278) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x3278) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

