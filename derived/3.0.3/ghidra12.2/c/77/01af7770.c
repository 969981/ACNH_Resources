
undefined8 FUN_01af7770(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined2 uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  char cVar14;
  
  puVar5 = PTR_DAT_04bbff90;
  puVar4 = PTR_DAT_04bbff88;
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar13 = *(uint **)(param_1 + 0x10);
  if (puVar13 == (uint *)0x0) {
    uVar7 = 0xfffe;
  }
  else {
    uVar8 = *puVar13;
    if (uVar8 != 0 && puVar13 != (uint *)(ulong)uVar8) {
      puVar9 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
      if (((*puVar9 == 0) || (uVar8 = puVar9[1], uVar8 == 0)) || ((ulong)(ushort)puVar9[2] == 0)) {
LAB_01af7868:
        cVar14 = *PTR_DAT_04bbfe88;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *puVar3 = 1;
            memset(__s,0xff,0x1ac);
          }
          else {
            uVar8 = *(uint *)(__s + 0x128);
            if (-1 < (int)uVar8) {
              if ((undefined2 *)((ulong)uVar8 + (long)puVar13) == (undefined2 *)0x0)
              goto LAB_01af77b0;
              uVar7 = *(undefined2 *)((ulong)uVar8 + (long)puVar13);
              goto LAB_01af77bc;
            }
            if (uVar8 != 0xffffffff) goto LAB_01af77b0;
          }
          puVar9 = (uint *)(ulong)*puVar13;
          uVar7 = 0;
          if ((*puVar13 == 0) || (puVar13 == puVar9)) goto LAB_01af77bc;
          lVar1 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar9)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar13 + (lVar1 - (long)puVar9);
          if (lVar1 == 0) goto LAB_01af77b0;
          uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar9));
          *(undefined4 *)(__s + 0x128) = 0xfffffffe;
          if (uVar10 == 0) goto LAB_01af77b0;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_01af77b0;
          }
          uVar7 = 0;
          iVar12 = 0;
          if (*piVar11 != -1) {
            iVar12 = *piVar11;
          }
          *(int *)(__s + 0x128) = iVar12;
          if (*puVar13 == 0) goto LAB_01af77bc;
        } while( true );
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar1 == 0) goto LAB_01af7868;
      uVar2 = 0;
      if ((ulong)uVar8 != 0) {
        uVar2 = (uint)((ulong)((long)puVar13 - lVar1) / (ulong)uVar8);
      }
      if (*puVar9 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc0020 <= uVar2) ||
         (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
         (uVar8 - 0x5b6 & 0xffff) < 0xfa4b)) goto LAB_01af7868;
      if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
        if ((((*(long *)(DAT_0532a7e8 + 0xb0) != 0) &&
             (puVar13 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
            ((*(uint *)(DAT_0532a7e8 + 200) <= uVar8 ||
             (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
           (((uVar8 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * uVar8 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                            (long)puVar13);
          goto joined_r0x01af7adc;
        }
      }
      else if (uVar8 < *(uint *)(DAT_0532a7e8 + 0x1c0)) {
        if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar8) {
          uVar8 = 0;
        }
        puVar13 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01af7adc:
        if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
          cVar14 = *PTR_DAT_04bbff88;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar5 + 0xc);
              if (-1 < (int)uVar8) {
                if ((undefined2 *)((ulong)uVar8 + (long)puVar13) == (undefined2 *)0x0) break;
                uVar7 = *(undefined2 *)((ulong)uVar8 + (long)puVar13);
                goto LAB_01af7ae4;
              }
              if (uVar8 != 0xffffffff) break;
            }
            puVar9 = (uint *)(ulong)*puVar13;
            uVar7 = 0;
            if ((*puVar13 == 0) || (puVar13 == puVar9)) goto LAB_01af7ae4;
            lVar1 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar9)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar13 + (lVar1 - (long)puVar9);
            if (lVar1 == 0) break;
            uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar9));
            *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
            if (uVar10 == 0) break;
            piVar11 = (int *)(lVar1 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_01af7ae0;
            }
            uVar7 = 0;
            iVar12 = 0;
            if (*piVar11 != -1) {
              iVar12 = *piVar11;
            }
            *(int *)(puVar5 + 0xc) = iVar12;
            if (*puVar13 == 0) goto LAB_01af7ae4;
          } while( true );
        }
      }
LAB_01af7ae0:
      uVar7 = 0;
LAB_01af7ae4:
      pcVar6 = "Equip_%04d";
      goto LAB_01af77c4;
    }
    if (uVar8 != 0) goto LAB_01af7868;
LAB_01af77b0:
    uVar7 = 0;
  }
LAB_01af77bc:
  pcVar6 = "Item_%05d";
LAB_01af77c4:
  FUN_038d1270(param_2,pcVar6,uVar7);
  return 1;
}

