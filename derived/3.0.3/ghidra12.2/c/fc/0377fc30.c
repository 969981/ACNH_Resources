
/* WARNING: Removing unreachable block (ram,0x037804a0) */
/* WARNING: Removing unreachable block (ram,0x037803c4) */
/* WARNING: Removing unreachable block (ram,0x03780394) */
/* WARNING: Removing unreachable block (ram,0x03780330) */
/* WARNING: Removing unreachable block (ram,0x0378040c) */
/* WARNING: Removing unreachable block (ram,0x037802c8) */
/* WARNING: Removing unreachable block (ram,0x0377fcb4) */
/* WARNING: Removing unreachable block (ram,0x0377fefc) */
/* WARNING: Removing unreachable block (ram,0x037802e8) */
/* WARNING: Removing unreachable block (ram,0x03780428) */
/* WARNING: Removing unreachable block (ram,0x0378034c) */
/* WARNING: Removing unreachable block (ram,0x037803a8) */
/* WARNING: Removing unreachable block (ram,0x0378048c) */
/* WARNING: Removing unreachable block (ram,0x037804bc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa6 : 0x03780490 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_0377fc30(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  ushort uVar20;
  long lVar21;
  uint *puVar22;
  
  lVar21 = *(long *)PTR_DAT_04bb4960;
  if (((lVar21 == 0) ||
      (uVar12 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8),
      *(uint *)(lVar21 + 0x1d8) <= uVar12)) ||
     (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8),
     puVar22 == (uint *)0x0)) {
    return '\0';
  }
  if ((((param_2 & 1) == 0) || (lVar15 = *(long *)PTR_DAT_04bb46b0, lVar15 == 0)) ||
     ((((*(byte *)(lVar15 + 0x50d) ^ 0xff) & 6) != 0 ||
      (lVar15 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x188) + 0x38))(), lVar15 == 0))
     )) {
LAB_0377fec0:
    if (((param_1 == 5) || (lVar15 = *(long *)PTR_DAT_04bb46b0, lVar15 == 0)) ||
       ((((*(byte *)(lVar15 + 0x50d) ^ 0xff) & 6) != 0 ||
        (lVar15 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x188) + 0x38))(), lVar15 == 0
        )))) {
switchD_0377ff44_default:
      uVar20 = 0;
    }
    else {
      switch(param_1) {
      case 0:
        lVar15 = lVar15 + 0x390a0;
        break;
      case 1:
        lVar15 = lVar15 + 0x3a488;
        break;
      case 2:
        lVar15 = lVar15 + 0x3b870;
        break;
      case 3:
        lVar15 = lVar15 + 0x3cc58;
        break;
      case 4:
        lVar15 = lVar15 + 0x3e040;
        break;
      default:
        goto switchD_0377ff44_default;
      }
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar9 == (undefined8 *)0x0)) {
        uVar20 = *(ushort *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8)) >> 1 & 1;
      }
      else {
        uVar10 = (**(code **)*puVar9)();
        uVar20 = *(ushort *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8)) >> 1 & 1;
        if ((uVar10 & 1) != 0) {
          lVar15 = *(long *)(lVar15 + 0x28);
          goto joined_r0x0378057c;
        }
      }
    }
  }
  else {
    if ((*(long **)(lVar15 + 0x36620) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar15 + 0x36620), puVar9 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      uVar10 = uVar10 & 0xffffffff;
    }
    pcVar16 = (char *)(*(long *)(lVar15 + 0x36608) + *(long *)(lVar15 + 0x36600));
    if ((*pcVar16 == '\x02') &&
       ((((*(long *)PTR_DAT_04bb27f8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0)) ||
         ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 &&
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)))) &&
        (((param_1 != 5 && (param_1 != 6)) && (param_1 == *(ushort *)(pcVar16 + 0x899c))))))) {
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar15 + 0x36620) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x36620) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
    }
    else {
      if (*(long **)(lVar15 + 0x36620) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar15 + 0x36620);
        uVar11 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar9)();
          pcVar16 = (char *)(*(long *)(lVar15 + 0x36608) + *(long *)(lVar15 + 0x36600));
        }
      }
      if ((((*pcVar16 == '\x02') && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
          (((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 0 &&
            ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
             ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) && (param_1 != 5)))) && (param_1 != 6)) {
        bVar8 = param_1 == *(ushort *)(pcVar16 + 0x899c);
      }
      else {
        bVar8 = false;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x36620) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x36620) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar15 + 0x36620) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x36620) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
      if (!bVar8) goto LAB_0377fec0;
    }
    if (*(long **)(lVar15 + 0x37ce0) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar15 + 0x37ce0);
      uVar10 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar9)();
      }
    }
    uVar20 = *(ushort *)(*(long *)(lVar15 + 0x37cc8) + *(long *)(lVar15 + 0x37cc0)) >> 1 & 1;
    if ((uVar10 & 1) != 0) {
      lVar15 = *(long *)(lVar15 + 0x37ce0);
joined_r0x0378057c:
      if ((lVar15 != 0) && (*(undefined8 **)(lVar15 + 8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar15 + 8))();
      }
    }
  }
  puVar5 = PTR_DAT_04bc3968;
  puVar4 = PTR_DAT_04bc3960;
  uVar12 = *puVar22;
  if (uVar12 == 0 || puVar22 == (uint *)(ulong)uVar12) {
LAB_0377ff68:
    uVar12 = 0;
  }
  else {
    puVar18 = (uint *)((long)puVar22 - (long)(ulong)uVar12);
    uVar12 = 0;
    if (*puVar18 != 0) {
      uVar12 = puVar18[1];
      if ((uVar12 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar15 != 0) {
          uVar13 = 0;
          if ((ulong)uVar12 != 0) {
            uVar13 = (uint)((ulong)((long)puVar22 - lVar15) / (ulong)uVar12);
          }
          if (*puVar18 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < *(uint *)PTR_DAT_04bcac10) &&
             (uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bcac10 + 8) + (long)(int)uVar13 * 2),
             uVar12 < 0xb)) goto LAB_0377ff6c;
        }
      }
      goto LAB_0377ff68;
    }
  }
LAB_0377ff6c:
  uVar13 = *puVar22;
  if (uVar13 == 0 || puVar22 == (uint *)(ulong)uVar13) {
LAB_0377ff80:
    uVar13 = 0;
  }
  else {
    puVar18 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
    uVar13 = 0;
    if (*puVar18 != 0) {
      uVar13 = puVar18[1];
      if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar15 != 0) {
          uVar14 = 0;
          if ((ulong)uVar13 != 0) {
            uVar14 = (uint)((ulong)((long)puVar22 - lVar15) / (ulong)uVar13);
          }
          if (*puVar18 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if ((uVar14 < *(uint *)PTR_DAT_04bcac18) &&
             (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bcac18 + 8) + (long)(int)uVar14 * 2),
             uVar13 < 0xb)) goto LAB_0377ff84;
        }
      }
      goto LAB_0377ff80;
    }
  }
LAB_0377ff84:
  uVar14 = *puVar22;
  if (uVar14 != 0 && puVar22 != (uint *)(ulong)uVar14) {
    puVar18 = (uint *)((long)puVar22 - (long)(ulong)uVar14);
    uVar14 = 0;
    if (*puVar18 == 0) goto LAB_0377ff9c;
    uVar14 = puVar18[1];
    if ((uVar14 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar15 != 0) {
        uVar3 = 0;
        if ((ulong)uVar14 != 0) {
          uVar3 = (uint)((ulong)((long)puVar22 - lVar15) / (ulong)uVar14);
        }
        if (*puVar18 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bcac20) &&
           (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bcac20 + 8) + (long)(int)uVar3 * 2),
           uVar14 < 0xb)) goto LAB_0377ff9c;
      }
    }
  }
  uVar14 = 0;
LAB_0377ff9c:
  if (*puVar22 != 0) {
    cVar7 = *PTR_DAT_04bc3960;
    do {
      if (cVar7 != '\0') {
        uVar3 = *(uint *)(puVar5 + 0x1c);
        if ((int)uVar3 < 0) {
          if (uVar3 == 0xffffffff) goto LAB_03780004;
        }
        else if ((char *)((ulong)uVar3 + (long)puVar22) != (char *)0x0) {
          bVar8 = *(char *)((ulong)uVar3 + (long)puVar22) != '\0';
          goto LAB_03780204;
        }
LAB_03780200:
        bVar8 = false;
LAB_03780204:
        uVar3 = *puVar22;
        if (uVar3 == 0) goto LAB_037802b4;
        uVar17 = *(uint *)(puVar5 + 0x20);
        goto LAB_03780228;
      }
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
LAB_03780004:
      puVar18 = (uint *)(ulong)*puVar22;
      bVar8 = false;
      if ((*puVar22 == 0) || (puVar22 == puVar18)) goto LAB_03780204;
      lVar15 = 0xc;
      if (*(char *)((long)puVar22 + (10 - (long)puVar18)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar22 + (lVar15 - (long)puVar18);
      if (lVar15 == 0) goto LAB_03780200;
      uVar10 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
      bVar8 = false;
      if (uVar10 == 0) goto LAB_03780204;
      piVar19 = (int *)(lVar15 + 4);
      while (piVar19[-1] != -0x4fb53614) {
        piVar19 = piVar19 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar8 = false;
          goto LAB_03780204;
        }
      }
      iVar1 = 0;
      if (*piVar19 != -1) {
        iVar1 = *piVar19;
      }
      *(int *)(puVar5 + 0x1c) = iVar1;
    } while (*puVar22 != 0);
  }
  bVar6 = false;
  bVar8 = false;
LAB_037802b8:
  if (uVar20 == 0) {
    if ((uVar12 == 8) ||
       (uVar12 = uVar12 - *(ushort *)(lVar21 + 0x3f8), *(uint *)(lVar21 + 0x3d8) <= uVar12)) {
      cVar7 = false;
    }
    else {
      cVar7 = *(long *)(*(long *)(lVar21 + 0x3e0) + (long)(int)uVar12 * 8) != 0;
    }
    if ((!bVar8) && (uVar13 != 8)) {
      uVar13 = uVar13 - *(ushort *)(lVar21 + 0x3f8);
      if (uVar13 < *(uint *)(lVar21 + 0x3d8)) {
        bVar8 = *(long *)(*(long *)(lVar21 + 0x3e0) + (long)(int)uVar13 * 8) != 0;
      }
      else {
        bVar8 = false;
      }
      cVar7 = bVar8 + cVar7;
    }
    if (bVar6) {
      return cVar7;
    }
  }
  else {
    if ((uVar12 == 8) ||
       (uVar12 = uVar12 - *(ushort *)(lVar21 + 0x3f8), *(uint *)(lVar21 + 0x3d8) <= uVar12)) {
      cVar7 = false;
    }
    else {
      cVar7 = *(long *)(*(long *)(lVar21 + 0x3e0) + (long)(int)uVar12 * 8) != 0;
    }
    if (uVar13 != 8) {
      uVar13 = uVar13 - *(ushort *)(lVar21 + 0x3f8);
      if (uVar13 < *(uint *)(lVar21 + 0x3d8)) {
        bVar8 = *(long *)(*(long *)(lVar21 + 0x3e0) + (long)(int)uVar13 * 8) != 0;
      }
      else {
        bVar8 = false;
      }
      cVar7 = bVar8 + cVar7;
    }
  }
  if (uVar14 != 8) {
    uVar14 = uVar14 - *(ushort *)(lVar21 + 0x3f8);
    if (uVar14 < *(uint *)(lVar21 + 0x3d8)) {
      bVar8 = *(long *)(*(long *)(lVar21 + 0x3e0) + (long)(int)uVar14 * 8) != 0;
    }
    else {
      bVar8 = false;
    }
    cVar7 = bVar8 + cVar7;
  }
  return cVar7;
LAB_03780228:
  if (-1 < (int)uVar17) {
    if ((char *)((long)puVar22 + (ulong)uVar17) == (char *)0x0) {
LAB_037802b4:
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)((long)puVar22 + (ulong)uVar17) != '\0';
    }
    goto LAB_037802b8;
  }
  if (uVar17 != 0xffffffff) goto LAB_037802b4;
  lVar15 = (long)puVar22 - (ulong)uVar3;
  bVar6 = false;
  if (lVar15 == 0) goto LAB_037802b8;
  lVar2 = 0xc;
  if (*(char *)(lVar15 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar15 == 0) goto LAB_037802b4;
  uVar10 = (ulong)*(ushort *)(lVar15 + 8);
  *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
  bVar6 = false;
  if (uVar10 == 0) goto LAB_037802b8;
  puVar18 = (uint *)(lVar2 + lVar15 + 4);
  while (puVar18[-1] != 0xcc2bec37) {
    puVar18 = puVar18 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      bVar6 = false;
      goto LAB_037802b8;
    }
  }
  bVar6 = false;
  uVar17 = 0;
  if (*puVar18 != 0xffffffff) {
    uVar17 = *puVar18;
  }
  *(uint *)(puVar5 + 0x20) = uVar17;
  uVar3 = *puVar22;
  if (uVar3 == 0) goto LAB_037802b8;
  goto LAB_03780228;
}

