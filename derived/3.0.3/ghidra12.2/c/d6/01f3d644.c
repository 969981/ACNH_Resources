
undefined8 FUN_01f3d644(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_19c;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined1 local_f4;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar6 = FUN_0220f914(0);
  if ((uVar6 & 1) == 0) {
    plVar10 = *(long **)(param_1[1] + 0x60);
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
    (**(code **)(*plVar10 + 0x370))(&local_58,plVar10);
    puVar3 = PTR_DAT_04bb43c0;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_58);
    lVar11 = *(long *)puVar3;
    if (lVar11 == 0) {
      return 0;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar4) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return 0;
    }
    local_1f0 = 0;
    local_200 = PTR_DAT_04bc0510 + 0x10;
    local_1f8 = local_58;
    uStack_1f4 = uStack_54;
    uVar4 = FUN_0277d6c4(&local_1f8);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar8 != (uint *)0x0)) {
          uVar7 = 0;
          uVar4 = *puVar8;
          if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
            puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar9 != 0) {
              uVar4 = puVar9[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar11 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                     uVar7 < 0xbd)) goto LAB_01f3dacc;
                }
              }
              uVar7 = 0;
            }
          }
          goto LAB_01f3dacc;
        }
      }
    }
    uVar7 = 0xbc;
LAB_01f3dacc:
    if (uVar7 != 0x14) {
      return 0;
    }
    if (*param_2 == 1) {
      (**(code **)(*param_1 + 0x38))(param_1,0x12,0,1);
    }
    return 1;
  }
  plVar10 = *(long **)(param_1[1] + 0x60);
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
  (**(code **)(*plVar10 + 0x370))(&local_58,plVar10);
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) goto LAB_01f3da00;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01f3da00;
  local_1f0 = 0;
  local_200 = PTR_DAT_04bc0510 + 0x10;
  local_1f8 = local_58;
  uStack_1f4 = uStack_54;
  uVar4 = FUN_0277d6c4(&local_1f8);
  if (*(long *)puVar3 == 0) {
LAB_01f3d9e0:
    uVar7 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01f3d9e0;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0
       )) goto LAB_01f3d9e0;
    uVar7 = 0;
    uVar4 = *puVar8;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar7 < 0xbd)) goto LAB_01f3d9ec;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01f3d9ec:
  if (uVar7 == 0x14) {
    return 0;
  }
LAB_01f3da00:
  if (((int)param_1[0x15a7] == 3) ||
     (uVar4 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar4 & 0xfffffffe) == 6)) {
    return 0;
  }
  iVar5 = *param_2;
  if (iVar5 != 2) {
    if (iVar5 == 1) {
      FUN_01e7b7bc(&local_200);
      local_1c0 = *(undefined4 *)((long)param_1 + 0xae84);
      uStack_1bc = (undefined4)param_1[0x15d1];
      (**(code **)(*param_1 + 0x38))(param_1,0x12,&local_200,1);
      return 1;
    }
    if (iVar5 != 0) {
      return 1;
    }
  }
  FUN_01e63f1c(&local_200);
  local_150 = *(undefined4 *)((long)param_1 + 0xae84);
  uStack_14c = (undefined4)param_1[0x15d1];
  local_200 = (undefined *)CONCAT44(local_200._4_4_,0x12);
  local_f4 = 1;
  local_19c = 1;
  if (*param_2 != 0) {
    plVar10 = param_1 + 0x194e;
    plVar2 = (long *)((long)param_1 + 0xe59c);
    if ((int)param_1[0x194e] < 1) {
      plVar10 = param_1 + 0x15ea;
      plVar2 = param_1 + 0x1cb3;
    }
    FUN_02192440(plVar10,(int)*plVar2 + param_3,&local_200);
    return 1;
  }
  if ((int)param_1[0x15ea] < *(int *)((long)param_1 + 0xaf54)) {
    FUN_021920b0(param_1 + 0x15ea,&local_200);
    return 1;
  }
  return 1;
}

