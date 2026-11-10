
ulong FUN_00114ce0(long param_1,void *param_2,ulong param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  size_t __n;
  undefined1 *puVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 local_90;
  undefined2 local_8e [55];
  
  puVar17 = &local_90;
  lVar16 = *(long *)(param_1 + 0x10);
  lVar4 = lVar16 + ((ulong)*(byte *)(lVar16 + 0x24) << 0x18 |
                    (ulong)*(byte *)(lVar16 + 0x25) << 0x10 | (ulong)*(byte *)(lVar16 + 0x26) << 8 |
                   (ulong)*(byte *)(lVar16 + 0x27)) + (ulong)*(uint *)(param_1 + 0x40);
  uVar14 = ((ulong)*(byte *)(lVar4 + 5) & 0xf) << 4;
  uVar20 = (ulong)(*(byte *)(lVar4 + 6) >> 4);
  uVar15 = param_3 & 0xffff;
  if (uVar15 < (uVar14 | uVar20 & 0xfe) + 2) {
LAB_00114d44:
    uVar20 = 0x9413;
  }
  else {
    uVar20 = (uVar14 | uVar20) >> 1;
    if ((uint)uVar20 == 0) {
      uVar14 = (ulong)*(byte *)(lVar4 + 7) << 8 | ((ulong)*(byte *)(lVar4 + 6) & 0xf) << 0x10 |
               (ulong)*(byte *)(lVar4 + 8);
      uVar19 = (ulong)*(byte *)(lVar16 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar16 + 0x2d) << 0x10 |
               (ulong)*(byte *)(lVar16 + 0x2e) << 8 | (ulong)*(byte *)(lVar16 + 0x2f);
      bVar5 = *(byte *)(lVar4 + 9);
      if (CONCAT11(*(undefined1 *)(lVar16 + 0x20),*(undefined1 *)(lVar16 + 0x21)) == 0) {
        if (uVar15 < ((ulong)bVar5 & 0xfe) + 2) {
          uVar20 = 0x9412;
        }
        else {
          uVar10 = (uint)(bVar5 >> 1);
          uVar20 = (ulong)uVar10;
          if (uVar10 != 0) {
            uVar13 = 0;
            puVar12 = (undefined1 *)(lVar16 + uVar19 + uVar14);
            do {
              puVar3 = (undefined1 *)((long)param_2 + (ulong)uVar13 * 2);
              uVar13 = uVar13 + 1;
              *puVar3 = *puVar12;
              puVar1 = puVar12 + 1;
              puVar12 = puVar12 + 2;
              puVar3[1] = *puVar1;
            } while (uVar13 < uVar10);
          }
          *(undefined2 *)((long)param_2 + (ulong)uVar10 * 2) = 0;
        }
        goto LAB_00114dc4;
      }
      if (CONCAT11(*(undefined1 *)(lVar16 + 0x22),*(undefined1 *)(lVar16 + 0x23)) == 2) {
        if (bVar5 == 0) {
          uVar20 = 0;
        }
        else {
          bVar6 = *(byte *)(lVar16 + 0x1c);
          bVar7 = *(byte *)(lVar16 + 0x1d);
          bVar8 = *(byte *)(lVar16 + 0x1e);
          bVar9 = *(byte *)(lVar16 + 0x1f);
          uVar20 = 0;
          lVar11 = 0;
          do {
            lVar18 = lVar11;
            if (uVar15 < lVar18 + 4U) {
              uVar20 = (ulong)((uint)param_3 >> 1 & 0x7fff);
              goto LAB_00114f30;
            }
            pbVar2 = (byte *)(lVar16 + uVar19 + uVar14 + uVar20);
            uVar20 = uVar20 + 1;
            puVar12 = (undefined1 *)
                      (lVar16 + ((ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 |
                                (ulong)bVar9) + ((ulong)((uint)*pbVar2 * 2 + 0xfffe) & 0xfffe));
            *(undefined1 *)((long)local_8e + lVar18 + -2) = *puVar12;
            *(undefined1 *)((long)local_8e + lVar18 + -1) = puVar12[1];
            lVar11 = lVar18 + 2;
          } while (uVar20 < bVar5);
          puVar17 = (undefined2 *)((long)local_8e + lVar18);
        }
        *puVar17 = 0;
      }
      else {
        uVar20 = 0;
      }
LAB_00114f30:
      __n = (uVar20 & 0xffff) * 2;
      if (uVar15 < __n + 2) goto LAB_00114d44;
      if (*(char *)(lVar4 + 3) < '\0') {
        FUN_00114550(&local_90,param_2,uVar20 & 0xffffffff);
      }
      else if ((uVar20 & 0xffff) == 0) {
        uVar20 = 0;
      }
      else {
        memcpy(param_2,&local_90,__n);
      }
    }
    else {
      uVar13 = 0;
      puVar12 = (undefined1 *)
                (lVar16 + ((ulong)*(byte *)(lVar16 + 0x28) << 0x18 |
                           (ulong)*(byte *)(lVar16 + 0x29) << 0x10 |
                           (ulong)*(byte *)(lVar16 + 0x2a) << 8 | (ulong)*(byte *)(lVar16 + 0x2b)) +
                ((ulong)*(byte *)(lVar4 + 3) << 0xc | (ulong)*(byte *)(lVar4 + 4) << 4 |
                (ulong)(*(byte *)(lVar4 + 5) >> 4)));
      do {
        puVar3 = (undefined1 *)((long)param_2 + (ulong)uVar13 * 2);
        uVar13 = uVar13 + 1;
        *puVar3 = *puVar12;
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        puVar3[1] = *puVar1;
      } while ((uint)uVar13 < (uint)uVar20);
    }
    *(undefined2 *)((long)param_2 + (uVar20 & 0xffff) * 2) = 0;
  }
LAB_00114dc4:
  return uVar20 & 0xffffffff;
}

