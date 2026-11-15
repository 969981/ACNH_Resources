
void FUN_024d8180(long param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  byte local_76;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  
  cVar1 = *(char *)(param_1 + 0x1900);
  local_70 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_70);
  puVar2 = PTR_DAT_04bb3170;
  local_58 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  FUN_007ef010(auStack_54,PTR_DAT_04bb3170);
  if (*(int *)(param_1 + 0x1810) == 7) {
    local_76 = *(byte *)(param_1 + 0x1ee8);
    local_80 = 0x100000000;
    lVar6 = *(long *)(param_1 + 0x68);
    local_78 = *(undefined2 *)puVar2;
    if (7 < local_76) {
      local_76 = 0xff;
    }
    local_90 = *(undefined **)(lVar6 + 0x278);
    local_88 = (char *)CONCAT44(*(undefined4 *)(lVar6 + 0x2b4),*(undefined4 *)(lVar6 + 0x280));
    FUN_0150a560(&local_70,&local_90);
  }
  else {
    FUN_01509db4(&local_70,(byte *)(param_1 + 0x1ee8));
  }
  puVar2 = PTR_DAT_04bb3238;
  plVar4 = *(long **)(param_1 + 0x60);
  fVar8 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
  *(undefined8 *)(param_1 + 0xca8) = 0xffffffff00000000;
  fVar8 = ((float)uStack_60 + local_68._4_4_) - fVar8;
  *(undefined4 *)(param_1 + 0xcb0) = *(undefined4 *)puVar2;
  uVar5 = (uint)*(byte *)(param_1 + 0x1902);
  if (0x1c < uVar5) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x21c4) = uVar5;
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  fVar9 = fVar8 * 10.0;
  *(undefined1 *)(plVar4 + 0xbe7) = 1;
  (**(code **)(*plVar4 + 0x4f0))(plVar4,plVar4 + 0xbe1);
  puVar2 = PTR_DAT_04bb2020;
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "PlayerTowelActionOffsetY";
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (fVar8 <= 0.0) {
    fVar9 = 0.0;
  }
  if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
     (plVar4 = *(long **)(lVar6 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(fVar9,plVar4,&local_70);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (cVar1 == '\0') {
    local_88 = "PlayerOffTowel";
  }
  else {
    local_88 = "PlayerUseTowel";
  }
  local_90 = puVar2 + 0x10;
  FUN_017081d0(puVar7,&local_90,6,0,0);
  return;
}

