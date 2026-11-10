
int FUN_00154858(long param_1,char *param_2,char *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  byte bVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  
  puVar11 = (undefined8 *)(param_1 + 0x50);
  FUN_0014e11c(*puVar11);
  *puVar11 = 0;
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  pcVar14 = *(char **)(param_1 + 0x60);
  if (pcVar14 == (char *)0x0) {
    pcVar14 = (char *)FUN_00154c20(*(undefined8 *)(param_1 + 0x58),"Content-Type");
  }
  pcVar12 = pcVar14;
  if (pcVar14 == (char *)0x0) {
    pcVar12 = param_2;
  }
  if (pcVar12 == (char *)0x0) {
    if (*(int *)(param_1 + 0x18) == 4) {
      pcVar12 = "multipart/mixed";
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      pcVar12 = (char *)FUN_001547d0(*(undefined8 *)(param_1 + 0x68));
      if (((pcVar12 == (char *)0x0) &&
          (pcVar12 = (char *)FUN_001547d0(*(undefined8 *)(param_1 + 0x20)), pcVar12 == (char *)0x0))
         && (pcVar12 = (char *)0x0, *(long *)(param_1 + 0x68) != 0)) {
        pcVar12 = "application/octet-stream";
      }
    }
    else {
      pcVar12 = (char *)FUN_001547d0(*(undefined8 *)(param_1 + 0x68));
    }
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar16 = *(long *)(param_1 + 0x40);
    puVar17 = (undefined8 *)0x0;
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(lVar16 + 0x20);
    }
  }
  else {
    lVar16 = 0;
    if ((pcVar14 == (char *)0x0) && (pcVar12 != (char *)0x0)) {
      iVar7 = FUN_00144a90(pcVar12,"text/plain");
      if ((iVar7 != 0) && ((param_4 == 0 || (*(long *)(param_1 + 0x68) == 0)))) {
        pcVar12 = (char *)0x0;
      }
      lVar16 = 0;
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = (undefined8 *)0x0;
    }
  }
  lVar8 = FUN_00154c20(*(undefined8 *)(param_1 + 0x58),"Content-Disposition");
  if (lVar8 != 0) goto LAB_00154994;
  if (param_3 == (char *)0x0) {
    if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
LAB_001549ec:
      param_3 = "attachment";
      goto LAB_001549f4;
    }
    if (pcVar12 != (char *)0x0) {
      iVar7 = FUN_00144b34(pcVar12,"multipart/",10);
      if (iVar7 == 0) goto LAB_001549ec;
      goto LAB_00154998;
    }
LAB_00154b10:
    bVar13 = 0;
  }
  else {
LAB_001549f4:
    iVar7 = thunk_FUN_00144a90(param_3,"attachment");
    if ((iVar7 == 0) || (*(long *)(param_1 + 0x70) != 0)) {
      if (param_3 != (char *)0x0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_00154a58;
        puVar9 = (undefined8 *)FUN_00154c7c();
        if (puVar9 != (undefined8 *)0x0) goto LAB_00154a5c;
        puVar15 = (undefined8 *)0x0;
LAB_00154a70:
        iVar7 = 0x1b;
        goto LAB_00154ad8;
      }
    }
    else if ((param_3 != (char *)0x0) && (*(long *)(param_1 + 0x68) != 0)) {
LAB_00154a58:
      puVar9 = (undefined8 *)0x0;
LAB_00154a5c:
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = (undefined8 *)FUN_00154c7c();
        if (puVar15 == (undefined8 *)0x0) goto LAB_00154a70;
      }
      bVar6 = puVar9 != (undefined8 *)0x0;
      pcVar14 = "";
      if (bVar6) {
        pcVar14 = "; name=\"";
      }
      puVar1 = &DAT_0407ebb1;
      if (bVar6) {
        puVar1 = puVar9;
      }
      puVar2 = &DAT_0407ebb1;
      if (bVar6) {
        puVar2 = (undefined8 *)&DAT_040c7c06;
      }
      bVar6 = puVar15 != (undefined8 *)0x0;
      pcVar3 = "";
      if (bVar6) {
        pcVar3 = "; filename=\"";
      }
      puVar4 = &DAT_0407ebb1;
      if (bVar6) {
        puVar4 = puVar15;
      }
      puVar5 = &DAT_0407ebb1;
      if (bVar6) {
        puVar5 = (undefined8 *)&DAT_040c7c06;
      }
      iVar7 = FUN_00154718(puVar11,"Content-Disposition: %s%s%s%s%s%s%s",param_3,pcVar14,puVar1,
                           puVar2,pcVar3,puVar4,puVar5);
LAB_00154ad8:
      FUN_00143300(puVar9);
      FUN_00143300(puVar15);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
LAB_00154994:
    if (pcVar12 == (char *)0x0) goto LAB_00154b10;
LAB_00154998:
    pcVar14 = "";
    if (puVar17 != (undefined8 *)0x0) {
      pcVar14 = "; boundary=";
    }
    puVar9 = &DAT_0407ebb1;
    if (puVar17 != (undefined8 *)0x0) {
      puVar9 = puVar17;
    }
    iVar7 = FUN_00154718(puVar11,"Content-Type: %s%s%s",pcVar12,pcVar14,puVar9);
    if (iVar7 != 0) {
      return iVar7;
    }
    bVar13 = 1;
  }
  lVar8 = FUN_00154c20(*(undefined8 *)(param_1 + 0x58),"Content-Transfer-Encoding");
  if (lVar8 == 0) {
    if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
      bVar6 = (bool)(bVar13 ^ 1);
      if (param_4 != 0) {
        bVar6 = true;
      }
      if ((bVar6) || (*(int *)(param_1 + 0x18) == 4)) goto LAB_00154b28;
      puVar10 = &DAT_040c29df;
    }
    else {
      puVar10 = (undefined *)**(undefined8 **)(param_1 + 0xa0);
      if (puVar10 == (undefined *)0x0) goto LAB_00154b28;
    }
    iVar7 = FUN_00154718(puVar11,"Content-Transfer-Encoding: %s",puVar10);
    if (iVar7 != 0) {
      return iVar7;
    }
  }
LAB_00154b28:
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((lVar16 != 0) && (*(int *)(param_1 + 0x18) == 4)) {
    iVar7 = FUN_00144a90(pcVar12,"multipart/form-data");
    lVar16 = *(long *)(lVar16 + 0x10);
    pcVar14 = (char *)0x0;
    if (iVar7 != 0) {
      pcVar14 = "form-data";
    }
    for (; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x10)) {
      iVar7 = FUN_00154858(lVar16,0,pcVar14,param_4);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  return 0;
}

