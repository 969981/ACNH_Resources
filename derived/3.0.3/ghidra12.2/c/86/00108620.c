
undefined8 FUN_00108620(long param_1,long *param_2,long param_3,void *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  bool bVar7;
  void *__dest;
  byte bVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  if (1 < (ulong)*(byte *)(param_3 + 0x138)) {
    return 0;
  }
  if (*(char *)(param_1 + 3) == '\x03') {
    puVar10 = (ushort *)((long)param_4 + 0x70);
    puVar9 = (ushort *)((long)param_4 + 0x7a);
    if ((*(byte *)((long)param_4 + 0x67) & 0xf0) == 0x50) {
      puVar10 = (ushort *)((long)param_4 + 0x72);
      puVar9 = (ushort *)((long)param_4 + 0x7c);
    }
  }
  else {
    puVar10 = (ushort *)((long)param_4 + 0x72);
    puVar9 = (ushort *)((long)param_4 + 0x7c);
  }
  iVar2 = (*puVar9 & 0x7f) + (*puVar10 & 0x7f);
  if ((uint)*(byte *)((long)param_2 + 0x9266) < (uint)*(ushort *)(param_3 + 0x136) + iVar2) {
    return 0;
  }
  lVar3 = param_3 + (ulong)*(byte *)(param_3 + 0x138) * 0x10;
  puVar1 = (undefined8 *)(lVar3 + 0x110);
  if (param_5 == (undefined8 *)0x0) {
    *(undefined2 *)(lVar3 + 0x11c) = 0;
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0x118) = 0;
  }
  else if (puVar1 != param_5) {
    uVar5 = param_5[1];
    *puVar1 = *param_5;
    *(undefined8 *)(lVar3 + 0x118) = uVar5;
  }
  bVar8 = *(byte *)(param_3 + 0x138);
  __dest = (void *)(param_3 + (ulong)bVar8 * 0x88);
  if (__dest != param_4) {
    memcpy(__dest,param_4,0x88);
    bVar8 = *(byte *)(param_3 + 0x138);
  }
  *(byte *)(param_3 + 0x138) = bVar8 + 1;
  *(short *)(param_3 + 0x136) = *(short *)(param_3 + 0x136) + (short)iVar2;
  bVar7 = (*(byte *)((long)param_4 + 0x67) & 0xf0) != 0x50;
  lVar3 = 0x72;
  if (bVar7) {
    lVar3 = 0x70;
  }
  lVar4 = 0x7c;
  if (bVar7) {
    lVar4 = 0x7a;
  }
  *(ushort *)(param_3 + 0x134) =
       *(short *)(param_3 + 0x134) +
       (*(ushort *)((long)param_4 + lVar4) & 0x7f) + (*(ushort *)((long)param_4 + lVar3) & 0x7f);
  *(int *)(param_3 + 0x130) = (int)*(short *)((long)param_4 + 8) + *(int *)(param_3 + 0x130) + -1000
  ;
  lVar3 = 0x72;
  if ((*(ushort *)((long)param_4 + 0x7a) & 0x7f) != 0) {
    lVar3 = 0x7c;
  }
  uVar6 = *(ushort *)((long)param_4 + lVar3) >> 7;
  FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),uVar6,0,param_3 + 0x140);
  FUN_0011f810(*(undefined8 *)(*param_2 + 0x640),uVar6,0,param_3 + 0x148);
  return 1;
}

