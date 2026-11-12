
undefined4 FUN_00a70070(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  float fVar15;
  undefined4 local_68;
  float local_64;
  
  lVar7 = FUN_0251b3b0(param_1,0);
  puVar5 = PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    local_68 = 0;
  }
  else if (DAT_04c47dc0 < 0) {
    local_68 = 0xffffffff;
  }
  else {
    local_68 = 0xffffffff;
    fVar15 = 1e+06;
    puVar14 = &DAT_04d9fe90;
    puVar2 = PTR_DAT_04bb2e50 + 0x10;
    uVar13 = 0;
    iVar6 = DAT_04c47dc0;
    do {
      puVar4 = puVar14;
      if (999 < uVar13) {
        puVar4 = &DAT_04d9fe90;
      }
      uVar11 = *puVar4;
      if (uVar11 != 0) {
        lVar7 = *(long *)puVar5;
        if (lVar7 != 0) {
          plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8));
          if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar12 + 0x46) != uVar11)) {
            plVar12 = (long *)0x0;
          }
          if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar7 = *(long *)puVar5;
            iVar6 = (**(code **)(*plVar8 + 0x60))();
            if (iVar6 < 0x11) {
              uVar11 = 1;
            }
            else {
              uVar11 = *(uint *)(lVar7 + 0x5e8);
              if (4 < uVar11) goto LAB_00a701b0;
              uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
            }
          }
          else {
LAB_00a701b0:
            uVar11 = 0;
          }
          if (plVar12 != (long *)0x0) {
            lVar7 = plVar12[0x2a];
            if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb3298 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb32a0);
            }
            uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3298);
            uVar3 = 0;
            if ((int)lVar7 == 1) {
              uVar3 = uVar11;
            }
            if (((uVar9 & 1) != 0) && (uVar3 != 0)) {
              if ((param_2 & 1) == 0) {
                pcVar10 = *(code **)(*plVar12 + 0x118);
              }
              else {
                pcVar10 = *(code **)(*plVar12 + 0x128);
              }
              uVar9 = (*pcVar10)(plVar12,param_1);
              if ((uVar9 & 1) != 0) {
                local_64 = 1e+06;
                uVar9 = (**(code **)(*plVar12 + 0x148))(plVar12,param_1,&local_64);
                if (((uVar9 & 1) != 0) && (local_64 < fVar15)) {
                  local_68 = (undefined4)uVar13;
                  fVar15 = local_64;
                }
              }
            }
          }
        }
        iVar6 = DAT_04c47dc0;
      }
      puVar14 = puVar14 + 4;
      bVar1 = (long)uVar13 < (long)iVar6;
      uVar13 = uVar13 + 1;
    } while (bVar1);
  }
  return local_68;
}

