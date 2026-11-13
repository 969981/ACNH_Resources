
byte FUN_0103fa0c(void)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong local_28;
  
  lVar6 = *DAT_0537d558;
  bVar4 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar4)) {
      piVar7 = &DAT_05407634;
      goto LAB_0103fa58;
    }
  }
  piVar7 = &DAT_05407630;
LAB_0103fa58:
  iVar3 = *piVar7;
  if (iVar3 < 0) {
    return 0;
  }
  uVar8 = (ulong)(short)DAT_04c487d4;
  if (uVar8 != 0xffffffffffffffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      return 1;
    }
    if (DAT_05292338 != 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) == 0) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 7 & 1) != 0) {
          local_28 = local_28 & 0xffffffff00000000;
          if (DAT_05aed670 == 0) {
            puVar9 = &DAT_055c04a0;
          }
          else {
            puVar9 = &DAT_055c04a0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              puVar9 = (undefined8 *)
                       (**(code **)(*DAT_05aed668 + 0x18))
                                 (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar5 = FUN_006bd550(*puVar9,0);
              puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar5 != 0x758f7eaf) {
                puVar9 = &DAT_055c04a0;
              }
            }
          }
          uVar8 = FUN_02b64e40(&local_28,*(undefined4 *)(puVar9 + 7));
          if (((uVar8 & 1) != 0) && (iVar3 == (int)local_28)) {
            return 1;
          }
        }
      }
    }
  }
  uVar8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_28 = uVar8;
  bVar4 = FUN_00a8117c(&local_28);
  return '\x04' < (char)(uVar8 >> 0x20) & (bVar4 ^ 0xff);
}

