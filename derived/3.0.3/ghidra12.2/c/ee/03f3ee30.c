
void FUN_03f3ee30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  puVar4 = PTR_DAT_04bb28c8;
  puVar3 = PTR_DAT_04bb2840;
  puVar2 = PTR_DAT_04bb2838;
  lVar8 = *(long *)PTR_DAT_04bb29d0;
  iVar9 = 0x1e;
  puVar1 = PTR_DAT_04bb2000 + 0x10;
  while( true ) {
    puVar6 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)puVar4,param_1 + 0x308);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(puVar3);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar6)(puVar6,puVar2), (uVar7 & 1) != 0)) break;
    *(undefined8 *)(param_1 + 0x30) = 0;
    (**(code **)(**(long **)(param_1 + 0x348) + 0xf0))();
    nn::os::ConvertToTimeSpan((lVar8 * 0x1e) / 1000);
    nn::os::SleepThread();
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) {
      return;
    }
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  return;
}

