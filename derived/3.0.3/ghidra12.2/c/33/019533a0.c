
void FUN_019533a0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined **local_78;
  byte *pbStack_70;
  byte local_54 [4];
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x01953470;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01953470;
    }
  }
  uVar8 = 0;
joined_r0x01953470:
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[0x2a];
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb4b70);
    uVar10 = 0;
    if ((int)lVar5 == 1) {
      uVar10 = uVar8;
    }
    if (((uVar4 & 1) != 0) && (uVar10 != 0)) {
      pbStack_70 = local_54;
      local_78 = &PTR_FUN_049e11e8;
      lVar5 = plVar7[0x54];
      local_54[0] = param_2 & 1;
      if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x288), iVar2 != 0)) {
        lVar5 = *(long *)(lVar5 + 0x290);
        iVar9 = 0;
        do {
          lVar6 = lVar5 + (long)iVar9 * 0x30;
          uVar8 = *(uint *)(lVar6 + 0x10);
          if (uVar8 != 0) {
            lVar6 = *(long *)(lVar6 + 0x18);
            uVar10 = 0;
            do {
              (*(code *)*local_78)(&local_78,lVar6 + ((long)((ulong)uVar10 << 0x20) >> 0x1e));
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
      *(byte *)((long)plVar7 + 0x3f1) = local_54[0];
    }
  }
  return;
}

