
void FUN_023794f8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_140 = PTR_DAT_04bb2020 + 0x10;
  local_138 = "PlayerCooking";
  FUN_017081d0(puVar4,&local_140,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xdac) = *(undefined4 *)(lVar5 + 0x278);
    *(undefined4 *)(param_1 + 0xdb0) = *(undefined4 *)(lVar5 + 0x27c);
    uVar7 = *(undefined4 *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0xdb8) = 0;
    *(undefined4 *)(param_1 + 0x1920) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xdb4) = uVar7;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar4[0x290] + 0x1d5) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar4[0x291] + 0x1d5) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  uVar6 = puVar4[0x290];
  local_48 = 0x3948;
  FUN_0277d4ac(&local_48);
  local_64 = 0;
  local_12c = 0x3f800000;
  local_140 = (undefined *)0xffffffff00000000;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_100 = 0x80;
  local_7d = 0;
  local_fc[0] = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_78 = 7;
  local_70 = 0;
  local_74 = 0;
  local_124 = 0;
  local_11c = 0;
  local_110 = puVar1;
  puStack_108 = local_fc;
  FUN_017327f0(uVar6,&local_48,&local_64,&local_140,0xffffffff);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  uVar6 = puVar4[0x291];
  local_48 = 0x3948;
  FUN_0277d4ac(&local_48);
  local_64 = 0;
  local_130 = 0;
  local_12c = 0x3f800000;
  local_140 = (undefined *)0xffffffff00000000;
  local_138 = (char *)0x0;
  local_100 = 0x80;
  local_7d = 0;
  local_fc[0] = 0;
  local_78 = 7;
  local_70 = 0;
  local_74 = 0;
  local_124 = 0;
  local_11c = 0;
  local_110 = puVar1;
  puStack_108 = local_fc;
  FUN_017327f0(uVar6,&local_48,&local_64,&local_140,0xffffffff);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  puVar1 = PTR_DAT_04bb43c0;
  local_48 = *(undefined8 *)(param_1 + 0x190c);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_148 = (undefined4)local_48;
      uStack_144 = local_48._4_4_;
      local_140 = (undefined *)
                  CONCAT44((float)(int)*(short *)(param_1 + 0x1918) * 0.25,
                           (float)*(int *)(param_1 + 0x1914) * 0.001);
      local_138 = (char *)CONCAT44(local_138._4_4_,(float)*(int *)(param_1 + 0x191a) * 0.001);
      FUN_01223f00(param_1 + 0x1ee8,&local_140,&local_148,*(undefined4 *)(param_1 + 0x1924));
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffefffff;
    FUN_0232c844(param_1);
  }
  return;
}

