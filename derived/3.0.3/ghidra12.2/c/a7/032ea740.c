
void FUN_032ea740(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ushort local_48 [4];
  
  lVar14 = *(long *)PTR_DAT_04bc1118;
  uVar15 = *(uint *)(*(long *)(lVar14 + 0x20) + 0x1050);
  nn::kpr::KeyCodeComposer::Flush();
  uVar6 = nn::kpr::KeyCodeComposer::Dequeue((ushort *)(param_1 + 0x19c),(int)local_48);
  if ((int)uVar6 < 1) {
    uVar13 = param_1[0x198];
  }
  else {
    uVar13 = param_1[0x198];
    uVar9 = (ulong)uVar6;
    puVar11 = local_48;
    do {
      uVar12 = (ulong)uVar13;
      if (2 < uVar13) {
        uVar12 = 0;
      }
      uVar9 = uVar9 - 1;
      *(ushort *)((long)param_1 + uVar12 * 2 + 0x658) = *puVar11;
      uVar13 = param_1[0x198] + 1;
      param_1[0x198] = uVar13;
      puVar11 = puVar11 + 1;
    } while (uVar9 != 0);
  }
  param_1[0x199] = uVar13;
  if ((int)uVar13 < 1) {
    return;
  }
  if ((9 < uVar15) || ((1 << (ulong)(uVar15 & 0x1f) & 0x319U) == 0)) {
    uVar15 = 0;
LAB_032eaa30:
    if (param_1[0x198] < 1) {
      uVar8 = 0;
    }
    else {
      uVar6 = param_1[0x199];
      param_1[0x198] = param_1[0x198] + -1;
      uVar3 = uVar6 - 1;
      uVar9 = (ulong)uVar3;
      uVar8 = *(ushort *)(param_1 + 0x196);
      param_1[0x199] = uVar3;
      if (1 < (int)uVar6) {
        uVar2 = *(undefined2 *)((long)param_1 + 0x65a);
        *(undefined2 *)(param_1 + 0x196) = uVar2;
        if ((uVar6 != 2) && (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar6))
        {
          *(undefined2 *)(param_1 + 0x197) = uVar2;
        }
      }
      if (2 < uVar3) {
        uVar9 = 0;
      }
      *(undefined2 *)((long)param_1 + uVar9 * 2 + 0x658) = 0;
    }
    iVar7 = 0;
    puVar11 = local_48;
    local_48[0] = uVar8;
    local_48[1] = 0;
    do {
      if (uVar8 == 0xe) {
        uVar5 = puVar11[3] >> 1;
        puVar11 = puVar11 + 3 + uVar5;
        iVar7 = iVar7 + (uint)uVar5 + 3;
      }
      else if (uVar8 == 0) goto code_r0x032eaaec;
      iVar1 = iVar7 + 2;
      if (uVar8 != 0xf) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1 + 1;
      puVar11 = puVar11 + (ulong)(uVar8 == 0xf) * 2 + 1;
      uVar8 = *puVar11;
    } while( true );
  }
  uVar15 = 0;
LAB_032ea85c:
  if (param_1[0x198] < 1) {
    local_48[0] = 0;
  }
  else {
    uVar6 = param_1[0x199];
    param_1[0x198] = param_1[0x198] + -1;
    uVar3 = uVar6 - 1;
    uVar9 = (ulong)uVar3;
    local_48[0] = *(ushort *)(param_1 + 0x196);
    param_1[0x199] = uVar3;
    if (1 < (int)uVar6) {
      uVar2 = *(undefined2 *)((long)param_1 + 0x65a);
      *(undefined2 *)(param_1 + 0x196) = uVar2;
      if ((uVar6 != 2) && (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar6)) {
        *(undefined2 *)(param_1 + 0x197) = uVar2;
      }
    }
    if (2 < uVar3) {
      uVar9 = 0;
    }
    *(undefined2 *)((long)param_1 + uVar9 * 2 + 0x658) = 0;
  }
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(int *)(lVar10 + 0x1050) != 1) &&
     ((*(char *)(lVar10 + 0x106a) != '\0' ||
      ((*(char *)(lVar10 + 0x16408) != '\0' && (*(int *)(lVar10 + 0x1568) == 0)))))) {
    iVar7 = 0;
    puVar11 = local_48;
    local_48[1] = 0;
    uVar8 = local_48[0];
    do {
      if (uVar8 == 0xe) {
        uVar5 = puVar11[3] >> 1;
        puVar11 = puVar11 + 3 + uVar5;
        iVar7 = iVar7 + (uint)uVar5 + 3;
      }
      else if (uVar8 == 0) goto LAB_032ea830;
      iVar1 = iVar7 + 2;
      if (uVar8 != 0xf) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1 + 1;
      puVar11 = puVar11 + (ulong)(uVar8 == 0xf) * 2 + 1;
      uVar8 = *puVar11;
    } while( true );
  }
  lVar10 = 0;
  bVar4 = false;
  do {
    if (*(ushort *)((long)&DAT_0418e098 + lVar10) <= local_48[0]) {
      bVar4 = (bool)(local_48[0] <= *(ushort *)((long)&DAT_0418e09a + lVar10) | bVar4);
    }
    if (*(ushort *)((long)&DAT_0418e09c + lVar10) <= local_48[0]) {
      bVar4 = (bool)(local_48[0] <= *(ushort *)((long)&DAT_0418e09e + lVar10) | bVar4);
    }
    if (*(ushort *)((long)&DAT_0418e0a0 + lVar10) <= local_48[0]) {
      bVar4 = (bool)(local_48[0] <= *(ushort *)((long)&DAT_0418e0a2 + lVar10) | bVar4);
    }
    lVar10 = lVar10 + 0xc;
  } while (lVar10 != 0x15c);
  if (bVar4) {
    iVar7 = 0;
    puVar11 = local_48;
    local_48[1] = 0;
    uVar8 = local_48[0];
    do {
      if (uVar8 == 0xe) {
        uVar5 = puVar11[3] >> 1;
        puVar11 = puVar11 + 3 + uVar5;
        iVar7 = iVar7 + (uint)uVar5 + 3;
      }
      else if (uVar8 == 0) goto LAB_032ea830;
      iVar1 = iVar7 + 2;
      if (uVar8 != 0xf) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1 + 1;
      puVar11 = puVar11 + (ulong)(uVar8 == 0xf) * 2 + 1;
      uVar8 = *puVar11;
    } while( true );
  }
  goto LAB_032ea850;
code_r0x032eaaec:
  iVar7 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,local_48,iVar7);
  uVar15 = uVar15 + 1;
  param_1[2] = -1;
  *param_1 = *param_1 + iVar7;
  if (uVar15 == uVar13) {
    return;
  }
  goto LAB_032eaa30;
LAB_032ea830:
  local_48[1] = 0;
  iVar7 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,local_48,iVar7);
  param_1[2] = -1;
  *param_1 = *param_1 + iVar7;
LAB_032ea850:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar13) {
    return;
  }
  goto LAB_032ea85c;
}

