
void FUN_013bb508(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_013bb63c;
  uVar9 = *(uint *)(*(long *)(param_1 + 0x48) + 0x230);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_013bb5c4;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013bb5c4:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4050 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb4048 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4050);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4048);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      iVar3 = *(int *)((long)plVar8 + 0x38c);
      *(int *)(param_1 + 0x278) = iVar3;
      *(int *)(param_1 + 0x27c) = (int)plVar8[0x72];
      *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
      if (iVar3 == -1) {
        *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
      }
    }
  }
LAB_013bb63c:
  lVar6 = *(long *)(param_1 + 0x48);
  uVar10 = *(undefined4 *)(*(long *)(lVar6 + 0x68) + 0x280);
  *(undefined8 *)(param_1 + 0x2ec) = *(undefined8 *)(*(long *)(lVar6 + 0x68) + 0x278);
  *(undefined4 *)(param_1 + 0x2f4) = uVar10;
  lVar7 = *(long *)(lVar6 + 0x68);
  uVar10 = *(undefined4 *)(lVar7 + 0x278);
  uVar11 = *(undefined4 *)(lVar7 + 0x27c);
  uVar12 = *(undefined4 *)(lVar7 + 0x280);
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 800) = uVar10;
  *(undefined4 *)(param_1 + 0x324) = uVar11;
  *(undefined4 *)(param_1 + 0x328) = uVar12;
  *(undefined4 *)(param_1 + 0x32c) = uVar10;
  *(undefined4 *)(param_1 + 0x330) = uVar11;
  *(undefined4 *)(param_1 + 0x334) = uVar12;
  lVar7 = *(long *)(lVar6 + 0x68);
  uVar10 = *(undefined4 *)(lVar7 + 0x2b4);
  uVar11 = *(undefined4 *)(lVar7 + 0x2b8);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(lVar7 + 0x2b0);
  *(undefined4 *)(param_1 + 0x38c) = uVar10;
  *(undefined4 *)(param_1 + 0x390) = uVar11;
  *(undefined4 *)(param_1 + 0x2f8) = uVar10;
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined8 *)(param_1 + 0x314) = 0;
    *(float *)(param_1 + 0x31c) =
         (*(float *)(lVar6 + 0x11d8) - *(float *)(lVar6 + 0x11cc)) * 0.5 * 0.7;
  }
  FUN_013bb7b8(param_1);
  *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x310);
  uVar9 = *(uint *)(*(long *)(param_1 + 0x48) + 0x17c);
  *(uint *)(param_1 + 0x2dc) = uVar9;
  uVar1 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  uVar9 = uVar1 ^ uVar1 * 0x800;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  *(float *)(param_1 + 0x350) =
       (float)((uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1) >> 9 | 0x3f800000) + -1.0;
  return;
}

