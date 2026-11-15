
void FUN_02453230(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  char cVar10;
  long *plVar11;
  uint uVar12;
  undefined1 local_74;
  byte local_73;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  byte local_24 [4];
  
  lVar6 = FUN_0251e98c(1);
  puVar7 = (uint *)(**(code **)(*(long *)(lVar6 + 0x2770) + 0xf0))(lVar6 + 0x2770);
  uVar12 = *puVar7;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x8000;
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined1 *)(param_1 + 0x915) = 1;
  *(byte *)(param_1 + 0x914) = (byte)(uVar12 >> 0x1f);
  *(uint *)(param_1 + 0x910) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x90c) = uVar12 & (int)uVar12 >> 0x1f;
  local_60 = (undefined **)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1912) * 0.25,
                      (float)*(int *)(param_1 + 0x190e) * 0.001);
  local_58 = CONCAT44((uint)*(ushort *)(param_1 + 0x1918) << 0x10,
                      (float)*(int *)(param_1 + 0x1914) * 0.001);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  FUN_017145dc(puVar8,&local_60);
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 == 0) {
    cVar10 = (char)*(undefined4 *)(param_1 + 0x17ec);
    *(char *)(param_1 + 0x190d) = cVar10;
  }
  else {
    cVar10 = *(char *)(param_1 + 0x190d);
  }
  local_70 = (int)cVar10;
  local_74 = iVar4 == 0;
  local_73 = *(byte *)(param_1 + 0x1ee8);
  local_58 = (ulong)&local_74 | 1;
  local_64 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_6c = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  if (7 < local_73) {
    local_73 = 0xff;
  }
  local_60 = &PTR_FUN_04a72ef0;
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_60)(&local_60,*puVar8);
      lVar6 = lVar6 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
    iVar4 = *(int *)(param_1 + 0x178);
  }
  puVar3 = PTR_DAT_04bb27c0;
  if (iVar4 != 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) == '\0') {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar9 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x024534b4;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x024534b4;
    }
  }
  uVar12 = 0;
joined_r0x024534b4:
  if (plVar11 != (long *)0x0) {
    lVar6 = plVar11[0x2a];
    uVar1 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
    if ((((int)lVar6 == 1) && ((uVar5 & uVar12) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      local_24[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      FUN_008fb868(plVar11,local_24);
    }
  }
  return;
}

