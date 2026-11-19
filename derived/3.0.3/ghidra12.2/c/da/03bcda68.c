
undefined8 * FUN_03bcda68(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bd2300);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if ((*(char *)(puVar5 + 0x33) == '\0') ||
     (puVar5 = *(undefined8 **)(param_1 + 0x240), puVar5 == (undefined8 *)0x0)) {
LAB_03bcdaf8:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*(int *)(puVar5 + 1) == 1) {
      if (((DAT_05aec1b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aec1b0), iVar1 != 0)) {
        DAT_05aec1a8 = &PTR_LAB_04b7b0a8;
        __cxa_guard_release(&DAT_05aec1b0);
      }
      puVar4 = (undefined8 *)*puVar5;
      puVar3 = &DAT_05aec1a8;
    }
    else {
      if (*(int *)(puVar5 + 1) != 0) goto LAB_03bcdaf8;
      if (((DAT_05aec1a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aec1a0), iVar1 != 0)) {
        DAT_05aec198 = &PTR_LAB_04b7b0a8;
        __cxa_guard_release(&DAT_05aec1a0);
      }
      puVar4 = (undefined8 *)*puVar5;
      puVar3 = &DAT_05aec198;
    }
    uVar2 = (*(code *)*puVar4)(puVar5,puVar3);
    if ((uVar2 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar3 = puVar5 + 2;
    }
  }
  return puVar3;
}

