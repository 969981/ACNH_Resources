
/* WARNING: Removing unreachable block (ram,0x02407bd8) */
/* WARNING: Removing unreachable block (ram,0x02407de8) */

void FUN_02407a8c(long param_1)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  byte local_5c [4];
  uint local_58 [2];
  uint local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar11 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
    iVar7 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar7;
    fVar15 = *(float *)(lVar9 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar15 * 999.99994);
    uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar11;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar13 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar13 + 0x2e5) = 1;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    local_58[0] = 0;
  }
  else {
    local_58[0] = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
    local_50 = 0x26;
    uVar8 = FUN_03850890(puVar13[0x227],0x26,0,local_58[0]);
    if ((uVar8 & 1) != 0) {
      uVar11 = *(uint *)(param_1 + 0x17cc);
      *(uint *)(param_1 + 0x17cc) = uVar11 & 0xfffffffe;
      if ((uVar11 & 1) != 0) {
        local_5c[0] = *(byte *)(param_1 + 0x1ee8);
        if (7 < local_5c[0]) {
          local_5c[0] = 0xff;
        }
        FUN_02405e5c(local_5c,param_1 + 0x18e0);
      }
      FUN_023203ac(param_1,0,0);
      local_50 = 0;
      local_4c = 1;
      local_48 = 6;
      local_42 = 0;
      local_44 = 0;
      FUN_02321e44(local_58,param_1,&local_50);
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x1901);
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar15 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_58[0] = 10;
    local_50 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02407d88;
  }
  iVar7 = (uint)uVar4 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar9 = (**(code **)(*plVar2 + 0x148))();
  iVar12 = iVar7 - *(int *)(lVar9 + 4);
  if (iVar12 + 0x5b05afU < 0xb60b5f) {
    *(int *)(lVar9 + 4) = iVar7;
  }
  else {
    iVar5 = 0x15555560;
    iVar6 = -0x15555560;
    iVar12 = (int)(fVar15 * (float)iVar12);
    if (iVar12 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar6 = 0x5b05b0;
    }
    iVar1 = iVar12;
    if (iVar5 <= iVar12) {
      iVar1 = iVar5;
    }
    if (iVar6 <= iVar12) {
      iVar6 = iVar1;
    }
    iVar6 = iVar6 + *(int *)(lVar9 + 4);
    *(int *)(lVar9 + 4) = iVar6;
    if (iVar6 != iVar7) {
      return;
    }
  }
LAB_02407d88:
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    local_58[0] = 0;
    local_50 = 0;
  }
  else {
    local_58[0] = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
    local_50 = local_58[0];
    uVar8 = FUN_03850368(puVar13[0x227],local_58[0]);
    uVar11 = local_58[0];
    if (((((uVar8 & 1) == 0) && (puVar13[0x227] != 0)) &&
        (uVar8 = FUN_03850368(puVar13[0x227],local_58[0]), (uVar8 & 1) == 0)) &&
       (uVar8 = FUN_0384fca4(puVar13[0x227],uVar11), (uVar8 & 1) == 0)) {
      return;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x1903);
  if (7 < bVar3) {
    bVar3 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar3,6);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar3 == 1) {
      FUN_0231b68c(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

