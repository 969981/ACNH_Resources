
byte FUN_018201d4(long param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  undefined1 uStack_41;
  byte local_40 [4];
  byte local_3c [4];
  undefined1 auStack_38 [8];
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01820260;
LAB_018202cc:
    local_40[0] = *pbVar9;
    if (7 < local_40[0]) {
      local_40[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    if ((*pbVar9 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar9 < 8)))) goto LAB_018202cc;
LAB_01820260:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_018202c4:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_018202cc;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar10 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar10 + 0x471);
      }
    }
    local_40[0] = *pbVar9;
    if (7 < local_40[0]) goto LAB_018202c4;
  }
  uVar7 = FUN_0254e720(local_40);
  if ((uVar7 & 1) == 0) {
    bVar5 = false;
    cVar2 = *(char *)(param_1 + 0x544);
  }
  else if (*(int *)(*(long *)PTR_DAT_04bb47e0 + 0x624) == 0) {
    bVar5 = true;
    cVar2 = *(char *)(param_1 + 0x544);
  }
  else {
    bVar5 = *(int *)(*(long *)PTR_DAT_04bb47e0 + 0x624) ==
            *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    cVar2 = *(char *)(param_1 + 0x544);
  }
  if (cVar2 != '\0') goto LAB_018204bc;
  if (((*(long *)(param_1 + 0x3d0) != 0) &&
      (lVar10 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar10 != 0)) &&
     (*(float *)(lVar10 + 0x2b8) < *(float *)(lVar10 + 0x2b0))) {
    lVar10 = *(long *)puVar4;
    if (lVar10 == 0) {
LAB_0182039c:
      if (*pbVar11 < 8) goto LAB_01820414;
LAB_018203a8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0182040c:
        pbVar11 = PTR_DAT_04bb5038;
        goto LAB_01820414;
      }
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar10 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar10 + 0x471);
        }
      }
      local_3c[0] = *pbVar9;
      if (7 < local_3c[0]) goto LAB_0182040c;
    }
    else {
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar11 = (byte *)(lVar10 + 0x158);
      }
      if (7 < *pbVar11) {
        if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0182039c;
        }
        goto LAB_018203a8;
      }
LAB_01820414:
      local_3c[0] = *pbVar11;
      if (7 < local_3c[0]) goto LAB_018204b8;
    }
    FUN_0253395c(auStack_38,local_3c,*(undefined4 *)PTR_DAT_04bb3238);
    iVar6 = FUN_01705ce0(auStack_38);
    bVar5 = bVar5 ^ 1;
    if (iVar6 != 3) {
      bVar5 = 1;
    }
    if (((bVar5 == 0) && (pfVar8 = (float *)FUN_0252d9bc(0), pfVar8 != (float *)0x0)) &&
       (fVar12 = *pfVar8 - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
       fVar13 = pfVar8[2] - *(float *)(*(long *)(param_1 + 0x300) + 0x280),
       SQRT(fVar13 * fVar13 + fVar12 * fVar12) < *(float *)(*(long *)(param_1 + 0x3d8) + 0x298))) {
      FUN_025196e4(&uStack_41);
      bVar5 = FUN_0254e720(&uStack_41);
      goto LAB_018204bc;
    }
  }
LAB_018204b8:
  bVar5 = 0;
LAB_018204bc:
  return bVar5 & 1;
}

