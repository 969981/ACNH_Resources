
void FUN_00364910(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined4 uVar6;
  
  bVar4 = *(byte *)(param_1 + 1);
  if ((uint)*(byte *)(param_1 + 1) <= (param_3 & 0xff)) {
    bVar4 = (byte)param_3;
  }
  *(byte *)(param_1 + 1) = bVar4;
  if (0 < (int)param_3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar5);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
      uVar6 = puVar1[-3];
      *puVar2 = puVar1[-4];
      puVar2[1] = uVar6;
      uVar6 = puVar1[-1];
      lVar3 = *(long *)(param_1 + 8) + lVar5;
      *(undefined4 *)(lVar3 + 8) = puVar1[-2];
      *(undefined4 *)(lVar3 + 0xc) = uVar6;
      uVar6 = puVar1[1];
      lVar3 = *(long *)(param_1 + 8) + lVar5;
      *(undefined4 *)(lVar3 + 0x10) = *puVar1;
      *(undefined4 *)(lVar3 + 0x14) = uVar6;
      uVar6 = puVar1[3];
      lVar3 = *(long *)(param_1 + 8) + lVar5;
      lVar5 = lVar5 + 0x20;
      *(undefined4 *)(lVar3 + 0x18) = puVar1[2];
      *(undefined4 *)(lVar3 + 0x1c) = uVar6;
    } while ((ulong)param_3 * 0x20 != lVar5);
  }
  return;
}

