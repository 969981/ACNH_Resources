
void FUN_024898d8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  char *local_28;
  
  local_30 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_28 = (char *)CONCAT44(local_28._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  FUN_016dec40(param_1,&local_30,0,0,0,0,0);
  FUN_024bc9f0(param_1,&local_30);
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
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "PlayerCliffMakerActionDelete";
  FUN_017081d0(puVar2,&local_30,6,0,0);
  return;
}

