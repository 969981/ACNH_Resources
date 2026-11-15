
void FUN_024a6544(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  long *plVar11;
  undefined *local_50;
  char *local_48;
  long local_40;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "CommonPaperFan";
  FUN_017081d0(puVar6,&local_50,6,1,0);
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar10 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar10 = (short *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_38 = *psVar10;
  local_36 = (undefined1)psVar10[1];
  local_35 = *(undefined1 *)((long)psVar10 + 3);
  local_34 = *(undefined4 *)(psVar10 + 2);
  local_48 = *(char **)psVar10;
  if (local_38 == -2) {
    return;
  }
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_40 = 0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_38);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
        local_40 = lVar8;
      }
    }
  }
  iVar4 = FUN_01ad78cc(&local_50);
  puVar2 = PTR_DAT_04bb27c0;
  if (iVar4 != 0x1b) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar3 = *(uint *)(lVar9 + ((ulong)*(uint *)(lVar9 + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar3 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar3)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x024a6788;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x024a6788;
    }
  }
  uVar3 = 0;
joined_r0x024a6788:
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    uVar1 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bbe2a8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe2a8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe2a0 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2a8);
    }
    uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe2a0);
    if (((((uVar5 & uVar3) == 1) && ((int)lVar8 == 1)) && ((uVar1 >> 4 & 1) != 0)) &&
       ((long *)plVar11[0x75] != (long *)0x0)) {
      (**(code **)(*(long *)plVar11[0x75] + 0x108))();
    }
  }
  return;
}

