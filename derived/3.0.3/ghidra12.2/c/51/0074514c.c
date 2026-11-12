
void FUN_0074514c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04bb3058;
  *param_1 = &PTR_FUN_04904af8;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[10]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[10] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  param_1[10] = 0;
  return;
}

