
undefined8 FUN_014717ac(long param_1,byte *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_1 + 0x70) + 0x280);
  }
  if (iVar4 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x284);
    if (uVar2 < 1000) {
      if ((DAT_04c47dc0 < (short)uVar2) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar2 & 0xffffffffU) * 0x10) == 0)) {
        uVar7 = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar2 * 0x10 + 8);
      }
      lVar6 = *(long *)PTR_DAT_04bb6270;
      uVar3 = FUN_00a76844(lVar6,0x13);
      if (uVar3 != 0xffffffff) {
        pbVar1 = (byte *)(lVar6 + 0x10) + (ulong)uVar3 * 0x20;
        if (0x1f < uVar3) {
          pbVar1 = (byte *)(lVar6 + 0x10);
        }
        bVar5 = *param_2;
        pbVar1[0x1c] = 0;
        pbVar1[0x1d] = 0;
        pbVar1[0x1e] = 0;
        pbVar1[0x1f] = 0;
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        *pbVar1 = bVar5;
        *(undefined8 *)(pbVar1 + 8) = uVar7;
        pbVar1[0x10] = 3;
        pbVar1[0x11] = 0;
        pbVar1[0x12] = 0;
        pbVar1[0x13] = 0;
        pbVar1[0x14] = 0;
        pbVar1[0x15] = 0;
        pbVar1[0x16] = 0;
        pbVar1[0x17] = 0;
        pbVar1[0x18] = 2;
        if (*(int *)(lVar6 + 0x410) < *(int *)(lVar6 + 0x414)) {
          *(byte **)(*(long *)(lVar6 + 0x418) + (long)*(int *)(lVar6 + 0x410) * 8) = pbVar1;
          *(int *)(lVar6 + 0x410) = *(int *)(lVar6 + 0x410) + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

