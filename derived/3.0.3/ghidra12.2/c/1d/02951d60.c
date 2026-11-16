
undefined8 FUN_02951d60(long param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  
  puVar7 = PTR_DAT_04bb27c0;
  if (7 < (ulong)*param_2) goto LAB_02951f24;
  lVar1 = param_1 + 0x148;
  uVar15 = *(uint *)(lVar1 + (ulong)*param_2 * 0x14);
  if ((uVar15 == 0) || (lVar13 = *(long *)PTR_DAT_04bb27c0, lVar13 == 0)) goto LAB_02951f24;
  plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + ((ulong)(uVar15 >> 0x11) & 0x7ff8)
                      );
  if ((plVar14 == (long *)0x0) ||
     (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar15)))) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_02951e38;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02951e38:
    uVar15 = 0;
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0x2a];
    if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc3aa8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3ab0);
    }
    uVar11 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bc3aa8);
    uVar2 = 0;
    if ((int)lVar13 == 1) {
      uVar2 = uVar15;
    }
    if (((uVar11 & 1) != 0) && (uVar2 != 0)) {
      uVar12 = FUN_02946824(plVar14,param_2 + 4);
      if ((int)uVar12 == 1) {
        bVar6 = *param_2;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        lVar13 = lVar1 + (ulong)(uint)(int)(char)bVar6 * 0x14;
        if (bVar8) {
          lVar13 = lVar1;
        }
        *(undefined1 *)(lVar13 + 8) = 0;
        bVar6 = *param_2;
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        lVar13 = lVar1 + (ulong)(uint)(int)(char)bVar6 * 0x14;
        if (bVar8) {
          lVar13 = lVar1;
        }
        *(char *)(lVar13 + 9) = (char)uVar12;
        bVar6 = *param_2;
        lVar13 = plVar14[0x77];
        bVar8 = 7 < bVar6;
        if (bVar8) {
          bVar6 = 0xff;
        }
        lVar3 = lVar1 + (ulong)(uint)(int)(char)bVar6 * 0x14;
        if (bVar8) {
          lVar3 = lVar1;
        }
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)((long)plVar14 + 0x3b4);
        *(int *)(lVar3 + 0x10) = (int)lVar13;
        return uVar12;
      }
      uVar12 = FUN_02946824(plVar14,param_2 + 4);
      if ((int)uVar12 == 0) {
        return uVar12;
      }
    }
  }
LAB_02951f24:
  bVar6 = *param_2;
  bVar8 = 7 < bVar6;
  if (bVar8) {
    bVar6 = 0xff;
  }
  puVar4 = (undefined4 *)(param_1 + 0x148) + (ulong)(uint)(int)(char)bVar6 * 5;
  if (bVar8) {
    puVar4 = (undefined4 *)(param_1 + 0x148);
  }
  *puVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  puVar4[1] = 0xffffffff;
  puVar7 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar4 + 2) = 0;
  uVar5 = *(undefined4 *)(puVar7 + 4);
  puVar4[3] = *(undefined4 *)puVar7;
  puVar4[4] = uVar5;
  return 2;
}

