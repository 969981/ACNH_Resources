
void FUN_02951fc0(undefined8 *param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte bVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  undefined *local_50;
  undefined1 *puStack_48;
  
  if (7 < (ulong)*param_3) {
    uVar16 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar13 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    goto LAB_02952458;
  }
  lVar1 = param_2 + 0x148;
  iVar7 = FUN_0277d6c4(lVar1 + (ulong)*param_3 * 0x14 + 0xc);
  if (iVar7 == 0x3331) {
    uVar9 = FUN_029524c0();
    if ((uVar9 & 1) != 0) {
      bVar12 = *param_3;
      bVar5 = 7 < bVar12;
      if (bVar5) {
        bVar12 = 0xff;
      }
      lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
      if (bVar5) {
        lVar17 = lVar1;
      }
      uVar9 = FUN_02677890(param_3,lVar17 + 0xc);
      if ((uVar9 & 1) != 0) {
        if ((((7 < *param_3) || (uVar8 = FUN_02582d8c(param_3,1), 7 < uVar8)) ||
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) == '\0')) ||
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) == '\0'))
        goto LAB_02952190;
        lVar17 = *(long *)PTR_DAT_04bb39b0;
        pbVar14 = PTR_DAT_04bb32e0;
        if (lVar17 == 0) {
LAB_029520f4:
          if (*pbVar14 < 8) goto LAB_02952160;
LAB_02952100:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02952158:
            pbVar14 = PTR_DAT_04bb5038;
            goto LAB_02952160;
          }
          lVar17 = **(long **)PTR_DAT_04bb27d0;
          bVar12 = *(byte *)(lVar17 + 0x473);
          pbVar14 = PTR_DAT_04bb5038;
          if ((long)(char)bVar12 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
            if (7 < bVar12) {
              puVar3 = (uint *)(lVar17 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar14 = (byte *)(lVar17 + 0x471);
            }
          }
          bVar12 = *pbVar14;
          if (7 < bVar12) goto LAB_02952158;
        }
        else {
          if (*(int *)(lVar17 + 0x15c) != 0) {
            pbVar14 = (byte *)(lVar17 + 0x158);
          }
          if (7 < *pbVar14) {
            if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_029520f4;
            }
            goto LAB_02952100;
          }
LAB_02952160:
          bVar12 = *pbVar14;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
        }
        bVar15 = *param_3;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar12 == bVar15) goto LAB_02952190;
      }
    }
    *param_1 = 0xb10;
    goto LAB_029523b4;
  }
LAB_02952190:
  bVar12 = *param_3;
  bVar5 = 7 < bVar12;
  if (bVar5) {
    bVar12 = 0xff;
  }
  lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
  if (bVar5) {
    lVar17 = lVar1;
  }
  iVar7 = FUN_0277d6c4(lVar17 + 0xc);
  if (iVar7 == 0x32a8) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      bVar12 = *param_3;
      bVar5 = 7 < bVar12;
      if (bVar5) {
        bVar12 = 0xff;
      }
      lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
      if (bVar5) {
        lVar17 = lVar1;
      }
      uVar9 = FUN_02677890(param_3,lVar17 + 0xc);
      if ((uVar9 & 1) != 0) goto LAB_02952210;
    }
    uVar11 = 0x32a8;
LAB_029523a0:
    uVar6 = FUN_02952680(param_2,uVar11);
    *(undefined2 *)param_1 = uVar6;
    *(undefined2 *)((long)param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
LAB_029523b4:
    FUN_0277d4ac(param_1);
    return;
  }
LAB_02952210:
  if ((*(long *)PTR_DAT_04bb39b0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    bVar12 = *param_3;
    bVar5 = 7 < bVar12;
    if (bVar5) {
      bVar12 = 0xff;
    }
    lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
    if (bVar5) {
      lVar17 = lVar1;
    }
    iVar7 = FUN_0277d6c4(lVar17 + 0xc);
    if (iVar7 == 0xb17) {
      uVar11 = 0xb17;
      goto LAB_029523a0;
    }
  }
  bVar12 = *param_3;
  bVar5 = 7 < bVar12;
  if (bVar5) {
    bVar12 = 0xff;
  }
  lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
  if (bVar5) {
    lVar17 = lVar1;
  }
  iVar7 = FUN_0277d6c4(lVar17 + 0xc);
  if ((iVar7 == 0xb17) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    puStack_48 = &DAT_040bfc88;
    uVar8 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_50,PTR_DAT_04bb3238,1);
    puVar4 = PTR_DAT_04bb27c0;
    lVar17 = *(long *)PTR_DAT_04bb27c0;
    if (lVar17 != 0) {
      if ((((uVar8 == 0) ||
           (plVar18 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                (ulong)(uVar8 >> 0x14) * 8), plVar18 == (long *)0x0)) ||
          ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar8)) {
        plVar18 = (long *)0x0;
      }
      if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar17 = *(long *)puVar4;
        iVar7 = (**(code **)(*plVar10 + 0x60))();
        if (iVar7 < 0x11) {
          uVar8 = 1;
        }
        else {
          if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_029523d0;
          uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_029523d0:
        uVar8 = 0;
      }
      if (plVar18 != (long *)0x0) {
        lVar17 = plVar18[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb37d0);
        uVar2 = 0;
        if ((int)lVar17 == 1) {
          uVar2 = uVar8;
        }
        if (((((uVar9 & 1) != 0) && (uVar2 != 0)) && (lVar17 = FUN_02952fbc(plVar18), lVar17 != 0))
           && (uVar9 = FUN_01f78db0(), (uVar9 & 1) == 0)) {
          *param_1 = 0xb26;
          FUN_0277d4ac(param_1);
          return;
        }
      }
    }
  }
  bVar12 = *param_3;
  bVar5 = 7 < bVar12;
  if (bVar5) {
    bVar12 = 0xff;
  }
  lVar17 = lVar1 + (ulong)(uint)(int)(char)bVar12 * 0x14;
  if (bVar5) {
    lVar17 = lVar1;
  }
  uVar16 = *(undefined4 *)(lVar17 + 0xc);
  uVar13 = *(undefined4 *)(lVar17 + 0x10);
LAB_02952458:
  *(undefined4 *)param_1 = uVar16;
  *(undefined4 *)((long)param_1 + 4) = uVar13;
  return;
}

