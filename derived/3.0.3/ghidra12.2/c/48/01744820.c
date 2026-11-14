
void FUN_01744820(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  
  puVar5 = PTR_DAT_04bb30c8;
  puVar4 = PTR_DAT_04bb30c0;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar12 = (long)*(int *)(param_1 + 0xbc);
    plVar11 = (long *)(*(long *)(param_1 + 0xb0) - lVar12);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if ((plVar11 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar4), (uVar7 & 1) != 0)) {
        lVar12 = plVar11[0x51];
        if (lVar12 != 0) {
          *(byte *)((long)plVar11 + 0x339) = param_2 & 1;
          uVar3 = *(uint *)(lVar12 + 0x10);
          if (0 < (int)uVar3) {
            if ((*(char *)((long)plVar11 + 0x33a) == '\0') && ((param_2 & 1) != 0)) {
              uVar8 = 0;
              do {
                uVar2 = uVar8;
                if (*(uint *)(lVar12 + 0x10) <= uVar8) {
                  uVar2 = 0;
                }
                puVar10 = (uint *)(*(long *)(lVar12 + 0x18) + (ulong)uVar2 * 0x48 + 0x18);
                uVar2 = *puVar10;
                if ((uVar2 >> 3 & 1) == 0) {
                  *puVar10 = uVar2 | 1;
                  uVar2 = uVar8;
                  if (*(uint *)(lVar12 + 0x10) <= uVar8) {
                    uVar2 = 0;
                  }
                  lVar9 = *(long *)(lVar12 + 0x18) + (ulong)uVar2 * 0x48;
                  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | 2;
                }
                else {
                  *puVar10 = uVar2 & 0xfffffffe;
                }
                uVar8 = uVar8 + 1;
              } while (uVar3 != uVar8);
            }
            else {
              uVar8 = 0;
              do {
                uVar2 = uVar8;
                if (*(uint *)(lVar12 + 0x10) <= uVar8) {
                  uVar2 = 0;
                }
                uVar8 = uVar8 + 1;
                lVar9 = *(long *)(lVar12 + 0x18) + (ulong)uVar2 * 0x48;
                *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) & 0xfffffffe;
              } while (uVar3 != uVar8);
            }
          }
        }
        if ((param_2 & 1) != 0) {
          return;
        }
        if (plVar11[0x51] == 0) {
          return;
        }
        FUN_03effd90();
        return;
      }
      plVar11 = (long *)(*(long *)((long)plVar11 + lVar12 + 8) - lVar12);
    } while (plVar11 != (long *)((param_1 + 0xa8) - lVar12));
  }
  return;
}

