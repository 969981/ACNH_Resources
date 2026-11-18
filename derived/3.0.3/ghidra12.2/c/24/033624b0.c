
uint FUN_033624b0(uint param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = DAT_05734b90;
  if ((param_1 & 0xffff) == 0x3000) {
    return 0x3000;
  }
  for (puVar6 = &DAT_0418e356;
      ((uVar5 = param_1, (uint)*puVar6 != (param_1 & 0xffff) &&
       ((uint)puVar6[1] != (param_1 & 0xffff))) && ((uint)puVar6[2] != (param_1 & 0xffff)));
      puVar6 = puVar6 + 4) {
    if (puVar6[2] == 0) {
      puVar6 = &DAT_0418e26a;
      goto LAB_033625e4;
    }
    if ((uint)puVar6[3] == (param_1 & 0xffff)) break;
  }
  for (puVar6 = &DAT_0418e2e0;
      (((uint)*puVar6 != (param_1 & 0xffff) && ((uint)puVar6[1] != (param_1 & 0xffff))) &&
      ((uint)puVar6[2] != (param_1 & 0xffff))); puVar6 = puVar6 + 4) {
    if (puVar6[2] == 0) {
      puVar6 = &DAT_0418e1f8;
      goto LAB_03362640;
    }
    if ((uint)puVar6[3] == (param_1 & 0xffff)) break;
  }
  uVar3 = FUN_033624b0(param_1);
  lVar10 = DAT_05734b90;
  for (puVar6 = &DAT_0418e1f8; uVar8 = uVar3, (uint)puVar6[-2] != (uVar3 & 0xffff);
      puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar3 & 0xffff)) {
      puVar6 = puVar6 + -1;
      goto LAB_03362760;
    }
    if ((uint)*puVar6 == (uVar3 & 0xffff)) goto LAB_03362760;
    if (*puVar6 == 0) {
      lVar9 = 0;
      goto LAB_033626d4;
    }
    if ((uint)puVar6[1] == (uVar3 & 0xffff)) {
      puVar6 = puVar6 + 1;
      goto LAB_03362760;
    }
  }
  puVar6 = puVar6 + -2;
LAB_03362760:
  uVar2 = *(ushort *)(PTR_DAT_04b205f0 + (long)(puVar6 + -0x20c70fa));
  if (uVar2 != 0x3000) {
    lVar9 = 9;
LAB_0336277c:
    uVar4 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar10 + 8);
    uVar8 = (uint)uVar2;
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar10,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                   uVar4,0);
    }
  }
  goto LAB_033627dc;
LAB_033625e4:
  if ((((uint)*puVar6 == (param_1 & 0xffff)) || ((uint)puVar6[1] == (param_1 & 0xffff))) ||
     ((uint)puVar6[2] == (param_1 & 0xffff))) goto LAB_0336267c;
  if (puVar6[2] == 0) {
    puVar6 = &DAT_0418e1f8;
    goto LAB_033628a8;
  }
  if ((uint)puVar6[3] == (param_1 & 0xffff)) goto LAB_0336267c;
  puVar6 = puVar6 + 4;
  goto LAB_033625e4;
LAB_033628a8:
  if ((uint)puVar6[-2] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -2;
LAB_03362c70:
    uVar5 = (uint)*(ushort *)(PTR_DAT_04b205e8 + (long)(puVar6 + -0x20c70fa));
    if (*(ushort *)(PTR_DAT_04b205e8 + (long)(puVar6 + -0x20c70fa)) == 0x3000) {
      return param_1;
    }
    lVar9 = 9;
LAB_03362c8c:
    uVar4 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 == 0) {
      return uVar5;
    }
    lVar1 = 0;
    if (*(char *)(lVar7 + 0x38) != '\0') {
      lVar1 = lVar7 + 8;
    }
    FUN_03366350(lVar10,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                 uVar4,0);
    return uVar5;
  }
  if ((uint)puVar6[-1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_03362c70;
  }
  if ((uint)*puVar6 == (param_1 & 0xffff)) goto LAB_03362c70;
  if (*puVar6 == 0) {
    lVar9 = 0;
    while (puVar6 = (ushort *)(PTR_DAT_04b205e8 + lVar9), (uint)*puVar6 != (param_1 & 0xffff)) {
      lVar9 = lVar9 + 2;
      if (*puVar6 == 0) {
        return param_1;
      }
    }
    uVar5 = (uint)*(ushort *)((long)&DAT_0418e1f4 + lVar9);
    if (uVar5 == 0x3000) {
      return param_1;
    }
    lVar9 = 8;
    goto LAB_03362c8c;
  }
  if ((uint)puVar6[1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_03362c70;
  }
  puVar6 = puVar6 + 4;
  goto LAB_033628a8;
LAB_0336267c:
  for (puVar6 = &DAT_0418e2e0;
      (((uint)*puVar6 != (param_1 & 0xffff) && ((uint)puVar6[1] != (param_1 & 0xffff))) &&
      ((uint)puVar6[2] != (param_1 & 0xffff))); puVar6 = puVar6 + 4) {
    if (puVar6[2] == 0) {
      puVar6 = &DAT_0418e1f8;
      goto LAB_03362938;
    }
    if ((uint)puVar6[3] == (param_1 & 0xffff)) break;
  }
  uVar3 = FUN_033624b0(param_1);
  lVar10 = DAT_05734b90;
  for (puVar6 = &DAT_0418e1f8; uVar8 = uVar3, (uint)puVar6[-2] != (uVar3 & 0xffff);
      puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar3 & 0xffff)) {
      puVar6 = puVar6 + -1;
      goto LAB_03362a28;
    }
    if ((uint)*puVar6 == (uVar3 & 0xffff)) goto LAB_03362a28;
    if (*puVar6 == 0) {
      lVar9 = 0;
      goto LAB_03362a0c;
    }
    if ((uint)puVar6[1] == (uVar3 & 0xffff)) {
      puVar6 = puVar6 + 1;
      goto LAB_03362a28;
    }
  }
  puVar6 = puVar6 + -2;
LAB_03362a28:
  uVar2 = *(ushort *)(PTR_DAT_04b205e0 + (long)(puVar6 + -0x20c70fa));
  if (uVar2 != 0x3000) {
    lVar9 = 9;
LAB_03362a44:
    uVar4 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar10 + 8);
    uVar8 = (uint)uVar2;
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar10,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                   uVar4,0);
    }
  }
  goto LAB_03362aa4;
LAB_03362938:
  if ((uint)puVar6[-2] == (param_1 & 0xffff)) goto LAB_03362cf0;
  if ((uint)puVar6[-1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_03362d20;
  }
  if ((uint)*puVar6 == (param_1 & 0xffff)) goto LAB_03362d20;
  if (*puVar6 == 0) {
    lVar10 = 0;
    goto LAB_03362d04;
  }
  if ((uint)puVar6[1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_03362d20;
  }
  puVar6 = puVar6 + 4;
  goto LAB_03362938;
LAB_03362cf0:
  puVar6 = puVar6 + -2;
LAB_03362d20:
  uVar2 = *(ushort *)(PTR_DAT_04b205e0 + (long)(puVar6 + -0x20c70fa));
  if (uVar2 != 0x3000) {
    uVar4 = 9;
LAB_03362d3c:
    FUN_0336679c(DAT_05734b90,uVar4,0);
    uVar5 = (uint)uVar2;
  }
  goto LAB_03362ab0;
  while (lVar10 = lVar10 + 2, *puVar6 != 0) {
LAB_03362d04:
    puVar6 = (ushort *)(PTR_DAT_04b205e0 + lVar10);
    if ((uint)*puVar6 == (param_1 & 0xffff)) {
      uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar10);
      if (uVar2 != 0x3000) {
        uVar4 = 8;
        goto LAB_03362d3c;
      }
      break;
    }
  }
  goto LAB_03362ab0;
  while (lVar9 = lVar9 + 2, *puVar6 != 0) {
LAB_03362a0c:
    puVar6 = (ushort *)(PTR_DAT_04b205e0 + lVar9);
    if ((uint)*puVar6 == (uVar3 & 0xffff)) {
      uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar9);
      if (uVar2 != 0x3000) {
        lVar9 = 8;
        goto LAB_03362a44;
      }
      break;
    }
  }
LAB_03362aa4:
  if ((uVar8 & 0xffff) != (uVar3 & 0xffff)) {
    uVar5 = uVar8;
  }
LAB_03362ab0:
  for (puVar6 = &DAT_0418e1f8; (uint)puVar6[-2] != (uVar5 & 0xffff); puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar5 & 0xffff)) goto LAB_03362b14;
    if ((uint)*puVar6 == (uVar5 & 0xffff)) goto LAB_03362b20;
    if (*puVar6 == 0) {
      lVar10 = 0;
      goto LAB_03362bd0;
    }
    if ((uint)puVar6[1] == (uVar5 & 0xffff)) goto LAB_03362b1c;
  }
  goto LAB_03362b0c;
  while (lVar10 = lVar10 + 2, *puVar6 != 0) {
LAB_03362bd0:
    puVar6 = (ushort *)(PTR_DAT_04b205e8 + lVar10);
    if ((uint)*puVar6 == (uVar5 & 0xffff)) goto LAB_03362be8;
  }
  goto LAB_03362864;
LAB_03362640:
  if ((uint)puVar6[-2] == (param_1 & 0xffff)) goto LAB_033628e4;
  if ((uint)puVar6[-1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_03362978;
  }
  if ((uint)*puVar6 == (param_1 & 0xffff)) goto LAB_03362978;
  if (*puVar6 == 0) {
    lVar9 = 0;
    goto LAB_03362900;
  }
  if ((uint)puVar6[1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_03362978;
  }
  puVar6 = puVar6 + 4;
  goto LAB_03362640;
LAB_033628e4:
  puVar6 = puVar6 + -2;
LAB_03362978:
  uVar2 = *(ushort *)(PTR_DAT_04b205f0 + (long)(puVar6 + -0x20c70fa));
  if (uVar2 != 0x3000) {
    lVar9 = 9;
LAB_03362994:
    uVar4 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar10 + 8);
    uVar5 = (uint)uVar2;
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar10,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                   uVar4,0);
    }
  }
  goto LAB_033627e8;
  while (lVar9 = lVar9 + 2, *puVar6 != 0) {
LAB_03362900:
    puVar6 = (ushort *)(PTR_DAT_04b205f0 + lVar9);
    if ((uint)*puVar6 == (param_1 & 0xffff)) {
      uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar9);
      if (uVar2 != 0x3000) {
        lVar9 = 8;
        goto LAB_03362994;
      }
      break;
    }
  }
  goto LAB_033627e8;
LAB_03362b14:
  puVar6 = puVar6 + -1;
  goto LAB_03362b20;
  while (lVar10 = lVar10 + 2, *puVar6 != 0) {
LAB_03362850:
    puVar6 = (ushort *)(PTR_DAT_04b205e8 + lVar10);
    if ((uint)*puVar6 == (uVar5 & 0xffff)) goto LAB_03362be8;
  }
LAB_03362864:
  uVar3 = uVar5;
  goto LAB_03362ba0;
LAB_03362be8:
  uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar10);
  uVar3 = uVar5;
  if (uVar2 == 0x3000) goto LAB_03362ba0;
  lVar10 = 8;
  goto LAB_03362b40;
LAB_03362b1c:
  puVar6 = puVar6 + 1;
  goto LAB_03362b20;
  while (lVar9 = lVar9 + 2, *puVar6 != 0) {
LAB_033626d4:
    puVar6 = (ushort *)(PTR_DAT_04b205f0 + lVar9);
    if ((uint)*puVar6 == (uVar3 & 0xffff)) {
      uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar9);
      if (uVar2 != 0x3000) {
        lVar9 = 8;
        goto LAB_0336277c;
      }
      break;
    }
  }
LAB_033627dc:
  if ((uVar8 & 0xffff) != (uVar3 & 0xffff)) {
    uVar5 = uVar8;
  }
LAB_033627e8:
  for (puVar6 = &DAT_0418e1f8; (uint)puVar6[-2] != (uVar5 & 0xffff); puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar5 & 0xffff)) goto LAB_03362b14;
    if ((uint)*puVar6 == (uVar5 & 0xffff)) goto LAB_03362b20;
    if (*puVar6 == 0) {
      lVar10 = 0;
      goto LAB_03362850;
    }
    if ((uint)puVar6[1] == (uVar5 & 0xffff)) goto LAB_03362b1c;
  }
LAB_03362b0c:
  puVar6 = puVar6 + -2;
LAB_03362b20:
  uVar2 = *(ushort *)(PTR_DAT_04b205e8 + (long)(puVar6 + -0x20c70fa));
  uVar3 = uVar5;
  if (uVar2 != 0x3000) {
    lVar10 = 9;
LAB_03362b40:
    lVar9 = DAT_05734b90;
    uVar4 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar9 + 8);
    uVar3 = (uint)uVar2;
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar9,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar10 * 8 + 0x3f0),1,
                   uVar4,0);
    }
  }
LAB_03362ba0:
  if ((uVar3 & 0xffff) != (uVar5 & 0xffff)) {
    param_1 = uVar3;
  }
  return param_1;
}

