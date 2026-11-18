
/* WARNING: Removing unreachable block (ram,0x032a309c) */

void FUN_032a3020(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_34;
  
  local_7e = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined8 *)0x0;
  puStack_98 = PTR_DAT_04bc8e68 + 0x10;
  local_78 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_88 = 0x100000258;
  (**(code **)(*param_1 + 0x30))(auStack_b0);
  local_34 = 0;
  puVar3 = (undefined8 *)*param_2;
  local_90 = local_a8;
  plVar1 = (long *)*puVar3;
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0xf80,8);
  FUN_032d04c4(lVar2,puVar3);
  __ptr = (void *)param_1[1];
  param_1[1] = lVar2;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    lVar2 = param_1[1];
  }
  FUN_032d0880(lVar2,&local_a0);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  (**(code **)(*param_1 + 0x10))(param_1,*param_2);
  return;
}

