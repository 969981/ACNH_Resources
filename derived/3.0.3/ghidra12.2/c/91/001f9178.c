
void FUN_001f9178(long param_1,uint *param_2,ushort *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(lVar2 + 0x18);
  if (lVar6 == lVar3) {
    *(undefined1 *)(param_1 + 8) = 1;
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    bVar4 = *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
    lVar1 = lVar3 + 1;
    *(long *)(param_1 + 0x18) = lVar1;
    uVar5 = bVar4 & 0x7f;
    *param_2 = (uint)(bVar4 >> 7);
    *param_3 = uVar5;
    if (uVar5 == 0x7f) {
      if ((ulong)(lVar6 - lVar1) < 2) {
        *(undefined1 *)(param_1 + 8) = 1;
        *param_3 = 0;
        return;
      }
      uVar5 = *(ushort *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar1);
      *(long *)(param_1 + 0x18) = lVar3 + 3;
      *param_3 = uVar5;
      return;
    }
  }
  return;
}

