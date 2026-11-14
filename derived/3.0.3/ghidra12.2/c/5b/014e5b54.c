
byte FUN_014e5b54(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  lVar3 = DAT_051f0338;
  puVar2 = PTR_DAT_04bb27c0;
  bVar7 = 0;
  if (DAT_051f0338 == 0) goto LAB_014e5ca4;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  bVar7 = 0;
  if (lVar8 == 0) goto LAB_014e5ca4;
  uVar10 = *(uint *)(DAT_051f0338 + 8);
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014e5c20;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014e5c20:
    uVar10 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbcf28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbcf28), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbcf20 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcf28);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbcf20);
    bVar7 = 0;
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) == 0) || (uVar1 == 0)) goto LAB_014e5ca4;
    if (param_1 < 0x10) {
      bVar7 = *(byte *)((long)plVar9 + (ulong)(param_1 >> 3) + 0xa2c) >> (ulong)(param_1 & 7) & 1;
      goto LAB_014e5ca4;
    }
  }
  bVar7 = 0;
LAB_014e5ca4:
  return lVar3 != 0 & bVar7;
}

