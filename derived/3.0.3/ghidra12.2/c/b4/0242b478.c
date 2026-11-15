
void FUN_0242b478(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  char *pcStack_78;
  uint local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  bVar11 = *(byte *)(param_1 + 0x1916);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  fStack_5c = (float)*(int *)(param_1 + 0x1909) * 0.001;
  fStack_54 = (float)*(int *)(param_1 + 0x190f) * 0.001;
  fVar16 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_60 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  local_58 = (float)(int)*(short *)(param_1 + 0x190d) * 0.25 +
             (float)(int)*(short *)(param_1 + 0x1913) * 0.001;
  local_48 = *(undefined8 *)(param_1 + 0x1900);
  local_6c = (uint)*(byte *)(param_1 + 0x1908);
  if (0xb < local_6c) {
    local_6c = 0;
  }
  fStack_64 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_68 = fVar16;
  fVar15 = local_58;
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  FUN_0231ece4(param_1,&local_68,&fStack_5c);
  puVar4 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "PlayerIconPickupType";
  if (((puVar12[0x227] != 0) && (lVar10 = *(long *)(puVar12[0x227] + 0x78), lVar10 != 0)) &&
     (plVar6 = *(long **)(lVar10 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_80,local_6c);
  }
  local_88 = 0xfffe;
  FUN_0277d4ac(&local_88);
  local_88 = *(undefined8 *)(param_1 + 0x1918);
  uVar7 = FUN_016e4e3c(&local_88);
  if (((uVar7 & 1) != 0) || (uVar7 = FUN_016e4d80(&local_88), (uVar7 & 1) != 0)) {
    FUN_0242b900(param_1 + 0x1900);
    local_80 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_80);
    local_80 = *(undefined **)(param_1 + 0x1918);
    uVar7 = FUN_016e4e3c(&local_80);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_016e4d80(&local_80);
      fVar14 = 0.0;
      fVar13 = 0.0;
      fVar15 = 0.0;
      local_8c = fVar15;
      if ((uVar7 & 1) != 0) goto LAB_0242b630;
    }
    else {
LAB_0242b630:
      fVar13 = (float)FUN_0242d690(param_1 + 0x1900);
      fVar13 = fVar13 + 0.0;
      fVar14 = fVar15 + 0.0;
      local_8c = fVar16 + 0.0;
    }
    local_94 = CONCAT44(fVar14,fVar13);
    FUN_0231ece4(param_1,&local_80,&local_94);
  }
  if (bVar11 - 8 < 0xfffffff9) {
    pcStack_78 = "PlayerPickup";
  }
  else {
    pcStack_78 = "PlayerFtrPickup2";
  }
  local_80 = puVar4 + 0x10;
  FUN_017081d0(puVar12,&local_80,6,0,0);
  local_94 = 0xfffe;
  FUN_0277d4ac(&local_94);
  FUN_016e49e4(&local_94,&local_48,0);
  iVar5 = FUN_0277d6c4(&local_94);
  if (iVar5 == 0xad1) {
    local_80 = puVar4 + 0x10;
    pcStack_78 = "PlayerGotHardWood";
    FUN_0274bfe8(param_1 + 0x1ee8,&local_80,1);
  }
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3dcccccd;
  lVar10 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
  fVar16 = *pfVar8;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  puVar4 = PTR_DAT_04bb6298;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  local_94 = local_94 & 0xffffffff00000000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar16 * 0.1;
  *(undefined1 *)((long)puVar12 + 0x12b5) = 0;
  *(undefined4 *)(puVar12 + 0x255) = *(undefined4 *)((long)puVar12 + 0x12ac);
  sVar3 = *(short *)puVar4;
  if (sVar3 == -1) {
LAB_0242b7d0:
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar11);
    FUN_02669430(&local_80);
    uVar7 = FUN_025579bc(param_1 + 0x1ee8,&local_48,&local_94);
    uVar9 = *(uint *)(param_1 + 0x17cc);
    if ((uVar7 & 1) != 0) {
      uVar9 = uVar9 | 0x40;
      goto LAB_0242b814;
    }
  }
  else {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0242b7d0;
    uVar9 = *(uint *)(param_1 + 0x17cc);
  }
  uVar9 = uVar9 & 0xffffffbf;
LAB_0242b814:
  *(uint *)(param_1 + 0x17cc) = uVar9;
  local_80 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x190d) * 0.25 +
                      (float)(int)*(short *)(param_1 + 0x1913) * 0.001,
                      (float)*(int *)(param_1 + 0x1909) * 0.001);
  pcStack_78 = (char *)CONCAT44(pcStack_78._4_4_,(float)*(int *)(param_1 + 0x190f) * 0.001);
  FUN_016dec40(param_1,&local_80,0,0,0,0,0);
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0xb2c) = uVar2;
  return;
}

