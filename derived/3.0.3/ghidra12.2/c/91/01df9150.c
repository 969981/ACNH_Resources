
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01df9150(void)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  short sVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  
  plVar9 = *(long **)PTR_DAT_04bb27d0;
  lVar11 = *plVar9;
  bVar7 = *(byte *)(lVar11 + 0x473);
  uVar12 = (ulong)(char)bVar7;
  pcVar1 = (char *)(lVar11 + 0x473);
  if (uVar12 == 0xffffffffffffffff) {
    cVar6 = *PTR_DAT_04bc1220;
    if (cVar6 == '\0') goto LAB_01df91dc;
    if (cVar6 == '\x01') goto LAB_01df92d4;
LAB_01df942c:
    if (cVar6 == '\x02') goto LAB_01df9434;
joined_r0x01df9698:
    if (cVar6 == '\x03') goto LAB_01df9568;
joined_r0x01df97cc:
    if (cVar6 == '\x04') goto LAB_01df96a4;
joined_r0x01df97d4:
    if (cVar6 == '\x05') goto LAB_01df97d8;
joined_r0x01df9908:
    if (cVar6 == '\x06') goto LAB_01df990c;
joined_r0x01df9a38:
    if (cVar6 != '\a') {
      return 1;
    }
  }
  else {
    puVar2 = (uint *)(lVar11 + 0x48);
    puVar3 = puVar2 + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar3 = puVar2;
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar3 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\0') {
LAB_01df91dc:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df91e4:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          if (iVar5 == -0x78a1579c || iVar5 == -0x2f1ac06c) {
            return 0;
          }
        }
        else if (iVar5 == 0x1ca0c3e6 || iVar5 == 0x55b5d9de) {
          return 0;
        }
      }
      if (bVar7 != 0xff) goto LAB_01df92ac;
      cVar6 = *PTR_DAT_04bc1220;
      if (cVar6 != '\x01') goto LAB_01df942c;
LAB_01df92d4:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df92dc:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          if (iVar5 == -0x78a1579c || iVar5 == -0x2f1ac06c) {
            return 0;
          }
        }
        else if (iVar5 == 0x1ca0c3e6 || iVar5 == 0x55b5d9de) {
          return 0;
        }
      }
      if (bVar7 != 0xff) goto LAB_01df93cc;
      cVar6 = *PTR_DAT_04bc1220;
      if (cVar6 != '\x02') goto joined_r0x01df9698;
LAB_01df9434:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df943c:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          if (iVar5 == -0x78a1579c || iVar5 == -0x2f1ac06c) {
            return 0;
          }
        }
        else if (iVar5 == 0x1ca0c3e6 || iVar5 == 0x55b5d9de) {
          return 0;
        }
      }
      if (bVar7 == 0xff) {
        cVar6 = *PTR_DAT_04bc1220;
        goto joined_r0x01df9698;
      }
    }
    else {
      if ((((*puVar3 >> 3 & 1) != 0) && ((*(byte *)puVar2 >> 3 & 1) != 0)) &&
         ((*(byte *)puVar2 >> 3 & 1) != 0)) {
        lVar15 = plVar9[2];
        if (*(char *)(lVar15 + 0x1e2) == '\0') {
          psVar10 = (short *)(lVar15 + 0x1e0);
        }
        else {
          psVar10 = (short *)(lVar15 + 0x108);
        }
        goto LAB_01df91e4;
      }
LAB_01df92ac:
      puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
      if (7 < bVar7) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      pcVar4 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar4 = pcVar1;
      }
      if (*pcVar4 == '\x01') goto LAB_01df92d4;
      if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 200) >> 3 & 1) != 0)) &&
         ((*(byte *)(lVar11 + 200) >> 3 & 1) != 0)) {
        lVar15 = plVar9[2];
        if (*(char *)(lVar15 + 0x1e2) == '\x01') {
          psVar10 = (short *)(lVar15 + 0x1e0);
        }
        else {
          psVar10 = (short *)(lVar15 + 0x114);
        }
        goto LAB_01df92dc;
      }
LAB_01df93cc:
      puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
      if (7 < bVar7) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      pcVar4 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar4 = pcVar1;
      }
      if (*pcVar4 == '\x02') goto LAB_01df9434;
      if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 0x148) >> 3 & 1) != 0)) &&
         ((*(byte *)(lVar11 + 0x148) >> 3 & 1) != 0)) {
        lVar15 = plVar9[2];
        if (*(char *)(lVar15 + 0x1e2) == '\x02') {
          psVar10 = (short *)(lVar15 + 0x1e0);
        }
        else {
          psVar10 = (short *)(lVar15 + 0x120);
        }
        goto LAB_01df943c;
      }
    }
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\x03') {
LAB_01df9568:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df9570:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          if (iVar5 == -0x78a1579c || iVar5 == -0x2f1ac06c) {
            return 0;
          }
        }
        else if (iVar5 == 0x1ca0c3e6 || iVar5 == 0x55b5d9de) {
          return 0;
        }
      }
      if (bVar7 == 0xff) {
        cVar6 = *PTR_DAT_04bc1220;
        goto joined_r0x01df97cc;
      }
    }
    else if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 0x1c8) >> 3 & 1) != 0)) &&
            ((*(byte *)(lVar11 + 0x1c8) >> 3 & 1) != 0)) {
      lVar15 = plVar9[2];
      if (*(char *)(lVar15 + 0x1e2) == '\x03') {
        psVar10 = (short *)(lVar15 + 0x1e0);
      }
      else {
        psVar10 = (short *)(lVar15 + 300);
      }
      goto LAB_01df9570;
    }
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\x04') {
LAB_01df96a4:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df96ac:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          if (iVar5 == -0x78a1579c || iVar5 == -0x2f1ac06c) {
            return 0;
          }
        }
        else if (iVar5 == 0x1ca0c3e6 || iVar5 == 0x55b5d9de) {
          return 0;
        }
      }
      if (bVar7 == 0xff) {
        cVar6 = *PTR_DAT_04bc1220;
        goto joined_r0x01df97d4;
      }
    }
    else if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 0x248) >> 3 & 1) != 0)) &&
            ((*(byte *)(lVar11 + 0x248) >> 3 & 1) != 0)) {
      lVar15 = plVar9[2];
      if (*(char *)(lVar15 + 0x1e2) == '\x04') {
        psVar10 = (short *)(lVar15 + 0x1e0);
      }
      else {
        psVar10 = (short *)(lVar15 + 0x138);
      }
      goto LAB_01df96ac;
    }
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\x05') {
LAB_01df97d8:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df97e0:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          bVar8 = iVar5 == -0x78a1579c;
          iVar16 = -0x2f1ac06c;
        }
        else {
          bVar8 = iVar5 == 0x1ca0c3e6;
          iVar16 = 0x55b5d9de;
        }
        if (bVar8 || iVar5 == iVar16) {
          return 0;
        }
      }
      if (bVar7 == 0xff) {
        cVar6 = *PTR_DAT_04bc1220;
        goto joined_r0x01df9908;
      }
    }
    else if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 0x2c8) >> 3 & 1) != 0)) &&
            ((*(byte *)(lVar11 + 0x2c8) >> 3 & 1) != 0)) {
      lVar15 = plVar9[2];
      if (*(char *)(lVar15 + 0x1e2) == '\x05') {
        psVar10 = (short *)(lVar15 + 0x1e0);
      }
      else {
        psVar10 = (short *)(lVar15 + 0x144);
      }
      goto LAB_01df97e0;
    }
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\x06') {
LAB_01df990c:
      psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df9914:
      sVar14 = *psVar10;
      if (sVar14 != -1) {
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        puVar13 = DAT_055c1b60 + -8;
        if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar14 = sVar14 + -1;
            bVar8 = puVar17 == &DAT_055c1b58;
          } while (!bVar8 && sVar14 != 0);
          puVar13 = puVar17 + -8;
        }
        puVar17 = &DAT_055c04a0;
        if (!bVar8) {
          puVar17 = puVar13;
        }
        iVar5 = *(int *)(puVar17 + 7);
        if (iVar5 < 0x1ca0c3e6) {
          bVar8 = iVar5 == -0x78a1579c;
          iVar16 = -0x2f1ac06c;
        }
        else {
          bVar8 = iVar5 == 0x1ca0c3e6;
          iVar16 = 0x55b5d9de;
        }
        if (bVar8 || iVar5 == iVar16) {
          return 0;
        }
      }
      if (bVar7 == 0xff) {
        cVar6 = *PTR_DAT_04bc1220;
        goto joined_r0x01df9a38;
      }
    }
    else if ((((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar11 + 0x348) >> 3 & 1) != 0)) &&
            ((*(byte *)(lVar11 + 0x348) >> 3 & 1) != 0)) {
      lVar15 = plVar9[2];
      if (*(char *)(lVar15 + 0x1e2) == '\x06') {
        psVar10 = (short *)(lVar15 + 0x1e0);
      }
      else {
        psVar10 = (short *)(lVar15 + 0x150);
      }
      goto LAB_01df9914;
    }
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 != '\a') {
      if ((*puVar2 >> 3 & 1) == 0) {
        return 1;
      }
      if ((*(byte *)(lVar11 + 0x3c8) >> 3 & 1) == 0) {
        return 1;
      }
      if ((*(byte *)(lVar11 + 0x3c8) >> 3 & 1) == 0) {
        return 1;
      }
      lVar11 = plVar9[2];
      if (*(char *)(lVar11 + 0x1e2) == '\a') {
        psVar10 = (short *)(lVar11 + 0x1e0);
      }
      else {
        psVar10 = (short *)(lVar11 + 0x15c);
      }
      goto LAB_01df9a5c;
    }
  }
  psVar10 = (short *)PTR_DAT_04bb6298;
LAB_01df9a5c:
  sVar14 = *psVar10;
  if (sVar14 == -1) {
    return 1;
  }
  bVar8 = DAT_055c1b60 == &DAT_055c1b58;
  puVar13 = DAT_055c1b60 + -8;
  if ((sVar14 != 0) && (puVar17 = DAT_055c1b60, puVar13 != &DAT_055c1b18)) {
    do {
      puVar17 = (undefined8 *)puVar17[1];
      sVar14 = sVar14 + -1;
      bVar8 = puVar17 == &DAT_055c1b58;
    } while (!bVar8 && sVar14 != 0);
    puVar13 = puVar17 + -8;
  }
  puVar17 = &DAT_055c04a0;
  if (!bVar8) {
    puVar17 = puVar13;
  }
  iVar5 = *(int *)(puVar17 + 7);
  if (iVar5 < 0x1ca0c3e6) {
    bVar8 = iVar5 == -0x78a1579c;
    iVar16 = -0x2f1ac06c;
  }
  else {
    bVar8 = iVar5 == 0x55b5d9de;
    iVar16 = 0x1ca0c3e6;
  }
  if (!(bVar8 || iVar5 == iVar16)) {
    return 1;
  }
  return 0;
}

