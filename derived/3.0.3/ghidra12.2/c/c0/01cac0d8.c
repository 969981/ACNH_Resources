
uint FUN_01cac0d8(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  uint extraout_w8;
  uint uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  pcVar3 = (char *)FUN_01cab720(param_1,param_3);
  uVar4 = extraout_w8;
  if (pcVar3 == (char *)0x0) goto LAB_01cac2cc;
  uVar4 = (uint)(*pcVar3 == '\0');
  if (*pcVar3 == '\0') {
    lVar5 = *(long *)(pcVar3 + 0x28);
    lVar7 = 0;
    if (*(int *)(pcVar3 + 0x30) < 1) {
      lVar5 = 0;
    }
    puVar1 = (undefined4 *)0x0;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar5 - *(int *)(pcVar3 + 0x34));
    }
    *param_2 = *puVar1;
    *(bool *)(param_2 + 1) = *(int *)(pcVar3 + 0x30) < 2;
    lVar5 = *(long *)(pcVar3 + 8);
    cVar2 = *(char *)(puVar1 + 1);
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
    if (*(long *)(lVar8 + 0x18) != lVar5 || *(char *)(lVar8 + 0x20) != cVar2) {
      if (*(long *)(lVar8 + 0x38) == lVar5 && *(char *)(lVar8 + 0x40) == cVar2) {
        lVar7 = 1;
      }
      else if (*(long *)(lVar8 + 0x58) == lVar5 && *(char *)(lVar8 + 0x60) == cVar2) {
        lVar7 = 2;
      }
      else if ((*(long *)(lVar8 + 0x78) == lVar5) && (*(char *)(lVar8 + 0x80) == cVar2)) {
        lVar7 = 3;
      }
      else if ((*(long *)(lVar8 + 0x98) == lVar5) && (*(char *)(lVar8 + 0xa0) == cVar2)) {
        lVar7 = 4;
      }
      else if ((*(long *)(lVar8 + 0xb8) == lVar5) && (*(char *)(lVar8 + 0xc0) == cVar2)) {
        lVar7 = 5;
      }
      else if ((*(long *)(lVar8 + 0xd8) == lVar5) && (*(char *)(lVar8 + 0xe0) == cVar2)) {
        lVar7 = 6;
      }
      else {
        pbVar9 = PTR_DAT_04bb32e0;
        if ((*(long *)(lVar8 + 0xf8) != lVar5) || (*(char *)(lVar8 + 0x100) != cVar2))
        goto LAB_01cac2b8;
        lVar7 = 7;
      }
    }
    pbVar9 = &DAT_0548e168 + lVar7;
  }
  else {
    lVar7 = *(long *)(pcVar3 + 8);
    lVar5 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
    if (*(long *)(lVar5 + 0x18) == lVar7 && *(char *)(lVar5 + 0x20) == '\0') {
      lVar5 = 0;
    }
    else if (*(long *)(lVar5 + 0x38) == lVar7 && *(char *)(lVar5 + 0x40) == '\0') {
      lVar5 = 1;
    }
    else if (*(long *)(lVar5 + 0x58) == lVar7 && *(char *)(lVar5 + 0x60) == '\0') {
      lVar5 = 2;
    }
    else if (*(long *)(lVar5 + 0x78) == lVar7 && *(char *)(lVar5 + 0x80) == '\0') {
      lVar5 = 3;
    }
    else if (*(long *)(lVar5 + 0x98) == lVar7 && *(char *)(lVar5 + 0xa0) == '\0') {
      lVar5 = 4;
    }
    else if ((*(long *)(lVar5 + 0xb8) == lVar7) && (*(char *)(lVar5 + 0xc0) == '\0')) {
      lVar5 = 5;
    }
    else if ((*(long *)(lVar5 + 0xd8) == lVar7) && (*(char *)(lVar5 + 0xe0) == '\0')) {
      lVar5 = 6;
    }
    else {
      pbVar9 = PTR_DAT_04bb32e0;
      if ((*(long *)(lVar5 + 0xf8) != lVar7) || (*(char *)(lVar5 + 0x100) != '\0'))
      goto LAB_01cac2b8;
      lVar5 = 7;
    }
    pbVar9 = &DAT_0548e168 + lVar5;
  }
LAB_01cac2b8:
  bVar6 = *pbVar9;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)((long)param_2 + 5) = bVar6;
LAB_01cac2cc:
  return pcVar3 != (char *)0x0 & uVar4;
}

