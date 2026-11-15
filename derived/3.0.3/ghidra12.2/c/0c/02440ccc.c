
void FUN_02440ccc(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  long *local_40;
  char local_38;
  char local_36;
  undefined4 local_18;
  undefined4 uStack_14;
  
  plVar11 = (long *)PTR_DAT_04bb4718;
  puVar2 = PTR_DAT_04bb39b0;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    uVar6 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02440d58;
LAB_02440dc4:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_02440dd8;
    puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar6 * 4 + 0xde8);
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    uVar6 = (ulong)*pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar9 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar6 = (ulong)bVar9, bVar9 < 8))))
    goto LAB_02440dc4;
LAB_02440d58:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar10 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar10 + 0x471);
        }
      }
      uVar6 = (ulong)*pbVar8;
      if (*pbVar8 < 8) goto LAB_02440dc4;
    }
    uVar6 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02440dc4;
LAB_02440dd8:
    puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  }
  uStack_14 = *puVar7;
  local_18 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_40,&uStack_14,&local_18,0);
  plVar5 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_36 = '\0';
    }
  }
  if (local_40 == (long *)0x0) {
    return;
  }
  if (local_38 == '\0') {
    return;
  }
  if (local_36 == '\0') {
    return;
  }
  if ((*(byte *)((long)local_40 + 0x17cf) >> 4 & 1) == 0) {
    return;
  }
  plVar5 = (long *)local_40[0xc];
  if (plVar5 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      plVar11 = (long *)PTR_DAT_04bb4718;
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  uVar6 = (**(code **)(*plVar5 + 0x100))();
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)puVar2;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02440ed8:
    if (7 < *pbVar8) {
LAB_02440ee4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar10 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar10 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar10 + 0x471);
          }
        }
        bVar9 = *pbVar8;
        bVar3 = 7 < bVar9;
        if (bVar3) {
          bVar9 = 0xff;
        }
        local_18 = CONCAT31(local_18._1_3_,bVar9);
        if (!bVar3) goto LAB_02440f64;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*plVar11 != 0)) {
        pbVar8 = (byte *)(*plVar11 + 0x11a5);
        goto LAB_02440ed8;
      }
      goto LAB_02440ee4;
    }
  }
  bVar9 = *pbVar8;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_18 = CONCAT31(local_18._1_3_,bVar9);
LAB_02440f64:
  iVar4 = FUN_00a74b78(&local_18);
  if (iVar4 == 0x13) {
    if (DAT_04d6e24c == 2) {
      FUN_0243e27c(param_1,*(long *)(param_1 + 0x68) + 0x278);
    }
    else {
      FUN_0243dc40(param_1);
    }
  }
  return;
}

