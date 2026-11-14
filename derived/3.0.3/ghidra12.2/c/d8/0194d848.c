
undefined4 FUN_0194d848(uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  char cVar10;
  long *plVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    if ((((DAT_052cadb8 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(DAT_052cadb8 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != DAT_052cadb8))
    {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if (*(uint *)(lVar7 + 0x5e8) < 5) {
          uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0x2a];
      if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b78);
      }
      uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb4b70);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar2;
      }
      puVar8 = (undefined4 *)PTR_DAT_04bb3238;
      if ((((uVar6 & 1) == 0) || (uVar1 == 0)) || (lVar7 = plVar11[0x54], lVar7 == 0))
      goto LAB_0194d9e0;
      lVar9 = *(long *)(lVar7 + 0x290);
      cVar10 = '\0';
      if (*(long *)(lVar9 + 0x28) == 0) {
LAB_0194d990:
        if (cVar10 != param_2) goto LAB_0194d9d8;
      }
      else {
        if (param_1 < *(uint *)(lVar9 + 0x20)) {
          cVar10 = *(char *)(*(long *)(lVar9 + 0x28) + (long)(int)param_1);
          goto LAB_0194d990;
        }
        if (param_2 != '\0') goto LAB_0194d9d8;
      }
      if (((int)param_1 < 0) || (*(int *)(lVar7 + 0x288) < 1)) goto LAB_0194d9e0;
      if ((int)param_1 < *(int *)(lVar9 + 0x10)) {
        puVar8 = (undefined4 *)(*(long *)(lVar9 + 0x18) + (ulong)param_1 * 4);
        goto LAB_0194d9e0;
      }
    }
  }
LAB_0194d9d8:
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
LAB_0194d9e0:
  return *puVar8;
}

