
void FUN_01888920(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar10 = *(uint *)(param_1 + 0x4f4);
  if (uVar10 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  bVar3 = 0;
  if (lVar7 == 0) goto LAB_01888a60;
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_018889d8;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_018889d8:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    bVar3 = 0;
  }
  else {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbe9d8);
    bVar3 = 0;
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      uVar8 = *(undefined8 *)(plVar9[0xd] + 0x278);
      *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(plVar9[0xd] + 0x280);
      *(undefined8 *)(param_1 + 0x4cc) = uVar8;
      *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)((long)plVar9 + 0x2cc);
      bVar3 = FUN_02280398(plVar9);
      bVar3 = bVar3 & 1;
    }
  }
LAB_01888a60:
  *(byte *)(param_1 + 0x4f8) = bVar3;
  return;
}

