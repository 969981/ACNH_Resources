
void FUN_02d241a8(undefined4 param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  if (*(int *)(param_2 + 0x56f10) == 1) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x228) + 0x588);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)0x0;
      if ((-1 < (int)param_3) &&
         ((int)param_3 < (int)*(uint *)(lVar3 + 0x208) && param_3 < *(uint *)(lVar3 + 0x208))) {
        puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x210) + (ulong)param_3 * 8);
      }
      if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
      if (((puVar4 != (undefined8 *)0x0) &&
          (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90), (uVar2 & 1) != 0)) &&
         (plVar5 = *(long **)puVar4[0x5e], plVar5 != (long *)0x0)) {
        local_30 = PTR_DAT_04bc4f00 + 0x10;
        local_28 = 0x14;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
        (**(code **)(plVar5[3] + 0x158))(param_1,plVar5[1]);
      }
    }
  }
  return;
}

