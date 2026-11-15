
void FUN_01ec7be0(long *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ushort uVar6;
  byte *pbVar7;
  long lVar8;
  byte local_14 [4];
  
  uVar6 = 0;
  puVar1 = (ushort *)((long)param_1 + 0xaf64);
  lVar8 = param_1[1];
  *puVar1 = 0;
  if (*(int *)(lVar8 + 0x500) == 2) {
    if (*(int *)(lVar8 + 0x174) == 0) {
      iVar3 = *(int *)(lVar8 + 0x178);
      lVar8 = *(long *)PTR_DAT_04bb39b0;
      if (lVar8 == 0) {
        pbVar7 = &DAT_0548e140;
LAB_01ec7c88:
        if (*pbVar7 < 8) goto LAB_01ec7d00;
LAB_01ec7c94:
        if (DAT_0537d558 == (long *)0x0) {
LAB_01ec7cf8:
          pbVar7 = &DAT_0548e168;
          goto LAB_01ec7d00;
        }
        lVar8 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar2 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_14[0] = *pbVar7;
        if (7 < local_14[0]) goto LAB_01ec7cf8;
      }
      else {
        pbVar7 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar8 + 0x15c) != 0) {
          pbVar7 = (byte *)(lVar8 + 0x158);
        }
        if (7 < *pbVar7) {
          if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_01ec7c88;
          }
          goto LAB_01ec7c94;
        }
LAB_01ec7d00:
        local_14[0] = *pbVar7;
        if (7 < local_14[0]) {
          local_14[0] = 0xff;
        }
      }
      iVar5 = FUN_02582fe0(local_14);
      uVar6 = *puVar1;
      if (iVar3 == iVar5) {
        uVar6 = uVar6 | 1;
        goto LAB_01ec7d34;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  uVar6 = uVar6 & 0xfffe;
LAB_01ec7d34:
  *puVar1 = uVar6;
  (**(code **)(*param_1 + 0x4e8))(param_1);
  return;
}

