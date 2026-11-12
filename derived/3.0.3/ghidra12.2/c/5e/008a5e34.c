
void FUN_008a5e34(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_04bb3238;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_008a5ea8:
    if (*pbVar11 < 8) goto LAB_008a5f14;
LAB_008a5eb4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008a5f0c:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_008a5f14;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar12 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar11 = (byte *)(lVar12 + 0x471);
      }
    }
    uVar10 = (uint)*pbVar11;
    if (7 < *pbVar11) goto LAB_008a5f0c;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008a5ea8;
      }
      goto LAB_008a5eb4;
    }
LAB_008a5f14:
    uVar10 = (uint)*pbVar11;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
  }
  if (*(int *)(lVar9 + 0x15c) == 0) {
    if ((*(byte *)(param_1 + 0x88) >> (ulong)(uVar10 & 0x1f) & 1) == 0) {
      return;
    }
  }
  else {
    uVar10 = (uint)*(byte *)(param_1 + 0x88) - (*(byte *)(param_1 + 0x88) >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    if ((uVar10 + (uVar10 >> 0x10) & 0x3f) == 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  uVar3 = *(undefined4 *)puVar5;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  FUN_02291ae8(*(undefined8 *)PTR_DAT_04bb4848,1);
  puVar5 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) goto LAB_008a60ac;
  uVar10 = *(uint *)PTR_DAT_04bb5858;
  if ((((uVar10 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar10)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_008a604c;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008a604c:
    uVar10 = 0;
  }
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0x2a];
    if (((*PTR_DAT_04bb5848 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5848), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb5840 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5848);
    }
    uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5840);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      FUN_0222b7d0(plVar13,1);
    }
  }
LAB_008a60ac:
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  return;
}

