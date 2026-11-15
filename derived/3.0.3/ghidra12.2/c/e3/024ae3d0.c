
void FUN_024ae3d0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_40;
  char *local_38;
  float local_2c;
  float fStack_28;
  float local_24;
  
  fStack_28 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_2c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_24 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,(float)*(int *)(param_1 + 0x1900) * 0.001);
  local_38 = (char *)CONCAT44(local_38._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  uVar4 = FUN_016e026c(0,&local_2c,0,0);
  local_40 = (undefined *)CONCAT44(uVar4,(undefined4)local_40);
  FUN_016dec40(param_1,&local_40,1,0,0,0,0);
  cVar1 = *(char *)(param_1 + 0x1916);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if (cVar1 == '\x01') {
    local_38 = "PlayerRiverMakerDigReadyWait";
  }
  else {
    local_38 = "PlayerRiverMakerBuryReadyWait";
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar3,&local_40,6,1,0);
  return;
}

