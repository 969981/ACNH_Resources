
void FUN_01e3d988(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (((1 < *(uint *)(DAT_0537d558 + 0x80)) &&
      (uVar1 = *(uint *)((long)param_1 + 0x69c), (uVar1 >> 0xe & 1) != 0)) &&
     (*(int *)(param_1[0x77] + 0x7c70) == 0)) {
    if (((ulong)param_1[0xe9] >> 0x35 == 0) && (*(ushort *)((long)param_1 + 0x284) < 1000)) {
      (&DAT_04d9fe98)[(ulong)*(ushort *)((long)param_1 + 0x284) * 2] =
           param_1[0xe9] | (ulong)*(uint *)((long)param_1 + 0x15c) << 0x35;
      uVar1 = *(uint *)((long)param_1 + 0x69c);
    }
    *(uint *)((long)param_1 + 0x69c) = uVar1 & 0xffffbfff;
    *(byte *)((long)param_1 + 0x286) = *(byte *)((long)param_1 + 0x286) | 4;
    if ((uVar1 >> 0x11 & 1) != 0) {
      lVar2 = param_1[0x76];
      lVar3 = *(long *)(*(long *)(lVar2 + 0x358) + 0x690);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) & 0xf;
        *(byte *)(lVar3 + 10) = *(byte *)(lVar3 + 10) & 0xf0;
        *(undefined1 *)(lVar2 + 0x59c) = 0;
      }
      uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_020ea498(*(undefined8 *)PTR_DAT_04bb4760,(int)param_1[0xd3],(uVar1 ^ 0xffffffff) & 1,0);
      return;
    }
  }
  return;
}

