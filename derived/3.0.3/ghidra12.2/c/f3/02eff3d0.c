
/* WARNING: Removing unreachable block (ram,0x02eff42c) */
/* WARNING: Removing unreachable block (ram,0x02eff480) */

void FUN_02eff3d0(long param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  uint uVar9;
  byte local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  
  bVar7 = *param_2;
  *(undefined4 *)(param_1 + 0x58) = 10;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x54) = bVar7;
  puVar1 = PTR_DAT_04bb2230;
  local_38 = 10;
  lVar6 = *(long *)PTR_DAT_04bb2230;
  lVar5 = *(long *)(lVar6 + 0x90);
  if (lVar5 != 0) {
    bVar7 = *param_2;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(lVar5 + 0x1f8) = bVar7;
    *(undefined1 *)(lVar5 + 0x165) = 1;
    if ((6 < *(uint *)(lVar5 + 0xa8) || (1 << (ulong)(*(uint *)(lVar5 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar5 + 0x98) != 0)) {
      FUN_0386b090();
      lVar6 = *(long *)puVar1;
    }
  }
  local_34 = 0xb;
  lVar5 = *(long *)(lVar6 + 0x98);
  if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x98), lVar6 != 0)) {
    if (*(uint *)(lVar5 + 0xa8) < 7 && (1 << (ulong)(*(uint *)(lVar5 + 0xa8) & 0x1f) & 0x58U) != 0)
    {
      FUN_0386b2b0(lVar6,lVar5);
    }
    *(undefined4 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 1;
    FUN_0386b170(lVar6,lVar5);
  }
  if (*(int *)(param_1 + 0x150) == 3) {
    FUN_03ebb160(param_1 + 0x148,4);
  }
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) goto LAB_02eff60c;
  uVar9 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar5 + 0x288) == 1) || (*(int *)(lVar5 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_02eff59c;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02eff59c:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    if ((uVar9 & uVar3) == 1) {
      local_3c[0] = *(byte *)(param_1 + 0x54);
      if (7 < local_3c[0]) {
        local_3c[0] = 0xff;
      }
      FUN_008fcd20(plVar8,local_3c,0);
    }
  }
LAB_02eff60c:
  *(undefined4 *)(param_1 + 0x50) = 4;
  return;
}

