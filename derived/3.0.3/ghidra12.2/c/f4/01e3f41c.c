
void FUN_01e3f41c(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x690);
  if ((lVar8 == 0) || (*(char *)(param_1 + 0x69e) < '\0')) {
    return;
  }
  FUN_020ea330(*(undefined8 *)PTR_DAT_04bb4760,*(undefined4 *)(param_1 + 0x698),0);
  bVar5 = *(byte *)(lVar8 + 7);
  if (((bVar5 ^ 0xff) & 0x30) == 0) {
    bVar6 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(*DAT_0537d558 + 0x48);
      uVar7 = (long)(char)bVar6 & 0xffffffff;
      pbVar3 = pbVar2 + uVar7 * 0x80;
      if (7 < bVar6) {
        pbVar3 = pbVar2;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar4 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
        if (0xb < bVar6) {
          lVar4 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar4 + 10) == '\0') goto LAB_01e3f4e0;
      }
    }
    uVar1 = (int)(((ulong)*(byte *)(lVar8 + 8) << 0x20 | (ulong)bVar5 << 0x18) >> 0x1e) + 1;
    *(byte *)(lVar8 + 7) = bVar5 & 0xf | (char)uVar1 * '@';
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xc0 | (byte)(uVar1 >> 2) & 0x3f;
  }
LAB_01e3f4e0:
  *(uint *)(param_1 + 0x750) = (uint)(*(byte *)(lVar8 + 0xb) >> 6);
  if ((*(byte *)(lVar8 + 7) & 0x30) == 0x20) {
    FUN_01e3d518();
    return;
  }
  FUN_01e3d988(param_1);
  return;
}

