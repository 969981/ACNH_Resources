
void FUN_029e1980(long param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  
  cVar9 = *(char *)(param_1 + 9);
  bVar6 = *(byte *)(param_2 + 8);
  bVar7 = *(byte *)(param_2 + 10);
  if (cVar9 != '\0' && (*(byte *)(param_2 + 9) & 1) != 0) {
    cVar9 = '\0';
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if ((cVar9 == '\0') && ((bVar7 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    if ((bVar6 & 1) == 0) {
LAB_029e1a70:
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      return;
    }
LAB_029e19d8:
    *(byte *)(param_1 + 8) = bVar6 & 1;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 0xb) = 2;
  }
  else {
    if ((*(char *)(param_1 + 0xb) == '\x01') && ((bVar6 & 1) != 0)) goto LAB_029e19d8;
    if (cVar9 == '\0') goto LAB_029e1a70;
    *(byte *)(param_1 + 8) = bVar6 & 1;
    if ((bVar6 & 1) == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
      uVar5 = *(uint *)(param_1 + 0x10);
      goto joined_r0x029e1a68;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if ((DAT_05467d30 == 6) ||
     ((DAT_05467d30 == 2 && ((DAT_05467d70 != 0 || (DAT_05467d28 != '\0')))))) {
    bVar8 = *(int *)(*(long *)PTR_DAT_04bb26a8 + 0x63804) == 3;
    iVar11 = -(uint)!bVar8;
  }
  else {
    bVar8 = false;
    iVar11 = -1;
  }
  *(int *)(param_1 + 0xc) = iVar11;
  bVar2 = false;
  if (iVar4 != iVar11) {
    bVar2 = bVar8;
  }
  *(bool *)(param_1 + 10) = bVar2;
  uVar5 = *(uint *)(param_1 + 0x10);
joined_r0x029e1a68:
  if (uVar5 != 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    uVar12 = 0;
    do {
      pcVar13 = (char *)(lVar10 + ((long)((ulong)uVar12 << 0x20) >> 0x1b) + 0x10);
      if (*pcVar13 != '\0') {
        *pcVar13 = '\0';
        puVar1 = (undefined4 *)(lVar10 + (long)(int)uVar12 * 0x20);
        uVar3 = puVar1[5];
        *(undefined8 *)(puVar1 + 5) = 0xffffffffffffffff;
        *puVar1 = uVar3;
        puVar1[1] = puVar1[6];
      }
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  return;
}

