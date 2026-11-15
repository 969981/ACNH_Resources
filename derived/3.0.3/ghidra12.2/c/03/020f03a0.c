
void FUN_020f03a0(char *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  byte bVar16;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (8 < (byte)param_1[1]) {
    return;
  }
  cVar4 = *param_1;
  lVar8 = FUN_0265c3e0((int)cVar4);
  if (lVar8 == 0) {
    return;
  }
  cVar5 = param_1[1];
  lVar11 = *(long *)(lVar8 + 0x28);
  if (lVar11 == 0) {
    *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10764) = (int)cVar5;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 1;
      plVar9 = *(long **)(lVar11 + 0x20);
joined_r0x020f0704:
      if (plVar9 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar8 + 8);
        uStack_50 = *(undefined8 *)(lVar8 + 0x10);
        local_48 = 0x13230;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar7 = uVar7 ^ 1;
      if (*(long *)(lVar8 + 0x28) != 0) {
        plVar9 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
        goto joined_r0x020f0704;
      }
    }
    *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10764) = (int)cVar5;
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  bVar16 = DAT_0537bdb8;
  uVar7 = (uint)cVar4;
  pbVar2 = *(byte **)PTR_DAT_04bb4760 + (ulong)uVar7 * 0x15;
  if (0x6c < uVar7) {
    pbVar2 = *(byte **)PTR_DAT_04bb4760;
  }
  bVar12 = pbVar2[5];
  uVar14 = (uint)pbVar2[4] | (bVar12 & 3) << 8;
  if (0x1ff < uVar14) {
    uVar14 = uVar14 | 0xfffffc00;
  }
  if ((uint)*(ushort *)(param_1 + 2) != (uVar14 & 0xffff)) {
    bVar12 = DAT_0537bdb8 >> 6;
    bVar6 = DAT_0537bdb8 << 2;
    pbVar2[7] = bVar12 | 4;
    pbVar2[6] = bVar12 | bVar6;
    pbVar2[0xb] = pbVar2[0xb] & 0x3f;
    pbVar2[4] = 0xff;
    pbVar2[8] = pbVar2[8] & 0xc0;
    bVar12 = bVar16 << 2 | 3;
    pbVar2[5] = bVar12;
    pbVar2[0xc] = pbVar2[0xc] & 0xfc;
    uVar14 = (uint)*(ushort *)(param_1 + 2);
  }
  local_58._0_4_ = uVar7;
  if (((uVar14 ^ 0xffffffff) & 0xffff) != 0) {
    local_58._0_4_ = 3;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar14 & 0xffffffffU) * 8);
    if ((uVar14 & 0xff00) != 0) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) == 0) {
LAB_020f05c0:
      bVar16 = (byte)(uVar14 >> 8);
      goto LAB_020f05c4;
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar14 = 0;
      puVar10 = DAT_055c1b60;
      do {
        if (*(int *)(puVar10 + -1) == 0x6622bd46) goto LAB_020f05c0;
        puVar10 = (undefined8 *)puVar10[1];
        uVar14 = uVar14 + 1;
      } while (puVar10 != &DAT_055c1b58);
    }
  }
  uVar14 = 0xff;
  bVar16 = 0xff;
LAB_020f05c4:
  pbVar2[4] = (byte)uVar14;
  pbVar2[5] = bVar12 & 0xfc | bVar16 & 3;
  if (DAT_0537fc68 != 0) {
    puVar13 = (undefined1 *)(DAT_0537fc68 + (long)(int)uVar7 * 6);
    uVar7 = (uint)*pbVar2 | (pbVar2[1] & 0xf) << 8;
    if ((pbVar2[1] & 8) != 0) {
      uVar7 = uVar7 | 0xfffff000;
    }
    bVar16 = (byte)((uint)(int)(float)(int)uVar7 >> 8);
    *puVar13 = (char)(int)(float)(int)uVar7;
    puVar13[1] = puVar13[1] & 0xf0 | bVar16 & 0xf;
    uVar14 = (uint)(pbVar2[1] >> 4) | (uint)pbVar2[2] << 4;
    uVar7 = uVar14 | 0xfffff000;
    if (-1 < (char)pbVar2[2]) {
      uVar7 = uVar14;
    }
    puVar13[2] = (char)((uint)(int)(float)(int)uVar7 >> 4);
    puVar13[1] = bVar16 & 0xf | (byte)((int)(float)(int)uVar7 << 4);
    puVar13[3] = pbVar2[3];
    bVar16 = pbVar2[5];
    puVar13[4] = pbVar2[4];
    puVar13[5] = puVar13[5] & 0xfc | bVar16 & 3;
    local_58._0_4_ = pbVar2[7] >> 2 & 3;
    puVar13[5] = (byte)((uint)local_58 << 2) | puVar13[5] & 0xf3;
  }
  uVar7 = (uint)cVar4;
  if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    if (param_1[4] == '\0') {
      FUN_021956e0();
    }
    else {
      uVar15 = 1;
      if (param_1[1] == '\a') {
        uVar15 = 2;
      }
      uVar1 = 0;
      if (param_1[1] != '\0') {
        uVar1 = uVar15;
      }
      (&DAT_053fea28)[(ulong)uVar7 * 0x2e8] = uVar1;
    }
  }
  return;
}

