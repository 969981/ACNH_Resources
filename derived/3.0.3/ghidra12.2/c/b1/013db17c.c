
void FUN_013db17c(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  if (param_3 < *(uint *)(param_1 + 0x78)) {
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar1 = 0;
    }
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x60) + 0xf0))();
    *(undefined4 *)((long)param_2 + 0xc) = *puVar2;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar1 = 0;
    }
    puVar3 = (undefined2 *)(**(code **)(*(long *)(lVar1 + 0xf0) + 0xf0))();
    *(undefined2 *)(param_2 + 3) = *puVar3;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar1 = 0;
    }
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x90) + 0xf0))();
    *(undefined4 *)(param_2 + 2) = *puVar2;
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
    }
    else {
      lVar1 = 0;
    }
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0xc0) + 0xf0))();
    *(undefined4 *)((long)param_2 + 0x14) = *puVar2;
    uVar4 = (undefined2)*(undefined4 *)(param_1 + 0x58);
  }
  else {
    uVar4 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0xffffffffffffffff;
  }
  *(undefined2 *)((long)param_2 + 0x1a) = uVar4;
  return;
}

