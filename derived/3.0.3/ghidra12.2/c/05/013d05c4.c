
void FUN_013d05c4(long param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  int local_8;
  char local_4;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) != 0) {
      FUN_01c4bf50(DAT_0534d2f0);
      *(undefined1 *)(param_1 + 0x1431) = 1;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    if (DAT_05574040 == 0) {
      bVar5 = true;
    }
    else {
      FUN_02703058(&local_8);
      bVar5 = local_4 == '\0' || local_8 == 0;
    }
    *(bool *)(param_1 + 0x1432) = bVar5;
  }
  lVar6 = *DAT_0537d558;
  if (1 < *(byte *)(lVar6 + 0x476)) {
    bVar3 = *(byte *)(lVar6 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      uVar7 = (long)(char)bVar3 & 0xffffffff;
      pbVar2 = (byte *)(lVar6 + 0x48) + uVar7 * 0x80;
      if (7 < bVar3) {
        pbVar2 = (byte *)(lVar6 + 0x48);
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar6 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
        if (0xb < bVar3) {
          lVar6 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar6 + 10) == '\0') {
          return;
        }
      }
    }
    FUN_013d8a60(DAT_051b1b88);
    FUN_013d6300(DAT_051b0f08);
  }
  return;
}

