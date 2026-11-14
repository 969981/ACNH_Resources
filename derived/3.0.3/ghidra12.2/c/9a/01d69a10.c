
void FUN_01d69a10(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  
  plVar12 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  uVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  else {
    uVar7 = 1;
  }
  lVar9 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_01d69aa0:
    bVar6 = *(byte *)(param_1 + 0x1e2);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
      if (7 < bVar6) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if ((*pbVar1 >> 1 & 1) == 0) {
        *(byte *)(param_1 + 0x1f8) = bVar6;
      }
    }
    if ((uVar7 & 1) != 0) {
LAB_01d69ad4:
      FUN_01d6a464(param_1);
    }
  }
  else {
    pbVar1 = (byte *)(lVar9 + 0x48);
    pbVar3 = pbVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar3 = pbVar1;
    }
    if (((*pbVar3 >> 3 & 1) == 0) || (bVar5 = *(byte *)(lVar9 + 0x472), bVar5 == bVar6))
    goto LAB_01d69aa0;
    if (bVar5 == 0xff) goto LAB_01d69ad4;
    pbVar3 = pbVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar3 = pbVar1;
    }
    if ((uVar7 & 1) != 0 || (*pbVar3 & 2) == 0) goto LAB_01d69ad4;
  }
  uVar8 = *(uint *)(param_1 + 0xc0);
  if ((uVar8 == 0xffffffff) && (*(char *)(param_1 + 0xd8) != '\0')) {
    puVar13 = (undefined1 *)(param_1 + 0xd9);
    *puVar13 = 1;
    uVar4 = *(undefined4 *)(param_1 + 0xc4);
    *(undefined8 *)(param_1 + 0xc4) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    uVar8 = *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xc0) = uVar8;
    if (uVar8 == 0xffffffff) {
      *puVar13 = 0;
      goto LAB_01d69bcc;
    }
    uVar10 = *(uint *)(param_1 + 0xe0);
    lVar9 = *(long *)(param_1 + 0xe8);
    uVar2 = uVar8;
    if (uVar10 <= uVar8) {
      uVar2 = 0;
    }
    puVar11 = *(undefined8 **)(lVar9 + (long)(int)uVar2 * 0x40);
    if (puVar11 != (undefined8 *)0x0) {
      (*(code *)*puVar11)();
      uVar8 = *(uint *)(param_1 + 0xc0);
      goto LAB_01d69b48;
    }
    *puVar13 = 0;
  }
  else {
LAB_01d69b48:
    *(undefined1 *)(param_1 + 0xd9) = 0;
    if (uVar8 == 0xffffffff) goto LAB_01d69bcc;
    uVar10 = *(uint *)(param_1 + 0xe0);
    lVar9 = *(long *)(param_1 + 0xe8);
  }
  if (uVar10 <= uVar8) {
    uVar8 = 0;
  }
  lVar9 = *(long *)(lVar9 + (long)(int)uVar8 * 0x40);
  if ((lVar9 != 0) && ((**(code **)(lVar9 + 8))(), *(char *)(param_1 + 0xd9) != '\0')) {
    return;
  }
LAB_01d69bcc:
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  return;
}

