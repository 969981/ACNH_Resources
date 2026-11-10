
int FUN_001615f0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_2 = 0;
  uVar3 = (uint)*(undefined8 *)(lVar4 + 0xf60);
  if ((((uVar3 >> 0x19 & 1) == 0) || ((*(uint *)(param_1[0x88] + 0x80) & 0x40003) != 0)) &&
     (*(long *)(lVar4 + 0x100) + *(long *)(lVar4 + 0x110) == 0)) {
    if ((((*(byte *)((long)param_1 + 0x41c) >> 1 & 1) == 0) ||
        (((uVar3 >> 0x18 & 1) != 0 && ((*(byte *)(param_1[0x88] + 0x80) & 3) == 0)))) ||
       (*(int *)(lVar4 + 0xeb0) == 0xb)) {
      if ((*(ushort *)(lVar4 + 0x15c4) >> 2 & 1) == 0) {
        return 0;
      }
      FUN_0014d430(*param_1,"REFUSED_STREAM, retrying a fresh connect\n");
      *(ushort *)(lVar4 + 0x15c4) = *(ushort *)(lVar4 + 0x15c4) & 0xfffb;
    }
    FUN_0014d430(*param_1,"Connection died, retrying a fresh connect\n");
    lVar2 = FUN_00143320(*(undefined8 *)(*param_1 + 0xf68));
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
    FUN_00158f30(param_1,1);
    *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x2000;
    if (((*(byte *)(param_1[0x88] + 0x80) & 3) != 0) && (*(long *)(lVar4 + 0x108) != 0)) {
      iVar1 = FUN_001601f4(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00143300(*param_2);
      *param_2 = 0;
      return iVar1;
    }
  }
  return 0;
}

