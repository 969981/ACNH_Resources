
/* WARNING: Removing unreachable block (ram,0x024c1e68) */

void FUN_024c1c20(byte *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb6298;
  bVar4 = *(byte *)(param_2 + 0x36);
  if (3 < bVar4) {
    bVar4 = 0;
  }
  if ((bVar4 == 3) || (bVar4 == 2)) {
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
    if (7 < *param_1) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
      lVar8 = lVar2 + 0x400;
      *(undefined4 *)(lVar2 + 0x35c) = 3;
LAB_024c1d4c:
      FUN_01393458(lVar8);
      return;
    }
    *(undefined4 *)(lVar2 + 0x35c) = 4;
  }
  else if (bVar4 == 1) {
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
    if (7 < *param_1) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar2 + 0xc) = 3;
      FUN_01393458(lVar2 + 0xb0);
    }
    else {
      *(undefined4 *)(lVar2 + 0xc) = 4;
    }
    if ((((*param_1 < 8) && (uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8)) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0' &&
        (sVar5 = *(short *)puVar3, sVar5 != -1)))) {
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) {
        local_38 = 0xfffe;
        FUN_0277d4ac(&local_38);
        local_38 = *(undefined8 *)(param_2 + 0x38);
        iVar7 = FUN_0277d6c4(&local_38);
        if ((iVar7 == 0xa12) && (*(char *)(*(long *)PTR_DAT_04bb3728 + 0x198) != '\0')) {
          piVar1 = (int *)(*(long *)PTR_DAT_04bb3728 + 0x15c);
          *piVar1 = *piVar1 + 1;
        }
      }
    }
  }
  else {
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
    if (7 < *param_1) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
      lVar8 = lVar2 + 0x2f0;
      *(undefined4 *)(lVar2 + 0x24c) = 3;
      goto LAB_024c1d4c;
    }
    *(undefined4 *)(lVar2 + 0x24c) = 4;
  }
  return;
}

