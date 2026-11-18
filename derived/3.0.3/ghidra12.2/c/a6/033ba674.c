
void FUN_033ba674(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  puVar5 = PTR_DAT_04bb27c0;
  uVar12 = *(uint *)(param_1 + 0x6c);
  if (uVar12 == 0) goto LAB_033ba7b4;
  if (*(int *)(param_1 + 0x70) - 5U < 4) {
    if (*(long *)PTR_DAT_04bb5008 != 0) {
      FUN_02b4073c(*(long *)PTR_DAT_04bb5008 + 0x2680);
    }
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb27c0;
    if (lVar11 != 0) {
      plVar9 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                         ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar9 + 0x46) != uVar12)) {
        plVar9 = (long *)0x0;
      }
      if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar5;
        iVar6 = (**(code **)(*plVar8 + 0x60))();
        if (iVar6 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_033ba75c;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_033ba75c:
        uVar12 = 0;
      }
      if (plVar9 != (long *)0x0) {
        if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2e60);
        }
        uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb2e58);
        if ((uVar12 & uVar7) == 1) {
          FUN_006fb3d0(plVar9);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
LAB_033ba7b4:
  if (((*(long *)(param_1 + 0x60) != 0) &&
      (plVar9 = *(long **)(*(long *)(param_1 + 0x60) + 0x1b0), plVar9 != (long *)0x0)) &&
     (uVar10 = (**(code **)(*plVar9 + 0x50))(), (uVar10 & 1) == 0)) {
    lVar11 = *(long *)(param_1 + 0x60);
    plVar9 = *(long **)(lVar11 + 0x1b0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x50))();
      plVar9 = *(long **)(lVar11 + 0x1b0);
      (**(code **)(*plVar9 + 0x20))(plVar9,0);
    }
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar4 = *(undefined2 *)puVar5;
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8c) = uVar4;
  *(undefined1 *)(param_1 + 0x8e) = uVar2;
  *(undefined1 *)(param_1 + 0x8f) = uVar3;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined2 *)(param_1 + 0x94) = uVar4;
  *(undefined1 *)(param_1 + 0x96) = uVar2;
  *(undefined1 *)(param_1 + 0x97) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return;
}

