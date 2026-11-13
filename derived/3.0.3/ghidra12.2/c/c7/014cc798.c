
void FUN_014cc798(void)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  byte local_14 [4];
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014cc854;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014cc854:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar8 = plVar10[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar11;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  FUN_008fe1e0(plVar10);
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_014cc910:
    if (7 < *pbVar9) {
LAB_014cc91c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar8 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar9 = (byte *)(lVar8 + 0x471);
          }
        }
        local_14[0] = *pbVar9;
        if (local_14[0] < 8) goto LAB_014cc99c;
      }
      pbVar9 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_014cc910;
      }
      goto LAB_014cc91c;
    }
  }
  local_14[0] = *pbVar9;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_014cc99c:
  FUN_0254d938(local_14,0);
  return;
}

