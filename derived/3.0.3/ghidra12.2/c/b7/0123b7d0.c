
undefined8 FUN_0123b7d0(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  ushort uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint local_68;
  uint local_64;
  
  iVar4 = FUN_0277d6c4();
  if (((((iVar4 == 0x8a5) || (iVar4 = FUN_0277d6c4(param_1), iVar4 == 0x8a6)) ||
       (iVar4 = FUN_0277d6c4(param_1), iVar4 == 0x8ed)) ||
      ((iVar4 = FUN_0277d6c4(param_1), iVar4 == 0x8ee ||
       (iVar4 = FUN_0277d6c4(param_1), iVar4 == 0x8ef)))) &&
     ((puVar3 = PTR_DAT_04bbbc78, puVar2 = PTR_DAT_04bbbc70,
      uVar14 = *(uint *)(DAT_05150358 + 0x1c0), 0 < (int)uVar14 ||
      (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
        (puVar13 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
       (uVar14 = *puVar13, uVar14 != 0)))))) {
    uVar15 = 0;
    lVar7 = DAT_05150358;
    do {
      if ((int)*(uint *)(lVar7 + 0x1c0) < 1) {
        if (((*(long *)(lVar7 + 0xb0) == 0) ||
            (puVar13 = *(uint **)(*(long *)(lVar7 + 0xb0) + 8), puVar13 == (uint *)0x0)) ||
           (((uVar15 < *(uint *)(lVar7 + 200) &&
             (*(char *)(*(long *)(lVar7 + 0xd0) + (long)(int)uVar15) == '\0')) ||
            (((*puVar13 <= uVar15 || (puVar13[1] == 0)) || ((ushort)puVar13[2] == 0))))))
        goto LAB_0123b934;
        iVar4 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar4) +
                          (long)puVar13);
      }
      else if (uVar15 < *(uint *)(lVar7 + 0x1c0)) {
        uVar5 = uVar15;
        if (*(uint *)(lVar7 + 0x1b0) <= uVar15) {
          uVar5 = 0;
        }
        puVar13 = *(uint **)(*(long *)(lVar7 + 0x1b8) + (ulong)uVar5 * 8);
      }
      else {
LAB_0123b934:
        puVar13 = (uint *)0x0;
      }
      puVar12 = (uint *)((long)puVar13 - (ulong)*puVar13);
      if (((*puVar13 != 0) && (puVar12 != (uint *)0x0)) &&
         ((*puVar12 != 0 && ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0)))))
         ) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar1 != 0) {
          uVar8 = 0;
          if ((ulong)uVar5 != 0) {
            uVar8 = (uint)((ulong)((long)puVar13 - lVar1) / (ulong)uVar5);
          }
          if (*puVar12 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((uVar8 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar8 * 2) == 9)) {
            uVar5 = FUN_0277d6c4(param_1);
            if (*puVar13 != 0) {
              cVar6 = *puVar2;
              do {
                if (cVar6 == '\0') {
                  cVar6 = '\x01';
                  *(undefined8 *)puVar3 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                  *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
                  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                }
                else {
                  uVar8 = *(uint *)(puVar3 + 0x30);
                  if (-1 < (int)uVar8) {
                    if ((ushort *)((ulong)uVar8 + (long)puVar13) != (ushort *)0x0) {
                      uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar13);
                      goto LAB_0123ba80;
                    }
                    break;
                  }
                  if (uVar8 != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar13;
                uVar8 = 0xfffe;
                if ((*puVar13 == 0) || (puVar13 == puVar12)) goto LAB_0123ba80;
                lVar7 = 0xc;
                if (*(char *)((long)puVar13 + (10 - (long)puVar12)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar13 + (lVar7 - (long)puVar12);
                if (lVar7 == 0) break;
                uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar12));
                *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar9 = (int *)(lVar7 + 4);
                while (piVar9[-1] != -0x41e837bb) {
                  piVar9 = piVar9 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_0123ba7c;
                }
                iVar4 = 0;
                if (*piVar9 != -1) {
                  iVar4 = *piVar9;
                }
                *(int *)(puVar3 + 0x30) = iVar4;
                if (*puVar13 == 0) break;
              } while( true );
            }
LAB_0123ba7c:
            uVar8 = 0xfffe;
LAB_0123ba80:
            if (uVar5 == uVar8) {
              if (*puVar13 == 0) goto LAB_0123bbb0;
              cVar6 = *puVar2;
              goto LAB_0123bafc;
            }
            lVar7 = DAT_05150358;
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  return 0;
  while( true ) {
    puVar12 = (uint *)(ulong)*puVar13;
    uVar10 = 0;
    if ((*puVar13 == 0) || (puVar13 == puVar12)) goto LAB_0123bbb4;
    lVar7 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar12)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar13 + (lVar7 - (long)puVar12);
    if (lVar7 == 0) goto LAB_0123bbb0;
    uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x40) = 0xfffffffe;
    uVar10 = 0;
    if (uVar11 == 0) goto LAB_0123bbb4;
    piVar9 = (int *)(lVar7 + 4);
    while (piVar9[-1] != 0x54706054) {
      piVar9 = piVar9 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        uVar10 = 0;
        goto LAB_0123bbb4;
      }
    }
    iVar4 = 0;
    if (*piVar9 != -1) {
      iVar4 = *piVar9;
    }
    *(int *)(puVar3 + 0x40) = iVar4;
    if (*puVar13 == 0) break;
LAB_0123bafc:
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar14 = *(uint *)(puVar3 + 0x40);
      if (-1 < (int)uVar14) {
        if ((ushort *)((ulong)uVar14 + (long)puVar13) == (ushort *)0x0) {
LAB_0123bbb0:
          uVar10 = 0;
        }
        else {
          uVar10 = *(ushort *)((ulong)uVar14 + (long)puVar13);
        }
        goto LAB_0123bbb4;
      }
      if (uVar14 != 0xffffffff) goto LAB_0123bbb0;
    }
  }
  uVar10 = 0;
LAB_0123bbb4:
  local_68 = (uint)uVar10;
  local_64 = 0;
  FUN_0277d4ac(&local_68);
  *param_2 = local_68;
  param_2[1] = local_64;
  return 1;
}

