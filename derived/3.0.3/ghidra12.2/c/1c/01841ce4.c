
void FUN_01841ce4(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x3d0);
  if (lVar4 != 0) {
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
        if (*(char *)(lVar4 + 10) == '\0') goto LAB_01841d88;
      }
    }
  }
  *(long *)(param_1 + 0x4f8) = param_1;
  *(undefined1 **)(param_1 + 0x500) = &LAB_01842ed4;
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (*(int *)(param_1 + 0x3e4) == 0) {
    *(undefined4 *)(param_1 + 0x3e4) = 1;
  }
LAB_01841d88:
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0x1e;
  *(undefined8 *)(param_1 + 0x4d8) = 0x1e;
  *(undefined4 *)(param_1 + 0x4e8) = 1;
  return;
}

