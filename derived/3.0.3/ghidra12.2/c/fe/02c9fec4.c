
void FUN_02c9fec4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((param_2 != (undefined8 *)0x0) && (*(char *)(param_1 + 8) != '\0')) {
    puVar3 = (undefined8 *)(**(code **)*param_2)(param_2);
    puVar1 = PTR_DAT_04bc4d98;
    puVar5 = (undefined8 *)*puVar3;
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar5 != (undefined8 *)0x0) &&
        (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4d90), (uVar4 & 1) != 0)) &&
       (uVar4 = (**(code **)(puVar5[0x74] + 0x10))(puVar5 + 0x74), (uVar4 & 1) == 0)) {
      puVar5[0x75] = param_1;
      puVar5[0x76] = &LAB_02caa95c;
      puVar5[0x77] = 0;
      puVar5[0x74] = &PTR_LAB_04ab5178;
    }
    puVar5 = (undefined8 *)puVar3[1];
    if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar5 != (undefined8 *)0x0) &&
        (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4d90), (uVar4 & 1) != 0)) &&
       (uVar4 = (**(code **)(puVar5[0x74] + 0x10))(puVar5 + 0x74), (uVar4 & 1) == 0)) {
      puVar5[0x75] = param_1;
      puVar5[0x76] = &LAB_02caa95c;
      puVar5[0x77] = 0;
      puVar5[0x74] = &PTR_LAB_04ab5178;
    }
    puVar3 = (undefined8 *)puVar3[2];
    if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (((puVar3 != (undefined8 *)0x0) &&
        (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4d90), (uVar4 & 1) != 0)) &&
       (uVar4 = (**(code **)(puVar3[0x74] + 0x10))(puVar3 + 0x74), (uVar4 & 1) == 0)) {
      puVar3[0x75] = param_1;
      puVar3[0x76] = &LAB_02caa95c;
      puVar3[0x77] = 0;
      puVar3[0x74] = &PTR_LAB_04ab5178;
    }
  }
  return;
}

