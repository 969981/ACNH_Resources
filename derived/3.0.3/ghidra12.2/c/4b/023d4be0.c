
/* WARNING: Removing unreachable block (ram,0x023d4d84) */

void FUN_023d4be0(long param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  undefined1 local_58;
  uint local_54;
  
  sVar2 = *(short *)(param_1 + 0x1906);
  iVar10 = *(int *)(param_1 + 0x1902);
  iVar14 = *(int *)(param_1 + 0x1908);
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    bVar4 = true;
  }
  else {
    uVar5 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar5;
    bVar4 = *(char *)(param_1 + 0x3a5) == '\0';
  }
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  fVar11 = 0.0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_6c = CONCAT31(local_6c._1_3_,bVar8);
  iVar1 = *(int *)(param_1 + 0x3a0);
  if (!bVar4) {
    if (iVar1 == 0) {
      fVar11 = 1.0;
    }
    else {
      fVar11 = 1.0;
      if (*(int *)(param_1 + 0x398) < iVar1) {
        fVar12 = (float)*(int *)(param_1 + 0x398) / (float)iVar1;
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar12) {
          fVar11 = fVar13;
        }
      }
    }
  }
  local_58 = 1;
  local_5c = fVar11 * 0.9 + 0.1;
  local_68 = (float)iVar10 * 0.001 + 1.0;
  fStack_64 = (float)(int)sVar2 * 0.25;
  local_60 = (float)iVar14 * 0.001 + -2.5;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_6c,*(undefined4 *)(param_1 + 0x230),1);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    local_54 = 0;
    local_6c = 0;
  }
  else {
    local_6c = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
    local_54 = local_6c;
    uVar6 = FUN_03850368(puVar9[0x227],local_6c);
    uVar3 = local_54;
    if (((((uVar6 & 1) == 0) && (puVar9[0x227] != 0)) &&
        (uVar6 = FUN_03850368(puVar9[0x227],local_54), (uVar6 & 1) == 0)) &&
       (uVar6 = FUN_0384fca4(puVar9[0x227],uVar3), (uVar6 & 1) == 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar6 = FUN_00a738a0(param_1 + 0x1ee8,0);
    if ((uVar6 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      local_6c = FUN_00a74b78(param_1 + 0x1ee8);
      lVar7 = 1;
      if (local_6c < 0xf) {
        if ((1 << (ulong)(local_6c & 0x1f) & 0x600dU) == 0) {
          if ((local_6c == 7) || (local_6c == 9)) {
            lVar7 = (ulong)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
          }
        }
        else {
          lVar7 = 2;
        }
      }
    }
    FUN_023752f4(param_1,lVar7,6);
  }
  else {
    FUN_023164ec(param_1,6);
  }
  return;
}

