
void FUN_0368db20(undefined4 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar6 = 0;
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x278) <= (int)param_3)) goto LAB_0368dc6c;
  uVar1 = *(uint *)(*(long *)(*(long *)(param_2 + 0x280) + (ulong)param_3 * 8) + 0x40);
  if (uVar1 == 0) {
    uVar6 = 0;
    goto LAB_0368dc6c;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
LAB_0368dbf0:
    puVar8 = (undefined4 *)PTR_DAT_04bb2ce8;
  }
  else {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar1 >> 0x11) & 0x7ff8))
    ;
    if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar9 + 0x46) != uVar1)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
        if (*(uint *)(lVar7 + 0x5e8) < 5) {
          uVar1 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
    if (plVar9 == (long *)0x0) goto LAB_0368dbf0;
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3740);
    puVar8 = (undefined4 *)PTR_DAT_04bb2ce8;
    if (((uVar1 & uVar4) == 1) && (plVar9[0xd] != 0)) {
      puVar8 = (undefined4 *)(plVar9[0xd] + 0x2b4);
    }
  }
  uVar6 = *puVar8;
LAB_0368dc6c:
  *param_1 = uVar6;
  return;
}

