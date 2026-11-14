
void FUN_01d69f00(long param_1,short param_2)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short local_28;
  byte local_26;
  undefined4 local_24;
  undefined4 local_8;
  undefined2 local_4;
  ushort uStack_2;
  
  lVar9 = *DAT_0537d558;
  bVar8 = *(byte *)(lVar9 + 0x472);
  if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_01d69f60:
    *(undefined1 *)(param_1 + 0x1fb) = 1;
    return;
  }
  pbVar2 = (byte *)(lVar9 + 0x48);
  pbVar4 = pbVar2 + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
  if (7 < bVar8) {
    pbVar4 = pbVar2;
  }
  if ((*pbVar4 >> 1 & 1) == 0) goto LAB_01d69f60;
  bVar8 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)bVar8 == 0xffffffffffffffff) goto LAB_01d69f60;
  pbVar4 = pbVar2 + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
  if (7 < bVar8) {
    pbVar4 = pbVar2;
  }
  if ((*pbVar4 >> 3 & 1) == 0) goto LAB_01d69f60;
  if (DAT_04c487d4 != -1) {
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar5 >> 5 & 1) != 0) && ((long)(short)DAT_04c487cc != 0xffffffffffffffff)) {
      uStack_2 = 0;
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487cc & 0xffffffffU) * 8);
      if (0xff < DAT_04c487cc) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 5 & 1) != 0) goto LAB_01d69f60;
    }
  }
  puVar10 = DAT_055c1b60 + -8;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar11 = 0;
    puVar12 = DAT_055c1b60;
    puVar13 = puVar10;
    do {
      if (*(int *)(puVar13 + 7) == -0x2f1ac06c) goto LAB_01d6a054;
      puVar12 = (undefined8 *)puVar12[1];
      sVar11 = sVar11 + 1;
      puVar13 = puVar12 + -8;
    } while (puVar12 != &DAT_055c1b58);
  }
  sVar11 = -1;
LAB_01d6a054:
  if ((sVar11 == param_2) && (*(int *)(DAT_0537d558[2] + 0x380) - 0x25U < 2)) goto LAB_01d69f60;
  if (puVar10 != &DAT_055c1b18) {
    sVar11 = 0;
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar10 + 7) == -0x3f5c743d) goto LAB_01d6a0b4;
      puVar12 = (undefined8 *)puVar12[1];
      sVar11 = sVar11 + 1;
      puVar10 = puVar12 + -8;
    } while (puVar12 != &DAT_055c1b58);
  }
  sVar11 = -1;
LAB_01d6a0b4:
  if ((sVar11 == param_2) && (*(int *)(DAT_0537d558[2] + 0x380) - 0x25U < 2)) goto LAB_01d69f60;
  *(undefined1 *)(param_1 + 0x1fb) = 0;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  local_26 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)local_26 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar9 + 0x48) + ((long)(char)local_26 & 0xffffffffU) * 0x80;
    if (7 < local_26) {
      pbVar2 = (byte *)(lVar9 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (local_26 != *(byte *)(lVar9 + 0x472))) {
      local_24 = 0;
      local_8 = 0;
      uStack_2 = uStack_2 & 0xff00;
      _local_4 = CONCAT22(uStack_2,0xff01);
      if (-1 < *(int *)(param_1 + 8)) {
        local_28 = param_2;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 8),&local_8,&local_28,8,
                     0);
      }
      goto LAB_01d6a1bc;
    }
  }
  iVar6 = *(int *)(param_1 + 0x1a8);
  iVar7 = *(int *)(param_1 + 0x1a0);
  if (iVar6 < iVar7) {
    *(int *)(param_1 + 0x1a8) = iVar6 + 1;
    iVar6 = *(int *)(param_1 + 0x1a4) + iVar6;
    iVar3 = 0;
    if (iVar7 <= iVar6) {
      iVar3 = iVar7;
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x198) + (long)(iVar6 - iVar3) * 4);
    *psVar1 = param_2;
    *(byte *)(psVar1 + 1) = local_26;
  }
LAB_01d6a1bc:
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x1f9) = 0x101;
  return;
}

