
void FUN_01f8ef40(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  byte *__dest;
  byte *__dest_00;
  
  *param_1 = 0;
  bVar7 = *param_2;
  bVar8 = param_2[2];
  bVar9 = param_2[1];
  bVar10 = param_2[3];
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  uVar2 = (uint)bVar7;
  if (bVar8 <= bVar7) {
    uVar2 = (uint)bVar8;
  }
  uVar3 = (uint)bVar7;
  if (bVar7 <= bVar8) {
    uVar3 = (uint)bVar8;
  }
  uVar4 = (uint)bVar9;
  if (bVar10 <= bVar9) {
    uVar4 = (uint)bVar10;
  }
  uVar5 = (uint)bVar9;
  if (bVar9 <= bVar10) {
    uVar5 = (uint)bVar10;
  }
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[10] = uVar3;
  param_1[0xb] = uVar5;
  *(undefined **)(param_1 + 2) = puVar1;
  *(undefined8 **)(param_1 + 4) = &DAT_048f9750;
  *(undefined8 **)(param_1 + 8) = &DAT_048f9750;
  uVar12 = *(undefined8 *)(param_2 + 4);
  param_1[0xe] = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = uVar12;
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  puVar16 = (undefined8 *)(param_1 + 0x10);
  *puVar16 = 0xfffe;
  param_1[0xf] = uVar6;
  FUN_0277d4ac(puVar16);
  *puVar16 = *(undefined8 *)(param_2 + 0x14);
  uVar12 = *(undefined8 *)(param_2 + 0x1c);
  uVar14 = *(undefined8 *)(param_2 + 0x24);
  uVar15 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  *(undefined8 *)(param_1 + 0x12) = uVar12;
  *(undefined8 *)(param_1 + 0x14) = uVar14;
  bVar7 = param_2[0x3c];
  puVar16 = (undefined8 *)(param_1 + 0x1b);
  *puVar16 = 0xfffe;
  *(byte *)(param_1 + 0x1a) = bVar7;
  FUN_0277d4ac(puVar16);
  *puVar16 = *(undefined8 *)(param_2 + 0x3d);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x48);
  *(byte *)(param_1 + 0x1e) = param_2[0x4c];
  bVar7 = param_2[0x4d];
  __dest_00 = (byte *)(param_1 + 0x2d);
  *__dest_00 = 0;
  *(byte **)(param_1 + 0x2a) = __dest_00;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  *(byte *)((long)param_1 + 0x79) = bVar7;
  param_1[0x2c] = 0x20;
  puVar1 = PTR_DAT_04bb2028;
  param_1[0x3a] = 0x20;
  __dest = (byte *)(param_1 + 0x3b);
  *__dest = 0;
  *(undefined1 *)((long)param_1 + 0x10b) = 0;
  *(byte **)(param_1 + 0x38) = __dest;
  *(undefined **)(param_1 + 0x28) = puVar1 + 0x10;
  *(undefined **)(param_1 + 0x36) = puVar1 + 0x10;
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x21] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x22] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x23] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x24] = *(undefined4 *)(param_2 + 100);
  param_1[0x25] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x26] = *(undefined4 *)(param_2 + 0x6c);
  *(byte *)(param_1 + 0x27) = param_2[0x70];
  *(byte *)((long)param_1 + 0x9d) = param_2[0x71];
  *(byte *)((long)param_1 + 0x9e) = param_2[0x72];
  *(byte *)((long)param_1 + 0x9f) = param_2[0x73];
  if (__dest_00 != param_2 + 0x74) {
    lVar13 = 0;
    do {
      if (param_2[lVar13 + 0x74] == 0) goto LAB_01f8f12c;
      if (param_2[lVar13 + 0x75] == 0) {
        lVar13 = lVar13 + 1;
        goto LAB_01f8f12c;
      }
      if (param_2[lVar13 + 0x76] == 0) {
        lVar13 = lVar13 + 2;
        goto LAB_01f8f12c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f8f12c:
    iVar11 = (int)lVar13;
    if (0x1e < iVar11) {
      iVar11 = 0x1f;
    }
    memcpy(__dest_00,param_2 + 0x74,(long)iVar11);
    __dest_00[iVar11] = 0;
    __dest = *(byte **)(param_1 + 0x38);
  }
  if (__dest != param_2 + 0x94) {
    lVar13 = 0;
    do {
      if (param_2[lVar13 + 0x94] == 0) goto LAB_01f8f19c;
      if (param_2[lVar13 + 0x95] == 0) {
        lVar13 = lVar13 + 1;
        goto LAB_01f8f19c;
      }
      if (param_2[lVar13 + 0x96] == 0) {
        lVar13 = lVar13 + 2;
        goto LAB_01f8f19c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f8f19c:
    iVar11 = (int)lVar13;
    if ((int)param_1[0x3a] <= (int)lVar13) {
      iVar11 = param_1[0x3a] + -1;
    }
    memcpy(__dest,param_2 + 0x94,(long)iVar11);
    __dest[iVar11] = 0;
  }
  return;
}

