
void FUN_036486a4(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  *(undefined4 *)(param_1 + 0xf330) = param_2;
  *(undefined8 *)(param_1 + 0xf328) = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar8 = (ulong)uVar4;
  if ((uint)((uVar8 & 0x3fff) >> 8) < 0x3f) {
    lVar9 = *(long *)(param_1 + 0x90) + ((uVar8 & 0x3fff) >> 8) * 0x10;
    if (*(char *)(lVar9 + 0xbf8) == '\0') {
      *(byte *)(*(long *)(lVar9 + 0xc00) + (uVar8 & 0xff)) = (byte)param_2;
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x20) + 0x1f00;
    *(byte *)(lVar9 + (uVar8 & 0x1f)) = (byte)param_2 & 0x3f;
    puVar2 = (undefined1 *)(lVar9 + (uVar8 & 0x10));
    puVar3 = (undefined1 *)(lVar9 + (uVar8 & 0x10 ^ 0x10));
    *puVar3 = *puVar2;
    puVar3[4] = puVar2[4];
    puVar3[8] = puVar2[8];
    puVar3[0xc] = puVar2[0xc];
  }
  uVar5 = *(uint *)(param_1 + 0x44);
  uVar1 = uVar5 + 0x20;
  if ((*(byte *)(param_1 + 0x39) & 4) == 0) {
    uVar1 = uVar5 + 1;
  }
  *(uint *)(param_1 + 0x44) =
       (uVar5 & uVar1 << 0xf & 0x10000000) + (uVar5 & 0xffffc000) | uVar1 & 0x3fff;
  if ((((uVar4 >> 0xc & 1) == 0) && ((uVar1 >> 0xc & 1) != 0)) &&
     (lVar9 = *(long *)(param_1 + 0x90), *(int *)(lVar9 + 0x298) == 4)) {
    if ((*(char *)(lVar9 + 0x1c8c) == '\0') && (*(int *)(lVar9 + 0x1c84) != 0)) {
      iVar6 = *(int *)(lVar9 + 0x1c84) + -1;
      bVar7 = iVar6 == 0;
      *(int *)(lVar9 + 0x1c84) = iVar6;
      uVar4 = *(uint *)(lVar9 + 0x1c90);
    }
    else {
      bVar7 = *(int *)(lVar9 + 0x1c88) == 0;
      uVar4 = *(uint *)(lVar9 + 0x1c90);
      if ((uVar4 & 0xfffffffd) == 0) {
        bVar7 = bVar7 && *(int *)(lVar9 + 0x1c84) != 0;
      }
      *(int *)(lVar9 + 0x1c84) = *(int *)(lVar9 + 0x1c88);
      *(char *)(lVar9 + 0x1c8c) = '\0';
    }
    if (((uVar4 & 0xfffffffd) == 0) && (*(char *)(lVar9 + 0x1c8d) != '\0')) {
      bVar7 = true;
      *(undefined1 *)(lVar9 + 0x1c8d) = 0;
    }
    if ((*(char *)(lVar9 + 0x1c8e) != '\0') && (bVar7)) {
      puVar10 = *(uint **)(*(long *)(lVar9 + 0x1c68) + 0x1c08);
      *puVar10 = *puVar10 | 4;
    }
  }
  return;
}

