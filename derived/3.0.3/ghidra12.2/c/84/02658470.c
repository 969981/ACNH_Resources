
bool FUN_02658470(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  byte local_4 [4];
  
  plVar3 = DAT_0537d558;
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    local_4[0] = *param_1;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    FUN_025830c0(DAT_055021a0,local_4,1);
    lVar8 = FUN_026586c8();
    goto LAB_0265858c;
  }
  pcVar6 = (char *)FUN_02582a24(param_1,1);
  lVar8 = *plVar3;
  cVar4 = *pcVar6;
  uVar7 = (uint)cVar4;
  bVar5 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
    if (DAT_0537bdbc != cVar4) {
LAB_02658588:
      lVar8 = 0;
      goto LAB_0265858c;
    }
  }
  else {
    puVar1 = (uint *)(lVar8 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar2 = puVar1;
    }
    pcVar6 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar6 = (char *)(lVar8 + 0x473);
    }
    if (*pcVar6 != cVar4) {
      lVar8 = 0;
      if (((*puVar2 >> 3 & 1) == 0) || (uVar7 == 0xffffffff)) goto LAB_0265858c;
      puVar2 = puVar1 + (ulong)uVar7 * 0x20;
      if (7 < uVar7) {
        puVar2 = puVar1;
      }
      if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_02658588;
    }
  }
  plVar3 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)uVar7 * 6;
  if (7 < uVar7) {
    plVar3 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
  }
  lVar8 = *plVar3;
LAB_0265858c:
  return lVar8 != 0;
}

