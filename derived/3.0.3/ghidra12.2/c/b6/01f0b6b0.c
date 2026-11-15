
void FUN_01f0b6b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *__src;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char *__src_00;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined1 *__dest;
  char *__dest_00;
  long *plVar13;
  undefined8 local_60;
  undefined1 *local_58;
  undefined4 local_38;
  uint local_34;
  
  plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar12 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      plVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar12 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar12 + 0x4e8))(plVar12,0);
  *(undefined4 *)(param_1 + 0xaf50) = 0;
  *(undefined4 *)(param_1 + 0xaf34) = 1;
  *(ushort *)(param_1 + 0xaf64) = *(ushort *)(param_1 + 0xaf64) & 0xffdf;
  uVar1 = *(uint *)(param_1 + 0xaf80);
  if (uVar1 < 3) {
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    lVar9 = *(long *)PTR_DAT_04bb9a68 + (ulong)uVar1 * 0x1c;
    if (2 < uVar1) {
      lVar9 = *(long *)PTR_DAT_04bb9a68;
    }
    *(byte *)(lVar9 + 0x18) = *(byte *)(lVar9 + 0x18) & 0xfe;
    local_34 = uVar1;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar12 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      plVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar12 = &DAT_05240280;
    }
  }
  local_38 = 0;
  plVar13 = plVar12 + 0xb9e;
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278;
  uVar7 = FUN_021f2ed0(lVar9,&local_38);
  uVar8 = FUN_021f4f90(lVar9,0,0);
  if ((uVar7 & 1) == 0) {
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xaf50) = 0;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xaf50) = 3;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xaf50) = 1;
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 1;
    FUN_01707f58(plVar12,0,1,0);
    FUN_01707f58(plVar12,0,0,0);
  }
  (**(code **)(*plVar12 + 0x4e8))(plVar12,1);
  puVar2 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = &DAT_040b1007;
  if ((char)*plVar13 == '\0') {
    lVar9 = 0;
LAB_01f0b8ac:
    *(char *)plVar13 = '\x01';
    __dest = (undefined1 *)plVar12[lVar9 * 0x10 + 0xb90];
    *(int *)((long)plVar12 + lVar9 * 0x80 + 0x5cf4) =
         (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar2 + 0x28))(&local_60);
    __src = local_58;
    if (__dest != local_58) {
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar10 = 0;
      do {
        if (local_58[lVar10] == '\0') goto LAB_01f0b94c;
        if (local_58[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_01f0b94c;
        }
        if (local_58[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_01f0b94c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01f0b94c:
      iVar6 = (int)lVar10;
      if ((int)plVar12[lVar9 * 0x10 + 0xb91] <= (int)lVar10) {
        iVar6 = (int)plVar12[lVar9 * 0x10 + 0xb91] + -1;
      }
      memcpy(__dest,__src,(long)iVar6);
      __dest[iVar6] = 0;
    }
    *(undefined4 *)(plVar12 + lVar9 * 0x10 + 0xb9d) = 0;
  }
  else {
    plVar13 = plVar12 + 0xbae;
    if ((char)*plVar13 == '\0') {
      lVar9 = 1;
      goto LAB_01f0b8ac;
    }
    if ((char)plVar12[0xbbe] == '\0') {
      plVar13 = plVar12 + 0xbbe;
      lVar9 = 2;
      goto LAB_01f0b8ac;
    }
    if ((char)plVar12[0xbce] == '\0') {
      plVar13 = plVar12 + 0xbce;
      lVar9 = 3;
      goto LAB_01f0b8ac;
    }
  }
  if (*(int *)(param_1 + 0xaf50) == 1) {
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    lVar9 = *(long *)(param_1 + 0x10);
    local_34 = 0;
    FUN_01e5a930(0x40000000,lVar9,0xd,PTR_DAT_04bb2150,&local_60,&local_34,PTR_DAT_04bc1600,6);
    __dest_00 = *(char **)(lVar9 + 0x3b8);
    if (__dest_00 == "CommonCharaEditLandChair") goto LAB_01f0badc;
    iVar6 = *(int *)(lVar9 + 0x3c0);
    __src_00 = "CommonCharaEditLandChair";
    iVar11 = iVar6 + -1;
    bVar3 = SBORROW4(iVar6,0x18);
    bVar4 = iVar6 + -0x18 < 0;
    bVar5 = iVar6 == 0x18;
    iVar6 = 0x18;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0xaf50) == 3) {
      local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
      local_34 = 0;
      FUN_01e5a930(0x40000000,lVar9,0xd,PTR_DAT_04bb2150,&local_60,&local_34,PTR_DAT_04bc1600,6);
      __dest_00 = *(char **)(lVar9 + 0x3b8);
      if (__dest_00 == "CommonCharaEditLandBed") goto LAB_01f0badc;
      iVar6 = *(int *)(lVar9 + 0x3c0);
      __src_00 = "CommonCharaEditLandBed";
      iVar11 = iVar6 + -1;
      bVar3 = SBORROW4(iVar6,0x16);
      bVar4 = iVar6 + -0x16 < 0;
      bVar5 = iVar6 == 0x16;
      iVar6 = 0x16;
    }
    else {
      local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
      local_34 = 0;
      FUN_01e5a930(0x40000000,lVar9,0xd,PTR_DAT_04bb2150,&local_60,&local_34,PTR_DAT_04bc1600,6);
      __dest_00 = *(char **)(lVar9 + 0x3b8);
      if (__dest_00 == "CommonCharaEditLand") goto LAB_01f0badc;
      iVar6 = *(int *)(lVar9 + 0x3c0);
      __src_00 = "CommonCharaEditLand";
      iVar11 = iVar6 + -1;
      bVar3 = SBORROW4(iVar6,0x13);
      bVar4 = iVar6 + -0x13 < 0;
      bVar5 = iVar6 == 0x13;
      iVar6 = 0x13;
    }
  }
  if (bVar5 || bVar4 != bVar3) {
    iVar6 = iVar11;
  }
  memcpy(__dest_00,__src_00,(long)iVar6);
  __dest_00[iVar6] = '\0';
LAB_01f0badc:
  *(undefined4 *)(lVar9 + 0x3a0) = 0;
  *(undefined1 *)(lVar9 + 0x410) = 0;
  return;
}

