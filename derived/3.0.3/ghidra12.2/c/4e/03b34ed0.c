
void FUN_03b34ed0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  char local_c0 [128];
  
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar5 = malloc(0x120);
  }
  else {
    plVar3 = *(long **)PTR_DAT_04bd0810;
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x120,8);
  }
  FUN_00396ff0();
  *(void **)(param_1 + 0x100) = pvVar5;
  plVar3 = *(long **)(param_2 + 0x40);
  lVar11 = FUN_0037e530(param_1);
  uVar9 = *(uint *)(lVar11 + 0x14) & 3;
  if ((*(uint *)(lVar11 + 0x14) & 3) == 0) goto LAB_03b35214;
  lVar11 = FUN_0037e530(param_1);
  puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x18) + 8);
  if (((DAT_04c62fe0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c62fe0), iVar2 != 0)) {
    if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8e18 = 0;
      __cxa_guard_release(PTR_DAT_04bc8e20);
    }
    DAT_04c62fd8 = PTR_DAT_04bc8e18;
    __cxa_guard_release(&DAT_04c62fe0);
  }
  if (puVar12 == (undefined8 *)0x0) {
LAB_03b34fdc:
    if (uVar9 == 1) goto LAB_03b35214;
    lVar11 = FUN_0037e530(param_1);
    puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x18) + 8);
    if (((DAT_04c62fe0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c62fe0), iVar2 != 0)) {
      if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8e18 = 0;
        __cxa_guard_release(PTR_DAT_04bc8e20);
      }
      DAT_04c62fd8 = PTR_DAT_04bc8e18;
      __cxa_guard_release(&DAT_04c62fe0);
    }
    if (puVar12 == (undefined8 *)0x0) {
LAB_03b3503c:
      if (uVar9 == 2) goto LAB_03b35214;
      lVar11 = FUN_0037e530(param_1);
      puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x18) + 8);
      if (((DAT_04c62fe0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&DAT_04c62fe0), puVar1 = PTR_DAT_04bc8e18, iVar2 != 0)) {
        if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(PTR_DAT_04bc8e20);
        }
        DAT_04c62fd8 = puVar1;
        __cxa_guard_release(&DAT_04c62fe0);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_03b35214;
      puVar6 = (undefined8 *)(**(code **)*puVar12)(puVar12);
      if ((undefined **)puVar6 != &DAT_04c62fd8) {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while ((undefined **)puVar6 != &DAT_04c62fd8 && puVar6 != (undefined8 *)0x0);
        if (puVar6 == (undefined8 *)0x0) goto LAB_03b35214;
      }
      uVar14 = 2;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)*puVar12)(puVar12);
      if ((undefined **)puVar6 != &DAT_04c62fd8) {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while ((undefined **)puVar6 != &DAT_04c62fd8 && puVar6 != (undefined8 *)0x0);
        if (puVar6 == (undefined8 *)0x0) goto LAB_03b3503c;
      }
      uVar14 = 1;
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if ((undefined **)puVar6 != &DAT_04c62fd8) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while ((undefined **)puVar6 != &DAT_04c62fd8 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b34fdc;
    }
    uVar14 = 0;
  }
  pcVar7 = (char *)puVar12[2];
  local_c0[0] = '\0';
  if (local_c0 == pcVar7) {
    uVar13 = 0;
  }
  else {
    lVar11 = 0;
    do {
      lVar4 = lVar11;
      lVar11 = lVar4 + 1;
    } while (pcVar7[lVar4] != '\0');
    uVar9 = (uint)lVar4;
    if ((int)uVar9 < 1) {
      uVar13 = 0;
      pcVar7 = local_c0;
    }
    else {
      if (0x7e < (int)uVar9) {
        uVar9 = 0x7f;
      }
      uVar13 = (ulong)uVar9;
      memcpy(local_c0,pcVar7,uVar13);
      pcVar7 = local_c0 + uVar13;
    }
    *pcVar7 = '\0';
  }
  uVar9 = (uint)uVar13;
  uVar10 = uVar13;
  do {
    uVar10 = uVar10 - 1;
    iVar2 = (int)uVar13;
    uVar8 = iVar2 - 1;
    uVar13 = (ulong)uVar8;
    if (iVar2 < 1) {
      uVar8 = 0xffffffff;
      goto LAB_03b35148;
    }
  } while (local_c0[uVar10 & 0xffffffff] != '_');
  if ((int)uVar8 < 0x80) {
LAB_03b35148:
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    local_c0[uVar8] = '\0';
    if ((int)uVar8 < (int)uVar9) {
      uVar9 = uVar8;
    }
  }
  uVar8 = 5;
  if (0x7a < (int)uVar9) {
    uVar8 = 0x7f - uVar9;
  }
  if (0 < (int)uVar8) {
    memcpy(local_c0 + (int)uVar9,".bnvg",(ulong)uVar8);
    local_c0[(long)(int)uVar9 + (long)(int)uVar8] = '\0';
  }
  lVar11 = (**(code **)(*plVar3 + 0x50))(plVar3,0x626e7667,local_c0);
  *(undefined1 *)(param_1 + 0x348) = uVar14;
  if (lVar11 != 0) {
    uVar13 = nn::util::BinaryFileHeader::IsRelocated();
    if ((uVar13 & 1) == 0) {
      nn::util::BinaryFileHeader::GetRelocationTable();
      nn::util::RelocationTable::Relocate();
    }
    FUN_00397450(*(undefined8 *)(param_1 + 0x100),0,
                 *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),plVar3,lVar11);
    lVar11 = *(long *)(param_1 + 0x100);
    *(undefined1 **)(lVar11 + 0x68) = &LAB_03b35b50;
    *(undefined8 *)(lVar11 + 0x70) = 0;
  }
LAB_03b35214:
  *(long *)(param_1 + 0x140) = param_1 + 0x188;
  *(long *)(param_1 + 0x180) = param_1 + 0x268;
  return;
}

