
void FUN_0295304c(long param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  
  puVar6 = PTR_DAT_04bb27c0;
  if (7 < (ulong)*param_2) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x148);
  uVar13 = puVar1[(ulong)*param_2 * 5];
  if ((uVar13 == 0) || (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 == 0)) goto LAB_0295317c;
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if ((plVar12 == (long *)0x0) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar6;
    iVar8 = (**(code **)(*plVar9 + 0x60))();
    if (iVar8 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_02953120;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02953120:
    uVar13 = 0;
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bc3aa8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3ab0);
    }
    uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc3aa8);
    uVar2 = 0;
    if ((int)lVar11 == 1) {
      uVar2 = uVar13;
    }
    if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
      FUN_0294694c(plVar12);
    }
  }
LAB_0295317c:
  puVar6 = PTR_DAT_04bb3238;
  bVar5 = *param_2;
  bVar7 = 7 < bVar5;
  if (bVar7) {
    bVar5 = 0xff;
  }
  puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 5;
  if (bVar7) {
    puVar3 = puVar1;
  }
  *(undefined2 *)(puVar3 + 2) = 0;
  *puVar3 = *(undefined4 *)puVar6;
  puVar3[1] = 0xffffffff;
  uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar3[3] = *(undefined4 *)PTR_DAT_04bb37e0;
  puVar3[4] = uVar4;
  return;
}

