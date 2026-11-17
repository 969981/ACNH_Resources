
void FUN_02fd727c(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_50;
  undefined4 local_48;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x220) + 0x570);
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)0x0;
    if ((-1 < (int)param_2) &&
       ((int)param_2 < (int)*(uint *)(lVar5 + 0x208) && param_2 < *(uint *)(lVar5 + 0x208))) {
      puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x210) + (ulong)param_2 * 8);
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((((puVar4 != (undefined8 *)0x0) &&
         (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90), (uVar2 & 1) != 0)) &&
        (-1 < (int)param_2)) &&
       (((int)param_2 < *(int *)(lVar5 + 0x3cc) &&
        (plVar3 = *(long **)puVar4[0x5e], plVar3 != (long *)0x0)))) {
      uVar6 = 0x3f800000;
      if ((param_3 & 1) == 0) {
        uVar6 = 0;
      }
      local_50 = PTR_DAT_04bc4f00 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
      (**(code **)(plVar3[3] + 0x158))(uVar6,plVar3[1]);
    }
  }
  return;
}

