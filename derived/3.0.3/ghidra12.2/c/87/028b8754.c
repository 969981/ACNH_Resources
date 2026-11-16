
void FUN_028b8754(long param_1,undefined1 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_28 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x50) + (ulong)*param_3 * 4;
  if (2 < *param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
  }
  local_24 = (**(code **)*puVar1)();
  if (DAT_05574040 != 0) {
    plVar3 = *(long **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      plVar3 = (long *)*plVar3;
    }
    else if ((plVar3 == (long *)0x0) || (plVar3 = (long *)plVar3[0x26], plVar3 == (long *)0x0))
    goto LAB_028b87d4;
    lVar2 = (**(code **)(*plVar3 + 0x38))();
    if (lVar2 != 0) {
      local_28 = 0;
    }
  }
LAB_028b87d4:
  local_3 = *param_2;
  local_8 = 0;
  local_2 = 0;
  local_4 = 4;
  if (-1 < DAT_055b0f08) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_055b0f08,&local_8,&local_28,8,0);
  }
  return;
}

