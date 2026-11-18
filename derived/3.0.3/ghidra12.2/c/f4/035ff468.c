
void FUN_035ff468(char *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  bVar3 = param_1[1];
  lVar6 = *(long *)(param_2 + 8);
  bVar4 = param_1[2];
  lVar5 = 4;
  if (param_1[4] == '\0') {
    lVar5 = 5;
  }
  uVar1 = bVar3 & 0x1f;
  if (param_1[4] != '\0') {
    uVar1 = bVar3 & 0xf;
  }
  uVar8 = (ulong)bVar4 << lVar5;
  uVar2 = 1;
  if (bVar3 != 0) {
    uVar2 = uVar1;
  }
  uVar7 = uVar8 | uVar2;
  uVar9 = 2L << ((ulong)*(byte *)(lVar6 + 0x148) & 0x3f);
  if (param_1[3] == '\0') {
    *(long *)(param_2 + 0x48) = lVar6;
    *(ulong *)(param_2 + 0x50) = lVar6 + (uVar7 & uVar9 + 0x1fff) * 0x4000;
    lVar5 = *(long *)(param_2 + 0x18);
  }
  else {
    *(undefined8 *)(param_2 + 0x60) = 0;
    uVar9 = (uVar9 & 0xffffffff) - 1;
    *(ulong *)(param_2 + 0x48) = lVar6 + (uVar9 & uVar8) * 0x4000;
    *(ulong *)(param_2 + 0x50) = lVar6 + (uVar9 & uVar7) * 0x4000;
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_035ff530;
    if (*(int *)(param_2 + 0xa8) == 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulong *)(&DAT_04194b08 + (long)*(char *)(lVar6 + 0x149) * 8);
    }
    lVar5 = *(long *)(param_2 + 0x18) + (uVar8 & bVar4) * 0x2000;
  }
  *(long *)(param_2 + 0x60) = lVar5;
LAB_035ff530:
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xfe | *param_1 != '\0';
  return;
}

