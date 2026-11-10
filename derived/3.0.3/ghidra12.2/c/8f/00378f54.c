
void FUN_00378f54(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  
  if ((*(byte *)(param_1 + 0x10) & 3) == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar8 = uVar6 >> 4 & 3;
  uVar4 = uVar8;
  if ((uVar6 & 3) <= uVar8) {
    uVar4 = uVar6 & 3;
  }
  lVar11 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar1 = 0;
  if (lVar11 != 0) {
    lVar1 = lVar11 + (ulong)*(uint *)(param_1 + 0x34);
  }
  *(undefined4 *)(lVar1 + 0x84) = 0;
  uVar3 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar3 != 0) {
    uVar18 = *(uint *)(param_1 + 0x10);
    lVar11 = ((ulong)uVar18 & 3) * 0x10;
    uVar12 = (ulong)(uVar18 >> 2) & 3;
    lVar1 = *(long *)(param_1 + 0x18) + lVar11 + uVar12 * 0x14;
    if (*(char *)(lVar1 + 1) != '\a') {
      if ((uVar3 == 1) || (*(char *)(lVar1 + 0x11) == '\a')) {
        uVar17 = 1;
      }
      else if (uVar3 == 2) {
        uVar17 = 2;
      }
      else {
        uVar17 = 2;
        if (*(char *)(lVar1 + 0x21) != '\a') {
          uVar17 = 3;
        }
      }
      if (uVar3 <= uVar17) goto LAB_003790e0;
    }
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 200) + 0x38) +
             *(long *)(*(long *)(param_1 + 0x18) +
                      (((ulong)uVar18 & 0x30) + lVar11 | (ulong)(uVar18 >> 6) & 8) +
                      ((ulong)(uVar18 >> 8) & 0xc) + ((ulong)(uVar18 >> 4) & 0x1c) +
                      ((ulong)(uVar18 >> 0xc) & 8) +
                      ((ulong)(uVar18 >> 0xd) & 0x60) + (ulong)(-(uVar18 >> 0xc & 1) & 0xc) +
                      (ulong)(-(uVar18 >> 0x10 & 1) & 0x1c) +
                      ((ulong)(uVar18 >> 0xc) & 0x10) * ((ulong)(uVar18 >> 6) & 7) +
                      (ulong)((int)(uVar18 << 0xe) >> 0x1f & 0x74) +
                      (((ulong)(uVar18 >> 0xd) & 3) + uVar12) * 0x14));
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
  }
LAB_003790e0:
  if (uVar4 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar13 = (ulong)uVar3;
    uVar15 = (ulong)(uVar3 >> 2) & 3;
    lVar11 = *(long *)(param_1 + 0x18);
    lVar1 = (uVar13 & 3) * 0x10;
    uVar12 = uVar15 << 2 | ((ulong)(uVar3 >> 2) & 3) << 4;
    bVar7 = *(byte *)(lVar11 + lVar1 + uVar12 + 1);
    uVar18 = (uint)bVar7;
    bVar10 = uVar18 - 3 < 3;
    local_6c = (uint)(uVar18 == 6 || bVar10);
    if (uVar18 == 6 || bVar10) {
      FUN_00379608(param_1,param_2,param_3,param_4,
                   lVar11 + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                   ((uVar13 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                   ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) + uVar12,0);
      uVar12 = 1;
joined_r0x0037918c:
      uVar13 = 0;
    }
    else {
      if (bVar7 != 7) {
        uVar12 = 0;
        goto joined_r0x0037918c;
      }
      FUN_00379df0(param_1,param_2,
                   lVar11 + ((uVar13 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                            ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                            ((ulong)(uVar3 >> 0xc) & 8) +
                            ((ulong)(uVar3 >> 0xd) & 0x60) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                            (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
                            ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) +
                            (ulong)((int)(uVar3 << 0xe) >> 0x1f & 0x74) +
                            (ulong)((uVar3 & 0x300000) != 0) * 0x10 +
                            (((ulong)(uVar3 >> 0xd) & 3) + uVar15) * 0x14,0);
      uVar12 = 0;
      uVar13 = 1;
    }
    if (uVar4 != 1) {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar14 = (ulong)uVar3;
      uVar16 = (ulong)(uVar3 >> 2) & 3;
      lVar11 = *(long *)(param_1 + 0x18);
      lVar1 = (uVar14 & 3) * 0x10;
      uVar15 = uVar16 << 2 | ((ulong)(uVar3 >> 2) & 3) << 4;
      bVar7 = *(byte *)(lVar11 + lVar1 + uVar15 + 0x11);
      uVar18 = (uint)bVar7;
      bVar10 = 2 < uVar18 - 3;
      uStack_68 = (uint)(uVar18 == 6 || !bVar10);
      if (uVar18 != 6 && bVar10) {
        if (bVar7 == 7) {
          lVar9 = uVar13 * 0x58;
          uVar13 = (ulong)((int)uVar13 + 1);
          FUN_00379df0(param_1,param_2,
                       lVar11 + ((uVar14 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                                ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                                ((ulong)(uVar3 >> 0xc) & 8) +
                                ((ulong)(uVar3 >> 0xd) & 0x60) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc)
                                + (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
                                ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) +
                                (ulong)((int)(uVar3 << 0xe) >> 0x1f & 0x74) +
                                (ulong)((uVar3 & 0x300000) != 0) * 0x10 +
                                (((ulong)(uVar3 >> 0xd) & 3) + uVar16) * 0x14 + lVar9,1);
        }
      }
      else {
        lVar9 = uVar12 * 0x14;
        uVar12 = (ulong)((int)uVar12 + 1);
        FUN_00379608(param_1,param_2,param_3,param_4,
                     lVar11 + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                     ((uVar14 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                     ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) + uVar15 + lVar9,1);
      }
      if (uVar4 != 2) {
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar14 = (ulong)uVar3;
        uVar16 = (ulong)(uVar3 >> 2) & 3;
        lVar11 = *(long *)(param_1 + 0x18);
        lVar1 = (uVar14 & 3) * 0x10;
        uVar15 = uVar16 << 2 | ((ulong)(uVar3 >> 2) & 3) << 4;
        bVar7 = *(byte *)(lVar11 + lVar1 + uVar15 + 0x21);
        uVar18 = (uint)bVar7;
        bVar10 = 2 < uVar18 - 3;
        local_64 = (uint)(uVar18 == 6 || !bVar10);
        if (uVar18 != 6 && bVar10) {
          if (bVar7 == 7) {
            FUN_00379df0(param_1,param_2,
                         lVar11 + ((uVar14 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                                  ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                                  ((ulong)(uVar3 >> 0xc) & 8) +
                                  ((ulong)(uVar3 >> 0xd) & 0x60) +
                                  (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                                  (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
                                  ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) +
                                  (ulong)((int)(uVar3 << 0xe) >> 0x1f & 0x74) +
                                  (ulong)((uVar3 & 0x300000) != 0) * 0x10 +
                                  (((ulong)(uVar3 >> 0xd) & 3) + uVar16) * 0x14 + uVar13 * 0x58,2);
          }
        }
        else {
          FUN_00379608(param_1,param_2,param_3,param_4,
                       lVar11 + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                       ((uVar14 & 0x30) + lVar1 | (ulong)(uVar3 >> 6) & 8) +
                       ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) + uVar15 +
                       uVar12 * 0x14,2);
        }
        if (uVar4 == 3) goto LAB_00379590;
      }
    }
  }
  uVar3 = uVar6 & 3;
  if (uVar8 <= (uVar6 & 3)) {
    uVar3 = uVar8;
  }
  iVar5 = 0;
  if (uVar4 < 3) {
    iVar5 = 2 - uVar4;
  }
  memset((void *)((long)&local_6c + (ulong)(uVar3 << 2)),0,(ulong)(iVar5 * 4 + 4));
LAB_00379590:
  lVar11 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar1 = 0;
  if (lVar11 != 0) {
    lVar1 = lVar11 + (ulong)*(uint *)(param_1 + 0x30);
  }
  *(ulong *)(lVar1 + 0x220) = CONCAT44(uStack_68,local_6c);
  *(uint *)(lVar1 + 0x228) = local_64;
  return;
}

