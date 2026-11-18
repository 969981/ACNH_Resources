
uint FUN_036484e8(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar7 = (ulong)uVar2;
  lVar6 = *(long *)(param_1 + 0x90);
  if ((*(int *)(lVar6 + 0x298) == 0xb9) && (*(char *)(lVar6 + 0x1f6a) == '\0')) {
    *(char *)(lVar6 + 0x1f6a) = '\x01';
    uVar5 = 0xff;
    uVar9 = *(uint *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = 0xff;
  }
  else {
    if ((uint)((uVar7 & 0x3fff) >> 8) < 0x3f) {
      uVar5 = *(uint *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) =
           (uint)*(byte *)(*(long *)(lVar6 + ((uVar7 & 0x3fff) >> 4 & 0x3f0) + 0xc00) +
                          (uVar7 & 0xff));
    }
    else {
      uVar5 = 0;
      if ((ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0xf328)) < 0x2b9fa) {
        uVar5 = *(uint *)(param_1 + 0xf330) & 0xc0;
      }
      uVar5 = uVar5 | *(byte *)(*(long *)(lVar6 + 0x20) + (uVar7 & 0x1f) + 0x1f00);
      *(uint *)(param_1 + 0x48) =
           (uint)*(byte *)(*(long *)(lVar6 + ((ulong)(uVar2 >> 8) & 0xf) * 0x10 + 0xe00) +
                          (uVar7 & 0xff));
    }
    uVar9 = uVar2;
  }
  uVar1 = uVar9 + 0x20;
  if ((*(byte *)(param_1 + 0x39) & 4) == 0) {
    uVar1 = uVar9 + 1;
  }
  *(uint *)(param_1 + 0x44) =
       (uVar9 & uVar1 << 0xf & 0x10000000) + (uVar9 & 0xffffc000) | uVar1 & 0x3fff;
  if ((((uVar2 >> 0xc & 1) == 0) && ((uVar1 >> 0xc & 1) != 0)) &&
     (lVar6 = *(long *)(param_1 + 0x90), *(int *)(lVar6 + 0x298) == 4)) {
    if ((*(char *)(lVar6 + 0x1c8c) == '\0') && (*(int *)(lVar6 + 0x1c84) != 0)) {
      iVar3 = *(int *)(lVar6 + 0x1c84) + -1;
      bVar4 = iVar3 == 0;
      *(int *)(lVar6 + 0x1c84) = iVar3;
      uVar2 = *(uint *)(lVar6 + 0x1c90);
    }
    else {
      bVar4 = *(int *)(lVar6 + 0x1c88) == 0;
      uVar2 = *(uint *)(lVar6 + 0x1c90);
      if ((uVar2 & 0xfffffffd) == 0) {
        bVar4 = bVar4 && *(int *)(lVar6 + 0x1c84) != 0;
      }
      *(int *)(lVar6 + 0x1c84) = *(int *)(lVar6 + 0x1c88);
      *(char *)(lVar6 + 0x1c8c) = '\0';
    }
    if (((uVar2 & 0xfffffffd) == 0) && (*(char *)(lVar6 + 0x1c8d) != '\0')) {
      bVar4 = true;
      *(undefined1 *)(lVar6 + 0x1c8d) = 0;
    }
    if ((*(char *)(lVar6 + 0x1c8e) != '\0') && (bVar4)) {
      puVar8 = *(uint **)(*(long *)(lVar6 + 0x1c68) + 0x1c08);
      *puVar8 = *puVar8 | 4;
    }
  }
  *(uint *)(param_1 + 0xf330) = uVar5;
  *(long *)(param_1 + 0xf328) = *(long *)(param_1 + 0x70);
  return uVar5;
}

