
void FUN_01d4fa90(ulong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  byte *pbVar8;
  long lVar9;
  byte local_34 [4];
  
  if ((char)param_1[0x12] != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01d4fb14:
    if (7 < *pbVar8) {
LAB_01d4fb20:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_34[0] = *pbVar8;
        if (local_34[0] < 8) goto LAB_01d4fba0;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d4fb14;
      }
      goto LAB_01d4fb20;
    }
  }
  local_34[0] = *pbVar8;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01d4fba0:
  uVar4 = FUN_0266ad00(local_34);
  lVar9 = DAT_055a1b78;
  if ((uVar4 & 1) == 0) {
    uVar7 = 3;
  }
  else if (DAT_055a1b78 == 0) {
    uVar7 = 4;
  }
  else {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = (ulong)&PTR_LAB_04a91c98;
    param_1[6] = (ulong)&PTR_LAB_04a91c98;
    param_1[10] = 0xffffffff;
    uVar3 = FUN_0252d29c();
    lVar6 = DAT_05574040;
    if ((((uVar3 < 8) && (DAT_05574040 != 0)) &&
        (lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))(), lVar5 != 0
        )) && (((lVar5 = lVar5 + (ulong)uVar3 * 0x48,
                *(long *)(lVar5 + 0x1e34c0) != 0 || *(long *)(lVar5 + 0x1e34c8) != 0 &&
                (lVar6 = FUN_026ef080(lVar6,uVar3), lVar6 != 0)) &&
               ((*(byte *)(lVar6 + 0x70464) & 1) != 0)))) {
      *(uint *)(param_1 + 10) = uVar3;
      *param_1 = *param_1 & 0xfffffffffffffff0 | 7;
    }
    FUN_0283e2d0(lVar9,param_1);
    uVar7 = 2;
  }
  *(undefined4 *)((long)param_1 + 0x5c) = uVar7;
  return;
}

