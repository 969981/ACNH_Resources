
undefined8
FUN_01fb1870(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,long param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  ulong local_25f0;
  long *local_25e8;
  long **local_25e0;
  long **local_25d8;
  long *local_25d0 [5];
  long alStack_25a8 [990];
  undefined8 local_6b8;
  long local_690 [200];
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  uVar4 = FUN_021e6540(&local_38,param_1,param_3,*param_4,param_6);
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_0277d7b4(&local_38,param_2), (uVar4 & 1) != 0)) {
    lVar7 = 0xc6;
    local_25e0 = local_25d0;
    local_25d0[0] = alStack_25a8;
    local_25f0 = 0;
    local_25e8 = (long *)0x0;
    plVar8 = local_25d0[0];
    do {
      lVar7 = lVar7 + -2;
      *plVar8 = (long)(plVar8 + 5);
      plVar8[5] = (long)(plVar8 + 10);
      plVar8 = plVar8 + 10;
    } while (lVar7 != 0);
    local_6b8 = 0;
    if (local_690 != (long *)0x0) {
      local_25f0 = 0xc800000000;
      local_25e8 = local_690;
    }
    local_25d8 = local_25e0;
    FUN_01521078(&local_25f0);
    puVar2 = PTR_DAT_04bb27c0;
    uVar4 = local_25f0 & 0xffffffff;
    if (0 < (int)local_25f0) {
      plVar8 = local_25e8;
      do {
        lVar7 = *plVar8;
        if (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 8) &&
            *(int *)(lVar7 + 0x14) == *(int *)(param_1 + 0xc)) {
          lVar6 = *(long *)PTR_DAT_04bb27c0;
          if (lVar6 == 0) {
            return 0;
          }
          uVar9 = *(uint *)(lVar7 + 0x20);
          if ((((uVar9 == 0) ||
               (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                   ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
              ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
            plVar8 = (long *)0x0;
          }
          if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
            plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar7 = *(long *)puVar2;
            iVar3 = (**(code **)(*plVar5 + 0x60))();
            if (iVar3 < 0x11) {
              uVar9 = 1;
              goto joined_r0x01fb1a1c;
            }
            if (*(uint *)(lVar7 + 0x5e8) < 5) {
              uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
              goto joined_r0x01fb1a1c;
            }
          }
          uVar9 = 0;
joined_r0x01fb1a1c:
          if (plVar8 == (long *)0x0) {
            return 0;
          }
          lVar7 = plVar8[0x2a];
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
          uVar1 = 0;
          if ((int)lVar7 == 1) {
            uVar1 = uVar9;
          }
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if (uVar1 == 0) {
            return 0;
          }
          fVar10 = *(float *)(plVar8[0xd] + 0x27c) - *(float *)(param_5 + 4);
          fVar11 = -fVar10;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          if (1.1920929e-07 < fVar11) {
            return 0;
          }
          return 1;
        }
        plVar8 = plVar8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return 0;
}

