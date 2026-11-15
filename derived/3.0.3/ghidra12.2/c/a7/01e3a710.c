
uint FUN_01e3a710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **local_48;
  undefined8 uStack_40;
  byte local_38;
  undefined1 local_37;
  
  if (*(int *)(param_1 + 0x758) != 0) {
    return 0;
  }
  sVar4 = *(short *)(param_1 + 0x284);
  if (sVar4 == -1) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar4 * 0x10;
    if (999 < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bb6258;
    }
    uVar8 = *(undefined8 *)(puVar1 + 8);
  }
  lVar6 = *DAT_0537d558;
  if (*(byte *)(lVar6 + 0x476) < 2) {
LAB_01e3a7cc:
    uVar7 = FUN_022f0cf0(uVar8,param_2);
    if ((uVar7 & 1) != 0) {
      local_37 = 0;
      local_38 = *PTR_DAT_04bb32e0;
      if (7 < local_38) {
        local_38 = 0xff;
      }
      local_48 = &PTR_LAB_04a7ef60;
      uStack_40 = 0x11;
      uVar5 = FUN_022f0f4c(&local_48,uVar8,param_2);
      goto LAB_01e3a828;
    }
  }
  else {
    bVar3 = *(byte *)(lVar6 + 0x473);
    if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_01e3a7cc;
    uVar7 = (long)(char)bVar3 & 0xffffffff;
    pbVar2 = (byte *)(lVar6 + 0x48) + uVar7 * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar6 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) == 0) goto LAB_01e3a7cc;
    lVar6 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
    if (0xb < bVar3) {
      lVar6 = DAT_0537d558[2] + 0x108;
    }
    if (*(char *)(lVar6 + 10) != '\0') goto LAB_01e3a7cc;
  }
  uVar5 = 0;
LAB_01e3a828:
  *(uint *)(param_1 + 0x758) = uVar5 & 1;
  return uVar5 & 1;
}

