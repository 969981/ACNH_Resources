
void FUN_039d1bfc(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 0x1a08) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(param_1 + 0x1a08) = 0;
  }
  lVar8 = *(long *)(param_1 + 0x2058);
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x20);
    cVar3 = *(char *)(param_1 + 0x2060);
    iVar6 = (int)cVar3;
    if (*(uint *)(lVar8 + 0x18) <= (uint)(int)cVar3) {
      iVar6 = 0;
    }
    lVar7 = lVar9 + (long)iVar6 * 0x970;
    if (*(long *)(lVar7 + 0x550) != 0) {
      FUN_039499cc(*(undefined8 *)puVar4);
      *(undefined8 *)(lVar7 + 0x550) = 0;
      if ((*(uint *)(lVar8 + 0xc) & 1) != 0) {
        *(uint *)(lVar8 + 0xc) = *(uint *)(lVar8 + 0xc) | 2;
      }
    }
    lVar9 = lVar9 + (long)iVar6 * 0x970;
    uVar2 = *(uint *)(lVar9 + 0x8d8);
    uVar1 = uVar2 | 2;
    if ((uVar2 & 4) != 0) {
      uVar1 = uVar2 & 0xfffffff8;
    }
    *(uint *)(lVar9 + 0x8d8) = uVar1;
    *(undefined8 *)(param_1 + 0x2058) = 0;
    *(char *)(param_1 + 0x2060) = -1;
  }
  bVar5 = *(byte *)(param_1 + 9) & 0xfe;
  *(byte *)(param_1 + 9) = bVar5;
  if (*(long *)(param_1 + 0x1af0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar4);
    bVar5 = *(byte *)(param_1 + 9);
    *(undefined8 *)(param_1 + 0x1af0) = 0;
  }
  bVar5 = bVar5 & 0xfd;
  *(byte *)(param_1 + 9) = bVar5;
  if (*(long *)(param_1 + 0x1bd8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar4);
    bVar5 = *(byte *)(param_1 + 9);
    *(undefined8 *)(param_1 + 0x1bd8) = 0;
  }
  bVar5 = bVar5 & 0xfb;
  *(byte *)(param_1 + 9) = bVar5;
  if (*(long *)(param_1 + 0x1cc0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar4);
    bVar5 = *(byte *)(param_1 + 9);
    *(undefined8 *)(param_1 + 0x1cc0) = 0;
  }
  bVar5 = bVar5 & 0xf7;
  *(byte *)(param_1 + 9) = bVar5;
  if (*(long *)(param_1 + 0x1da8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar4);
    bVar5 = *(byte *)(param_1 + 9);
    *(undefined8 *)(param_1 + 0x1da8) = 0;
  }
  bVar5 = bVar5 & 0xef;
  *(byte *)(param_1 + 9) = bVar5;
  if (*(long *)(param_1 + 0x1e90) != 0) {
    FUN_039499cc(*(undefined8 *)puVar4);
    bVar5 = *(byte *)(param_1 + 9);
    *(undefined8 *)(param_1 + 0x1e90) = 0;
  }
  *(byte *)(param_1 + 9) = bVar5 & 0xdf;
  return;
}

