
undefined4 FUN_022280a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar2 = *(uint *)(param_1 + 0x29c);
  if ((uVar2 != 0) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar2 >> 0x11) & 0x7ff8))
    ;
    if ((plVar9 == (long *)0x0) ||
       (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar2)))) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if (*(uint *)(lVar7 + 0x5e8) < 5) {
          uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[0x2a];
      if (((*PTR_DAT_04bc2cc0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc2cc0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc2cb8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2cc0);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc2cb8);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar2;
      }
      puVar8 = (undefined4 *)PTR_DAT_04bb3238;
      if (((uVar6 & 1) == 0) || (uVar1 == 0)) goto LAB_022281d0;
      if (plVar9[0x4f] != 0) {
        puVar8 = (undefined4 *)(*(long *)(plVar9[0x4f] + 0x278) + 0x5c);
        goto LAB_022281d0;
      }
    }
  }
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
LAB_022281d0:
  return *puVar8;
}

