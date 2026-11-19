
void FUN_038f9634(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  char cVar7;
  
  uVar3 = *(ushort *)(param_2 + 6);
  uVar4 = (uint)uVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  if ((uVar3 & 3) == 0) {
    uVar4 = uVar3 | 1;
    param_1[2] = 0;
  }
  *(bool *)((long)param_1 + 0x1d) = (uVar4 & 0x10) == 0;
  *(bool *)((long)param_1 + 0x1c) = (uVar4 & 4) == 0;
  uVar5 = 1;
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x1e) = uVar5;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  uVar5 = (undefined1)(0x305070601 >> (((ulong)*param_2 & 7) << 3));
  if (4 < (ulong)*param_2) {
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x1f) = uVar5;
  uVar5 = (undefined1)(0x305070601 >> (((ulong)bVar1 & 7) << 3));
  if (4 < (ulong)bVar1) {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar5;
  uVar5 = (undefined1)(0x305070601 >> (((ulong)bVar2 & 7) << 3));
  if (4 < (ulong)bVar2) {
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x21) = uVar5;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x10);
  bVar1 = param_2[3];
  *(ushort *)((long)param_1 + 0x26) = (ushort)(uVar4 >> 7) & 1;
  cVar7 = '\x02';
  if (bVar1 < 8) {
    cVar7 = bVar1 + 1;
  }
  *(char *)((long)param_1 + 0x23) = cVar7;
  bVar1 = param_2[4];
  if (bVar1 == 2) {
    puVar6 = (undefined1 *)0x3f80000000000000;
    *param_1 = 0;
  }
  else {
    if (bVar1 == 1) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_038f9730;
    }
    if (bVar1 != 0) goto LAB_038f9730;
    puVar6 = &DAT_3f8000003f800000;
    *param_1 = &DAT_3f8000003f800000;
  }
  param_1[1] = puVar6;
LAB_038f9730:
  bVar1 = param_2[5];
  if ((uVar4 & 0x40) == 0) {
    bVar1 = 1;
  }
  *(byte *)((long)param_1 + 0x22) = bVar1;
  if ((uVar4 >> 8 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x24) = 1;
    return;
  }
  if ((uVar4 >> 9 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)((long)param_1 + 0x24) = 2;
  return;
}

