
long FUN_00108e80(long param_1,long *param_2,long param_3,long *param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  ushort uVar8;
  
  if (*(char *)(param_3 + 0x138) == '\0') {
    lVar7 = 0;
  }
  else {
    bVar3 = *(char *)(param_3 + 0x138) - 1;
    *(byte *)(param_3 + 0x138) = bVar3;
    if (param_4 != (long *)0x0) {
      *param_4 = param_3 + (ulong)bVar3 * 0x10 + 0x110;
      bVar3 = *(byte *)(param_3 + 0x138);
    }
    uVar4 = (ulong)bVar3;
    if (*(char *)(param_1 + 3) == '\x03') {
      lVar7 = param_3 + uVar4 * 0x88;
      puVar1 = (ushort *)(lVar7 + 0x72);
      puVar2 = (ushort *)(lVar7 + 0x7c);
      if ((*(byte *)(lVar7 + 0x67) & 0xf0) != 0x50) {
        puVar1 = (ushort *)(lVar7 + 0x70);
        puVar2 = (ushort *)(lVar7 + 0x7a);
      }
      sVar6 = *(short *)(param_3 + 0x136) - ((*puVar2 & 0x7f) + (*puVar1 & 0x7f));
    }
    else {
      lVar7 = param_3 + uVar4 * 0x88;
      sVar6 = *(short *)(param_3 + 0x136) -
              ((*(ushort *)(lVar7 + 0x7c) & 0x7f) + (*(ushort *)(lVar7 + 0x72) & 0x7f));
    }
    lVar7 = param_3 + uVar4 * 0x88;
    lVar5 = param_3 + uVar4 * 0x88;
    *(short *)(param_3 + 0x136) = sVar6;
    puVar1 = (ushort *)(lVar5 + 0x72);
    puVar2 = (ushort *)(lVar5 + 0x7c);
    if ((*(byte *)(lVar5 + 0x67) & 0xf0) != 0x50) {
      puVar1 = (ushort *)(lVar5 + 0x70);
      puVar2 = (ushort *)(lVar5 + 0x7a);
    }
    *(ushort *)(param_3 + 0x134) =
         *(short *)(param_3 + 0x134) - ((*puVar2 & 0x7f) + (*puVar1 & 0x7f));
    *(int *)(param_3 + 0x130) = (1000 - *(short *)(lVar5 + 8)) + *(int *)(param_3 + 0x130);
    if (bVar3 == 0) {
      uVar8 = 0;
    }
    else {
      lVar5 = param_3 + uVar4 * 0x88;
      puVar1 = (ushort *)(lVar5 + -0x16);
      if ((*(byte *)(lVar5 + -0xe) & 0x7f) != 0) {
        puVar1 = (ushort *)(lVar5 + -0xc);
      }
      uVar8 = *puVar1 >> 7;
    }
    FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),uVar8,0,param_3 + 0x140);
    FUN_0011f810(*(undefined8 *)(*param_2 + 0x640),uVar8,0,param_3 + 0x148);
  }
  return lVar7;
}

