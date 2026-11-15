
void FUN_0249d578(long param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  byte local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar11 = *(int *)(param_1 + 0x190a);
  sVar2 = *(short *)(param_1 + 0x190e);
  iVar12 = *(int *)(param_1 + 0x1910);
  pfVar4 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  *pfVar4 = (float)iVar11 * 0.001;
  pfVar4[1] = (float)(int)sVar2 * 0.25;
  pfVar4[2] = (float)iVar12 * 0.001;
  plVar9 = *(long **)(param_1 + 0x60);
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar11 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb37b0);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*plVar9 + 0x498))(plVar9,1);
    }
  }
  lVar7 = *(long *)(param_1 + 0x68) + 0x278;
  lVar6 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  fVar13 = *pfVar4;
  FUN_01261e40(fVar13 * 0.75,PTR_DAT_04bb5dc0,lVar7,0,0);
  FUN_01261e40(fVar13 * 0.75,PTR_DAT_04bbcd38,lVar7,0,1);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  if (*(char *)(param_1 + 0x1914) == '\0') {
    uVar8 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar3 = 7 < uVar8;
    if (bVar3) {
      uVar8 = 0xff;
    }
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar8 * 0x740;
    if (bVar3) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) != *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar7 + 0x424) = 4;
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x0249d734;
    }
    *(undefined4 *)(lVar7 + 0x424) = 3;
    FUN_01393458(lVar7 + 0x4c8);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0249d734:
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (puVar10[0x227] != 0) {
    FUN_03850760(0x3f800000);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  lVar7 = FUN_017067d4(puVar10,uVar1,0);
  if (lVar7 != 0) {
    FUN_01752fd8(lVar7,PTR_DAT_04bbe278,10,0,0);
  }
  local_58[0] = *(byte *)(param_1 + 0x1ee8);
  local_48 = 0x3dcccccd;
  local_44 = 0;
  local_4c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  if (7 < local_58[0]) {
    local_58[0] = 0xff;
  }
  local_54 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

