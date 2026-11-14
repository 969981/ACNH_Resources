
void FUN_0185b750(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(byte *)(*(long *)(param_1 + 0x3d8) + 0x2ea) < 8) {
    if (*(int *)(param_1 + 0x280) != 0) {
      FUN_03ebb160(param_1 + 0x278,0);
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x432) == '\0') && (lVar4 = *(long *)(param_1 + 0x3d0), lVar4 != 0)) {
      (**(code **)(*(long *)(lVar4 + 0x2d8) + 0x28))(lVar4 + 0x2d8);
      bVar3 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
        uVar5 = (long)(char)bVar3 & 0xffffffff;
        pbVar2 = pbVar1 + uVar5 * 0x80;
        if (7 < bVar3) {
          pbVar2 = pbVar1;
        }
        if ((*pbVar2 >> 3 & 1) != 0) {
          lVar4 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
          if (0xb < bVar3) {
            lVar4 = DAT_0537d558[2] + 0x108;
          }
          if (*(char *)(lVar4 + 10) == '\0') {
            return;
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x3d0) != 0) {
      FUN_006fb3d0();
      return;
    }
  }
  return;
}

