
void FUN_022ee0a4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  if ((*(int *)(param_2 + 0x10) != 0) || (uVar5 = *(uint *)(param_2 + 8), uVar5 == 0)) {
    uVar5 = 2;
    if (*(int *)(param_2 + 0xc) == 1) {
      uVar5 = 3;
    }
    goto LAB_022ee240;
  }
  if ((int)*(uint *)(DAT_0519d040 + 0x5d0) < 1) {
    if ((((*(long *)(DAT_0519d040 + 0x4c0) == 0) ||
         (puVar6 = *(uint **)(*(long *)(DAT_0519d040 + 0x4c0) + 8), puVar6 == (uint *)0x0)) ||
        ((uVar5 < *(uint *)(DAT_0519d040 + 0x4d8) &&
         (*(char *)(*(long *)(DAT_0519d040 + 0x4e0) + (long)(int)uVar5) == '\0')))) ||
       (((*puVar6 <= uVar5 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_022ee234;
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
    if (puVar6 != (uint *)0x0) goto LAB_022ee13c;
    uVar4 = 0;
  }
  else {
    if (uVar5 < *(uint *)(DAT_0519d040 + 0x5d0)) {
      if (*(uint *)(DAT_0519d040 + 0x5c0) <= uVar5) {
        uVar5 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_0519d040 + 0x5c8) + (ulong)uVar5 * 8);
      uVar4 = 0;
      if (puVar6 == (uint *)0x0) goto LAB_022ee238;
LAB_022ee13c:
      uVar5 = *puVar6;
      if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
        if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05160b70) &&
               (uVar4 = *(ushort *)(DAT_05160b78 + (long)(int)uVar2 * 2), uVar4 < 2))
            goto LAB_022ee238;
          }
        }
      }
    }
LAB_022ee234:
    uVar4 = 0;
  }
LAB_022ee238:
  uVar5 = (uint)(uVar4 != 0);
LAB_022ee240:
  *(uint *)(param_1 + 8) = uVar5;
  return;
}

