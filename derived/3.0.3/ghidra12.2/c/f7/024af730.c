
void FUN_024af730(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined *local_70;
  char *pcStack_68;
  
  bVar2 = *(byte *)(param_1 + 0x1922);
  if (3 < bVar2) {
    bVar2 = 0;
  }
  cVar3 = *(char *)(param_1 + 0x1920);
  cVar4 = *(char *)(param_1 + 0x1921);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "RiverMakerBuryFromSwing";
  if (((puVar9[0x227] != 0) && (lVar8 = *(long *)(puVar9[0x227] + 0x78), lVar8 != 0)) &&
     (plVar7 = *(long **)(lVar8 + 0x48), plVar7 != (long *)0x0)) {
    local_70 = puVar1;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_70,bVar2 != 0);
  }
  pcStack_68 = "PlayerRiverMakerBury";
  if (cVar3 != '\0') {
    pcStack_68 = "PlayerRiverMakerFallBury";
  }
  if (cVar4 != '\0') {
    pcStack_68 = "PlayerRiverMakerFallBuryFromLower";
  }
  local_7c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  fStack_78 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  bVar5 = local_7c < 0.0;
  fStack_84 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  bVar6 = local_74 < 0.0;
  local_88 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  iVar11 = (int)local_7c;
  iVar12 = (int)local_74;
  local_70 = puVar1;
  uVar10 = FUN_016e026c(0,&local_7c,0,0);
  local_98 = CONCAT44(uVar10,(float)(int)((int)((float)iVar11 / 5.0) - (uint)bVar5 & 0xfffffffe) *
                             5.0 + 5.0);
  local_90 = (float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar6 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_88,&local_98);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar9 = &DAT_05240280;
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar9,&local_70,6,0,0);
  local_90 = local_74;
  fStack_a0 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_98 = CONCAT44(fStack_78,local_7c);
  local_a4 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_9c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  uVar10 = FUN_016e026c(0,&local_a4,0,0);
  local_98 = CONCAT44(uVar10,(undefined4)local_98);
  FUN_016dec40(param_1,&local_98,1,0,0,0,0);
  FUN_024bc9f0(param_1,&local_7c);
  return;
}

