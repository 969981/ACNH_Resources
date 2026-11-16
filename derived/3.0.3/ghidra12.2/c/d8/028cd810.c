
void FUN_028cd810(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = 0;
  uVar6 = 1;
  lVar7 = -0x1134;
  while( true ) {
    uVar4 = *(uint *)((long)param_1 + lVar5 * 4 + 0x1130);
    plVar9 = param_1 + (ulong)uVar4 * 0xb;
    if (0x31 < uVar4) {
      plVar9 = param_1;
    }
    if ((*plVar9 != 0) &&
       ((*(int *)((long)plVar9 + 0x24) != 0 && (int)plVar9[1] != 0) && *plVar9 == *param_2)) break;
    lVar5 = lVar5 + 1;
    uVar6 = (ulong)((int)uVar6 + 3);
    lVar7 = lVar7 + -4;
    if (lVar5 == 0x32) {
      return;
    }
  }
  uVar4 = (uint)lVar5;
  if ((int)uVar4 < 0) {
    return;
  }
  plVar9 = param_1;
  if ((uVar4 < 0x32) &&
     (uVar2 = *(uint *)((long)param_1 + lVar5 * 4 + 0x1130), plVar9 = param_1 + (ulong)uVar2 * 0xb,
     0x31 < uVar2)) {
    plVar9 = param_1;
  }
  *(undefined8 *)((long)plVar9 + 0x24) = 0;
  *(undefined1 *)(plVar9 + 4) = 2;
  *(undefined8 *)((long)plVar9 + 0x2c) = 0;
  *(undefined8 *)((long)plVar9 + 0x34) = 0;
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  *(undefined2 *)((long)plVar9 + 0x4c) = 0;
  *(undefined4 *)((long)plVar9 + 0x4e) = 0x101;
  *(undefined1 *)((long)plVar9 + 0x52) = 0;
  *(undefined1 *)((long)plVar9 + 0x54) = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  if (0x31 < uVar4) {
    return;
  }
  uVar3 = *(undefined4 *)((long)param_1 + lVar5 * 4 + 0x1130);
  if (uVar4 != 0x31) {
    lVar10 = lVar5;
    if ((1 - uVar4 & 3) != 0) {
      lVar10 = 0;
      puVar8 = (undefined4 *)((long)param_1 - lVar7);
      do {
        lVar10 = lVar10 + -1;
        puVar8[-1] = *puVar8;
        puVar8 = puVar8 + 1;
      } while (-lVar10 != (uVar6 & 3));
      lVar10 = lVar5 - lVar10;
    }
    if (2 < lVar5 - 0x2eU) {
      lVar10 = lVar10 << 2;
      do {
        puVar1 = (undefined8 *)((long)param_1 + lVar10 + 0x1130);
        lVar10 = lVar10 + 0x10;
        *puVar1 = *(undefined8 *)((long)puVar1 + 4);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((long)puVar1 + 0xc);
        *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)(puVar1 + 2);
      } while (lVar10 != 0xc4);
    }
  }
  *(undefined4 *)((long)param_1 + 0x11f4) = uVar3;
  return;
}

