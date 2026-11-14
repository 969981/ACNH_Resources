
void FUN_0167f380(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint local_2030 [2048];
  
  memset(local_2030,0,0x1000);
  lVar8 = 0;
  do {
    lVar1 = lVar8 + 8;
    uVar6 = *(uint *)((long)&DAT_05232814 + lVar8);
    *(uint *)((long)local_2030 + lVar8 + 0x1000) =
         *(uint *)((long)&DAT_05232810 + lVar8) | *(uint *)((long)local_2030 + lVar8);
    *(uint *)((long)local_2030 + lVar8 + 0x1004) = uVar6 | *(uint *)((long)local_2030 + lVar8 + 4);
    lVar8 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2030,local_2030 + 0x400,0x1000);
  uVar7 = 0;
  do {
    if ((local_2030[uVar7 >> 5] >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0) goto LAB_0167f430;
    uVar6 = (uint)uVar7 + 1;
    uVar7 = (ulong)uVar6;
  } while (uVar6 != 0x8000);
  uVar7 = 0;
LAB_0167f430:
  iVar4 = 0x8000;
  do {
    if ((local_2030[iVar4 - 1U >> 5] >> (ulong)(iVar4 - 1U & 0x1f) & 1) != 0) break;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_052338a0 = 5;
  DAT_052338a4 = 8;
  if (iVar4 == (int)uVar7) {
    DAT_052338a4 = 8;
    DAT_052338a0 = 5;
    return;
  }
  bVar3 = false;
  bVar2 = false;
LAB_0167f494:
  uVar6 = (uint)uVar7 & 0xfe;
  if (((int)(uint)uVar7 >> 7 & 0xfffffffeU) - 0x50 < 0x65) {
    bVar2 = (bool)(uVar6 < 0x32 | bVar2);
    bVar3 = (bool)(bVar3 | 0x31 < uVar6);
  }
  if ((bVar3) && (bVar2)) {
    DAT_052338a0 = 0x10;
    DAT_052338a4 = 0x18;
    return;
  }
  if (bVar3 || bVar2) {
    DAT_052338a0 = 10;
    DAT_052338a4 = 0xc;
  }
  do {
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar6;
    if (0x7fff < uVar6) {
      uVar6 = 0x7ffe;
      goto LAB_0167f504;
    }
  } while ((local_2030[uVar6 >> 5] >> (ulong)(uVar6 & 0x1f) & 1) == 0);
  goto LAB_0167f48c;
  while (uVar6 = uVar6 - 2, uVar6 != 0xfffffffe) {
LAB_0167f504:
    uVar5 = uVar6 + 1;
    if (((local_2030[uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) != 0) ||
       (uVar5 = uVar6, (local_2030[uVar6 >> 5] >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
      uVar7 = (ulong)(uVar5 + 1);
      goto LAB_0167f48c;
    }
  }
  uVar7 = 0;
LAB_0167f48c:
  if (iVar4 == (int)uVar7) {
    return;
  }
  goto LAB_0167f494;
}

