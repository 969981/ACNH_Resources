
void FUN_02ca00d8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((param_2 != (undefined8 *)0x0) && (*(char *)(param_1 + 8) != '\0')) {
    puVar4 = (undefined8 *)(**(code **)*param_2)(param_2);
    puVar1 = PTR_DAT_04bc4d98;
    puVar6 = (undefined8 *)*puVar4;
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar6 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4d90), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(puVar6[0x74] + 0x10))(puVar6 + 0x74), puVar2 = PTR_LAB_04bc5be0,
       (uVar5 & 1) == 0)) {
      puVar6[0x75] = param_1;
      puVar6[0x77] = 0;
      puVar6[0x76] = puVar2;
      puVar6[0x74] = &PTR_LAB_04ab51c8;
    }
    puVar6 = (undefined8 *)puVar4[1];
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar6 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4d90), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(puVar6[0x74] + 0x10))(puVar6 + 0x74), puVar2 = PTR_LAB_04bc5be0,
       (uVar5 & 1) == 0)) {
      puVar6[0x75] = param_1;
      puVar6[0x77] = 0;
      puVar6[0x76] = puVar2;
      puVar6[0x74] = &PTR_LAB_04ab51c8;
    }
    puVar6 = (undefined8 *)puVar4[2];
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar6 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4d90), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(puVar6[0x74] + 0x10))(puVar6 + 0x74), puVar2 = PTR_LAB_04bc5be0,
       (uVar5 & 1) == 0)) {
      puVar6[0x75] = param_1;
      puVar6[0x77] = 0;
      puVar6[0x76] = puVar2;
      puVar6[0x74] = &PTR_LAB_04ab51c8;
    }
    puVar4 = (undefined8 *)puVar4[3];
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar4 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(puVar4[0x74] + 0x10))(puVar4 + 0x74), puVar1 = PTR_LAB_04bc5be0,
       (uVar5 & 1) == 0)) {
      puVar4[0x75] = param_1;
      puVar4[0x77] = 0;
      puVar4[0x76] = puVar1;
      puVar4[0x74] = &PTR_LAB_04ab51c8;
    }
  }
  return;
}

