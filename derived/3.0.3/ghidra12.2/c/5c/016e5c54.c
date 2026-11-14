
void FUN_016e5c54(float param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  puVar3 = *(undefined8 **)(param_2 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  plVar4 = (long *)puVar3[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar4 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3758), (uVar2 & 1) != 0)) &&
     (plVar4[0x5b] != 0)) {
    fVar5 = 1.0;
    if (param_1 <= 1.0) {
      fVar5 = param_1;
    }
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = fVar5;
    }
    *(float *)(plVar4[0x5b] + 0x54) = fVar6;
  }
  return;
}

