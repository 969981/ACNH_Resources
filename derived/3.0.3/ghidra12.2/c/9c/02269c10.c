
bool FUN_02269c10(undefined8 param_1,int *param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  
  uVar4 = *(uint *)PTR_DAT_04bb3238;
  iVar5 = *param_2;
  if (iVar5 == 2) {
LAB_02269c48:
    uVar4 = FUN_020e7d28(*(undefined8 *)PTR_DAT_04bb4128,param_1);
  }
  else if (iVar5 == 1) {
    uVar4 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,param_1);
  }
  else if (iVar5 == 0) goto LAB_02269c48;
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  uVar8 = 0;
  if (lVar9 != 0) {
    if ((((uVar4 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8)
         , plVar10 == (long *)0x0)) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar10 + 0x46) != uVar4)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar4 = 1;
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar8) goto LAB_02269d28;
        uVar4 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
        uVar8 = (uint)(0x101000100 >> (((ulong)uVar8 & 7) << 3)) & 1;
      }
    }
    else {
LAB_02269d28:
      uVar4 = 0;
      uVar8 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      bVar3 = (int)lVar9 == 1;
      if (((*PTR_DAT_04bb4160 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4160);
      }
      uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4158);
      if ((uVar7 & 1) != 0) {
        uVar4 = uVar4 ^ 1;
        if ((int)lVar9 != 1) {
          uVar4 = 1;
        }
        if (uVar4 == 0) {
          *(uint *)(plVar10 + 0x83) = *(uint *)(plVar10 + 0x83) | 0x80;
          return true;
        }
        return false;
      }
      uVar8 = 0;
      goto LAB_02269dac;
    }
  }
  bVar3 = false;
LAB_02269dac:
  bVar1 = false;
  if (uVar8 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

