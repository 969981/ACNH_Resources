
undefined4 FUN_0099f200(long param_1,byte *param_2,short *param_3,undefined4 *param_4)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  short *psVar9;
  undefined8 uVar10;
  long lVar11;
  void *__dest;
  void *__src;
  long *plVar12;
  
  uVar8 = (ulong)*param_2;
  if ((7 < uVar8) ||
     (psVar1 = (short *)(param_1 + 0x278), (char)psVar1[uVar8 * 0xd0 + 0xcd] != '\0')) {
    psVar9 = (short *)&DAT_04c9a0c8;
    goto LAB_0099f240;
  }
  psVar9 = psVar1 + uVar8 * 0xd0;
  *psVar9 = *param_3;
  *(char *)(psVar9 + 1) = (char)param_3[1];
  *(undefined1 *)((long)psVar9 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(psVar9 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(psVar9 + 4) = *(undefined4 *)(param_3 + 4);
  bVar5 = *param_2;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  psVar9 = psVar1 + (ulong)(uint)(int)(char)bVar5 * 0xd0;
  if (bVar6) {
    psVar9 = psVar1;
  }
  __dest = *(void **)(psVar9 + 0x24);
  *(undefined4 *)(psVar9 + 8) = *param_4;
  *(undefined4 *)(psVar9 + 10) = param_4[1];
  *(undefined4 *)(psVar9 + 0xc) = param_4[2];
  *(undefined4 *)(psVar9 + 0xe) = param_4[3];
  *(undefined4 *)(psVar9 + 0x10) = param_4[4];
  *(undefined4 *)(psVar9 + 0x12) = param_4[5];
  *(undefined4 *)(psVar9 + 0x14) = param_4[6];
  uVar10 = *(undefined8 *)(param_4 + 7);
  *(undefined8 *)(psVar9 + 0x1a) = *(undefined8 *)(param_4 + 9);
  *(undefined8 *)(psVar9 + 0x16) = uVar10;
  plVar12 = (long *)(param_4 + 0xc);
  (**(code **)(*plVar12 + 0x18))(plVar12);
  __src = *(void **)(param_4 + 0xe);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_4 + 0xc) + 0x18))(plVar12);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_4 + 0xe) + lVar11) == '\0') goto LAB_0099f37c;
      lVar2 = *(long *)(param_4 + 0xe) + lVar11;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0099f37c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0099f37c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0099f37c:
    iVar3 = (int)lVar11;
    if (*(int *)(psVar9 + 0x28) <= (int)lVar11) {
      iVar3 = *(int *)(psVar9 + 0x28) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  uVar10 = *(undefined8 *)(param_4 + 0x34);
  *(undefined8 *)(psVar9 + 0x6c) = *(undefined8 *)(param_4 + 0x32);
  *(undefined8 *)(psVar9 + 0x70) = uVar10;
  bVar5 = *param_2;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  psVar9 = psVar1 + (ulong)(uint)(int)(char)bVar5 * 0xd0;
  if (bVar6) {
    psVar9 = psVar1;
  }
  if ((char)psVar9[0x96] == '\0') {
    *(undefined1 *)(psVar9 + 0x96) = 1;
  }
  *(undefined8 *)(psVar9 + 0xc2) = *(undefined8 *)psVar9;
  *(undefined4 *)(psVar9 + 0xc6) = *(undefined4 *)(psVar9 + 4);
  FUN_009a0268(psVar9 + 0x74,psVar9,psVar9 + 8,0,0);
  bVar5 = *param_2;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  psVar9 = psVar1 + (ulong)(uint)(int)(char)bVar5 * 0xd0;
  if (bVar6) {
    psVar9 = psVar1;
  }
  if (*psVar9 == -2) {
LAB_0099f434:
    psVar9 = (short *)&DAT_04c9a0c8;
  }
  else {
    uVar8 = (**(code **)(*(long *)(psVar9 + 0x74) + 0x28))
                      (psVar9 + 0x74,psVar9 + (ulong)(*(uint *)(psVar9 + 0x7c) & 1) * 0xc + 0x7e,
                       psVar9);
    uVar7 = *(uint *)(psVar9 + 0x7c) & 1;
    if ((uVar8 & 1) == 0) {
      uVar8 = (**(code **)(*(long *)(psVar9 + 0x74) + 0x28))
                        (psVar9 + 0x74,psVar9 + (ulong)(uVar7 ^ 1) * 0xc + 0x7e,psVar9);
      if ((uVar8 & 1) == 0) goto LAB_0099f434;
      uVar7 = ~*(uint *)(psVar9 + 0x7c) & 1;
    }
    psVar9 = psVar9 + (ulong)uVar7 * 0xc + 0x84;
  }
  bVar5 = *param_2;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  psVar4 = psVar1 + (ulong)(uint)(int)(char)bVar5 * 0xd0;
  if (bVar6) {
    psVar4 = psVar1;
  }
  *(undefined4 *)(psVar4 + 6) = *(undefined4 *)psVar9;
  bVar5 = *param_2;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  psVar9 = psVar1 + (ulong)(uint)(int)(char)bVar5 * 0xd0;
  if (bVar6) {
    psVar9 = psVar1;
  }
  psVar9 = psVar9 + 6;
LAB_0099f240:
  return *(undefined4 *)psVar9;
}

