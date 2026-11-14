
void FUN_01cab5e0(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar9 = (long)*(int *)(param_1 + 0x24);
    bVar6 = false;
    puVar10 = (undefined1 *)(*(long *)(param_1 + 0x18) - lVar9);
    puVar7 = (undefined1 *)((param_1 + 0x10) - lVar9);
    puVar8 = puVar10 + lVar9;
    do {
      while (puVar8 = *(undefined1 **)(puVar8 + 8), param_2 == (byte)puVar10[10]) {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 4) = 0;
        plVar2 = (long *)(puVar10 + *(int *)(param_1 + 0x24));
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2 = (long *)(puVar10 + *(int *)(param_1 + 0x3c));
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        lVar11 = *(long *)(param_1 + 0x28);
        *(long **)(param_1 + 0x28) = plVar2;
        *plVar2 = lVar11;
        plVar2[1] = param_1 + 0x28;
        if (lVar11 != 0) {
          *(long **)(lVar11 + 8) = plVar2;
        }
        bVar6 = true;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        puVar10 = puVar8 + -lVar9;
        if (puVar10 == puVar7) goto LAB_01cab6b8;
      }
      puVar10 = puVar8 + -lVar9;
    } while (puVar10 != puVar7);
    if (bVar6) {
LAB_01cab6b8:
      bVar4 = *(byte *)(*(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88) + 0x225);
      bVar6 = 7 < bVar4;
      if (bVar6) {
        bVar4 = 0xff;
      }
      puVar3 = (ushort *)(param_1 + 0x13c) + ((long)(char)bVar4 & 0xffffffff);
      if (bVar6) {
        puVar3 = (ushort *)(param_1 + 0x13c);
      }
      uVar1 = *puVar3 + 1;
      uVar5 = (uVar1 & 0xffff) + (uVar1 & 0xffff) * 4 >> 0x10;
      *puVar3 = (short)uVar1 + (short)(uVar5 + ((uVar1 - uVar5 & 0xfffe) >> 1) >> 0xd) * -0x3fff;
    }
  }
  return;
}

