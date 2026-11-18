
void FUN_033d5cc0(undefined4 *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  undefined4 local_18;
  undefined2 local_14 [2];
  
  local_18 = 1;
  FUN_007ef010(local_14,PTR_DAT_04bb3170);
  *param_1 = local_18;
  *(undefined2 *)(param_1 + 1) = local_14[0];
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_033d5d60:
    if (7 < *pbVar6) {
LAB_033d5d6c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        bVar7 = *pbVar6;
        bVar4 = 7 < bVar7;
        if (bVar4) {
          bVar7 = 0xff;
        }
        local_18 = CONCAT31(local_18._1_3_,bVar7);
        if (!bVar4) goto LAB_033d5df4;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_033d5d60;
      }
      goto LAB_033d5d6c;
    }
  }
  bVar2 = *pbVar6;
  bVar7 = bVar2;
  if (7 < bVar2) {
    bVar7 = 0xff;
  }
  local_18 = CONCAT31(local_18._1_3_,bVar7);
  if (7 < bVar2) {
    return;
  }
LAB_033d5df4:
  uVar5 = FUN_02582d8c(&local_18,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((uVar5 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar5 = FUN_02582d8c(&local_18,1), uVar5 < 8 &&
      (*(char *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar8 = *(long *)puVar3 + (ulong)uVar5 * 0x13f0;
    *param_1 = *(undefined4 *)(lVar8 + 0x13b0);
    local_18 = 1;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(lVar8 + 0x13b4);
    FUN_007ef010(local_14,PTR_DAT_04bb3170);
    *(undefined4 *)(lVar8 + 0x13b0) = local_18;
    *(undefined2 *)(lVar8 + 0x13b4) = local_14[0];
  }
  return;
}

