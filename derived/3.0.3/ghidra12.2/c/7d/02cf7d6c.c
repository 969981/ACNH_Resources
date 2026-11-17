
void FUN_02cf7d6c(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  uVar3 = DAT_0566f160;
  puVar1 = (uint *)(param_1 + 0x927f8);
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x92800) = uVar3;
  iVar5 = FUN_0252cc58(puVar1);
  if (iVar5 == -1) {
    uVar11 = *puVar1;
    iVar5 = 2;
    *(undefined4 *)(param_1 + 0x927fc) = 2;
    puVar4 = PTR_DAT_04bb27c0;
    if (uVar11 == 0) goto LAB_02cf7e9c;
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                          ((ulong)(uVar11 >> 0x11) & 0x7ff8));
      if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar10 + 0x46) != uVar11)) {
        plVar10 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar4;
        iVar5 = (**(code **)(*plVar7 + 0x60))();
        if (iVar5 < 0x11) {
          uVar11 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02cf7f34;
          uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02cf7f34:
        uVar11 = 0;
      }
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
        uVar2 = 0;
        if ((int)lVar9 == 1) {
          uVar2 = uVar11;
        }
        if ((((uVar8 & 1) != 0) && (uVar2 != 0)) && ((int)plVar10[0xa0] == 1)) {
          *(undefined4 *)(param_1 + 0x927fc) = 3;
          iVar5 = 3;
          goto LAB_02cf7e9c;
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x927fc);
    if (iVar5 == 1) goto LAB_02cf7e98;
    if (iVar5 == 2) goto LAB_02cf7e9c;
    if (iVar5 == 3) {
      iVar5 = 3;
      goto LAB_02cf7e9c;
    }
  }
  else {
    iVar5 = FUN_02582fe0(param_1 + 0x1f8);
    iVar6 = FUN_0252cc58(param_2);
    if (iVar5 != iVar6) {
      *(undefined4 *)(param_1 + 0x927fc) = 1;
LAB_02cf7e98:
      iVar5 = 1;
      goto LAB_02cf7e9c;
    }
    *(undefined4 *)(param_1 + 0x927fc) = 0;
  }
  iVar5 = 0;
LAB_02cf7e9c:
  *(int *)(param_1 + 0x1d394) = iVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x92800);
  *(uint *)(param_1 + 0x1c4a4) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c4a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d398) = uVar3;
  if (*(int *)(param_1 + 0x927fc) - 2U < 2) {
    FUN_02cdf8d0(param_1 + 0x92808,puVar1,uVar3,1);
    return;
  }
  if (*(int *)(param_1 + 0x927fc) == 1) {
    FUN_02cdf8d0(param_1 + 0x92808,puVar1,uVar3,1);
    FUN_02cdff48(param_1 + 0x92808,0);
    return;
  }
  return;
}

