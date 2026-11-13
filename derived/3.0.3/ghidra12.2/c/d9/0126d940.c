
void FUN_0126d940(ushort *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
    if (DAT_04c487d4 == -1) {
      return;
    }
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) {
      return;
    }
  }
  lVar5 = *DAT_0537d558;
  bVar4 = *(byte *)(lVar5 + 0x473);
  uVar6 = (ulong)(char)bVar4;
  if (uVar6 != 0xffffffffffffffff) {
    pbVar3 = (byte *)(lVar5 + 0x48) + (uVar6 & 0xffffffff) * 0x80;
    if (7 < bVar4) {
      pbVar3 = (byte *)(lVar5 + 0x48);
    }
    if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar4)) {
      return;
    }
  }
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    bVar7 = false;
    if (DAT_0537d558[2] != 0) {
      bVar7 = *(int *)(lVar5 + 0x508) == 4 && *(char *)(lVar5 + 0x55f) != '\0';
    }
    if (bVar4 != 0xff) {
      pbVar3 = (byte *)(lVar5 + 0x48) + (uVar6 & 0xffffffff) * 0x80;
      if (7 < bVar4) {
        pbVar3 = (byte *)(lVar5 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar4)) {
        return;
      }
    }
    uVar1 = 2;
    if (bVar7 == false) {
      uVar1 = 0;
    }
    *param_1 = *param_1 & 0xfffd | uVar1;
    if ((bool)(char)param_1[0xc] != bVar7) {
      *(bool *)(param_1 + 0xc) = bVar7;
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}

