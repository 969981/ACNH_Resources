
void FUN_016da530(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [63];
  undefined1 local_35;
  
  if (param_1 != (long *)0x0) {
    local_35 = 0;
    local_78 = 0x40;
    puStack_80 = local_74;
    local_74[0] = 0;
    local_88 = PTR_DAT_04bb2bc0 + 0x10;
    (**(code **)(*param_1 + 0x270))(param_1,&local_88);
    puVar2 = (undefined8 *)param_1[0xc];
    if (puVar2 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar2 = &DAT_05240280;
      }
      else {
        puVar2 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar2,&local_88,6,1,0);
    FUN_016f84f0(param_1,param_2);
    (**(code **)(*(long *)param_1[0xd] + 0x100))((long *)param_1[0xd],param_2);
    (**(code **)(*(long *)param_1[0xd] + 0x160))((long *)param_1[0xd],param_3);
  }
  return;
}

