
bool FUN_016e6da8(byte *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  
  uVar6 = (ulong)(short)DAT_04c487d4;
  if (uVar6 != 0xffffffffffffffff) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (*param_1 < 8) {
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        bVar4 = false;
        if ((*puVar2 & 1) != 0) {
          if ((DAT_0537d558 == (long *)0x0) || (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
            if (DAT_05351250 != 0) {
              bVar4 = *(int *)(DAT_05351250 + 0xb0) == 1;
            }
            return (bool)(DAT_05351250 != 0 & bVar4);
          }
          pcVar5 = (char *)FUN_02582a24();
          lVar8 = *DAT_0537d558;
          bVar3 = *(byte *)(lVar8 + 0x473);
          pcVar7 = PTR_DAT_04bc1220;
          if ((long)(char)bVar3 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar2 = (uint *)(lVar8 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pcVar7 = (char *)(lVar8 + 0x472);
            }
          }
          return *pcVar5 == *pcVar7;
        }
      }
    }
    else if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 & 1) != 0) {
        return true;
      }
    }
  }
  return false;
}

