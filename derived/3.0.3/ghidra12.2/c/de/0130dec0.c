
undefined8 FUN_0130dec0(uint param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  char cVar15;
  undefined1 auStack_30 [8];
  long local_28;
  
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  lVar11 = *(long *)PTR_DAT_04bb27a8;
  uVar10 = *(uint *)(lVar11 + 0x7a8);
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (piVar14 = *(int **)(*(long *)(lVar11 + 0x698) + 8), piVar14 != (int *)0x0)) &&
        ((*(int *)(lVar11 + 0x6b0) == 0 || (**(char **)(lVar11 + 0x6b8) != '\0')))) &&
       (((*piVar14 != 0 && (piVar14[1] != 0)) && (*(ushort *)(piVar14 + 2) != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)piVar14 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar12) + (long)piVar14);
      goto joined_r0x0130e054;
    }
  }
  else if (uVar10 != 0) {
    puVar13 = (uint *)**(undefined8 **)(lVar11 + 0x7a0);
joined_r0x0130e054:
    if ((puVar13 != (uint *)0x0) && (uVar9 = *puVar13, uVar9 != 0)) {
      cVar15 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar9 = *puVar13;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar13) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar13), uVar9 = (uint)bVar3, bVar3 < 0xd))
            goto LAB_0130e05c;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar9;
        uVar9 = 0;
        if ((puVar7 == (uint *)0x0) || (uVar9 = 0, puVar13 == puVar7)) goto LAB_0130e05c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar7);
        uVar9 = 0;
        if (lVar1 == 0) goto LAB_0130e05c;
        uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar14 = (int *)(lVar1 + 4);
        while (piVar14[-1] != -0x50776a95) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0130e058;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar12;
        uVar9 = *puVar13;
        if (uVar9 == 0) break;
      } while( true );
    }
  }
LAB_0130e058:
  uVar9 = 0;
LAB_0130e05c:
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  if (uVar9 == param_1) {
    return 0;
  }
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar11 + 0x698) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar11 + 0x6b0) < 2 || (*(char *)(*(long *)(lVar11 + 0x6b8) + 1) != '\0')))) &&
       (((1 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] + (uint)(ushort)puVar13[2] * 8 + iVar12) + (long)puVar13
                        );
      goto joined_r0x0130e1f0;
    }
  }
  else if (1 < uVar10) {
    puVar13 = *(uint **)(*(long *)(lVar11 + 0x7a0) + (ulong)(1 < *(uint *)(lVar11 + 0x798)) * 8);
joined_r0x0130e1f0:
    if ((puVar13 != (uint *)0x0) && (uVar9 = *puVar13, uVar9 != 0)) {
      cVar15 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar9 = *puVar13;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar13) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar13), uVar9 = (uint)bVar3, bVar3 < 0xd))
            goto LAB_0130e1f8;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar9;
        uVar9 = 0;
        if ((puVar7 == (uint *)0x0) || (uVar9 = 0, puVar13 == puVar7)) goto LAB_0130e1f8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar7);
        uVar9 = 0;
        if (lVar1 == 0) goto LAB_0130e1f8;
        uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar14 = (int *)(lVar1 + 4);
        while (piVar14[-1] != -0x50776a95) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0130e1f4;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar12;
        uVar9 = *puVar13;
        if (uVar9 == 0) break;
      } while( true );
    }
  }
LAB_0130e1f4:
  uVar9 = 0;
LAB_0130e1f8:
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  if (uVar9 == param_1) {
    return 1;
  }
  uVar9 = 2;
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar11 + 0x698) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar11 + 0x6b0) < 3 || (*(char *)(*(long *)(lVar11 + 0x6b8) + 2) != '\0')))) &&
       (((2 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * 2 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                        (long)puVar13);
      goto joined_r0x0130e384;
    }
  }
  else if (2 < uVar10) {
    if (*(uint *)(lVar11 + 0x798) < 3) {
      uVar9 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar11 + 0x7a0) + (ulong)uVar9 * 8);
joined_r0x0130e384:
    if ((puVar13 != (uint *)0x0) && (uVar9 = *puVar13, uVar9 != 0)) {
      cVar15 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar9 = *puVar13;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar13) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar13), uVar9 = (uint)bVar3, bVar3 < 0xd))
            goto LAB_0130e38c;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar9;
        uVar9 = 0;
        if ((puVar7 == (uint *)0x0) || (puVar13 == puVar7)) goto LAB_0130e38c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar7);
        uVar9 = 0;
        if (lVar1 == 0) goto LAB_0130e38c;
        uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar14 = (int *)(lVar1 + 4);
        while (piVar14[-1] != -0x50776a95) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0130e388;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar12;
        uVar9 = *puVar13;
        if (uVar9 == 0) break;
      } while( true );
    }
  }
LAB_0130e388:
  uVar9 = 0;
LAB_0130e38c:
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  if (uVar9 == param_1) {
    return 2;
  }
  uVar9 = 3;
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar11 + 0x698) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar11 + 0x6b0) < 4 || (*(char *)(*(long *)(lVar11 + 0x6b8) + 3) != '\0')))) &&
       (((3 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * 3 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                        (long)puVar13);
      goto joined_r0x0130e520;
    }
  }
  else if (3 < uVar10) {
    if (*(uint *)(lVar11 + 0x798) < 4) {
      uVar9 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar11 + 0x7a0) + (ulong)uVar9 * 8);
joined_r0x0130e520:
    if ((puVar13 != (uint *)0x0) && (uVar9 = *puVar13, uVar9 != 0)) {
      cVar15 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar9 = *puVar13;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar13) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar13), uVar9 = (uint)bVar3, bVar3 < 0xd))
            goto LAB_0130e528;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar9;
        uVar9 = 0;
        if ((puVar7 == (uint *)0x0) || (puVar13 == puVar7)) goto LAB_0130e528;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar7);
        uVar9 = 0;
        if (lVar1 == 0) goto LAB_0130e528;
        uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar14 = (int *)(lVar1 + 4);
        while (piVar14[-1] != -0x50776a95) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0130e524;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar12;
        uVar9 = *puVar13;
        if (uVar9 == 0) break;
      } while( true );
    }
  }
LAB_0130e524:
  uVar9 = 0;
LAB_0130e528:
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  if (uVar9 == param_1) {
    return 3;
  }
  uVar9 = 4;
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar11 + 0x698) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar11 + 0x6b0) < 5 || (*(char *)(*(long *)(lVar11 + 0x6b8) + 4) != '\0')))) &&
       (((4 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * 4 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                        (long)puVar13);
      goto joined_r0x0130e6b4;
    }
  }
  else if (4 < uVar10) {
    if (*(uint *)(lVar11 + 0x798) < 5) {
      uVar9 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar11 + 0x7a0) + (ulong)uVar9 * 8);
joined_r0x0130e6b4:
    if ((puVar13 != (uint *)0x0) && (uVar9 = *puVar13, uVar9 != 0)) {
      cVar15 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar9 = *puVar13;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar13) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar13), uVar9 = (uint)bVar3, bVar3 < 0xd))
            goto LAB_0130e6bc;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar9;
        uVar9 = 0;
        if ((puVar7 == (uint *)0x0) || (puVar13 == puVar7)) goto LAB_0130e6bc;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar7);
        uVar9 = 0;
        if (lVar1 == 0) goto LAB_0130e6bc;
        uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar14 = (int *)(lVar1 + 4);
        while (piVar14[-1] != -0x50776a95) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0130e6b8;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar12;
        uVar9 = *puVar13;
        if (uVar9 == 0) break;
      } while( true );
    }
  }
LAB_0130e6b8:
  uVar9 = 0;
LAB_0130e6bc:
  if (uVar9 == param_1) {
    return 4;
  }
  uVar9 = 5;
  if ((int)uVar10 < 1) {
    if ((((*(long *)(lVar11 + 0x698) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar11 + 0x698) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar11 + 0x6b0) < 6 || (*(char *)(*(long *)(lVar11 + 0x6b8) + 5) != '\0')))) &&
       (((5 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      lVar11 = (ulong)(puVar13[1] * 5 + (uint)(ushort)puVar13[2] * 8 + iVar12) + (long)puVar13;
      goto joined_r0x0130e7a4;
    }
  }
  else if (5 < uVar10) {
    if (*(uint *)(lVar11 + 0x798) < 6) {
      uVar9 = 0;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x7a0) + (ulong)uVar9 * 8);
joined_r0x0130e7a4:
    if (((lVar11 != 0) &&
        (pbVar6 = (byte *)FUN_0130e980(lVar11,1,0xaf88956b,DAT_051874f0), pbVar6 != (byte *)0x0)) &&
       (uVar10 = (uint)*pbVar6, *pbVar6 < 0xd)) goto LAB_0130e7ac;
  }
  uVar10 = 0;
LAB_0130e7ac:
  if (uVar10 == param_1) {
    return 5;
  }
  FUN_0130d9a0(auStack_30,6);
  if (((local_28 == 0) ||
      (pbVar6 = (byte *)FUN_0130e980(local_28,1,0xaf88956b,DAT_051874f0), pbVar6 == (byte *)0x0)) ||
     (uVar10 = (uint)*pbVar6, 0xc < *pbVar6)) {
    uVar10 = 0;
  }
  if (uVar10 == param_1) {
    return 6;
  }
  FUN_0130d9a0(auStack_30,7);
  if (((local_28 == 0) ||
      (pbVar6 = (byte *)FUN_0130e980(local_28,1,0xaf88956b,DAT_051874f0), pbVar6 == (byte *)0x0)) ||
     (uVar10 = (uint)*pbVar6, 0xc < *pbVar6)) {
    uVar10 = 0;
  }
  if (uVar10 == param_1) {
    return 7;
  }
  FUN_0130d9a0(auStack_30,8);
  if (((local_28 == 0) ||
      (pbVar6 = (byte *)FUN_0130e980(local_28,1,0xaf88956b,DAT_051874f0), pbVar6 == (byte *)0x0)) ||
     (uVar10 = (uint)*pbVar6, 0xc < *pbVar6)) {
    uVar10 = 0;
  }
  if (uVar10 == param_1) {
    return 8;
  }
  return 0;
}

