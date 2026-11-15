
void FUN_01e5eca0(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar10 = *(long **)(*(long *)(param_1 + 0x358) + 0x60);
  if (plVar10 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar10 = &DAT_05240280;
    }
  }
  uVar4 = (**(code **)(*plVar10 + 0x430))(plVar10);
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar4 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
  if (((lVar11 == 0) || ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar11 + 0x230) != uVar4)) {
    lVar11 = 0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar5 = (**(code **)(*plVar10 + 0x60))();
    plVar10 = (long *)PTR_DAT_04bb30c0;
    pbVar3 = PTR_DAT_04bb30c8;
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto joined_r0x01e5ed90;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01e5ed90;
    }
  }
  uVar4 = 0;
  plVar10 = (long *)PTR_DAT_04bb30c0;
  pbVar3 = PTR_DAT_04bb30c8;
joined_r0x01e5ed90:
  PTR_DAT_04bb30c0 = (undefined *)plVar10;
  PTR_DAT_04bb30c8 = pbVar3;
  if (lVar11 != 0) {
    uVar4 = uVar4 ^ 1;
    if (*(int *)(lVar11 + 0x150) != 1) {
      uVar4 = 1;
    }
    if ((uVar4 == 0) && ((*(uint *)(lVar11 + 0x248) >> 4 & 1) != 0)) {
      if (*(long *)(lVar11 + 0xb0) != lVar11 + 0xa8) {
        lVar7 = (long)*(int *)(lVar11 + 0xbc);
        plVar12 = (long *)(*(long *)(lVar11 + 0xb0) - lVar7);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
            *plVar10 = (long)puVar1;
            __cxa_guard_release(pbVar3);
          }
          if ((plVar12 != (long *)0x0) &&
             (uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,plVar10), (uVar6 & 1) != 0)) {
            lVar7 = plVar12[0x51];
            if (lVar7 == 0) {
              return;
            }
            *(byte *)((long)plVar12 + 0x339) = param_2 & 1;
            uVar4 = *(uint *)(lVar7 + 0x10);
            if ((int)uVar4 < 1) {
              return;
            }
            if ((*(char *)((long)plVar12 + 0x33a) != '\0') || ((param_2 & 1) == 0)) {
              uVar8 = 0;
              do {
                uVar2 = uVar8;
                if (*(uint *)(lVar7 + 0x10) <= uVar8) {
                  uVar2 = 0;
                }
                uVar8 = uVar8 + 1;
                lVar11 = *(long *)(lVar7 + 0x18) + (ulong)uVar2 * 0x48;
                *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) & 0xfffffffe;
              } while (uVar4 != uVar8);
              return;
            }
            uVar8 = 0;
            do {
              uVar2 = uVar8;
              if (*(uint *)(lVar7 + 0x10) <= uVar8) {
                uVar2 = 0;
              }
              puVar9 = (uint *)(*(long *)(lVar7 + 0x18) + (ulong)uVar2 * 0x48 + 0x18);
              uVar2 = *puVar9;
              if ((uVar2 >> 3 & 1) == 0) {
                *puVar9 = uVar2 | 1;
                uVar2 = uVar8;
                if (*(uint *)(lVar7 + 0x10) <= uVar8) {
                  uVar2 = 0;
                }
                lVar11 = *(long *)(lVar7 + 0x18) + (ulong)uVar2 * 0x48;
                *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | 2;
              }
              else {
                *puVar9 = uVar2 & 0xfffffffe;
              }
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
            return;
          }
          plVar12 = (long *)(*(long *)((long)plVar12 + lVar7 + 8) - lVar7);
        } while (plVar12 != (long *)((lVar11 + 0xa8) - lVar7));
      }
    }
  }
  return;
}

