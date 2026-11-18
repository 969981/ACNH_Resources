
/* WARNING: Removing unreachable block (ram,0x03359be8) */
/* WARNING: Removing unreachable block (ram,0x03359b88) */
/* WARNING: Removing unreachable block (ram,0x03359bb4) */
/* WARNING: Removing unreachable block (ram,0x03359c18) */

void FUN_03359b44(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  undefined *local_d8;
  char *pcStack_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "LayoutTextCursor Heap";
  local_d8 = (undefined *)0x0;
  pcStack_d0 = (char *)0x0;
  if (*param_2 != 0) {
    local_d8 = (undefined *)FUN_038c6d48(0,&local_50,*param_2,8,1,1);
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  }
  *param_1 = (ulong)local_d8;
  param_1[1] = (ulong)pcStack_d0;
  local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
  uVar2 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0xf80,8);
  FUN_032d04c4(uVar2,param_1);
  __ptr = (void *)param_1[2];
  param_1[2] = uVar2;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    uVar2 = param_1[2];
  }
  local_d8._0_4_ = 4;
  local_b6 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  if (*(uint *)(*(long *)PTR_DAT_04bc96f8 + 0x10) < 5) {
    local_d8._0_4_ = 0;
  }
  local_d8 = (undefined *)
             (*(long *)(*(long *)PTR_DAT_04bc96f8 + 0x18) + (long)(int)local_d8 * 0x158);
  local_b8 = 0;
  pcStack_d0 = &DAT_04b177a8;
  local_c8 = "SwkbdCaret.bflyt";
  uStack_c0 = 0x640;
  FUN_032d0880(uVar2,&local_d8);
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)();
  }
  param_1[6] = (ulong)param_1;
  puVar1 = param_1 + 3;
  param_1[8] = *(ulong *)(param_1[2] + 0xf0);
  FUN_032c6b2c(puVar1,2);
  FUN_032c6ccc(puVar1);
  local_d8 = &DAT_04b177a8;
  pcStack_d0 = "Blink";
  local_50 = &DAT_04b177a8;
  pcStack_48 = "Blink";
  local_60 = &DAT_04b177a8;
  puStack_58 = &DAT_0407ebb1;
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  FUN_032c7320(puVar1,&local_d8,&local_50,&local_60,&local_70);
  local_d8 = &DAT_04b177a8;
  pcStack_d0 = "Size";
  local_50 = &DAT_04b177a8;
  pcStack_48 = "Size";
  local_60 = &DAT_04b177a8;
  puStack_58 = &DAT_0407ebb1;
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  FUN_032c7320(puVar1,&local_d8,&local_50,&local_60,&local_70);
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x28))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x28))();
  }
  return;
}

