
void FUN_038f41c0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar4 + 0xc);
  uVar3 = *(ushort *)(lVar4 + 0xe);
  *(ushort *)((long)param_1 + 0x12) = uVar3;
  if ((ulong)uVar3 == 0) {
    param_1[3] = 0;
    param_1[1] = (ulong)*(uint *)(lVar4 + 0x12);
  }
  else {
    lVar4 = (*DAT_05ae78a0)((ulong)uVar3 * 0x18);
    param_1[3] = lVar4;
    param_1[1] = (ulong)*(uint *)(*param_1 + 0x12);
    if (*(short *)((long)param_1 + 0x12) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      uVar6 = 0x20;
      do {
        uVar5 = uVar5 + 1;
        plVar1 = (long *)(param_1[3] + lVar4);
        lVar4 = lVar4 + 0x18;
        *plVar1 = *param_1 + uVar6 + 0x10;
        *(undefined1 *)(plVar1 + 1) = *(undefined1 *)(*param_1 + uVar6);
        *(undefined1 *)((long)plVar1 + 9) = *(undefined1 *)(*param_1 + (uVar6 | 1));
        *(undefined1 *)((long)plVar1 + 10) = *(undefined1 *)(*param_1 + (uVar6 | 2));
        *(undefined1 *)((long)plVar1 + 0xb) = *(undefined1 *)(*param_1 + (uVar6 | 3));
        uVar2 = *(uint *)(*param_1 + (uVar6 | 4));
        uVar7 = uVar6 | 8;
        *(uint *)((long)plVar1 + 0xc) = uVar2;
        uVar6 = uVar6 + uVar2 + 0x1f & 0xfffffffffffffff0;
        *(undefined2 *)(plVar1 + 2) = *(undefined2 *)(*param_1 + uVar7);
      } while (uVar5 < *(ushort *)((long)param_1 + 0x12));
    }
  }
  return;
}

