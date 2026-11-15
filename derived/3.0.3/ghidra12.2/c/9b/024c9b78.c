
void FUN_024c9b78(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  float local_4c;
  float fStack_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_4c = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) {
      local_4c = 1.4013e-44;
      plVar14 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar14 = *(long **)(param_1 + 0x4c8);
      }
      lVar10 = (**(code **)(*plVar14 + 0x148))();
      iVar13 = *(int *)(lVar10 + 4);
      iVar8 = -0x80000000;
      if (-0x7fa4fa51 < iVar13) {
        iVar12 = (int)((float)(-0x80000000 - iVar13) * 0.2);
        iVar8 = 0x5b05b0;
        if (iVar12 < 1) {
          iVar8 = -0x15555560;
        }
        iVar1 = 0x15555560;
        if (iVar12 < 1) {
          iVar1 = -0x5b05b0;
        }
        iVar2 = iVar12;
        if (iVar1 <= iVar12) {
          iVar2 = iVar1;
        }
        if (iVar8 <= iVar12) {
          iVar8 = iVar2;
        }
        iVar8 = iVar8 + iVar13;
      }
      *(int *)(lVar10 + 4) = iVar8;
    }
  }
  else {
    fStack_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_4c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_4c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      iVar13 = 0x5b05b0;
      plVar14 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar14 = *(long **)(param_1 + 0x4c8);
      }
      lVar10 = (**(code **)(*plVar14 + 0x148))();
      iVar12 = iVar8 - *(int *)(lVar10 + 4);
      if (0xb60b5e < iVar12 + 0x5b05afU) {
        iVar12 = (int)((float)iVar12 * 0.1666667);
        iVar8 = 0x10000000;
        if (iVar12 < 1) {
          iVar13 = -0x10000000;
          iVar8 = -0x5b05b0;
        }
        iVar1 = iVar12;
        if (iVar8 <= iVar12) {
          iVar1 = iVar8;
        }
        if (iVar13 <= iVar12) {
          iVar13 = iVar1;
        }
        iVar8 = iVar13 + *(int *)(lVar10 + 4);
      }
      *(int *)(lVar10 + 4) = iVar8;
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar7 = FUN_024c9820(param_1);
  puVar5 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  bVar6 = false;
  if (lVar10 == 0) goto LAB_024c9f24;
  if ((((uVar7 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8),
       plVar14 == (long *)0x0)) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar14 + 0x46) != uVar7)) {
    plVar14 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar11 + 0x60))();
    if (iVar8 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_024c9eac;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024c9eac:
    uVar7 = 0;
  }
  if (plVar14 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    lVar10 = plVar14[0x2a];
    uVar4 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bbe2d8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe2d8), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbe2d0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2d8);
    }
    uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbe2d0);
    bVar6 = false;
    if ((((uVar9 & uVar7) == 1) && ((int)lVar10 == 1)) && ((uVar4 >> 4 & 1) != 0)) {
      bVar6 = false;
      if (plVar14[0xe] != 0) {
        bVar6 = *(int *)(plVar14[0xe] + 0x280) == 0;
      }
    }
  }
LAB_024c9f24:
  if ((bVar6) || (0x95 < *(uint *)(param_1 + 0x1c04))) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_4c = 0.0, (*(uint *)(param_1 + 0xec8) & 1) != 0)) {
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_02372864(param_1,0xa0,0,1);
      }
    }
    else {
      FUN_02373ee0(param_1,6,1,1);
    }
  }
  return;
}

