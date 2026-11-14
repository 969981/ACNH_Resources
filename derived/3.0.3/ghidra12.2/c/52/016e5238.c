
uint FUN_016e5238(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_3c;
  undefined4 local_34;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0,param_2,param_2);
      puVar3 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_3c = 0;
  local_34 = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "OpenBox";
  uVar1 = FUN_01733c60(puVar3 + 0xb8f,&local_30,param_2,&local_3c,1);
  return uVar1 & 1;
}

