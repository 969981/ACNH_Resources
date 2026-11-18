
void FUN_036ea108(long param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x036ea1c4;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x036ea1c4;
    }
  }
  uVar11 = 0;
joined_r0x036ea1c4:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb6bc0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6bc0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb6bb8 = PTR_DAT_04bb6bc8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6bc0);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6bb8), (uVar7 & 1) != 0)) {
        pbVar1 = (byte *)((long)puVar10 + 0xe742);
        if (**(char **)(param_1 + 8) == '\0') {
          *pbVar1 = *pbVar1 & 0xfe;
          puVar4 = PTR_DAT_04bb3238;
          lVar8 = *(long *)PTR_DAT_04bb3968;
          if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x175a8) != 0)) &&
              (*(int *)(lVar8 + 0x175a8) == *(int *)(puVar10[1] + 0x230))) &&
             (*(int *)(lVar8 + 0x175ac) == 0)) {
            *(undefined4 *)(lVar8 + 0x175ac) = 2;
            uVar3 = *(undefined4 *)puVar4;
            *(undefined2 *)(lVar8 + 0x175b4) = 0;
            *(undefined4 *)(lVar8 + 0x175b0) = uVar3;
            *(undefined4 *)(lVar8 + 0x17608) = 999;
          }
        }
        else {
          *pbVar1 = *pbVar1 | 1;
        }
      }
    }
  }
  return;
}

