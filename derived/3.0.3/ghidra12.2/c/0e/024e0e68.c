
/* WARNING: Removing unreachable block (ram,0x024e0ef8) */
/* WARNING: Removing unreachable block (ram,0x024e0fc8) */

void FUN_024e0e68(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined *local_68;
  uint local_60;
  uint uStack_5c;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  byte local_18 [4];
  uint local_14;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    FUN_024e02d0(param_1,(byte *)(param_1 + 0x1900),&local_68);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(uint *)(puVar6 + 0x2d3) >> 1 & 1;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x3d);
    uVar3 = FUN_03850890(puVar6[0x227],0x3d,0,local_14);
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
      local_3c = 0xffffff;
      local_38 = 0;
      local_68 = PTR_DAT_04bb2010 + 0x10;
      local_60 = *(byte *)(param_1 + 0x1900) & 0xfe;
      uStack_5c = *(byte *)(param_1 + 0x1901) & 0xfe;
      local_44 = 0x800000006;
      local_58 = local_68;
      local_50 = local_60;
      uStack_4c = uStack_5c;
      FUN_011e8d00(&local_68,1);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(uint *)(puVar6 + 0x2d3) >> 1 & 1;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x3c);
    uVar3 = FUN_03850890(puVar6[0x227],0x3c,0,local_14);
    if (((uVar3 & 1) != 0) &&
       (uVar1 = *(uint *)(param_1 + 0x17cc), *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe,
       (uVar1 & 1) != 0)) {
      local_18[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_18[0]) {
        local_18[0] = 0xff;
      }
      FUN_024e1128(local_18,param_1 + 0x18e0);
    }
  }
  FUN_024df754(param_1,*(char *)(param_1 + 0x1902) != '\0',0);
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f4ccccd;
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
  fVar7 = *pfVar5;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar7 * 0.8;
  return;
}

