
void FUN_023fc0a4(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x1926);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  if (cVar2 == '\0') {
    local_138 = "PlayerWorkbenchMaking";
  }
  else {
    local_138 = "PlayerWorkbenchRemake";
  }
  local_140 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar5,&local_140,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar7 = *(long *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xbfc) = *(undefined4 *)(lVar7 + 0x278);
    *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(lVar7 + 0x27c);
    *(undefined4 *)(param_1 + 0xc04) = *(undefined4 *)(lVar7 + 0x280);
    FUN_0244b5a8(&local_140,param_1 + 0x1ee8);
    *(undefined4 *)(param_1 + 0xc08) = 0;
    *(undefined **)(param_1 + 0x1914) = local_140;
    *(undefined4 *)(param_1 + 0x1928) = 0x3f800000;
    puVar5 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar5[0x290] + 0x1d5) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar5[0x291] + 0x1d5) = 0;
  cVar2 = *(char *)(param_1 + 0x1926);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  uVar6 = puVar5[0x290];
  if (cVar2 == '\0') {
    local_48 = 0x17d4;
    FUN_0277d4ac(&local_48);
    local_64 = 0;
    local_12c = 0x3f800000;
    local_140 = (undefined *)0xffffffff00000000;
    local_138 = (char *)0x0;
    puStack_108 = local_fc;
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
    FUN_017327f0(uVar6,&local_48,&local_64,&local_140,0xffffffff);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    uVar6 = puVar5[0x291];
    local_48 = 0x17d4;
    FUN_0277d4ac(&local_48);
    local_110 = puVar1;
  }
  else {
    local_48 = 0x3148;
    FUN_0277d4ac(&local_48);
    local_110 = PTR_DAT_04bb2d88 + 0x10;
  }
  local_64 = 0;
  local_78 = 7;
  local_7d = 0;
  local_fc[0] = 0;
  local_100 = 0x80;
  puStack_108 = local_fc;
  local_12c = 0x3f800000;
  local_130 = 0;
  local_138 = (char *)0x0;
  local_140 = (undefined *)0xffffffff00000000;
  local_70 = 0;
  local_74 = 0;
  local_124 = 0;
  local_11c = 0;
  FUN_017327f0(uVar6,&local_48,&local_64,&local_140,0xffffffff);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = *(undefined8 *)(param_1 + 0x190c);
  if (*(char *)(param_1 + 0x1926) == '\0') {
    lVar7 = *(long *)PTR_DAT_04bb46f0;
    uVar3 = FUN_0261eff4(&local_48);
    if ((0x7ff < (uVar3 & 0xffff)) ||
       ((*(byte *)(lVar7 + (((ulong)uVar3 & 0xfff8) >> 3) + 0xe98e0) >> (ulong)(uVar3 & 7) & 1) == 0
       )) goto LAB_023fc48c;
    local_140 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x1920) * 0.25,
                         (float)*(int *)(param_1 + 0x191c) * 0.001);
    local_138 = (char *)CONCAT44(local_138._4_4_,(float)*(int *)(param_1 + 0x1922) * 0.001);
    FUN_01223a50(param_1 + 0x1ee8,&local_140,(ulong)uVar3,*(undefined4 *)(param_1 + 0x192c));
    iVar4 = *(int *)(param_1 + 0x178);
  }
  else {
    local_140 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x1920) * 0.25,
                         (float)*(int *)(param_1 + 0x191c) * 0.001);
    local_138 = (char *)CONCAT44(local_138._4_4_,(float)*(int *)(param_1 + 0x1922) * 0.001);
    FUN_01223700(param_1 + 0x1ee8,&local_140,&local_48);
    iVar4 = *(int *)(param_1 + 0x178);
  }
  if (iVar4 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0x7fffffff;
LAB_023fc48c:
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_0232c844(param_1);
  }
  return;
}

