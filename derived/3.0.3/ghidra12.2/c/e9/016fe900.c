
void FUN_016fe900(ulong param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    if (((((int)param_1 == 0) ||
         (lVar12 = *(long *)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8
                            ), lVar12 == 0)) || ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) ||
       (*(int *)(lVar12 + 0x230) != (int)param_1)) {
      lVar12 = 0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar4;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      puVar5 = PTR_DAT_04bb30c8;
      puVar4 = PTR_DAT_04bb30c0;
      if (((iVar6 < 0x11) ||
          (*(uint *)(lVar9 + 0x5e8) < 5 &&
           (1 << (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 0x1aU) != 0)) && (lVar12 != 0)) {
        if (*(long *)(lVar12 + 0xb0) != lVar12 + 0xa8) {
          lVar9 = (long)*(int *)(lVar12 + 0xbc);
          plVar7 = (long *)(*(long *)(lVar12 + 0xb0) - lVar9);
          puVar1 = PTR_DAT_04bb2e38 + 0x10;
          do {
            if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
              *(undefined **)puVar4 = puVar1;
              __cxa_guard_release(puVar5);
            }
            if ((plVar7 != (long *)0x0) &&
               (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar4), (uVar8 & 1) != 0)) {
              lVar9 = plVar7[0x51];
              if (lVar9 == 0) {
                return;
              }
              *(byte *)((long)plVar7 + 0x339) = param_2 & 1;
              uVar3 = *(uint *)(lVar9 + 0x10);
              if ((int)uVar3 < 1) {
                return;
              }
              if ((*(char *)((long)plVar7 + 0x33a) != '\0') || ((param_2 & 1) == 0)) {
                uVar10 = 0;
                do {
                  uVar2 = uVar10;
                  if (*(uint *)(lVar9 + 0x10) <= uVar10) {
                    uVar2 = 0;
                  }
                  uVar10 = uVar10 + 1;
                  lVar12 = *(long *)(lVar9 + 0x18) + (ulong)uVar2 * 0x48;
                  *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) & 0xfffffffe;
                } while (uVar3 != uVar10);
                return;
              }
              uVar10 = 0;
              do {
                uVar2 = uVar10;
                if (*(uint *)(lVar9 + 0x10) <= uVar10) {
                  uVar2 = 0;
                }
                puVar11 = (uint *)(*(long *)(lVar9 + 0x18) + (ulong)uVar2 * 0x48 + 0x18);
                uVar2 = *puVar11;
                if ((uVar2 >> 3 & 1) == 0) {
                  *puVar11 = uVar2 | 1;
                  uVar2 = uVar10;
                  if (*(uint *)(lVar9 + 0x10) <= uVar10) {
                    uVar2 = 0;
                  }
                  lVar12 = *(long *)(lVar9 + 0x18) + (ulong)uVar2 * 0x48;
                  *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | 2;
                }
                else {
                  *puVar11 = uVar2 & 0xfffffffe;
                }
                uVar10 = uVar10 + 1;
              } while (uVar3 != uVar10);
              return;
            }
            plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
          } while (plVar7 != (long *)((lVar12 + 0xa8) - lVar9));
        }
      }
    }
  }
  return;
}

