
void FUN_0231b5b4(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [63];
  undefined1 local_25;
  
  local_25 = 0;
  local_68 = 0x40;
  local_64[0] = 0;
  puStack_70 = local_64;
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_023ea384(param_1,&local_78);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
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
  FUN_017081d0(puVar2,&local_78,param_2,1,0);
  return;
}

