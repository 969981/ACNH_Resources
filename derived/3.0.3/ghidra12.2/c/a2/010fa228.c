
void FUN_010fa228(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(byte *)(param_1 + 0x150) & 3) != 1) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 8);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x010fa2f8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x010fa2f8;
    }
  }
  uVar9 = 0;
joined_r0x010fa2f8:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    puVar2 = PTR_DAT_04bb3968;
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      lVar6 = plVar8[0x77];
      lVar10 = *(long *)(param_1 + 0x18);
      local_34 = *(undefined4 *)(*(long *)(lVar6 + 8) + 0x230);
      uVar5 = FUN_020afafc(*(undefined8 *)PTR_DAT_04bb3968,&local_34);
      if ((uVar5 & 1) == 0) {
        bVar7 = *(byte *)(lVar10 + 0xc0);
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(lVar6 + 0x7d68) = bVar7;
        FUN_01ea6b58(lVar6,1);
        local_38 = *(undefined4 *)(*(long *)(lVar6 + 8) + 0x230);
        FUN_020af84c(*(undefined8 *)puVar2,&local_38);
      }
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 2;
      lVar6 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar6 + 0x2b8) = 0;
      *(undefined8 *)(lVar6 + 0x2b0) = 0;
      *(undefined1 *)(lVar6 + 0x2c0) = 0xff;
      plVar8 = *(long **)(param_1 + 0x10);
      lVar6 = **(long **)(param_1 + 0x28);
      if (lVar6 != 0) {
        lVar10 = *(long *)(lVar6 + 0x10);
        if (lVar10 == 0) {
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar10 = **(long **)(lVar6 + 0x20);
          }
        }
        FUN_01bf6fc0(lVar10 + 200,plVar8[0x52]);
        plVar8 = *(long **)(param_1 + 0x10);
      }
      (**(code **)(*plVar8 + 0xf8))();
    }
  }
  return;
}

