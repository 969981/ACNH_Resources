
undefined8 FUN_026585a0(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  byte local_4 [4];
  
  plVar6 = DAT_0537d558;
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    local_4[0] = *param_1;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    FUN_025830c0(DAT_055021a0,local_4,1);
    uVar8 = FUN_026586c8();
    return uVar8;
  }
  pcVar7 = (char *)FUN_02582a24(param_1,1);
  lVar10 = *plVar6;
  cVar4 = *pcVar7;
  uVar9 = (uint)cVar4;
  bVar5 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
    if (DAT_0537bdbc != cVar4) {
      return 0;
    }
  }
  else {
    puVar1 = (uint *)(lVar10 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar2 = puVar1;
    }
    pcVar7 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar7 = (char *)(lVar10 + 0x473);
    }
    if (*pcVar7 != cVar4) {
      if ((*puVar2 >> 3 & 1) == 0) {
        return 0;
      }
      if (uVar9 == 0xffffffff) {
        return 0;
      }
      puVar2 = puVar1 + (ulong)uVar9 * 0x20;
      if (7 < uVar9) {
        puVar2 = puVar1;
      }
      if (((byte)*puVar2 >> 3 & 1) == 0) {
        return 0;
      }
    }
  }
  puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)uVar9 * 6;
  if (7 < uVar9) {
    puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
  }
  return *puVar3;
}

