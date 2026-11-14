
void FUN_016dba80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  if (param_1 == 0) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x60);
  if (plVar12 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      plVar12 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar12 = &DAT_05240280;
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x430))(plVar12);
  puVar1 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    if ((((uVar6 == 0) ||
         (lVar13 = *(long *)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8),
         lVar13 == 0)) || ((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar13 + 0x230) != uVar6)) {
      lVar13 = 0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar1;
      iVar7 = (**(code **)(*plVar12 + 0x60))();
      plVar12 = (long *)PTR_DAT_04bb30c0;
      pbVar4 = PTR_DAT_04bb30c8;
      if (iVar7 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_016dbb6c;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016dbb6c:
      uVar6 = 0;
      plVar12 = (long *)PTR_DAT_04bb30c0;
      pbVar4 = PTR_DAT_04bb30c8;
    }
    PTR_DAT_04bb30c0 = (undefined *)plVar12;
    PTR_DAT_04bb30c8 = pbVar4;
    if (lVar13 != 0) {
      uVar6 = uVar6 ^ 1;
      if (*(int *)(lVar13 + 0x150) != 1) {
        uVar6 = 1;
      }
      if (uVar6 == 0) {
        if (*(long *)(lVar13 + 0xb0) != lVar13 + 0xa8) {
          lVar9 = (long)*(int *)(lVar13 + 0xbc);
          plVar14 = (long *)(*(long *)(lVar13 + 0xb0) - lVar9);
          puVar1 = PTR_DAT_04bb2e38 + 0x10;
LAB_016dbbf4:
          if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
            *plVar12 = (long)puVar1;
            __cxa_guard_release(pbVar4);
          }
          if ((plVar14 == (long *)0x0) ||
             (uVar8 = (**(code **)(*plVar14 + 0x10))(plVar14,plVar12), (uVar8 & 1) == 0))
          goto LAB_016dbbe0;
          lVar9 = plVar14[0x51];
          if (lVar9 != 0) {
            *(undefined1 *)((long)plVar14 + 0x339) = 0;
            uVar6 = *(uint *)(lVar9 + 0x10);
            if (0 < (int)uVar6) {
              uVar10 = 0;
              do {
                uVar3 = uVar10;
                if (*(uint *)(lVar9 + 0x10) <= uVar10) {
                  uVar3 = 0;
                }
                uVar10 = uVar10 + 1;
                lVar13 = *(long *)(lVar9 + 0x18) + (ulong)uVar3 * 0x48;
                *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) & 0xfffffffe;
              } while (uVar6 != uVar10);
              if (plVar14[0x51] == 0) goto LAB_016dbc98;
            }
            FUN_03effd90();
          }
        }
      }
    }
  }
LAB_016dbc98:
  if (((*(long *)(param_1 + 0x298) != 0) && (lVar9 = FUN_0234a720(), lVar9 != 0)) &&
     (lVar13 = *(long *)(lVar9 + 0x288), lVar13 != 0)) {
    *(undefined1 *)(lVar9 + 0x339) = 0;
    uVar6 = *(uint *)(lVar13 + 0x10);
    if (0 < (int)uVar6) {
      uVar10 = 0;
      do {
        uVar3 = uVar10;
        if (*(uint *)(lVar13 + 0x10) <= uVar10) {
          uVar3 = 0;
        }
        uVar10 = uVar10 + 1;
        lVar11 = *(long *)(lVar13 + 0x18) + (ulong)uVar3 * 0x48;
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) & 0xfffffffe;
      } while (uVar6 != uVar10);
      if (*(long *)(lVar9 + 0x288) == 0) goto LAB_016dbd08;
    }
    FUN_03effd90();
  }
LAB_016dbd08:
  puVar5 = PTR_DAT_04bb30c8;
  puVar1 = PTR_DAT_04bb30c0;
  if (*(long *)(param_1 + 0x2a0) != 0) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar9 = (long)*(int *)(param_1 + 0xbc);
      plVar12 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
      puVar2 = PTR_DAT_04bb2e38 + 0x10;
      do {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(puVar5);
        }
        if ((plVar12 != (long *)0x0) &&
           (uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar1), (uVar8 & 1) != 0)) {
          lVar9 = plVar12[0x51];
          if (lVar9 == 0) {
            return;
          }
          *(undefined1 *)((long)plVar12 + 0x339) = 0;
          uVar6 = *(uint *)(lVar9 + 0x10);
          if (0 < (int)uVar6) {
            uVar10 = 0;
            do {
              uVar3 = uVar10;
              if (*(uint *)(lVar9 + 0x10) <= uVar10) {
                uVar3 = 0;
              }
              uVar10 = uVar10 + 1;
              lVar13 = *(long *)(lVar9 + 0x18) + (ulong)uVar3 * 0x48;
              *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) & 0xfffffffe;
            } while (uVar6 != uVar10);
            if (plVar12[0x51] == 0) {
              return;
            }
          }
          FUN_03effd90();
          return;
        }
        plVar12 = (long *)(*(long *)((long)plVar12 + lVar9 + 8) - lVar9);
      } while (plVar12 != (long *)((param_1 + 0xa8) - lVar9));
    }
  }
  return;
LAB_016dbbe0:
  plVar14 = (long *)(*(long *)((long)plVar14 + lVar9 + 8) - lVar9);
  if (plVar14 == (long *)((lVar13 + 0xa8) - lVar9)) goto LAB_016dbc98;
  goto LAB_016dbbf4;
}

