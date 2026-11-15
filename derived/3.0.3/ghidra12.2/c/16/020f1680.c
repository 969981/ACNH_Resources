
void FUN_020f1680(char *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  short sVar11;
  long lVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  byte bVar18;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (8 < (byte)param_1[1]) {
    return;
  }
  cVar4 = *param_1;
  lVar8 = FUN_016c91a4((int)cVar4);
  if (lVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar8 + 0x28);
  if (lVar12 == 0) {
    *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1630) = (int)param_1[1];
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 1;
      plVar9 = *(long **)(lVar12 + 0x20);
joined_r0x020f1a3c:
      if (plVar9 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar8 + 8);
        uStack_40 = *(undefined8 *)(lVar8 + 0x10);
        local_38 = 0x1638;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
      }
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar7 = uVar7 ^ 1;
      if (*(long *)(lVar8 + 0x28) != 0) {
        plVar9 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
        goto joined_r0x020f1a3c;
      }
    }
    *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1630) = (int)param_1[1];
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  bVar18 = DAT_0537bdb8;
  uVar7 = (int)*param_1 + 0x51;
  pbVar1 = *(byte **)PTR_DAT_04bb4760 + (ulong)uVar7 * 0x15;
  if (0x6c < uVar7) {
    pbVar1 = *(byte **)PTR_DAT_04bb4760;
  }
  bVar14 = pbVar1[5];
  uVar17 = (uint)pbVar1[4] | (bVar14 & 3) << 8;
  if (0x1ff < uVar17) {
    uVar17 = uVar17 | 0xfffffc00;
  }
  if ((uint)*(ushort *)(param_1 + 2) != (uVar17 & 0xffff)) {
    bVar14 = DAT_0537bdb8 >> 6;
    bVar5 = DAT_0537bdb8 << 2;
    pbVar1[7] = bVar14 | 4;
    pbVar1[6] = bVar14 | bVar5;
    pbVar1[0xb] = pbVar1[0xb] & 0x3f;
    pbVar1[4] = 0xff;
    pbVar1[8] = pbVar1[8] & 0xc0;
    bVar14 = bVar18 << 2 | 3;
    pbVar1[5] = bVar14;
    pbVar1[0xc] = pbVar1[0xc] & 0xfc;
    uVar17 = (uint)*(ushort *)(param_1 + 2);
  }
  local_48._0_4_ = uVar7;
  if (((uVar17 ^ 0xffffffff) & 0xffff) == 0) {
LAB_020f1890:
    uVar17 = 0xff;
    bVar18 = 0xff;
  }
  else {
    local_48._0_4_ = 3;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar17 & 0xffffffffU) * 8);
    if ((uVar17 & 0xff00) != 0) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar17 = 0;
        puVar10 = DAT_055c1b60;
        do {
          if (*(int *)(puVar10 + -1) == 0x6622bd46) goto LAB_020f189c;
          puVar10 = (undefined8 *)puVar10[1];
          uVar17 = uVar17 + 1;
        } while (puVar10 != &DAT_055c1b58);
      }
      goto LAB_020f1890;
    }
LAB_020f189c:
    bVar18 = (byte)(uVar17 >> 8);
  }
  pbVar1[4] = (byte)uVar17;
  pbVar1[5] = bVar14 & 0xfc | bVar18 & 3;
  if (DAT_0537fc68 != 0) {
    uVar7 = (uint)*pbVar1 | (pbVar1[1] & 0xf) << 8;
    lVar8 = DAT_0537fc68 + (long)(int)*param_1 * 6;
    if ((pbVar1[1] & 8) != 0) {
      uVar7 = uVar7 | 0xfffff000;
    }
    bVar18 = (byte)((uint)(int)(float)(int)uVar7 >> 8);
    *(char *)(lVar8 + 0x70) = (char)(int)(float)(int)uVar7;
    *(byte *)(lVar8 + 0x71) = *(byte *)(lVar8 + 0x71) & 0xf0 | bVar18 & 0xf;
    uVar17 = (uint)(pbVar1[1] >> 4) | (uint)pbVar1[2] << 4;
    uVar7 = uVar17 | 0xfffff000;
    if (-1 < (char)pbVar1[2]) {
      uVar7 = uVar17;
    }
    *(char *)(lVar8 + 0x72) = (char)((uint)(int)(float)(int)uVar7 >> 4);
    *(byte *)(lVar8 + 0x71) = bVar18 & 0xf | (byte)((int)(float)(int)uVar7 << 4);
    *(byte *)(lVar8 + 0x73) = pbVar1[3];
    bVar18 = pbVar1[5];
    *(byte *)(lVar8 + 0x74) = pbVar1[4];
    *(byte *)(lVar8 + 0x75) = *(byte *)(lVar8 + 0x75) & 0xfc | bVar18 & 3;
    local_48._0_4_ = pbVar1[7] >> 2 & 3;
    *(byte *)(lVar8 + 0x75) = (byte)((uint)local_48 << 2) | *(byte *)(lVar8 + 0x75) & 0xf3;
  }
  lVar8 = FUN_021c9770((int)cVar4,1);
  if (lVar8 == 0) {
    return;
  }
  iVar15 = (int)param_1[1];
  local_48 = CONCAT44(local_48._4_4_,iVar15);
  sVar11 = *(short *)(param_1 + 2);
  switch(param_1[1]) {
  case '\0':
    break;
  default:
    iVar15 = 1;
    break;
  case '\x04':
    bVar6 = DAT_055c1b60 == &DAT_055c1b58;
    puVar10 = DAT_055c1b60 + -8;
    if ((sVar11 != 0) && (puVar16 = DAT_055c1b60, puVar10 != &DAT_055c1b18)) {
      do {
        puVar16 = (undefined8 *)puVar16[1];
        sVar11 = sVar11 + -1;
        bVar6 = puVar16 == &DAT_055c1b58;
      } while (!bVar6 && sVar11 != 0);
      puVar10 = puVar16 + -8;
    }
    puVar16 = &DAT_055c04a0;
    if (!bVar6) {
      puVar16 = puVar10;
    }
    uVar3 = *(undefined4 *)(puVar16 + 7);
    iVar15 = 2;
    *(undefined4 *)(lVar8 + 0x1fc) = 2;
    *(undefined4 *)(lVar8 + 0x1f8) = uVar3;
    break;
  case '\x05':
    uVar13 = 0x8a17f484;
    goto LAB_020f1a64;
  case '\x06':
    uVar13 = 0x591e12aa0;
LAB_020f1a64:
    *(undefined8 *)(lVar8 + 0x1f8) = uVar13;
    iVar15 = 2;
  }
  FUN_020939a8(lVar8 + 0x10,iVar15,0,0);
  return;
}

