
/* WARNING: Removing unreachable block (ram,0x0291b578) */
/* WARNING: Removing unreachable block (ram,0x0291b580) */

undefined8 FUN_0291b4f0(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_30;
  undefined4 local_28;
  undefined4 local_24;
  byte local_4 [4];
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uStack_50 = "CeremonyBridgeUnitX";
  local_58 = puVar1;
  local_28 = FUN_0273ea30(&local_58);
  uStack_50 = "CeremonyBridgeUnitZ";
  local_58 = puVar1;
  local_24 = FUN_0273ea30(&local_58);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  puVar7 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  FUN_02a58f80(&local_58,puVar7,&local_30);
  if (uStack_50._4_4_ == 0) {
    return 0;
  }
  puVar7 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar4 = &DAT_055c1098;
  }
  else {
    do {
      puVar4 = puVar7 + -8;
      if (*(int *)(puVar7 + -1) == 0x77130016) goto LAB_0291b60c;
      puVar4 = puVar7 + 1;
      puVar7 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != &DAT_055c1b58);
    puVar4 = &DAT_055c1098;
  }
LAB_0291b60c:
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_0291b66c:
    if (7 < *pbVar6) {
LAB_0291b678:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_4[0] = *pbVar6;
        if (local_4[0] < 8) goto LAB_0291b6f8;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0291b66c;
      }
      goto LAB_0291b678;
    }
  }
  local_4[0] = *pbVar6;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_0291b6f8:
  uVar5 = FUN_02917d90(puVar4,local_4,PTR_DAT_04bb7ab0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN_02921310(*(undefined8 *)PTR_DAT_04bb59b8,6,&local_58);
  return 1;
}

