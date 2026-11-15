
void FUN_024aebf8(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined *local_68;
  char *pcStack_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  
  local_44 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  pcStack_60 = "PlayerRiverMakerDig";
  if (*(char *)(param_1 + 0x1923) != '\0') {
    pcStack_60 = "PlayerRiverMakerFallDig";
  }
  fStack_48 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fStack_54 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  bVar1 = local_4c < 0.0;
  bVar2 = local_44 < 0.0;
  local_58 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  local_50 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  iVar5 = (int)local_4c;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  iVar6 = (int)local_44;
  uVar4 = FUN_016e026c(0,&local_4c,0,0);
  local_78 = CONCAT44(uVar4,(float)(int)((int)((float)iVar5 / 5.0) - (uint)bVar1 & 0xfffffffe) * 5.0
                            + 5.0);
  local_70 = (float)(int)((int)((float)iVar6 / 5.0) - (uint)bVar2 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_58,&local_78);
  FUN_024bc9f0(param_1,&local_4c);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar3,&local_68,6,0,0);
  local_70 = local_44;
  fStack_80 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_78 = CONCAT44(fStack_48,local_4c);
  local_84 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_7c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  uVar4 = FUN_016e026c(0,&local_84,0,0);
  local_78 = CONCAT44(uVar4,(undefined4)local_78);
  FUN_016dec40(param_1,&local_78,1,0,0,0,0);
  return;
}

