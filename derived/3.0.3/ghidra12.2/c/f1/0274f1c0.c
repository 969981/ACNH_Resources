
void FUN_0274f1c0(undefined2 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 uVar10;
  char cVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  
  puVar8 = (uint *)FUN_0274eeb0(param_2);
  if (puVar8 != (uint *)0x0) {
    puVar9 = (uint *)FUN_0274eeb0(param_2);
    puVar7 = PTR_DAT_04bb6348;
    puVar6 = PTR_DAT_04bb6340;
    if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
      cVar11 = *PTR_DAT_04bb6340;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar13 = *puVar9;
        }
        else {
          if (*(int *)(puVar7 + 8) != -1) break;
          uVar13 = *puVar9;
        }
        if ((uVar13 == 0) || (puVar15 = (uint *)(ulong)uVar13, puVar9 == puVar15)) break;
        lVar5 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar9 + (lVar5 - (long)puVar15);
        if (lVar5 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar17 = (int *)(lVar5 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0274f2d4;
        }
        iVar1 = 0;
        if (*piVar17 != -1) {
          iVar1 = *piVar17;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0274f2d4:
    if (*puVar8 != 0) {
      cVar11 = *puVar6;
      do {
        if (cVar11 != '\0') {
          uVar13 = *(uint *)(puVar7 + 4);
          if ((int)uVar13 < 0) {
            if (uVar13 == 0xffffffff) goto LAB_0274f324;
          }
          else if ((uint *)((ulong)uVar13 + (long)puVar8) != (uint *)0x0) {
            uVar13 = *(uint *)((ulong)uVar13 + (long)puVar8);
            goto LAB_0274f3c4;
          }
LAB_0274f3c0:
          uVar13 = 0;
LAB_0274f3c4:
          uVar3 = *puVar8;
          uVar14 = param_3;
          if ((int)uVar13 <= (int)param_3) {
            uVar14 = uVar13;
          }
          if (0xfffe < uVar14) {
            uVar14 = 0xffff;
          }
          uVar12 = (undefined2)uVar14;
          if (uVar3 == 0) goto LAB_0274f490;
          uVar13 = *(uint *)(puVar7 + 8);
          goto LAB_0274f3f4;
        }
        cVar11 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_0274f324:
        puVar9 = (uint *)(ulong)*puVar8;
        uVar13 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0274f3c4;
        lVar5 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar8 + (lVar5 - (long)puVar9);
        uVar13 = 0;
        if (lVar5 == 0) goto LAB_0274f3c4;
        uVar16 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
        *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
        if (uVar16 == 0) goto LAB_0274f3c0;
        piVar17 = (int *)(lVar5 + 4);
        while (piVar17[-1] != 0x344b17d7) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0274f3c0;
        }
        iVar1 = 0;
        if (*piVar17 != -1) {
          iVar1 = *piVar17;
        }
        *(int *)(puVar7 + 4) = iVar1;
      } while (*puVar8 != 0);
    }
    uVar13 = param_3 & (int)param_3 >> 0x1f;
    if (0xfffe < uVar13) {
      uVar13 = 0xffff;
    }
    uVar12 = (undefined2)uVar13;
LAB_0274f490:
    uVar10 = 0;
    if (-1 < (int)param_3) {
      uVar10 = uVar12;
    }
LAB_0274f498:
    *param_1 = uVar10;
    puVar8 = (uint *)FUN_0274eeb0(param_2);
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar11 = *puVar6;
      while( true ) {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar13 = *puVar8;
        }
        else {
          if (*(int *)(puVar7 + 8) != -1) {
            return;
          }
          uVar13 = *puVar8;
        }
        if (uVar13 == 0) {
          return;
        }
        puVar9 = (uint *)(ulong)uVar13;
        if (puVar8 == puVar9) {
          return;
        }
        lVar5 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar8 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar16 == 0) {
          return;
        }
        piVar17 = (int *)(lVar5 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) {
            return;
          }
        }
        iVar1 = 0;
        if (*piVar17 != -1) {
          iVar1 = *piVar17;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar8 == 0) {
          return;
        }
      }
      return;
    }
  }
  return;
LAB_0274f3f4:
  if (-1 < (int)uVar13) {
    if ((ushort *)((long)puVar8 + (ulong)uVar13) != (ushort *)0x0) {
      uVar4 = *(ushort *)((long)puVar8 + (ulong)uVar13);
      uVar10 = 0;
      if (-1 < (int)param_3) {
        uVar10 = uVar12;
      }
      if (uVar4 < 0x800) {
        param_1 = param_1 + uVar4;
      }
      goto LAB_0274f498;
    }
    goto LAB_0274f490;
  }
  if ((uVar13 != 0xffffffff) || (lVar5 = (long)puVar8 - (ulong)uVar3, lVar5 == 0))
  goto LAB_0274f490;
  lVar2 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar5 == 0) goto LAB_0274f490;
  uVar16 = (ulong)*(ushort *)(lVar5 + 8);
  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_0274f490;
  puVar9 = (uint *)(lVar2 + lVar5 + 4);
  while (puVar9[-1] != 0x54706054) {
    puVar9 = puVar9 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_0274f490;
  }
  uVar13 = 0;
  if (*puVar9 != 0xffffffff) {
    uVar13 = *puVar9;
  }
  *(uint *)(puVar7 + 8) = uVar13;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_0274f490;
  goto LAB_0274f3f4;
}

