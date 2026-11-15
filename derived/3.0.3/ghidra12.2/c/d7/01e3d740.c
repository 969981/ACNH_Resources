
void FUN_01e3d740(uint param_1)

{
  ushort uVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb4760;
  lVar2 = lVar6 + (ulong)param_1 * 0x15;
  if (0x6c < param_1) {
    lVar2 = lVar6;
  }
  bVar7 = *(byte *)(lVar2 + 7) & 0x30;
  if (bVar7 == 0x20) goto LAB_01e3d8d4;
  if (DAT_04c487d4 == 0xffff) {
LAB_01e3d844:
    uVar10 = 0xffff;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar10 = DAT_04c487d4;
    if ((*puVar3 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar10 = 0;
        puVar13 = DAT_055c1b60;
        do {
          if (*(int *)(puVar13 + -1) == 0x6622bd46) goto LAB_01e3d848;
          puVar13 = (undefined8 *)puVar13[1];
          uVar10 = uVar10 + 1;
        } while (puVar13 != &DAT_055c1b58);
      }
      goto LAB_01e3d844;
    }
  }
LAB_01e3d848:
  uVar1 = (ushort)*(byte *)(lVar2 + 4) | (*(byte *)(lVar2 + 5) & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfc00;
  }
  if (uVar1 == uVar10) {
    lVar11 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar11 + 0x473);
    uVar9 = (ulong)(char)bVar4;
    pbVar12 = PTR_DAT_04bc1220;
    if (uVar9 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar11 + 0x48) + (uVar9 & 0xffffffff) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar12 = (byte *)(lVar11 + 0x473);
      }
    }
    bVar5 = *(byte *)(lVar2 + 7) >> 4 & 3;
    if (bVar5 == 1) goto LAB_01e3d8b8;
    if (bVar5 != 2) {
      if (bVar5 == 3) goto LAB_01e3d8b8;
      uVar8 = (uint)(((ulong)*(byte *)(lVar2 + 6) << 0x20 | (ulong)*(byte *)(lVar2 + 5) << 0x18) >>
                    0x1a);
      if ((uint)*pbVar12 != (uVar8 & 0xff)) {
        if ((bVar4 == 0xff) || ((uint)(byte)*PTR_DAT_04bb5018 != (uVar8 & 0xff))) {
          if ((uint)(byte)*PTR_DAT_04bb5018 != (uVar8 & 0xff)) goto LAB_01e3d8b8;
        }
        else {
          pbVar12 = (byte *)(lVar11 + 0x48) + (uVar9 & 0xffffffff) * 0x80;
          if (7 < bVar4) {
            pbVar12 = (byte *)(lVar11 + 0x48);
          }
          if ((*pbVar12 >> 3 & 1) != 0) {
            lVar11 = DAT_0537d558[2] + 0x108 + (uVar9 & 0xffffffff) * 0xc;
            if (0xb < bVar4) {
              lVar11 = DAT_0537d558[2] + 0x108;
            }
            if (*(char *)(lVar11 + 10) == '\0') goto LAB_01e3d8b8;
          }
        }
      }
    }
  }
  else {
LAB_01e3d8b8:
    FUN_020ea330(lVar6,param_1,0);
    bVar7 = *(byte *)(lVar2 + 7) & 0x30;
  }
  if (bVar7 != 0x20) {
    return;
  }
LAB_01e3d8d4:
  FUN_021130a8(*(undefined8 *)PTR_DAT_04bb4768,lVar2,param_1);
  return;
}

