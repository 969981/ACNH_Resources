
/* WARNING: Removing unreachable block (ram,0x0130c7a4) */

void FUN_0130c3e0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint *puVar3;
  undefined *puVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  uVar8 = FUN_01367060();
  puVar4 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb27a8;
  if ((uVar8 & 1) == 0) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      lVar10 = *(long *)PTR_DAT_04bb27a8;
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      lVar10 = *(long *)PTR_DAT_04bb27a8;
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        uVar11 = 0x32;
        goto LAB_0130c41c;
      }
    }
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
LAB_0130c434:
    lVar10 = *(long *)(lVar10 + 0x1f8);
    if (lVar10 != 0) {
LAB_0130c4d0:
      if (*(char **)(lVar10 + 0xb0) != (char *)0x0) {
        local_58 = (undefined *)0x0;
        if (*(long *)PTR_DAT_04bb2720 != 0) {
          lVar12 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
          local_58 = (undefined *)0x0;
          if (lVar12 != 0) {
            local_58 = *(undefined **)(lVar12 + 0xd0);
          }
        }
        local_48 = 0xc800000000;
        pcStack_50 = *(char **)(lVar10 + 0xb0);
        FUN_01311710(param_1 + 0x128,&local_58);
      }
    }
  }
  else {
    uVar11 = 1;
    lVar10 = *(long *)PTR_DAT_04bb27a8;
LAB_0130c41c:
    if (uVar11 != 0) {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar11);
      if (uVar11 == 0) goto LAB_0130c434;
      plVar2 = (long *)(lVar10 + 0x30) + uVar11;
      if (0x38 < uVar11) {
        plVar2 = (long *)(lVar10 + 0x30);
      }
      lVar10 = *plVar2;
      if (lVar10 == 0) goto LAB_0130c50c;
      goto LAB_0130c4d0;
    }
  }
LAB_0130c50c:
  FUN_012fd7f0(param_1 + 0x10);
  sVar5 = *(short *)puVar4;
  if (sVar5 != -1) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x12);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x12 & 1) != 0) goto LAB_0130c588;
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531) &&
     ((*(uint *)(*(long *)puVar6 + 0x4758) & 1) != 0)) {
LAB_0130c588:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
    return;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "TapIndoorSelectCloudIsland";
    iVar7 = FUN_02743000(&local_58);
    if (iVar7 == 0) {
      uVar11 = *(uint *)(param_1 + 8);
      if (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) == 0) goto LAB_0130c5d8;
    }
    else {
      uVar11 = *(uint *)(param_1 + 8);
    }
    *(uint *)(param_1 + 8) = uVar11 & 0xfffffffe;
    return;
  }
  uVar11 = *(uint *)(param_1 + 8);
LAB_0130c5d8:
  *(uint *)(param_1 + 8) = uVar11 | 1;
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffd;
  if (*(void **)(param_1 + 0x188) != (void *)0x0) {
    iVar13 = *(int *)(param_1 + 400);
    iVar7 = iVar13 + 0x1e;
    if (0 < iVar13) {
      iVar7 = iVar13 + -1;
    }
    uVar11 = (iVar7 >> 5) + 1;
    memset(*(void **)(param_1 + 0x188),0,
           -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2);
  }
  iVar7 = *(int *)(param_1 + 0x144);
  if ((0 < iVar7) && (iVar13 = *(int *)(param_1 + 0x140), 0 < iVar13)) {
    iVar9 = 0;
    do {
      if (0 < iVar13) {
        iVar14 = *(int *)(param_1 + 0x194);
        iVar7 = 0;
        do {
          uVar11 = iVar7 + iVar9 * iVar13;
          *(int *)(param_1 + 0x194) = iVar14 + 1;
          if (((-1 < (int)uVar11) && (lVar10 = *(long *)(param_1 + 0x188), lVar10 != 0)) &&
             ((int)uVar11 < *(int *)(param_1 + 400))) {
            lVar12 = (ulong)(uVar11 >> 5) * 4;
            *(uint *)(lVar10 + lVar12) = *(uint *)(lVar10 + lVar12) | 1 << (ulong)(uVar11 & 0x1f);
            iVar14 = *(int *)(param_1 + 0x194) + -1;
            iVar13 = *(int *)(param_1 + 0x140);
          }
          iVar7 = iVar7 + 1;
          *(int *)(param_1 + 0x194) = iVar14;
        } while (iVar7 < iVar13);
        iVar7 = *(int *)(param_1 + 0x144);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  puVar6 = PTR_DAT_04bb2200;
  sVar5 = *(short *)puVar4;
  if (sVar5 != -1) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      if (*(long *)PTR_DAT_04bb46b0 == 0) {
        uVar11 = 0;
      }
      else {
        FUN_02703058(&local_58);
        uVar11 = 0;
        if (local_58._4_1_ != '\0') {
          uVar11 = (uint)local_58;
        }
      }
      lVar10 = *(long *)puVar6;
      if (*(long *)(lVar10 + 0xd0) != 0) {
        local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
        iVar7 = 0;
        if (uVar11 < 3) {
          iVar7 = uVar11 + 1;
        }
        *(int *)(*(long *)(*(long *)(lVar10 + 0x50) + 0xb0) + 0xb14) = iVar7;
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x130) & 1) != 0) && (iVar7 = *(int *)(param_1 + 0x144), 0 < iVar7)) &&
     (iVar13 = *(int *)(param_1 + 0x140), 0 < iVar13)) {
    iVar9 = 0;
    do {
      if (0 < iVar13) {
        iVar7 = 0;
        do {
          if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
            FUN_0138367c(param_1 + 0x150,iVar7,iVar9);
            iVar13 = *(int *)(param_1 + 0x140);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar13);
        iVar7 = *(int *)(param_1 + 0x144);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  lVar10 = *(long *)(*(long *)puVar6 + 0xd0);
  if (lVar10 == 0) {
    return;
  }
  *(undefined1 *)(lVar10 + 0x640) = 0;
  return;
}

