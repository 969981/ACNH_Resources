
void FUN_01d8424c(undefined8 param_1,long *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  byte local_34 [4];
  
  lVar11 = *(long *)PTR_DAT_04bb8930;
  uVar8 = 0;
  if (*(uint *)(lVar11 + 0x18) != 0xffffffff) {
    uVar8 = *(uint *)(lVar11 + 0x18);
  }
  if (*(uint *)(lVar11 + 8) <= uVar8) {
    uVar8 = 0;
  }
  if ((*(byte *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar8 * 0x58 + 0x10) & 1) == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (param_2[2] == 0) {
    return;
  }
  lVar11 = FUN_01d83ff0(param_1,0);
  if (lVar11 == 0) {
    return;
  }
  *(undefined2 *)(lVar11 + 0xc) = 0;
  *(undefined1 *)(lVar11 + 0xf8) = 0xff;
  *(undefined2 *)(lVar11 + 0x22) = 0;
  *(undefined2 *)(lVar11 + 0x38) = 0;
  *(undefined2 *)(lVar11 + 0x100) = 0;
  *(undefined4 *)(lVar11 + 0xfc) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x108) = 0;
  *(undefined8 *)(lVar11 + 0xe0) = 0;
  *(undefined8 *)(lVar11 + 0xe8) = 0;
  plVar13 = (long *)param_2[2];
  (**(code **)(*plVar13 + 0x18))(plVar13);
  puVar9 = (undefined8 *)plVar13[1];
  uVar2 = *puVar9;
  uVar4 = puVar9[1];
  uVar3 = puVar9[2];
  *(undefined8 *)(lVar11 + 0x74) = puVar9[3];
  *(undefined8 *)(lVar11 + 0x6c) = uVar3;
  *(undefined8 *)(lVar11 + 100) = uVar4;
  *(undefined8 *)(lVar11 + 0x5c) = uVar2;
  uVar2 = puVar9[4];
  uVar4 = puVar9[5];
  uVar3 = puVar9[6];
  *(undefined8 *)(lVar11 + 0x94) = puVar9[7];
  *(undefined8 *)(lVar11 + 0x8c) = uVar3;
  *(undefined8 *)(lVar11 + 0x84) = uVar4;
  *(undefined8 *)(lVar11 + 0x7c) = uVar2;
  uVar2 = puVar9[8];
  uVar4 = puVar9[9];
  uVar3 = puVar9[10];
  *(undefined8 *)(lVar11 + 0xb4) = puVar9[0xb];
  *(undefined8 *)(lVar11 + 0xac) = uVar3;
  *(undefined8 *)(lVar11 + 0xa4) = uVar4;
  *(undefined8 *)(lVar11 + 0x9c) = uVar2;
  uVar2 = puVar9[0xc];
  uVar4 = puVar9[0xd];
  uVar3 = puVar9[0xe];
  uVar5 = puVar9[0xf];
  *(undefined2 *)(lVar11 + 0xdc) = 0;
  *(undefined8 *)(lVar11 + 0xd4) = uVar5;
  *(undefined8 *)(lVar11 + 0xcc) = uVar3;
  *(undefined8 *)(lVar11 + 0xc4) = uVar4;
  *(undefined8 *)(lVar11 + 0xbc) = uVar2;
  *(long *)(lVar11 + 0xe0) = *param_2;
  *(long *)(lVar11 + 0xe8) = param_2[1];
  if (*param_2 != param_2[1]) goto LAB_01d844f4;
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_01d843dc:
    if (*pbVar10 < 8) goto LAB_01d84448;
LAB_01d843e8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01d84440:
      pbVar10 = &DAT_0548e168;
      goto LAB_01d84448;
    }
    lVar12 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    local_34[0] = *pbVar10;
    if (7 < local_34[0]) goto LAB_01d84440;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d843dc;
      }
      goto LAB_01d843e8;
    }
LAB_01d84448:
    local_34[0] = *pbVar10;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
  }
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar12 == 0) {
    iVar14 = -1;
  }
  else {
    if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar9)();
      uVar8 = uVar8 ^ 1;
    }
    bVar7 = *(byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x10);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    iVar14 = (int)(char)bVar7;
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  *(int *)(lVar11 + 0xfc) = iVar14;
LAB_01d844f4:
  uVar6 = *(ushort *)(lVar11 + 0x100);
  *(ushort *)(lVar11 + 0x100) = uVar6 | 0x11;
  if ((char)param_2[3] == '\0') {
    *(ushort *)(lVar11 + 0x100) = uVar6 | 0x13;
  }
  return;
}

