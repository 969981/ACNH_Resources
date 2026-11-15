
undefined8 FUN_0235a840(byte *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  byte bVar10;
  
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    pcVar6 = (char *)FUN_02582a24();
    lVar7 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar7 + 0x473);
    pcVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar9 = (char *)(lVar7 + 0x472);
      }
    }
    if (*pcVar6 != *pcVar9) {
      if (*(int *)(lVar7 + 0x508) == 0 || *(char *)(lVar7 + 0x55d) == '\0') {
        if (DAT_04c487d4 != -1) {
          puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar3 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar3 + 4) & 1) != 0) {
            return 1;
          }
        }
        if (1 < *(uint *)(DAT_0537d558 + 0x10)) {
          bVar5 = *param_1;
          if (7 < bVar5) {
            return 0;
          }
          bVar10 = *(byte *)(lVar7 + 0x44c + (ulong)bVar5 * 4 + 2);
          if ((long)(char)bVar10 == 0xffffffffffffffff) {
            return 0;
          }
          pbVar1 = (byte *)(lVar7 + 0x48);
          pbVar4 = pbVar1 + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
          if (7 < bVar10) {
            pbVar4 = pbVar1;
          }
          if ((*pbVar4 >> 3 & 1) == 0) {
            return 0;
          }
          bVar10 = *(byte *)(lVar7 + 0x471);
          if (7 < bVar10) {
            bVar10 = 0xff;
          }
          if (bVar10 != bVar5) {
            return 0;
          }
          uVar8 = (ulong)*(byte *)(lVar7 + 0x470);
          if (7 < uVar8) {
            return 0;
          }
          bVar5 = *(byte *)(lVar7 + 0x44c + uVar8 * 4 + 2);
          if ((long)(char)bVar5 == 0xffffffffffffffff) {
            return 0;
          }
          pbVar4 = pbVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
          if (7 < bVar5) {
            pbVar4 = pbVar1;
          }
          if ((*pbVar4 >> 3 & 1) == 0) {
            return 0;
          }
          if (*(char *)(DAT_0537d558[2] + uVar8 * 2 + 0x8e9) == '\0') {
            return 0;
          }
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

