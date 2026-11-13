
undefined8 FUN_013ce4a0(long *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_0537d558 != (long *)0x0) && (lVar6 = *DAT_0537d558, 1 < *(byte *)(lVar6 + 0x476))) {
    bVar3 = *(byte *)(lVar6 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      uVar7 = (long)(char)bVar3 & 0xffffffff;
      pbVar1 = (byte *)(lVar6 + 0x48) + uVar7 * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar6 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar6 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
        if (0xb < bVar3) {
          lVar6 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar6 + 10) == '\0') {
          if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
            return 1;
          }
          (**(code **)(*param_1 + 0x168))();
          return 1;
        }
      }
    }
  }
  if ((ulong)*param_2 < 8) {
    param_1 = param_1 + 0xb6;
    pcVar5 = (char *)((long)param_1 + (ulong)*param_2 * 0x18 + 0x11);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      bVar3 = *param_2;
      bVar4 = 7 < bVar3;
      if (bVar4) {
        bVar3 = 0xff;
      }
      plVar2 = param_1 + (ulong)(uint)(int)(char)bVar3 * 3;
      if (bVar4) {
        plVar2 = param_1;
      }
      *(byte *)(plVar2 + 2) = bVar3;
      bVar3 = *param_2;
      bVar4 = 7 < bVar3;
      if (bVar4) {
        bVar3 = 0xff;
      }
      plVar2 = param_1 + (ulong)(uint)(int)(char)bVar3 * 3;
      if (bVar4) {
        plVar2 = param_1;
      }
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((long)plVar2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      return 1;
    }
  }
  return 0;
}

