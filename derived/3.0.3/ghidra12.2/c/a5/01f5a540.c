
uint FUN_01f5a540(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_2c;
  byte local_28 [4];
  undefined4 local_24;
  
  FUN_0252d11c(local_28);
  if (((7 < local_28[0]) || (iVar3 = FUN_00a74b78(local_28), iVar3 != 0x13)) ||
     (local_24 = 1, (*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) >> 1 & 1) != 0)) {
    uVar5 = 0;
    goto LAB_01f5a5a4;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(lVar8 + 0x29c);
  *(undefined4 *)(lVar8 + 0x29c) = 0x42700000;
  if (DAT_04cd19d8 == 0) {
    bVar2 = DAT_0548e140;
LAB_01f5a630:
    uVar5 = (uint)bVar2;
    if (uVar5 < 8) goto LAB_01f5a6a4;
LAB_01f5a638:
    if (DAT_0537d558 != (long *)0x0) {
      lVar7 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar7 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x471);
        }
      }
      uVar5 = (uint)*pbVar6;
      if (uVar5 < 8) goto LAB_01f5a6a4;
    }
    uVar5 = (uint)DAT_0548e168;
    if (uVar5 < 8) goto LAB_01f5a6a4;
LAB_01f5a6b8:
    puVar4 = &DAT_04c9a0c8;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    uVar5 = (uint)*pbVar6;
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar2 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f5a630;
      }
      goto LAB_01f5a638;
    }
LAB_01f5a6a4:
    if (DAT_054f5738 == 0) goto LAB_01f5a6b8;
    puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)uVar5 * 4 + 0xde8);
  }
  local_2c = *puVar4;
  uVar5 = FUN_02087ce0(lVar8,&local_2c,0);
  *(undefined4 *)(lVar8 + 0x29c) = uVar9;
LAB_01f5a5a4:
  return uVar5 & 1;
}

