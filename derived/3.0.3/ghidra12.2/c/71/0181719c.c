
void FUN_0181719c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x300);
  lVar5 = *(long *)(param_1 + 0x3d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8);
    bVar3 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      uVar6 = (long)(char)bVar3 & 0xffffffff;
      pbVar2 = pbVar1 + uVar6 * 0x80;
      if (7 < bVar3) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar5 = DAT_0537d558[2] + 0x108 + uVar6 * 0xc;
        if (0xb < bVar3) {
          lVar5 = DAT_0537d558[2] + 0x108;
        }
        bVar4 = *(char *)(lVar5 + 10) == '\0';
        goto LAB_01817228;
      }
    }
  }
  bVar4 = false;
LAB_01817228:
  FUN_01a1fd20(lVar7 + 0x278,bVar4);
  return;
}

