
void FUN_0209ce98(long param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  
  puVar8 = PTR_DAT_04bb27c0;
  if (1 < *param_2 - 3U) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar11 = *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3b8) + 0x7800);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar8;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0209cf74;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0209cf74;
    }
  }
  uVar11 = 0;
joined_r0x0209cf74:
  if (plVar10 != (long *)0x0) {
    lVar6 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar11;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) &&
       ((lVar6 = *(long *)(*(long *)(param_1 + 8) + 8), lVar6 != 0 &&
        (uVar11 = *(uint *)(lVar6 + 0x508), uVar11 != 0xffffffff)))) {
      puVar8 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
      if (9 < uVar11) {
        puVar8 = &DAT_053fe348;
      }
      uVar11 = *(uint *)((long)plVar10 + 0x50c);
      if (uVar11 == 0xffffffff) {
        puVar7 = (undefined8 *)(puVar8 + 0x6ea);
        puVar9 = puVar7 + *(uint *)(plVar10 + 0xa1);
        bVar2 = 9 < *(uint *)(plVar10 + 0xa1);
      }
      else {
        puVar7 = (undefined8 *)(puVar8 + 0x73a);
        bVar2 = 0x10 < uVar11;
        puVar9 = puVar7 + uVar11;
      }
      if (bVar2) {
        puVar9 = puVar7;
      }
      *puVar9 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
  }
  return;
}

