
undefined8 FUN_02130ffc(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    if ((((uVar2 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar2)) {
      plVar8 = (long *)0x0;
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
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fe0);
      }
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3fd8);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar2;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        if ((*(int *)(param_1 + 0x10) == 4) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68),
           fVar11 = *(float *)(lVar7 + 0x278) - *(float *)(plVar8[0xd] + 0x278),
           fVar10 = *(float *)(lVar7 + 0x280) - *(float *)(plVar8[0xd] + 0x280),
           fVar10 * fVar10 + fVar11 * fVar11 < 4900.0)) {
          return 0;
        }
        goto LAB_02131220;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((*(int *)(*(long *)(lVar7 + 0x3b8) + 0x77b8) == 1) &&
     (*(int *)(*(long *)(lVar7 + 0x3b8) + 0x77b4) < 3)) {
    lVar9 = *(long *)(lVar7 + 0x3b0);
    *(undefined4 *)(*(long *)(lVar7 + 0x3c0) + 0x29c) = 0x41f00000;
    plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
    (**(code **)(*plVar8 + 0x328))(plVar8,0);
    *(undefined4 *)(lVar9 + 0x56c) = 0;
    local_34 = 0;
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar9,0,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_01ea5c80(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b8),PTR_PTR_04bb2238,PTR_PTR_04bb2238,1
                 ,0,PTR_DAT_04bb32e0);
    return 1;
  }
LAB_02131220:
  FUN_021319e8(param_1);
  return 1;
}

