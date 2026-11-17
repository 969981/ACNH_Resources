
void FUN_02e69b80(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 0x920a0) = 0;
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar9 = 0;
    if (DAT_00000010 != '\0') goto LAB_02e69bc0;
LAB_02e69be8:
    bVar3 = 1;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    if (*(char *)(lVar9 + 0x10) == '\0') goto LAB_02e69be8;
LAB_02e69bc0:
    bVar3 = (**(code **)(*(long *)(lVar9 + 8) + 0x18))((long *)(lVar9 + 8));
    *(undefined1 *)(lVar9 + 0x10) = 0;
  }
  uVar8 = *(uint *)(lVar9 + 0x18);
  *(byte *)(lVar9 + 0x11) = bVar3 & 1;
  *(uint *)(param_1 + 0x92098) = uVar8;
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar8 = 0;
      goto joined_r0x02e69ca0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar8 = 5U >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02e69ca0;
    }
  }
  uVar8 = 1;
joined_r0x02e69ca0:
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0x2a];
    if (((*PTR_DAT_04bb66a8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb66a8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb66a0 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb66a8);
    }
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb66a0);
    if ((int)lVar9 != 1) {
      uVar8 = 1;
    }
    if (((uVar6 & 1) != 0) && (uVar8 == 0)) {
      uVar1 = *(undefined4 *)((long)plVar7 + 0x174);
      *(undefined4 *)(param_1 + 0x9209c) = uVar1;
      *(undefined4 *)(param_1 + 0x1c4bc) = *(undefined4 *)(param_1 + 0x92098);
      *(undefined4 *)(param_1 + 0x91ff0) = uVar1;
    }
  }
  return;
}

