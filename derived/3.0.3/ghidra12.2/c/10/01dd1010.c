
undefined8 FUN_01dd1010(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (*(char *)(param_1 + 0x161) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x162) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x163) != '\0') {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) {
    if (*param_2 != 0) goto LAB_01dd1094;
  }
  else if (1 < *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U && *param_2 != 0) {
LAB_01dd1094:
    FUN_01d71e50(*(undefined8 *)(param_1 + 0xd8));
    lVar8 = *(long *)(param_1 + 0xd8);
    if (0 < *(int *)(lVar8 + 0x28)) {
      lVar4 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x30) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar7 = 0;
        *(undefined1 *)(puVar7 + 0xd8) = 0;
        *(undefined1 *)(puVar7 + 0xd9) = 0;
        *(undefined1 *)(puVar7 + 0x16c) = 0;
        *(undefined1 *)(puVar7 + 0x30e) = 0;
      } while (lVar4 < *(int *)(lVar8 + 0x28));
    }
    uVar2 = *(uint *)(lVar8 + 0x58);
    if (0 < (int)uVar2) {
      uVar5 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          lVar4 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + lVar4) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + lVar4 + 0x18) = 0;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar6);
      }
      if ((uVar2 & 3) != 0) {
        lVar4 = uVar6 << 3;
        do {
          uVar5 = uVar5 - 1;
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + lVar4) = 0;
          lVar4 = lVar4 + 8;
        } while (uVar5 != 0);
      }
    }
    uVar2 = *(uint *)(lVar8 + 0x68);
    if (0 < (int)uVar2) {
      uVar5 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          lVar4 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*(long *)(lVar8 + 0x70) + lVar4) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x70) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x70) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar8 + 0x70) + lVar4 + 0x18) = 0;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar6);
      }
      if ((uVar2 & 3) != 0) {
        lVar4 = uVar6 << 3;
        do {
          uVar5 = uVar5 - 1;
          *(undefined8 *)(*(long *)(lVar8 + 0x70) + lVar4) = 0;
          lVar4 = lVar4 + 8;
        } while (uVar5 != 0);
      }
    }
    *(undefined8 *)(lVar8 + 0x98) = 0;
    if (*(void **)(lVar8 + 0x78) != (void *)0x0) {
      iVar3 = *(int *)(lVar8 + 0x80);
      iVar1 = iVar3 + 0x1e;
      if (0 < iVar3) {
        iVar1 = iVar3 + -1;
      }
      uVar2 = (iVar1 >> 5) + 1;
      memset(*(void **)(lVar8 + 0x78),0,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
    }
    if (*(void **)(lVar8 + 0x88) != (void *)0x0) {
      iVar3 = *(int *)(lVar8 + 0x90);
      iVar1 = iVar3 + 0x1e;
      if (0 < iVar3) {
        iVar1 = iVar3 + -1;
      }
      uVar2 = (iVar1 >> 5) + 1;
      memset(*(void **)(lVar8 + 0x88),0,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
    }
    *(long *)(param_1 + 0xb8) = *param_2;
    lVar8 = *param_2;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(long *)(param_1 + 200) = lVar8;
    *(undefined4 *)(param_1 + 0x48) = 7;
    FUN_03ebb160(param_1,6);
    return 1;
  }
  return 0;
}

