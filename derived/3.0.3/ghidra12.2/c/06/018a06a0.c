
bool FUN_018a06a0(long param_1,undefined8 *param_2,byte *param_3)

{
  bool bVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  uVar9 = 0;
  if (lVar10 != 0) {
    bVar3 = *param_3;
    bVar5 = 7 < bVar3;
    if (bVar5) {
      bVar3 = 0xff;
    }
    puVar2 = (uint *)(param_1 + 0x74c) + ((long)(char)bVar3 & 0xffffffff);
    if (bVar5) {
      puVar2 = (uint *)(param_1 + 0x74c);
    }
    uVar9 = *puVar2;
    if ((((uVar9 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar9)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar4;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar13 = 1;
        uVar9 = 1;
      }
      else {
        uVar9 = *(uint *)(lVar10 + 0x5e8);
        if (4 < uVar9) goto LAB_018a079c;
        uVar13 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
        uVar9 = (uint)(0x101000100 >> (((ulong)uVar9 & 7) << 3)) & 1;
      }
    }
    else {
LAB_018a079c:
      uVar13 = 0;
      uVar9 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0x2a];
      bVar5 = (int)lVar10 == 1;
      if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3ff0);
      }
      uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fe8);
      if ((uVar8 & 1) != 0) {
        uVar13 = uVar13 ^ 1;
        if ((int)lVar10 != 1) {
          uVar13 = 1;
        }
        if (uVar13 == 0) {
          uVar11 = *(undefined8 *)(plVar12[0xd] + 0x278);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(plVar12[0xd] + 0x280);
          *param_2 = uVar11;
          return true;
        }
        return false;
      }
      uVar9 = 0;
      goto LAB_018a0828;
    }
  }
  bVar5 = false;
LAB_018a0828:
  bVar1 = false;
  if (uVar9 != 0) {
    bVar1 = bVar5;
  }
  return bVar1;
}

