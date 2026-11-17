
undefined8 FUN_02a1f4d0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bc4000;
  puVar2 = PTR_DAT_04bc3ff8;
  if ((param_2 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  lVar8 = (long)*(int *)(param_1 + 0x10) << 3;
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = PTR_DAT_04bb4448 + 0x10;
  while( true ) {
    puVar5 = (undefined8 *)FUN_03f2d7f0(*puVar7);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(puVar3);
    }
    if ((((puVar5 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar5)(puVar5,puVar2), (uVar6 & 1) != 0)) &&
        (**(char **)(param_3 + 8) != '\0')) &&
       ((puVar5 = (undefined8 *)puVar5[5], puVar5 != (undefined8 *)0x0 &&
        (uVar6 = (**(code **)*puVar5)(puVar5,param_2,param_3), (uVar6 & 1) != 0)))) break;
    puVar7 = puVar7 + 1;
    lVar8 = lVar8 + -8;
    if (lVar8 == 0) {
      return 0;
    }
  }
  return 1;
}

