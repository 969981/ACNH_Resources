
undefined8 FUN_024f8bbc(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (((ulong)*param_1 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar9 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar9 = (uint *)PTR_DAT_04bb3238;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  uVar12 = *puVar9;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    pbVar2 = PTR_DAT_04bb3778;
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x024f8ca8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x024f8ca8;
    }
  }
  uVar12 = 0;
  pbVar2 = PTR_DAT_04bb3778;
joined_r0x024f8ca8:
  PTR_DAT_04bb3778 = pbVar2;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar2), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    puVar3 = PTR_DAT_04bb3770;
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar12;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
        *(undefined **)puVar3 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
      if ((uVar6 & 1) != 0) {
        puVar11 = (undefined8 *)plVar10[0xc];
        if (puVar11 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            puVar11 = &DAT_05240280;
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar11 = &DAT_05240280;
          }
        }
        if ((*(uint *)((long)puVar11 + 0x15f4) >> 4 & 1) == 0) {
          uVar7 = FUN_023266fc(plVar10,0);
          return uVar7;
        }
      }
    }
  }
  return 0;
}

