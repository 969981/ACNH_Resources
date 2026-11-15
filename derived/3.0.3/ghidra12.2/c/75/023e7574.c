
void FUN_023e7574(long param_1)

{
  short sVar1;
  undefined *puVar2;
  float fVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_90;
  char *pcStack_88;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  int local_68;
  byte local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined3 uStack_38;
  undefined4 local_34;
  
  local_34 = 0;
  local_48 = 0;
  uStack_44 = 0;
  fStack_40 = 0.0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_68 = (uint)*(ushort *)(param_1 + 0x18ef) << 0x10;
  uStack_50 = 0;
  *(int *)(param_1 + 0x844) = local_68;
  local_64 = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_5c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  fStack_70 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  *(float *)(param_1 + 0x83c) = fStack_70;
  local_63 = *(int *)(param_1 + 0x1810) == 7;
  local_74 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_6c = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  *(float *)(param_1 + 0x838) = local_74;
  *(float *)(param_1 + 0x840) = local_6c;
  FUN_01506f24(&local_60,&local_74);
  FUN_023164ec(param_1,6);
  local_80 = uStack_44;
  fStack_7c = fStack_40;
  local_78 = uStack_3c;
  FUN_0231ece4(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_80);
  fVar3 = fStack_7c;
  sVar1 = *(short *)(param_1 + 0x18e9);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "PlayerSwitchFtrOffsetY";
  if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
     (plVar5 = *(long **)(lVar6 + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x30))((fVar3 - (float)(int)sVar1 * 0.25) * 10.0,plVar5,&local_90);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_90 = puVar2 + 0x10;
  pcStack_88 = "PlayerFtrSwitchWallHang";
  FUN_017081d0(puVar7,&local_90,6,0,0);
  return;
}

