
void FUN_01c72fb8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined8 local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined4 local_50;
  byte local_4c;
  undefined1 local_4b;
  undefined8 *local_48;
  
  uVar12 = *(uint *)(param_1 + 8);
  if (uVar12 == 0xffffffff && *(char *)(param_1 + 0x20) != '\0') {
    puVar18 = (undefined1 *)(param_1 + 0x21);
    *puVar18 = 1;
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    uVar12 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar12;
    if (uVar12 != 0xffffffff) {
      uVar15 = *(uint *)(param_1 + 0x28);
      lVar13 = *(long *)(param_1 + 0x30);
      uVar2 = uVar12;
      if (uVar15 <= uVar12) {
        uVar2 = 0;
      }
      puVar16 = *(undefined8 **)(lVar13 + (long)(int)uVar2 * 0x40);
      if (puVar16 != (undefined8 *)0x0) {
        (*(code *)*puVar16)();
        uVar12 = *(uint *)(param_1 + 8);
        goto LAB_01c73034;
      }
      *puVar18 = 0;
      goto LAB_01c7305c;
    }
    *puVar18 = 0;
LAB_01c73084:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
LAB_01c73034:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar12 == 0xffffffff) goto LAB_01c73084;
    uVar15 = *(uint *)(param_1 + 0x28);
    lVar13 = *(long *)(param_1 + 0x30);
LAB_01c7305c:
    if (uVar15 <= uVar12) {
      uVar12 = 0;
    }
    lVar13 = *(long *)(lVar13 + (long)(int)uVar12 * 0x40);
    if ((lVar13 == 0) || ((**(code **)(lVar13 + 8))(), *(char *)(param_1 + 0x21) == '\0'))
    goto LAB_01c73084;
  }
  puVar7 = PTR_DAT_04bb36f0;
  puVar6 = PTR_DAT_04bb27d0;
  if (*(char *)(param_1 + 0x1aa) == '\0') {
    if (*(char *)(param_1 + 0x290) == '\0') {
      return;
    }
    if ((*(uint *)(param_1 + 0x1b8) & 0xfffffffd) != 4) {
      return;
    }
    puVar16 = *(undefined8 **)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (puVar16 != &DAT_0407ebb1) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x1d8) < 1) {
        iVar3 = *(int *)(param_1 + 0x1d8) + -1;
      }
      memset(puVar16,0,(long)iVar3);
      *(undefined1 *)((long)puVar16 + (long)iVar3) = 0;
    }
    puVar16 = *(undefined8 **)(param_1 + 0x228);
    if (puVar16 != &DAT_0407ebb1) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x230) < 1) {
        iVar3 = *(int *)(param_1 + 0x230) + -1;
      }
      memset(puVar16,0,(long)iVar3);
      *(undefined1 *)((long)puVar16 + (long)iVar3) = 0;
    }
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined2 *)(param_1 + 0x280) = 0xff;
    if (*(char *)(param_1 + 0x290) == '\0') {
      return;
    }
    puVar16 = *(undefined8 **)(param_1 + 0x1b0);
    goto LAB_01c734a4;
  }
  if ((*(long *)PTR_DAT_04bb27d0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb27d0 + 0x80) == 3)) {
    *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 1;
    local_70._0_4_ = 0x11;
    if (*(uint *)(*(long *)puVar7 + 0x20) < 0x12) {
      local_70._0_4_ = 0;
    }
    *(bool *)(*(long *)(*(long *)puVar7 + 0x28) + (long)(int)local_70 * 0x38 + 0x30) =
         *(char *)(param_1 + 0x1a8) == '\0';
    return;
  }
  local_70 = (undefined *)CONCAT44((int)((ulong)local_70 >> 0x20),0x11);
  uVar10 = local_70;
  bVar19 = *(byte *)(param_1 + 0x1a9);
  lVar13 = *(long *)PTR_DAT_04bb36f0;
  *(byte *)(param_1 + 0x1a9) = bVar19 & 0xfe;
  local_70._0_4_ = 0x11;
  if (*(uint *)(lVar13 + 0x20) < 0x12) {
    local_70._0_4_ = 0;
  }
  *(bool *)(*(long *)(lVar13 + 0x28) + (long)(int)local_70 * 0x38 + 0x30) =
       (bVar19 & 0xfe) != 0 && *(char *)(param_1 + 0x1a8) == '\0';
  local_70 = (undefined *)uVar10;
  FUN_01c9ac80(*(undefined8 *)puVar7,0x11);
  if (*(char *)(param_1 + 0x290) == '\0') {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x11);
    uVar10 = local_70;
    local_70._0_4_ = 0x11;
    if (*(uint *)(*(long *)puVar7 + 0x20) < 0x12) {
      local_70._0_4_ = 0;
    }
    lVar13 = (long)(int)local_70;
    local_70 = (undefined *)uVar10;
    if (*(char *)(*(long *)(*(long *)puVar7 + 0x28) + lVar13 * 0x38 + 0x2d) != '\0') {
      return;
    }
  }
  puVar16 = (undefined8 *)(param_1 + 0x1b0);
  uVar11 = FUN_00a78c1c();
  if ((uVar11 & 1) == 0) {
    if (((*(long *)PTR_DAT_04bb2808 != 0) &&
        (lVar13 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar13 != 0)) &&
       (1 < *(uint *)(lVar13 + 0x1b0))) {
      return;
    }
    uVar11 = FUN_00a78ab8();
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x290) != '\0') {
      (**(code **)*puVar16)(puVar16);
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    puVar6 = PTR_DAT_04bbb868;
    *(undefined1 *)(param_1 + 0x21b) = 0;
    puVar7 = PTR_DAT_04bbb848;
    *(undefined1 **)(param_1 + 0x1d0) = (undefined1 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1d8) = 0x40;
    *(undefined1 *)(param_1 + 0x234) = 0;
    *(undefined **)(param_1 + 0x1b0) = puVar6 + 0x10;
    puVar6 = PTR_DAT_04bb2bc0;
    *(undefined1 **)(param_1 + 0x228) = (undefined1 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x230) = 0x40;
    *(undefined1 *)(param_1 + 0x273) = 0;
    *(undefined2 *)(param_1 + 0x280) = 0xff;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined1 *)(param_1 + 0x290) = 1;
    *(undefined **)(param_1 + 0x220) = puVar6 + 0x10;
    *(undefined **)(param_1 + 0x1c0) = puVar7 + 0x10;
    *(undefined **)(param_1 + 0x1c8) = puVar6 + 0x10;
    return;
  }
  if (*(char *)(param_1 + 0x290) == '\0') {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0x40;
    puVar17 = (undefined1 *)(param_1 + 0x1dc);
    *puVar17 = 0;
    puVar9 = PTR_DAT_04bbb868;
    *(undefined1 **)(param_1 + 0x1d0) = puVar17;
    puVar8 = PTR_DAT_04bbb848;
    *(undefined1 *)(param_1 + 0x21b) = 0;
    *(undefined **)(param_1 + 0x1b0) = puVar9 + 0x10;
    puVar1 = PTR_DAT_04bb2bc0;
    *(undefined4 *)(param_1 + 0x230) = 0x40;
    puVar18 = (undefined1 *)(param_1 + 0x234);
    *puVar18 = 0;
    *(undefined1 *)(param_1 + 0x273) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    puVar1 = puVar1 + 0x10;
    *(undefined1 **)(param_1 + 0x228) = puVar18;
    *(undefined2 *)(param_1 + 0x280) = 0xff;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined **)(param_1 + 0x1c0) = puVar8 + 0x10;
    *(undefined **)(param_1 + 0x1c8) = puVar1;
    *(undefined **)(param_1 + 0x220) = puVar1;
    if (*(int *)(param_1 + 0x1b8) != 0) {
      *(undefined **)(param_1 + 0x1b0) = puVar9 + 0x10;
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0x40;
      *(undefined1 *)(param_1 + 0x21b) = 0;
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined **)(param_1 + 0x1c0) = puVar8 + 0x10;
      *(undefined1 **)(param_1 + 0x228) = puVar18;
      *(undefined4 *)(param_1 + 0x230) = 0x40;
      *(undefined1 *)(param_1 + 0x273) = 0;
      *(undefined1 *)(param_1 + 0x234) = 0;
      *(undefined **)(param_1 + 0x220) = puVar1;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined2 *)(param_1 + 0x280) = 0xff;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined **)(param_1 + 0x1c8) = puVar1;
      *(undefined1 **)(param_1 + 0x1d0) = puVar17;
      FUN_01185240(puVar16);
      uVar12 = *(uint *)(param_1 + 0x1b8);
      goto LAB_01c73430;
    }
LAB_01c73460:
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x11);
    uVar10 = local_70;
    local_70._0_4_ = 0x11;
    if (*(uint *)(*(long *)puVar7 + 0x20) < 0x12) {
      local_70._0_4_ = 0;
    }
    local_70 = (undefined *)uVar10;
    if (*(char *)(*(long *)(*(long *)puVar7 + 0x28) + (long)(int)local_70 * 0x38 + 0x2d) == '\0') {
      lVar13 = *(long *)PTR_DAT_04bb39b0;
      pbVar14 = PTR_DAT_04bb32e0;
      if (lVar13 == 0) {
LAB_01c7359c:
        if (7 < *pbVar14) {
LAB_01c735a8:
          if (*(long **)puVar6 != (long *)0x0) {
            lVar13 = **(long **)puVar6;
            bVar19 = *(byte *)(lVar13 + 0x473);
            pbVar14 = PTR_DAT_04bb5038;
            if ((long)(char)bVar19 != 0xffffffffffffffff) {
              puVar4 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
              if (7 < bVar19) {
                puVar4 = (uint *)(lVar13 + 0x48);
              }
              if ((*puVar4 & 8) != 0) {
                pbVar14 = (byte *)(lVar13 + 0x471);
              }
            }
            bVar19 = *pbVar14;
            if (bVar19 < 8) goto LAB_01c73610;
          }
          pbVar14 = PTR_DAT_04bb5038;
        }
      }
      else {
        if (*(int *)(lVar13 + 0x15c) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x158);
        }
        if (7 < *pbVar14) {
          if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01c7359c;
          }
          goto LAB_01c735a8;
        }
      }
      bVar19 = *pbVar14;
      if (7 < bVar19) {
        bVar19 = 0xff;
      }
LAB_01c73610:
      if (*(char *)(param_1 + 0x290) == '\0') {
        FUN_01185240(puVar16);
      }
      local_4c = bVar19;
      if (7 < bVar19) {
        local_4c = 0xff;
      }
      local_50 = 0;
      local_4b = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "System_NetCloudIsland";
      pcStack_58 = "CloudIsland_NetErrorPlayable";
      local_60 = local_70;
      local_48 = puVar16;
      FUN_01184fd0(param_1 + 0x1c0,&local_70);
      FUN_01180280(*(undefined8 *)PTR_DAT_04bb3240,&local_70);
      return;
    }
    uVar11 = FUN_00a78d48();
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x1b8);
    if (uVar12 == 2) {
      puVar16 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      if (puVar16 != &DAT_0407ebb1) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x1d8) < 1) {
          iVar3 = *(int *)(param_1 + 0x1d8) + -1;
        }
        memset(puVar16,0,(long)iVar3);
        *(undefined1 *)((long)puVar16 + (long)iVar3) = 0;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x228);
      if (puVar16 != &DAT_0407ebb1) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x230) < 1) {
          iVar3 = *(int *)(param_1 + 0x230) + -1;
        }
        memset(puVar16,0,(long)iVar3);
        *(undefined1 *)((long)puVar16 + (long)iVar3) = 0;
      }
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined2 *)(param_1 + 0x280) = 0xff;
      return;
    }
    if (uVar12 == 0) goto LAB_01c73460;
LAB_01c73430:
    if ((uVar12 & 0xfffffffd) != 4) {
      return;
    }
    uVar11 = FUN_00a78d48();
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x290) == '\0') {
      FUN_01185240(puVar16);
    }
    FUN_01185328(puVar16);
  }
  if (*(char *)(param_1 + 0x290) == '\0') {
    return;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x1b0);
LAB_01c734a4:
  (*(code *)*puVar16)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x290) = 0;
  return;
}

