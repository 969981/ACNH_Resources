
ulong FUN_02601690(long param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_1c [4];
  byte local_18 [4];
  undefined4 local_14;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    pbVar5 = local_18;
    local_18[0] = *(byte *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != -1) {
      uVar4 = FUN_007b3cbc(param_2);
      return uVar4;
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar3 = 0;
      goto LAB_026016bc;
    }
    local_14 = 0;
    if ((*(ulong *)(DAT_05554928 + 0xb8) & 1) == 0) {
      uVar3 = 0;
      if (DAT_04ca9180 != 0) {
        uVar4 = FUN_007b3b6c(DAT_04ca9180,param_2,*(undefined8 *)(DAT_04ca9180 + 0x140),
                             *(undefined8 *)(DAT_04ca9180 + 0x148));
        return uVar4;
      }
      goto LAB_026016bc;
    }
    if (DAT_04cd19d8 == 0) {
      pbVar5 = &DAT_0548e140;
LAB_0260179c:
      if (*pbVar5 < 8) goto LAB_02601814;
LAB_026017a8:
      if (DAT_0537d558 == (long *)0x0) {
LAB_0260180c:
        pbVar5 = &DAT_0548e168;
        goto LAB_02601814;
      }
      lVar6 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar6 + 0x473);
      pbVar5 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar5 = (byte *)(lVar6 + 0x471);
        }
      }
      local_1c[0] = *pbVar5;
      if (7 < local_1c[0]) goto LAB_0260180c;
    }
    else {
      pbVar5 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar5) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_0260179c;
        }
        goto LAB_026017a8;
      }
LAB_02601814:
      local_1c[0] = *pbVar5;
      if (7 < local_1c[0]) {
        local_1c[0] = 0xff;
      }
    }
    pbVar5 = local_1c;
  }
  uVar3 = FUN_007b39a4(param_2,pbVar5);
LAB_026016bc:
  return (ulong)(uVar3 & 1);
}

