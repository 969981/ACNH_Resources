
void FUN_01ef6080(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_64;
  undefined **local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_01ef61cc;
  uVar11 = *(uint *)(param_1 + 0xaf34);
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01ef614c;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01ef614c:
    uVar11 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      if ((param_2 & 1) != 0) {
        return;
      }
      lVar6 = plVar9[0xd];
      if (lVar6 == 0) {
        return;
      }
      local_64 = *(undefined4 *)(lVar6 + 0x2b4);
      FUN_01e39520(*(undefined8 *)(param_1 + 8),lVar6 + 0x278,&local_64,0);
      return;
    }
  }
LAB_01ef61cc:
  puVar8 = (uint *)PTR_DAT_04bb3238;
  local_58 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  local_60 = &PTR_FUN_04a626c8;
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar3 != 0) {
    puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    lVar6 = (long)iVar3 << 3;
    do {
      puVar7 = (uint *)*puVar10;
      uVar5 = (*(code *)*local_60)(&local_60,puVar7);
      if ((uVar5 & 1) != 0) {
        puVar8 = puVar7;
        break;
      }
      puVar10 = puVar10 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0xaf34) = *puVar8;
  return;
}

