
bool FUN_02507924(long param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_DAT_04bb4f78;
  if ((((*(long *)PTR_DAT_04bb4f78 != 0) &&
       (*(char *)(*(long *)PTR_DAT_04bb4f78 + 0x431fc4) != '\0')) &&
      (lVar9 = *(long *)PTR_DAT_04bb39b0, lVar9 != 0)) && (*(int *)(lVar9 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar9 + 0x158);
    }
    bVar11 = *param_2;
    bVar10 = *pbVar1;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 != bVar11) {
      return false;
    }
  }
  uVar7 = *(uint *)(param_1 + 4);
  if (((uVar7 ^ 0xffffffff) & 7) == 0) {
    if (7 < (ulong)*param_2) {
      return false;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar9 + 0x476) < 2) {
      iVar8 = FUN_02582d8c(param_2,2);
      if (iVar8 < 0) {
        return false;
      }
    }
    else {
      bVar10 = *(byte *)(lVar9 + (ulong)*param_2 * 4 + 0x44e);
      if ((long)(char)bVar10 == 0xffffffffffffffff) {
        return false;
      }
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) == 0) {
        return false;
      }
    }
  }
  else {
    bVar10 = *param_2;
    if ((uVar7 & 1) != 0) {
      if (((bVar10 < 8) && (uVar7 = FUN_02582d8c(param_2,1), uVar7 < 8)) &&
         ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0' &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0'))))
      goto LAB_02507b14;
      uVar7 = *(uint *)(param_1 + 4);
      bVar10 = *param_2;
    }
    uVar12 = (uint)bVar10;
    if ((uVar7 >> 1 & 1) != 0) {
      if (7 < uVar12) {
        return false;
      }
      if ((*(uint *)(*(long *)puVar2 + 0x431fc0) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
      goto LAB_02507b14;
    }
    if ((uVar7 >> 2 & 1) == 0) {
      return false;
    }
    if (7 < uVar12) {
      return false;
    }
    uVar7 = FUN_02582d8c(param_2,1);
    if (7 < uVar7) {
      return false;
    }
    if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0') {
      return false;
    }
    if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0') {
      return false;
    }
  }
LAB_02507b14:
  if (*(char *)(param_1 + 8) != '\0') {
    bVar10 = *param_2;
    if (((ulong)bVar10 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      iVar8 = *(int *)(*(long *)PTR_DAT_04bb4718 + (ulong)bVar10 * 4 + 0xde8);
    }
    else {
      iVar8 = *(int *)PTR_DAT_04bb3238;
    }
    if (iVar8 == 0) {
      return false;
    }
    if (*(char *)(param_1 + 9) == '\0') {
      if (7 < bVar10) {
        return true;
      }
      if ((*(uint *)(param_1 + 4) >> 1 & 1) == 0) {
        return true;
      }
      uVar7 = (uint)bVar10;
      if ((*(uint *)(*(long *)puVar2 + 0x431fc0) >> (ulong)(uVar7 & 0x1f) & 1) == 0) {
        return true;
      }
      uVar5 = *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)uVar7 * 0x30 + 0x1f);
      uVar3 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar7 * 0x30 + 8);
      uVar4 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar7 * 0x30 + 0x10);
      lVar9 = *(long *)PTR_DAT_04bb4718 + (ulong)uVar7 * 0x80;
      *(undefined8 *)(lVar9 + 0x2f8) =
           *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar7 * 0x30 + 0x18);
      *(undefined8 *)(lVar9 + 0x2f0) = uVar4;
      *(undefined8 *)(lVar9 + 0x2e8) = uVar3;
      *(undefined4 *)(lVar9 + 0x2ff) = uVar5;
      bVar10 = *param_2;
      bVar6 = 7 < bVar10;
      if (bVar6) {
        bVar10 = 0xff;
      }
      puVar2 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar10 * 0x70;
      if (bVar6) {
        puVar2 = PTR_DAT_04bc31b8;
      }
      uVar3 = *(undefined8 *)(puVar2 + 8);
      uVar4 = *(undefined8 *)(puVar2 + 0x10);
      *(undefined8 *)(lVar9 + 0x318) = *(undefined8 *)(puVar2 + 0x18);
      *(undefined8 *)(lVar9 + 0x310) = uVar4;
      *(undefined8 *)(lVar9 + 0x308) = uVar3;
      uVar3 = *(undefined8 *)(puVar2 + 0x20);
      uVar13 = *(undefined8 *)(puVar2 + 0x28);
      uVar4 = *(undefined8 *)(puVar2 + 0x30);
      *(undefined8 *)(lVar9 + 0x338) = *(undefined8 *)(puVar2 + 0x38);
      *(undefined8 *)(lVar9 + 0x330) = uVar4;
      *(undefined8 *)(lVar9 + 0x328) = uVar13;
      *(undefined8 *)(lVar9 + 800) = uVar3;
      uVar3 = *(undefined8 *)(puVar2 + 0x40);
      uVar4 = *(undefined8 *)(puVar2 + 0x48);
      uVar13 = *(undefined8 *)(puVar2 + 0x50);
      *(undefined8 *)(lVar9 + 0x356) = *(undefined8 *)(puVar2 + 0x56);
      *(undefined8 *)(lVar9 + 0x350) = uVar13;
      *(undefined8 *)(lVar9 + 0x348) = uVar4;
      *(undefined8 *)(lVar9 + 0x340) = uVar3;
      return *(short *)(lVar9 + 0x2eb) != 0;
    }
  }
  return true;
}

