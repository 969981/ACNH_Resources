
void FUN_032646b0(uint *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte local_24 [4];
  
  puVar5 = PTR_DAT_04bb37e0;
  if ((int)param_2 < 0) {
    return;
  }
  uVar8 = (ulong)*param_1;
  if ((int)*param_1 <= (int)param_2) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 2);
  puVar11 = (undefined4 *)puVar6[param_2];
  if (*param_3 != 0) {
    iVar3 = *param_3;
    if (iVar3 == 3) {
      if (puVar11 == (undefined4 *)0x0) {
        return;
      }
      lVar9 = uVar8 << 3;
      do {
        uVar10 = 7;
        if (*(int *)*puVar6 == 7) {
          *(int *)*puVar6 = 3;
          uVar10 = 7;
          break;
        }
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    else if (iVar3 == 2) {
      if (puVar11 == (undefined4 *)0x0) {
        return;
      }
      lVar9 = uVar8 << 3;
      do {
        uVar10 = 6;
        if (*(int *)*puVar6 == 6) {
          *(int *)*puVar6 = 3;
          uVar10 = 6;
          break;
        }
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    else {
      if (iVar3 != 1) {
        return;
      }
      if (puVar11 == (undefined4 *)0x0) {
        return;
      }
      lVar9 = uVar8 << 3;
      do {
        uVar10 = 5;
        if (*(int *)*puVar6 == 5) {
          *(int *)*puVar6 = 3;
          uVar10 = 5;
          break;
        }
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    *puVar11 = uVar10;
    return;
  }
  if (((param_1[0x11a7a] == 0) || (param_1[0x11a7a] - 1 < (uint)puVar11[3])) ||
     (iVar3 = **(int **)(*(long *)(param_1 + 0x11a7c) + (long)(int)puVar11[3] * 8), iVar3 == -1))
  goto LAB_03264914;
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_03264874:
    if (*pbVar7 < 8) goto LAB_032648ec;
LAB_03264880:
    if (DAT_0537d558 == (long *)0x0) {
LAB_032648e4:
      pbVar7 = &DAT_0548e168;
      goto LAB_032648ec;
    }
    lVar9 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x471);
      }
    }
    local_24[0] = *pbVar7;
    if (7 < local_24[0]) goto LAB_032648e4;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_03264874;
      }
      goto LAB_03264880;
    }
LAB_032648ec:
    local_24[0] = *pbVar7;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  FUN_0267c820(local_24,iVar3,PTR_DAT_04bb37e0,0);
LAB_03264914:
  uVar10 = *(undefined4 *)puVar5;
  uVar2 = *(undefined4 *)(puVar5 + 4);
  *puVar11 = 0;
  puVar11[1] = uVar10;
  puVar11[2] = uVar2;
  puVar11[3] = 0xffffffff;
  return;
}

