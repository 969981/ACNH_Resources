
void FUN_0243fd6c(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar9;
  long lVar8;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  float fVar13;
  undefined4 uVar14;
  byte local_4c [4];
  undefined8 local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  local_34 = *(undefined4 *)(param_1 + 0x230);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_0243fde8:
    FUN_016f742c(&local_48,&local_34,0);
    uVar9 = local_48._2_2_;
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 1 & 1) == 0) goto LAB_0243fde8;
    uVar9 = 0;
  }
  *(undefined2 *)(param_1 + 0x1900) = uVar9;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar12 = &DAT_054f08d0;
      if (iVar4 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar12 = &DAT_054f08d0;
    }
  }
  else {
    puVar12 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
  *puVar12 = *puVar12 & 0xfffffffb;
  FUN_023164ec(param_1,6);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar13 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar13 * 999.99994);
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar10;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar5 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar5 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar5 + 0x2e5) = 1;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "PlayerSharePlayRecieveMain";
  FUN_017081d0(puVar5,&local_48,6,1,0);
  FUN_02569d74(param_1 + 0xec0,7);
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar10)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0244005c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0244005c;
    }
  }
  uVar10 = 0;
joined_r0x0244005c:
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      local_4c[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_4c[0]) {
        local_4c[0] = 0xff;
      }
      FUN_009007f4(plVar11,local_4c);
    }
  }
  return;
}

