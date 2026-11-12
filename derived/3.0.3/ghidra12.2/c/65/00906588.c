
void FUN_00906588(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x15c) != 0x45) {
    return;
  }
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x2c0) != 1) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0))
  goto LAB_009066e4;
  uVar8 = *(uint *)PTR_DAT_04bb32f8;
  if ((uVar8 == 0) ||
     (((plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0 ||
       ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_0090666c;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0090666c:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    uVar1 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    if ((((int)lVar6 == 1) && ((uVar4 & uVar8) != 0)) &&
       (((uVar1 >> 4 & 1) != 0 && (FUN_008ffc50(plVar7), *(char *)(param_1 + 0x2cd) != '\0')))) {
      FUN_02a55844(&DAT_04cef2c8,0);
    }
  }
LAB_009066e4:
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  return;
}

