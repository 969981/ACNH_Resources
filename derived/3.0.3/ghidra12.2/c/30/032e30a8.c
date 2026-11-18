
/* WARNING: Removing unreachable block (ram,0x032e30f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e30a8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__ptr;
  undefined8 *local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  int local_48;
  
  if ((*(byte *)(param_3 + 1) & 1) != 0) {
    local_78 = (undefined8 *)((ulong)local_78 & 0xffffffff00000000);
    puVar1 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x150,8);
    FUN_032e29ac();
    __ptr = (void *)*param_1;
    *param_1 = puVar1;
    if (__ptr != (void *)0x0) {
      FUN_032e2b14(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      puVar1 = (undefined8 *)*param_1;
    }
    local_68 = DAT_057300d0;
    local_50 = DAT_057300e8;
    local_60 = _DAT_057300d8;
    local_58 = DAT_057300e0;
    local_48 = DAT_057300f0;
    ppuStack_70 = &PTR_LAB_048f9770;
    if (*param_3 != 0) {
      local_58 = *param_3;
    }
    if (-1 < *(int *)((long)param_3 + 0xc)) {
      local_60 = CONCAT44((int)((ulong)_DAT_057300d8 >> 0x20),*(int *)((long)param_3 + 0xc));
    }
    if (0 < (int)param_3[2]) {
      local_48 = (int)param_3[2];
    }
    local_78 = param_2;
    FUN_032e2c24(puVar1,&local_78);
    (**(code **)(*(long *)*puVar1 + 0x30))();
  }
  return;
}

