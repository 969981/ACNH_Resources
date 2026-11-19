
void FUN_038a4200(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04b62488;
  (**(code **)(*(long *)param_1[1] + 0xd8))((long *)param_1[1],param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x28))();
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    uVar1 = *(int *)((long)param_1 + 0x34) + *(int *)((long)param_1 + 0x4c);
    if (*(uint *)(lVar2 + 8) <= uVar1) {
      uVar1 = *(uint *)(lVar2 + 8);
    }
    *(uint *)(lVar2 + 0xc) = uVar1;
  }
  *param_1 = &PTR_LAB_04b65048;
  (**(code **)(*(long *)param_1[1] + 0xd8))((long *)param_1[1],param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x28))();
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04b1c1a0;
  return;
}

