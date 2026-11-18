
undefined8 FUN_03770770(short *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char cVar11;
  uint *puVar12;
  long *plVar13;
  undefined2 uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  uint local_b0;
  uint uStack_ac;
  long *local_a0;
  long local_90;
  long local_88 [3];
  long alStack_70 [4];
  
  if (param_2 != (int *)0x0) {
    if (0 < *param_2) {
      lVar4 = 0;
      puVar10 = *(undefined8 **)(param_2 + 4);
      do {
        puVar9 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar9 = puVar10;
        *(undefined8 **)(param_2 + 4) = puVar9;
        puVar10 = puVar9;
      } while (lVar4 < *param_2);
    }
    *param_2 = 0;
  }
  puVar3 = PTR_DAT_04bcacc0;
  puVar2 = PTR_DAT_04bcacb8;
  lVar4 = *(long *)PTR_DAT_04bb4958;
  if ((lVar4 == 0 || *param_1 == -1) ||
     ((uVar5 = *(uint *)(lVar4 + 0x5e0), (int)uVar5 < 1 &&
      (((*(long *)(lVar4 + 0x4d0) == 0 ||
        (puVar12 = *(uint **)(*(long *)(lVar4 + 0x4d0) + 8), puVar12 == (uint *)0x0)) ||
       (uVar5 = *puVar12, (int)uVar5 < 1)))))) {
    return 0;
  }
  uVar8 = 0;
  cVar11 = *PTR_DAT_04bcacb8;
LAB_0377087c:
  uVar1 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x618);
  if ((uVar1 < *(uint *)(lVar4 + 0x5f8)) &&
     (puVar12 = *(uint **)(*(long *)(lVar4 + 0x600) + (long)(int)uVar1 * 8), puVar12 != (uint *)0x0)
     ) {
    uStack_ac = 0;
    if (alStack_70 == (long *)0x0) {
      uVar1 = *puVar12;
      plVar13 = (long *)0x0;
    }
    else {
      uStack_ac = 4;
      uVar1 = *puVar12;
      plVar13 = alStack_70;
    }
    while (uVar1 != 0) {
      puVar16 = (uint *)(ulong)uVar1;
      local_b0 = 0;
      local_a0 = &local_90;
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
        puVar16 = (uint *)(ulong)*puVar12;
      }
      else {
        uVar17 = (ulong)*(uint *)puVar3;
        if (-1 < (int)*(uint *)puVar3) {
          if ((short *)(uVar17 + (long)puVar12) == (short *)0x0) {
            uVar17 = 0;
          }
          else {
            if (*(short *)(uVar17 + (long)puVar12) != -1) goto LAB_03770a58;
            uVar17 = 0;
          }
          goto LAB_03770980;
        }
        if (uVar17 != 0xffffffff) {
          uVar17 = 0;
          goto LAB_03770980;
        }
      }
      if (puVar16 == (uint *)0x0) {
        uVar17 = 0;
        goto LAB_03770980;
      }
      if (puVar12 == puVar16) {
        uVar17 = 0;
        goto LAB_03770980;
      }
      lVar19 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
      if (lVar19 == 0) {
        uVar17 = 0;
        goto LAB_03770980;
      }
      uVar17 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
      *(undefined4 *)puVar3 = 0xfffffffe;
      if (uVar17 == 0) {
        uVar17 = 0;
        goto LAB_03770980;
      }
      piVar18 = (int *)(lVar19 + 4);
      while (piVar18[-1] != -0x4404f151) {
        piVar18 = piVar18 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          uVar17 = 0;
          goto LAB_03770980;
        }
      }
      iVar6 = 0;
      if (*piVar18 != -1) {
        iVar6 = *piVar18;
      }
      *(int *)puVar3 = iVar6;
      uVar1 = *puVar12;
    }
  }
  goto LAB_03770870;
LAB_03770a58:
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *puVar2 = 1;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    puVar16 = (uint *)(ulong)*puVar12;
  }
  else if ((-1 < (int)uVar17) || (uVar17 != 0xffffffff)) goto LAB_03770be8;
  if ((puVar16 == (uint *)0x0) || (puVar12 == puVar16)) goto LAB_03770be8;
  lVar19 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
  if (lVar19 == 0) goto LAB_03770be8;
  uVar17 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
  *(undefined4 *)puVar3 = 0xfffffffe;
  if (uVar17 == 0) goto LAB_03770be8;
  puVar16 = (uint *)(lVar19 + 4);
  while (puVar16[-1] != 0xbbfb0eaf) {
    puVar16 = puVar16 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) goto LAB_03770be8;
  }
  uVar17 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar17 = (ulong)*puVar16;
  }
  *(int *)puVar3 = (int)uVar17;
  puVar16 = (uint *)(ulong)*puVar12;
  if (*puVar12 == 0) goto LAB_03770be8;
  goto LAB_03770a58;
LAB_03770be8:
  if (alStack_70 == (long *)0x0) {
    uVar17 = 0;
  }
  else {
    *plVar13 = (long)&local_90;
    uVar17 = 1;
    local_b0 = 1;
    local_a0 = local_88;
  }
LAB_03770980:
  do {
    plVar20 = local_a0;
    if (*puVar12 == 0) goto LAB_03770fd8;
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      uVar1 = *puVar12;
    }
    else {
      uVar15 = (ulong)*(uint *)(puVar3 + 4);
      if (-1 < (int)*(uint *)(puVar3 + 4)) {
        if (((short *)(uVar15 + (long)puVar12) == (short *)0x0) ||
           (*(short *)(uVar15 + (long)puVar12) == -1)) goto LAB_03770c80;
        uVar1 = *puVar12;
        break;
      }
      if (uVar15 != 0xffffffff) goto LAB_03770c80;
      uVar1 = *puVar12;
    }
    if ((uVar1 == 0) || (puVar16 = (uint *)(ulong)uVar1, puVar12 == puVar16)) goto LAB_03770c80;
    lVar19 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
    if (lVar19 == 0) goto LAB_03770c80;
    uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
    *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
    if (uVar15 == 0) goto LAB_03770c80;
    piVar18 = (int *)(lVar19 + 4);
    while (piVar18[-1] != -0x7964d8e1) {
      piVar18 = piVar18 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_03770c80;
    }
    iVar6 = 0;
    if (*piVar18 != -1) {
      iVar6 = *piVar18;
    }
    *(int *)(puVar3 + 4) = iVar6;
  } while( true );
joined_r0x03770b28:
  if (uVar1 == 0) goto LAB_03770c20;
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *puVar2 = 1;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
  }
  else {
    if (-1 < (int)uVar15) {
      if ((undefined2 *)(uVar15 + (long)puVar12) != (undefined2 *)0x0) {
        uVar14 = *(undefined2 *)(uVar15 + (long)puVar12);
        goto LAB_03770c24;
      }
      goto LAB_03770c20;
    }
    if (uVar15 != 0xffffffff) goto LAB_03770c20;
  }
  puVar16 = (uint *)(ulong)*puVar12;
  uVar14 = 0xffff;
  if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_03770c24;
  lVar19 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
  if (lVar19 == 0) goto LAB_03770c20;
  uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
  *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_03770c20;
  puVar16 = (uint *)(lVar19 + 4);
  while (puVar16[-1] != 0x869b271f) {
    puVar16 = puVar16 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_03770c20;
  }
  uVar15 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar15 = (ulong)*puVar16;
  }
  *(int *)(puVar3 + 4) = (int)uVar15;
  uVar1 = *puVar12;
  goto joined_r0x03770b28;
LAB_03770c20:
  uVar14 = 0xffff;
LAB_03770c24:
  if ((uint)uVar17 < uStack_ac) {
    if (local_a0 != (long *)0x0) {
      local_a0 = (long *)*local_a0;
    }
    *(undefined2 *)plVar20 = uVar14;
    uVar17 = (ulong)local_b0;
    if (local_b0 < uStack_ac) {
      plVar13[(int)local_b0] = (long)plVar20;
      local_b0 = local_b0 + 1;
      uVar17 = (ulong)local_b0;
    }
  }
LAB_03770c80:
  do {
    plVar20 = local_a0;
    if (*puVar12 == 0) goto LAB_03770fd8;
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      uVar1 = *puVar12;
    }
    else {
      uVar15 = (ulong)*(uint *)(puVar3 + 8);
      if (-1 < (int)*(uint *)(puVar3 + 8)) {
        if (((short *)(uVar15 + (long)puVar12) == (short *)0x0) ||
           (*(short *)(uVar15 + (long)puVar12) == -1)) goto LAB_03770d08;
        uVar1 = *puVar12;
        break;
      }
      if (uVar15 != 0xffffffff) goto LAB_03770d08;
      uVar1 = *puVar12;
    }
    if ((uVar1 == 0) || (puVar16 = (uint *)(ulong)uVar1, puVar12 == puVar16)) goto LAB_03770d08;
    lVar19 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
    if (lVar19 == 0) goto LAB_03770d08;
    uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
    *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
    if (uVar15 == 0) goto LAB_03770d08;
    piVar18 = (int *)(lVar19 + 4);
    while (piVar18[-1] != -0x3ec4a231) {
      piVar18 = piVar18 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_03770d08;
    }
    iVar6 = 0;
    if (*piVar18 != -1) {
      iVar6 = *piVar18;
    }
    *(int *)(puVar3 + 8) = iVar6;
  } while( true );
joined_r0x03770dc8:
  if (uVar1 == 0) goto LAB_03770f28;
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *puVar2 = 1;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
  }
  else {
    if (-1 < (int)uVar15) {
      if ((undefined2 *)(uVar15 + (long)puVar12) != (undefined2 *)0x0) {
        uVar14 = *(undefined2 *)(uVar15 + (long)puVar12);
        goto LAB_03770f2c;
      }
      goto LAB_03770f28;
    }
    if (uVar15 != 0xffffffff) goto LAB_03770f28;
  }
  puVar16 = (uint *)(ulong)*puVar12;
  uVar14 = 0xffff;
  if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_03770f2c;
  lVar19 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
  if (lVar19 == 0) goto LAB_03770f28;
  uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
  *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_03770f28;
  puVar16 = (uint *)(lVar19 + 4);
  while (puVar16[-1] != 0xc13b5dcf) {
    puVar16 = puVar16 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_03770f28;
  }
  uVar15 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar15 = (ulong)*puVar16;
  }
  *(int *)(puVar3 + 8) = (int)uVar15;
  uVar1 = *puVar12;
  goto joined_r0x03770dc8;
LAB_03770f28:
  uVar14 = 0xffff;
LAB_03770f2c:
  if ((uint)uVar17 < uStack_ac) {
    if (local_a0 != (long *)0x0) {
      local_a0 = (long *)*local_a0;
    }
    *(undefined2 *)plVar20 = uVar14;
    if (local_b0 < uStack_ac) {
      plVar13[(int)local_b0] = (long)plVar20;
      local_b0 = local_b0 + 1;
      uVar17 = (ulong)local_b0;
    }
    else {
      uVar17 = (ulong)local_b0;
    }
  }
LAB_03770d08:
  do {
    if (*puVar12 == 0) goto LAB_03770fd8;
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      uVar1 = *puVar12;
    }
    else {
      uVar15 = (ulong)*(uint *)(puVar3 + 0xc);
      if (-1 < (int)*(uint *)(puVar3 + 0xc)) {
        if (((short *)(uVar15 + (long)puVar12) != (short *)0x0) &&
           (*(short *)(uVar15 + (long)puVar12) != -1)) {
          uVar1 = *puVar12;
          break;
        }
        goto LAB_03770fd8;
      }
      if (uVar15 != 0xffffffff) goto LAB_03770fd8;
      uVar1 = *puVar12;
    }
    if ((uVar1 == 0) || (puVar16 = (uint *)(ulong)uVar1, puVar12 == puVar16)) goto LAB_03770fd8;
    lVar19 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
    if (lVar19 == 0) goto LAB_03770fd8;
    uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
    *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
    if (uVar15 == 0) goto LAB_03770fd8;
    piVar18 = (int *)(lVar19 + 4);
    while (piVar18[-1] != -0x3a48b81) {
      piVar18 = piVar18 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_03770fd8;
    }
    iVar6 = 0;
    if (*piVar18 != -1) {
      iVar6 = *piVar18;
    }
    *(int *)(puVar3 + 0xc) = iVar6;
  } while( true );
joined_r0x03770e7c:
  if (uVar1 == 0) goto LAB_03770f8c;
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *puVar2 = 1;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
  }
  else {
    if (-1 < (int)uVar15) {
      if ((undefined2 *)(uVar15 + (long)puVar12) != (undefined2 *)0x0) {
        uVar14 = *(undefined2 *)(uVar15 + (long)puVar12);
        goto LAB_03770f90;
      }
      goto LAB_03770f8c;
    }
    if (uVar15 != 0xffffffff) goto LAB_03770f8c;
  }
  puVar16 = (uint *)(ulong)*puVar12;
  uVar14 = 0xffff;
  if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_03770f90;
  lVar19 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar12 + (lVar19 - (long)puVar16);
  if (lVar19 == 0) goto LAB_03770f8c;
  uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
  *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_03770f8c;
  puVar16 = (uint *)(lVar19 + 4);
  while (puVar16[-1] != 0xfc5b747f) {
    puVar16 = puVar16 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_03770f8c;
  }
  uVar15 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar15 = (ulong)*puVar16;
  }
  *(int *)(puVar3 + 0xc) = (int)uVar15;
  uVar1 = *puVar12;
  goto joined_r0x03770e7c;
LAB_03770f8c:
  uVar14 = 0xffff;
LAB_03770f90:
  if ((uint)uVar17 < uStack_ac) {
    *(undefined2 *)local_a0 = uVar14;
    uVar17 = (ulong)local_b0;
    if (local_b0 < uStack_ac) {
      plVar13[(int)local_b0] = (long)local_a0;
      uVar17 = (ulong)(local_b0 + 1);
    }
  }
LAB_03770fd8:
  if (1 < (uint)uVar17) {
    lVar19 = uVar17 << 3;
    plVar20 = plVar13;
    do {
      if (*(short *)*plVar20 == *param_1) {
        if ((param_2 != (int *)0x0) && (iVar6 = *param_2, iVar6 < param_2[1])) {
          lVar4 = uVar17 << 3;
          do {
            if (iVar6 < param_2[1]) {
              puVar7 = (undefined2 *)*plVar13;
              puVar10 = *(undefined8 **)(param_2 + 4);
              if (puVar10 != (undefined8 *)0x0) {
                *(undefined8 *)(param_2 + 4) = *puVar10;
              }
              *(undefined2 *)puVar10 = *puVar7;
              iVar6 = *param_2;
              if (iVar6 < param_2[1]) {
                *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar6 * 8) = puVar10;
                iVar6 = *param_2 + 1;
                *param_2 = iVar6;
              }
            }
            plVar13 = plVar13 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        return 1;
      }
      plVar20 = plVar20 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
LAB_03770870:
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar5) {
    return 0;
  }
  goto LAB_0377087c;
}

