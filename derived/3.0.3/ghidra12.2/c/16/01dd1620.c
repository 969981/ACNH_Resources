
undefined8 FUN_01dd1620(long param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (((*(char *)(param_1 + 0x161) != '\0') && (*(char *)(param_1 + 0x162) != '\0')) &&
     (*(char *)(param_1 + 0x163) == '\0')) {
    if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
      uVar5 = *param_2;
      uVar4 = 0;
      if ((uVar5 != 0) && (uVar5 != *(ulong *)(param_1 + 200))) {
        *(ulong *)(param_1 + 0xb8) = uVar5;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        iVar3 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
        if (iVar3 != 0) {
          plVar6 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
          lVar8 = (long)iVar3 * 8;
LAB_01dd16c4:
          lVar8 = lVar8 + -8;
          lVar10 = *plVar6;
          if (uVar5 != *(ulong *)(lVar10 + 0x20)) goto code_r0x01dd16d4;
          FUN_01d71e50(lVar10);
          if (0 < *(int *)(lVar10 + 0x28)) {
            lVar8 = 0;
            do {
              puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + lVar8 * 8);
              lVar8 = lVar8 + 1;
              *puVar9 = 0;
              *(undefined1 *)(puVar9 + 0xd8) = 0;
              *(undefined1 *)(puVar9 + 0xd9) = 0;
              *(undefined1 *)(puVar9 + 0x16c) = 0;
              *(undefined1 *)(puVar9 + 0x30e) = 0;
            } while (lVar8 < *(int *)(lVar10 + 0x28));
          }
          uVar1 = *(uint *)(lVar10 + 0x58);
          if (0 < (int)uVar1) {
            uVar5 = (ulong)uVar1 & 3;
            if (uVar1 < 4) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar8 = uVar7 * 8;
                uVar7 = uVar7 + 4;
                *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar8) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar8 + 8) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar8 + 0x10) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar8 + 0x18) = 0;
              } while (((ulong)uVar1 & 0xfffffffc) != uVar7);
            }
            if ((uVar1 & 3) != 0) {
              lVar8 = uVar7 << 3;
              do {
                uVar5 = uVar5 - 1;
                *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar8) = 0;
                lVar8 = lVar8 + 8;
              } while (uVar5 != 0);
            }
          }
          uVar1 = *(uint *)(lVar10 + 0x68);
          if (0 < (int)uVar1) {
            uVar5 = (ulong)uVar1 & 3;
            if (uVar1 < 4) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar8 = uVar7 * 8;
                uVar7 = uVar7 + 4;
                *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar8) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar8 + 8) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar8 + 0x10) = 0;
                *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar8 + 0x18) = 0;
              } while (((ulong)uVar1 & 0xfffffffc) != uVar7);
            }
            if ((uVar1 & 3) != 0) {
              lVar8 = uVar7 << 3;
              do {
                uVar5 = uVar5 - 1;
                *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar8) = 0;
                lVar8 = lVar8 + 8;
              } while (uVar5 != 0);
            }
          }
          *(undefined8 *)(lVar10 + 0x98) = 0;
          if (*(void **)(lVar10 + 0x78) != (void *)0x0) {
            iVar2 = *(int *)(lVar10 + 0x80);
            iVar3 = iVar2 + 0x1e;
            if (0 < iVar2) {
              iVar3 = iVar2 + -1;
            }
            uVar1 = (iVar3 >> 5) + 1;
            memset(*(void **)(lVar10 + 0x78),0,
                   -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
          }
          if (*(void **)(lVar10 + 0x88) != (void *)0x0) {
            iVar2 = *(int *)(lVar10 + 0x90);
            iVar3 = iVar2 + 0x1e;
            if (0 < iVar2) {
              iVar3 = iVar2 + -1;
            }
            uVar1 = (iVar3 >> 5) + 1;
            memset(*(void **)(lVar10 + 0x88),0,
                   -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
          }
        }
LAB_01dd18a4:
        *(undefined4 *)(param_1 + 0x48) = 9;
        FUN_03ebb160(param_1,6);
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
code_r0x01dd16d4:
  plVar6 = plVar6 + 1;
  if (*(ulong *)(lVar10 + 0x20) < uVar5 || lVar8 == 0) goto LAB_01dd18a4;
  goto LAB_01dd16c4;
}

