
byte FUN_026590a0(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  plVar9 = *(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(*plVar9 + 0x476) < 2) {
    local_4[0] = *param_1;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    uVar6 = FUN_02669430(local_4);
    if ((uVar6 & 1) != 0) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "EnableMyDream";
      bVar4 = FUN_0273f0a0(&local_30);
      goto LAB_026591dc;
    }
LAB_026591d8:
    bVar4 = 0;
  }
  else {
    pcVar5 = (char *)FUN_02582a24(param_1,1);
    lVar8 = *plVar9;
    cVar3 = *pcVar5;
    uVar7 = (uint)cVar3;
    bVar4 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar4 == 0xffffffffffffffff) {
      if (*PTR_DAT_04bc1220 != cVar3) goto LAB_026591d8;
    }
    else {
      puVar1 = (uint *)(lVar8 + 0x48);
      puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = puVar1;
      }
      pcVar5 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar5 = (char *)(lVar8 + 0x473);
      }
      if (*pcVar5 != cVar3) {
        bVar4 = 0;
        if (((*puVar2 >> 3 & 1) == 0) || (uVar7 == 0xffffffff)) goto LAB_026591dc;
        puVar2 = puVar1 + (ulong)uVar7 * 0x20;
        if (7 < uVar7) {
          puVar2 = puVar1;
        }
        if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_026591d8;
      }
    }
    lVar8 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)uVar7 * 0x30;
    if (7 < uVar7) {
      lVar8 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
    }
    bVar4 = *(char *)(lVar8 + 0x2b) != '\0';
  }
LAB_026591dc:
  return bVar4 & 1;
}

