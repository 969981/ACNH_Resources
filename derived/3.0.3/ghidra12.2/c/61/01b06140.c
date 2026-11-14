
void FUN_01b06140(undefined2 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined *__s;
  ulong uVar6;
  uint uVar7;
  undefined2 uVar8;
  ulong uVar9;
  uint *puVar10;
  short sVar11;
  int *piVar12;
  char cVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_70 = 0;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_78);
  lVar4 = DAT_0532a768;
  if (*(long *)puVar1 == 0) {
LAB_01b06228:
    puVar15 = (uint *)0x0;
    local_68 = 0xbc;
    bVar5 = true;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01b06228;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar7) ||
       (puVar15 = *(uint **)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar15 == (uint *)0x0)) goto LAB_01b06228;
    uVar7 = *puVar15;
    if (uVar7 == 0 || puVar15 == (uint *)(ulong)uVar7) goto LAB_01b0621c;
    puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar7);
    local_68 = 0;
    if (*puVar10 == 0) {
LAB_01b06220:
      bVar5 = false;
    }
    else {
      uVar7 = puVar10[1];
      if ((uVar7 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_01b0621c:
        local_68 = 0;
        goto LAB_01b06220;
      }
      lVar4 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar10 + lVar4 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar4 == 0) goto LAB_01b0621c;
      uVar3 = 0;
      if ((ulong)uVar7 != 0) {
        uVar3 = (uint)((ulong)((long)puVar15 - lVar4) / (ulong)uVar7);
      }
      if (*puVar10 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar3) goto LAB_01b0621c;
      local_68 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2);
      if (local_68 < 0xbd) goto LAB_01b06220;
      bVar5 = false;
      local_68 = 0;
    }
  }
  __s = PTR_DAT_04bbfe90;
  puVar1 = PTR_DAT_04bbfe88;
  local_64 = 0x8f;
  if (local_68 != 0x8f) {
    uVar8 = 0x1222;
    goto LAB_01b06670;
  }
  if (bVar5) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*puVar15 == 0) {
LAB_01b06654:
    uVar16 = 3;
  }
  else {
    cVar13 = *PTR_DAT_04bbfe88;
    uVar16 = 3;
    do {
      if (cVar13 != '\0') {
        uVar9 = (ulong)*(uint *)(__s + 0x128);
        if ((int)*(uint *)(__s + 0x128) < 0) {
          if (uVar9 == 0xffffffff) goto LAB_01b062e4;
        }
        else if (((short *)(uVar9 + (long)puVar15) != (short *)0x0) &&
                (*(short *)(uVar9 + (long)puVar15) == 0x946)) {
          uVar16 = 0;
          break;
        }
LAB_01b0635c:
        if (*puVar15 == 0) goto LAB_01b06654;
        uVar16 = 3;
        goto LAB_01b06378;
      }
      *puVar1 = 1;
      memset(__s,0xff,0x1ac);
      cVar13 = '\x01';
LAB_01b062e4:
      lVar4 = (long)puVar15 - (ulong)*puVar15;
      if ((*puVar15 == 0) || (lVar4 == 0)) {
LAB_01b065bc:
        uVar9 = 0xffffffff;
        goto LAB_01b0635c;
      }
      lVar14 = 0xc;
      if (*(char *)(lVar4 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      if (lVar14 + lVar4 == 0) goto LAB_01b065bc;
      uVar9 = (ulong)*(ushort *)(lVar4 + 8);
      *(undefined4 *)(__s + 0x128) = 0xfffffffe;
      if (uVar9 == 0) {
LAB_01b06358:
        uVar9 = 0xfffffffe;
        goto LAB_01b0635c;
      }
      piVar12 = (int *)(lVar14 + lVar4 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_01b06358;
      }
      iVar2 = 0;
      if (*piVar12 != -1) {
        iVar2 = *piVar12;
      }
      *(int *)(__s + 0x128) = iVar2;
    } while (*puVar15 != 0);
  }
  goto LAB_01b06658;
LAB_01b06378:
  do {
    if (-1 < (int)uVar9) {
      if (((short *)(uVar9 + (long)puVar15) == (short *)0x0) ||
         (*(short *)(uVar9 + (long)puVar15) != 0x947)) {
LAB_01b063fc:
        if (*puVar15 == 0) goto LAB_01b06654;
        uVar16 = 3;
        goto LAB_01b06418;
      }
      uVar16 = 1;
      break;
    }
    if (uVar9 != 0xffffffff) goto LAB_01b063fc;
    lVar4 = (long)puVar15 - (ulong)*puVar15;
    if (*puVar15 == 0) {
LAB_01b065c4:
      uVar9 = 0xffffffff;
      goto LAB_01b063fc;
    }
    uVar9 = 0xffffffff;
    if (lVar4 == 0) goto LAB_01b063fc;
    lVar14 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar4 == 0) goto LAB_01b065c4;
    uVar9 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(__s + 0x128) = 0xfffffffe;
    if (uVar9 == 0) {
LAB_01b063f8:
      uVar9 = 0xfffffffe;
      goto LAB_01b063fc;
    }
    puVar10 = (uint *)(lVar14 + lVar4 + 4);
    while (puVar10[-1] != 0x54706054) {
      puVar10 = puVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01b063f8;
    }
    uVar9 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar9 = (ulong)*puVar10;
    }
    *(int *)(__s + 0x128) = (int)uVar9;
  } while (*puVar15 != 0);
  goto LAB_01b06658;
LAB_01b064b4:
  if (-1 < (int)uVar9) {
    if (((short *)(uVar9 + (long)puVar15) != (short *)0x0) &&
       (*(short *)(uVar9 + (long)puVar15) != 0)) {
      uVar6 = 4;
      do {
        uVar16 = uVar6;
        sVar11 = 0;
        if (*puVar15 != 0) {
          do {
            if (cVar13 == '\0') {
              *puVar1 = 1;
              memset(__s,0xff,0x1ac);
              cVar13 = '\x01';
            }
            else {
              if (-1 < (int)uVar9) {
                sVar11 = 0;
                if ((short *)(uVar9 + (long)puVar15) != (short *)0x0) {
                  sVar11 = *(short *)(uVar9 + (long)puVar15);
                }
                goto LAB_01b066a8;
              }
              if (uVar9 != 0xffffffff) {
                sVar11 = 0;
                goto LAB_01b066a8;
              }
            }
            puVar10 = (uint *)(ulong)*puVar15;
            if ((*puVar15 == 0) || (puVar15 == puVar10)) {
LAB_01b0676c:
              sVar11 = 0;
              uVar9 = 0xffffffff;
              goto LAB_01b066a8;
            }
            lVar4 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar10)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar15 + (lVar4 - (long)puVar10);
            if (lVar4 == 0) goto LAB_01b0676c;
            uVar9 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar10));
            *(undefined4 *)(__s + 0x128) = 0xfffffffe;
            if (uVar9 == 0) {
LAB_01b066a0:
              sVar11 = 0;
              uVar9 = 0xfffffffe;
              goto LAB_01b066a8;
            }
            puVar10 = (uint *)(lVar4 + 4);
            while (puVar10[-1] != 0x54706054) {
              puVar10 = puVar10 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_01b066a0;
            }
            uVar9 = 0;
            if (*puVar10 != 0xffffffff) {
              uVar9 = (ulong)*puVar10;
            }
            *(int *)(__s + 0x128) = (int)uVar9;
          } while (*puVar15 != 0);
          sVar11 = 0;
        }
LAB_01b066a8:
        uVar6 = uVar16 + 1;
      } while (sVar11 != 0x946);
      goto LAB_01b06658;
    }
    goto LAB_01b06654;
  }
  if (uVar9 != 0xffffffff) goto LAB_01b06654;
  uVar16 = 3;
  lVar4 = (long)puVar15 - (ulong)*puVar15;
  if ((*puVar15 != 0) && (lVar4 != 0)) {
    lVar14 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar4 != 0) {
      uVar16 = (ulong)*(ushort *)(lVar4 + 8);
      *(undefined4 *)(__s + 0x128) = 0xfffffffe;
      if (uVar16 != 0) goto code_r0x01b064f4;
    }
    goto LAB_01b06654;
  }
  goto LAB_01b06658;
code_r0x01b064f4:
  puVar10 = (uint *)(lVar14 + lVar4 + 4);
  while (puVar10[-1] != 0x54706054) {
    puVar10 = puVar10 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_01b06654;
  }
  uVar16 = 3;
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = (ulong)*puVar10;
  }
  *(int *)(__s + 0x128) = (int)uVar9;
  if (*puVar15 == 0) goto LAB_01b06658;
  goto LAB_01b064b4;
LAB_01b06418:
  do {
    if (-1 < (int)uVar9) {
      if (((short *)(uVar9 + (long)puVar15) == (short *)0x0) ||
         (*(short *)(uVar9 + (long)puVar15) != 0x1532)) {
LAB_01b0649c:
        if (*puVar15 == 0) goto LAB_01b06654;
        goto LAB_01b064b4;
      }
      uVar16 = 2;
      break;
    }
    if (uVar9 != 0xffffffff) goto LAB_01b0649c;
    lVar4 = (long)puVar15 - (ulong)*puVar15;
    if (*puVar15 == 0) {
LAB_01b06604:
      uVar9 = 0xffffffff;
      goto LAB_01b0649c;
    }
    uVar9 = 0xffffffff;
    if (lVar4 == 0) goto LAB_01b0649c;
    lVar14 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar4 == 0) goto LAB_01b06604;
    uVar9 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(__s + 0x128) = 0xfffffffe;
    if (uVar9 == 0) {
LAB_01b06498:
      uVar9 = 0xfffffffe;
      goto LAB_01b0649c;
    }
    puVar10 = (uint *)(lVar14 + lVar4 + 4);
    while (puVar10[-1] != 0x54706054) {
      puVar10 = puVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01b06498;
    }
    uVar9 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar9 = (ulong)*puVar10;
    }
    *(int *)(__s + 0x128) = (int)uVar9;
  } while (*puVar15 != 0);
LAB_01b06658:
  puVar1 = &UNK_04057c20 + (uVar16 & 0xffffffff) * 8;
  if ((uVar16 & 0xfffffffc) != 0) {
    puVar1 = &UNK_04057c20;
  }
  uVar8 = (undefined2)*(undefined4 *)(puVar1 + 4);
LAB_01b06670:
  *param_1 = uVar8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac(param_1);
  return;
}

