
undefined8 FUN_03f4df84(long *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)((long)param_1 + 0x4a);
  *(int *)(*param_1 + 0x34e0bc) = *(int *)(*param_1 + 0x34e0bc) + 0x800;
  if (cVar1 == '\0') {
    bVar2 = FUN_03f4bda8(*param_1,*(undefined1 *)((long)param_1 + 0x12),(short)param_1[3]);
    *(byte *)((long)param_1 + 0x4a) = bVar2;
    if (bVar2 == 0x80) {
      *(undefined1 *)((long)param_1 + 0x49) = 0;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x4b) = 0;
      *(byte *)((long)param_1 + 0x49) = bVar2 & 0x80;
      *(byte *)((long)param_1 + 0x4a) = bVar2 & 0x7f;
      if ((bVar2 & 0x7f) == 0) {
        *(undefined1 *)((long)param_1 + 0x4a) = 0x80;
        *(short *)(param_1 + 3) = (short)param_1[3] + 1;
        return 0;
      }
    }
    *(short *)(param_1 + 3) = (short)param_1[3] + 1;
    *(undefined1 *)((long)param_1 + 0x4b) = 1;
    if ((char)param_1[9] == '\0') {
      param_1[7] = (long)param_1 + 0x12;
      param_1[8] = (long)(param_1 + 3);
    }
    else {
      *(int *)(*param_1 + 0x34e0bc) = *(int *)(*param_1 + 0x34e0bc) + 0x2000;
      uVar3 = FUN_03f4bda8(*param_1,*(undefined1 *)((long)param_1 + 0x12),(short)param_1[3]);
      *(undefined1 *)((long)param_1 + 0x14) = uVar3;
      uVar3 = FUN_03f4bda8(*param_1,*(undefined1 *)((long)param_1 + 0x12),
                           *(ushort *)(param_1 + 3) + 1);
      *(undefined1 *)((long)param_1 + 0x15) = uVar3;
      *(short *)(param_1 + 3) = (short)param_1[3] + 2;
      param_1[7] = (long)param_1 + 0x16;
      param_1[8] = (long)param_1 + 0x14;
    }
  }
  return 1;
}

