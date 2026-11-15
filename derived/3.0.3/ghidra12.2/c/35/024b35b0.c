
void FUN_024b35b0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  puVar13 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "CommonRodReturnFloat";
  FUN_017081d0(puVar11,&local_60,6,1,0);
  uVar4 = *(undefined4 *)(param_1 + 0x230);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      puVar13 = PTR_DAT_04bb2020;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  lVar5 = FUN_017067d4(puVar11,uVar4,0);
  if (lVar5 != 0) {
    local_60 = puVar13 + 0x10;
    pcStack_58 = "ToolRodReturnFloat";
    FUN_01751d60(lVar5,&local_60,6,0,0);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  uVar6 = FUN_016ff740(puVar11,6,&local_60);
  if ((uVar6 & 1) == 0) goto LAB_024b3904;
  uVar1 = FUN_024b1b70(param_1);
  puVar13 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) goto LAB_024b3904;
  if ((((uVar1 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + (ulong)(uVar1 >> 0x14) * 8),
       plVar12 == (long *)0x0)) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar1)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar5 + 0x288) == 1) || (*(int *)(lVar5 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar13;
    iVar2 = (**(code **)(*plVar7 + 0x60))();
    if (iVar2 < 0x11) {
      uVar1 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_024b374c;
      uVar1 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024b374c:
    uVar1 = 0;
  }
  if (plVar12 == (long *)0x0) goto LAB_024b3904;
  if (((*PTR_DAT_04bb4b28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b28), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb4b20 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4b28);
  }
  uVar3 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb4b20);
  if ((uVar1 & uVar3) != 1) goto LAB_024b3904;
  fVar14 = (float)((ulong)plVar12[0x52] >> 0x20);
  fVar15 = (float)((ulong)plVar12[0x54] >> 0x20);
  lVar5 = *(long *)PTR_DAT_04bb48a0;
  fVar16 = (float)((ulong)plVar12[0x56] >> 0x20);
  bVar9 = *(byte *)(param_1 + 0x1ee8);
  bVar10 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar9 == bVar10) {
    lVar8 = 0;
LAB_024b38f0:
    lVar5 = lVar5 + 0x40 + lVar8 * 0x20;
  }
  else {
    bVar10 = *(byte *)(lVar5 + 100);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 1;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0x84);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 2;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0xa4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 3;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0xc4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 4;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0xe4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 5;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0x104);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 6;
      goto LAB_024b38f0;
    }
    bVar10 = *(byte *)(lVar5 + 0x124);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 7;
      goto LAB_024b38f0;
    }
    lVar5 = lVar5 + 0x140;
  }
  *(float *)(lVar5 + 0x10) =
       (float)((ulong)pcStack_58 >> 0x20) +
       fVar14 * SUB84(local_60,0) + fVar15 * (float)((ulong)local_60 >> 0x20) +
       fVar16 * SUB84(pcStack_58,0);
  *(float *)(lVar5 + 0x14) =
       (float)((ulong)uStack_48 >> 0x20) +
       fVar14 * (float)uStack_50 + fVar15 * (float)((ulong)uStack_50 >> 0x20) +
       fVar16 * (float)uStack_48;
  *(float *)(lVar5 + 0x18) =
       (float)((ulong)uStack_38 >> 0x20) +
       fVar14 * (float)local_40 + fVar15 * (float)((ulong)local_40 >> 0x20) +
       fVar16 * (float)uStack_38;
LAB_024b3904:
  uVar4 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar4,8);
  FUN_023333a4(param_1);
  return;
}

