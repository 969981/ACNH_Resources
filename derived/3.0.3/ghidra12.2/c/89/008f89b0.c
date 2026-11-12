
undefined4 FUN_008f89b0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_60;
  uint *local_58;
  float *pfStack_50;
  float local_24;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar2 = *param_2;
  if (uVar2 == 0) {
    return *(undefined4 *)PTR_DAT_04bb3238;
  }
  local_24 = 0.0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar2 >> 0x11) & 0x7ff8)
                        );
    if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar10 + 0x46) != uVar2)) {
      plVar10 = (long *)0x0;
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
    if (plVar10 != (long *)0x0) {
      lVar7 = plVar10[0x2a];
      if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32b0);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb32a8);
      puVar3 = PTR_DAT_04bb3238;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar2;
      }
      puVar8 = (undefined4 *)puVar3;
      if (((uVar6 & 1) == 0) || (uVar1 == 0)) goto LAB_008f8b90;
      if ((*(int *)((long)plVar10 + 0x15c) == 0x45) && (*(char *)((long)plVar10 + 0x2cc) != '\0')) {
        pfStack_50 = &local_24;
        fVar11 = *(float *)(plVar10 + 0x56) + *(float *)(plVar10 + 0x56);
        fVar12 = *(float *)((long)plVar10 + 0x2b4) + *(float *)((long)plVar10 + 0x2b4);
        fVar13 = *(float *)(plVar10 + 0x57) + *(float *)(plVar10 + 0x57);
        lVar7 = *(long *)(param_1 + 0x288);
        local_60 = &PTR_FUN_04926b18;
        local_24 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
        if (lVar7 != param_1 + 0x280) {
          puVar9 = (undefined4 *)(lVar7 + -8);
          local_58 = param_2;
          do {
            uVar6 = (*(code *)*local_60)(&local_60,puVar9);
            puVar8 = puVar9;
            if ((uVar6 & 1) != 0) break;
            lVar7 = *(long *)(lVar7 + 8);
            puVar9 = (undefined4 *)(lVar7 + -8);
            puVar8 = (undefined4 *)puVar3;
          } while (puVar9 != (undefined4 *)(param_1 + 0x278));
          goto LAB_008f8b90;
        }
      }
    }
  }
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
LAB_008f8b90:
  return *puVar8;
}

