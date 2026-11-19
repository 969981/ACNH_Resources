
void FUN_03877780(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  ushort uVar2;
  byte bVar3;
  undefined ***pppuVar4;
  uint uVar5;
  undefined ***pppuVar6;
  ushort *puVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  undefined **appuStack_c8 [2];
  undefined **appuStack_b8 [4];
  undefined **local_98;
  byte *local_90;
  undefined4 local_88;
  byte local_84 [68];
  
  uVar11 = (ulong)param_2;
  lVar12 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if ((param_3 & 1) == 0) {
    plVar1 = (long *)(lVar12 + 0x128) + uVar11 * 8;
    if (3 < param_2) {
      plVar1 = (long *)(lVar12 + 0x128);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_002279b0(&local_98,plVar1[1]);
    pppuVar6 = appuStack_b8;
    pppuVar4 = &local_98;
  }
  else {
    local_88 = 0x40;
    local_84[0] = 0;
    local_84[0x3f] = 0;
    local_98 = &PTR_LAB_048fb9f8;
    plVar1 = (long *)(lVar12 + 0x128) + uVar11 * 8;
    if (3 < param_2) {
      plVar1 = (long *)(lVar12 + 0x128);
    }
    local_90 = local_84;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar5 = 0;
    lVar8 = 0x7fffffff;
    puVar7 = (ushort *)plVar1[1];
    do {
      pbVar10 = local_84 + uVar5;
      if (lVar8 == 0) goto LAB_0387791c;
      uVar2 = *puVar7;
      if (uVar2 == 0) goto LAB_0387791c;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar10 = bVar3;
        iVar9 = 1;
      }
      else if (uVar2 < 0x800) {
        if (0x3e < uVar5) break;
        *pbVar10 = (byte)(uVar2 >> 6) | 0xc0;
        local_84[(ulong)uVar5 + 1] = bVar3 & 0x3f | 0x80;
        iVar9 = 2;
      }
      else {
        if (0x3f < uVar5 + 2) break;
        *pbVar10 = (byte)(uVar2 >> 0xc) | 0xe0;
        local_84[(ulong)uVar5 + 1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        local_84[(ulong)uVar5 + 2] = bVar3 & 0x3f | 0x80;
        iVar9 = 3;
      }
      uVar5 = iVar9 + uVar5;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (uVar5 < 0x40);
    pbVar10 = local_84 + (uVar5 - 1);
LAB_0387791c:
    *pbVar10 = 0;
    (*(code *)local_98[3])(&local_98);
    FUN_00227930(appuStack_b8,local_90);
    pppuVar6 = appuStack_c8;
    pppuVar4 = appuStack_b8;
  }
  FUN_00227af0(pppuVar6,param_1,pppuVar4);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(lVar12 + 0x40);
  plVar1 = (long *)(lVar12 + 0x228) + uVar11 * 2;
  if (3 < param_2) {
    plVar1 = (long *)(lVar12 + 0x228);
  }
  if (*plVar1 == 0 && plVar1[1] == 0) {
    lVar12 = -1;
    *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  }
  else {
    *(long *)(param_1 + 0x78) = *plVar1;
    lVar12 = plVar1[1];
  }
  *(long *)(param_1 + 0x80) = lVar12;
  return;
}

