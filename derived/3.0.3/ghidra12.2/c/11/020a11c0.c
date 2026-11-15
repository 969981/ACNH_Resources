
undefined8 FUN_020a11c0(void)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  bool bVar5;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  pfVar6 = (float *)FUN_0252d9bc(0);
  puVar4 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (pfVar6 == (float *)0x0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020a1258;
LAB_020a12c4:
    local_38[0] = *pbVar9;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar9 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar9 < 8)))) goto LAB_020a12c4;
LAB_020a1258:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020a12bc:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_020a12c4;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar11 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x471);
      }
    }
    local_38[0] = *pbVar9;
    if (7 < local_38[0]) goto LAB_020a12bc;
  }
  uVar7 = FUN_0255b714(local_38,1);
  if ((uVar7 & 1) == 0) {
    lVar11 = *(long *)puVar4;
    pbVar9 = pbVar10;
    if (lVar11 == 0) {
      if (7 < *pbVar10) goto LAB_020a134c;
LAB_020a13b8:
      local_3c[0] = *pbVar9;
      if (7 < local_3c[0]) {
        local_3c[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x158);
      }
      if ((*pbVar9 < 8) ||
         (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar9 < 8)))) goto LAB_020a13b8;
LAB_020a134c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020a13b0:
        pbVar9 = PTR_DAT_04bb5038;
        goto LAB_020a13b8;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar11 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar11 + 0x471);
        }
      }
      local_3c[0] = *pbVar9;
      if (7 < local_3c[0]) goto LAB_020a13b0;
    }
    uVar7 = FUN_0255bef4(local_3c);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)) {
    return 0;
  }
  fVar14 = *pfVar6;
  lVar11 = *(long *)PTR_DAT_04bb5c90;
  fVar13 = (float)*(int *)(lVar11 + 0x38) * 5.0 + 5.0;
  bVar5 = false;
  if (((float)*(int *)(lVar11 + 0x28) * 5.0 <= fVar14) &&
     (bVar5 = false, !NAN(fVar14) && !NAN(fVar13))) {
    bVar5 = fVar14 < fVar13;
  }
  if (!bVar5) {
    return 0;
  }
  fVar13 = (float)*(int *)(lVar11 + 0x3c) * 5.0 + 5.0;
  fVar14 = pfVar6[2];
  bVar5 = false;
  if (((float)*(int *)(lVar11 + 0x2c) * 5.0 <= fVar14) &&
     (bVar5 = false, !NAN(fVar14) && !NAN(fVar13))) {
    bVar5 = fVar14 < fVar13;
  }
  if (!bVar5) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb38d0;
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
LAB_020a14c4:
    if (7 < *pbVar10) {
LAB_020a14d0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        uVar8 = (uint)*pbVar10;
        if (*pbVar10 < 8) goto LAB_020a1540;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020a14c4;
      }
      goto LAB_020a14d0;
    }
  }
  uVar8 = (uint)*pbVar10;
  if (7 < uVar8) {
    uVar8 = 0xff;
  }
LAB_020a1540:
  if (7 < uVar8) {
    uVar8 = 0xff;
  }
  local_18 = 0;
  local_33 = 1;
  uVar3 = (undefined1)uVar8;
  local_12 = 0;
  local_14 = 0xff00;
  *(byte *)(lVar12 + 0x88) = *(byte *)(lVar12 + 0x88) | (byte)(1 << (ulong)(uVar8 & 0x1f));
  local_34 = uVar3;
  if (-1 < *(int *)(PTR_DAT_04bc2ba8 + 8)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc2ba8 + 8),&local_18,
                 &local_34,2,0);
  }
  local_40[0] = uVar3;
  FUN_008a6584(lVar12,local_40,1,0xffffffff);
  return 1;
}

