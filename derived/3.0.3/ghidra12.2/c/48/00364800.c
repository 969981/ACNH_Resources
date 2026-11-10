
void FUN_00364800(byte *param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  bVar3 = true;
  bVar4 = false;
  if (*(long *)(param_1 + 8) != 0) {
    bVar4 = SBORROW4((uint)*param_1,param_2);
    bVar3 = (int)(*param_1 - param_2) < 0;
  }
  if (bVar3 == bVar4) {
    bVar2 = param_1[1];
    if ((int)(uint)bVar2 < (int)param_2) {
      lVar5 = (ulong)bVar2 << 5;
      lVar6 = (ulong)param_2 - (ulong)bVar2;
      do {
        lVar6 = lVar6 + -1;
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5) = 0;
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + 8) = 0x3f800000;
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + 0x10) = 0x3f80000000000000;
        lVar1 = *(long *)(param_1 + 8) + lVar5;
        lVar5 = lVar5 + 0x20;
        *(undefined1 **)(lVar1 + 0x18) = &DAT_3f8000003f800000;
      } while (lVar6 != 0);
    }
    param_1[1] = (byte)param_2;
  }
  return;
}

