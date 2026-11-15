
void FUN_01eba670(long param_1)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined *__dest;
  
  if (**(char **)(*(long *)(param_1 + 8) + 0x4b0) == '\0') {
    __dest = *(undefined **)(param_1 + 0x8208);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar4 = PTR_DAT_04c4b988;
    if (__dest != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar8 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar8] == '\0') goto LAB_01eba808;
        if (PTR_DAT_04c4b988[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01eba808;
        }
        if (PTR_DAT_04c4b988[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01eba808;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01eba808:
      iVar5 = (int)lVar8;
      if (*(int *)(param_1 + 0x8210) <= (int)lVar8) {
        iVar5 = *(int *)(param_1 + 0x8210) + -1;
      }
      memcpy(__dest,puVar4,(long)iVar5);
      __dest[iVar5] = 0;
    }
    FUN_01ea6b58(param_1,0);
    return;
  }
  if (*(char *)(param_1 + 0xaf81) != '\0') {
    *(undefined1 *)(param_1 + 0xaf80) = 1;
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x100000000000;
    *(undefined4 *)(*(long *)(DAT_05694df8 + 8) + 0x350) = 2;
    lVar8 = DAT_053e0208;
    if (*(int *)(DAT_053e0208 + 0x2e68) < *(int *)(DAT_053e0208 + 0x2e80)) {
      puVar9 = *(undefined8 **)(DAT_053e0208 + 0x2e70);
      plVar11 = (long *)(DAT_053e0208 + 0x2e58);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)(DAT_053e0208 + 0x2e70) = *puVar9;
      }
      puVar9[5] = 0;
      puVar9[2] = 0x1eba84c;
      puVar9[3] = 0;
      plVar6 = puVar9 + 4;
      *plVar6 = 0;
      *puVar9 = &PTR_LAB_04a60ab0;
      puVar9[1] = param_1;
      lVar10 = *plVar11;
      *plVar11 = (long)plVar6;
      puVar9[5] = plVar11;
      *plVar6 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar6;
      }
      *(int *)(lVar8 + 0x2e68) = *(int *)(lVar8 + 0x2e68) + 1;
    }
    return;
  }
  *(undefined8 *)(param_1 + 0x7cf8) = 0x100000001;
  *(undefined4 *)(param_1 + 32000) = 1;
  FUN_01ea60c0(param_1,PTR_DAT_04bb32e0);
  puVar4 = PTR_DAT_04bb27c0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 5 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x01eba990;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01eba990;
    }
  }
  uVar12 = 0;
joined_r0x01eba990:
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3928);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar12;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      FUN_02047720(plVar11);
      return;
    }
  }
  return;
}

