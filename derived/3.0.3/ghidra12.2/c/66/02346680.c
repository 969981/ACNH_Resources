
void FUN_02346680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  lVar9 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar9 + 0xb0) != lVar9 + 0xa8) {
    lVar13 = (long)*(int *)(lVar9 + 0xbc);
    plVar11 = (long *)(*(long *)(lVar9 + 0xb0) - lVar13);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if ((plVar11 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar2), (uVar7 & 1) != 0)) {
        lVar9 = plVar11[0x51];
        if ((lVar9 != 0) && (uVar8 = *(uint *)(lVar9 + 0x10), 0 < (int)uVar8)) {
          uVar10 = 0;
          do {
            uVar3 = uVar10;
            if (*(uint *)(lVar9 + 0x10) <= uVar10) {
              uVar3 = 0;
            }
            uVar10 = uVar10 + 1;
            lVar13 = *(long *)(lVar9 + 0x18) + (ulong)uVar3 * 0x48;
            *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | 0x10000000;
          } while (uVar8 != uVar10);
        }
        break;
      }
      plVar11 = (long *)(*(long *)((long)plVar11 + lVar13 + 8) - lVar13);
    } while (plVar11 != (long *)((lVar9 + 0xa8) - lVar13));
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(param_1 + 0xbe10);
  uVar8 = *(uint *)(lVar9 + (ulong)(*(uint *)(lVar9 + 0x10) & 1) * 0x14 + 0x1c);
  if (uVar8 == 0) goto LAB_02346918;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    lVar13 = *(long *)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
    if (((lVar13 == 0) || ((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar13 + 0x230) != uVar8)) {
      lVar13 = 0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar6 = (**(code **)(*plVar11 + 0x60))();
      plVar11 = (long *)PTR_DAT_04bb30c0;
      pbVar4 = PTR_DAT_04bb30c8;
      if (iVar6 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02346844;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02346844:
      uVar8 = 0;
      plVar11 = (long *)PTR_DAT_04bb30c0;
      pbVar4 = PTR_DAT_04bb30c8;
    }
    PTR_DAT_04bb30c0 = (undefined *)plVar11;
    PTR_DAT_04bb30c8 = pbVar4;
    if (lVar13 != 0) {
      uVar8 = uVar8 ^ 1;
      if (*(int *)(lVar13 + 0x150) != 1) {
        uVar8 = 1;
      }
      if (uVar8 == 0) {
        if (*(long *)(lVar13 + 0xb0) != lVar13 + 0xa8) {
          lVar9 = (long)*(int *)(lVar13 + 0xbc);
          plVar12 = (long *)(*(long *)(lVar13 + 0xb0) - lVar9);
          puVar2 = PTR_DAT_04bb2e38 + 0x10;
          do {
            if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
              *plVar11 = (long)puVar2;
              __cxa_guard_release(pbVar4);
            }
            if ((plVar12 != (long *)0x0) &&
               (uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,plVar11), (uVar7 & 1) != 0)) {
              if (plVar12[0x51] != 0) {
                FUN_03effd90();
              }
              break;
            }
            plVar12 = (long *)(*(long *)((long)plVar12 + lVar9 + 8) - lVar9);
          } while (plVar12 != (long *)((lVar13 + 0xa8) - lVar9));
        }
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0xbe10);
LAB_02346918:
  FUN_0234ab30(lVar9);
  FUN_0170c740(*(undefined8 *)(param_1 + 0xbdd0),1);
  FUN_0170c740(*(undefined8 *)(param_1 + 0xbde8),1);
  FUN_0170c740(*(undefined8 *)(param_1 + 0xbdf0),1);
  FUN_0170c740(*(undefined8 *)(param_1 + 0xbe08),1);
  return;
}

