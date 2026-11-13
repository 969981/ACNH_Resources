
void FUN_013e6154(long param_1,byte *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  byte local_46;
  char local_24 [4];
  
  if ((*param_2 < 8) && (lVar6 = *DAT_0537d558, 1 < *(byte *)(lVar6 + 0x476))) {
    bVar5 = *(byte *)(lVar6 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      uVar7 = (long)(char)bVar5 & 0xffffffff;
      pbVar1 = (byte *)(lVar6 + 0x48) + uVar7 * 0x80;
      if (7 < bVar5) {
        pbVar1 = (byte *)(lVar6 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar6 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
        if (0xb < bVar5) {
          lVar6 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar6 + 10) == '\0') {
          return;
        }
      }
    }
    lVar6 = (long)(int)*(uint *)(param_1 + 0x2a0);
    if (*(uint *)(DAT_051b1b88 + 8) <= *(uint *)(param_1 + 0x2a0) ||
        *(long *)(DAT_051b1b88 + 0x10) == 0) {
      lVar6 = 0;
    }
    lVar6 = *(long *)(DAT_051b1b88 + 0x10) + lVar6 * 0x10;
    if ((7 < *(byte *)(lVar6 + 0xc)) && (*(char *)(lVar6 + 0xf) == '\0')) {
      pcVar4 = (char *)FUN_02582a24(param_2,1);
      cVar3 = *pcVar4;
      lVar6 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar6 + 0x473);
      pcVar4 = PTR_DAT_04bc1220;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pcVar4 = (char *)(lVar6 + 0x473);
        }
      }
      if (cVar3 == *pcVar4) {
        lVar6 = (long)(int)*(uint *)(param_1 + 0x2a0);
        if (*(uint *)(DAT_051b1b88 + 8) <= *(uint *)(param_1 + 0x2a0) ||
            *(long *)(DAT_051b1b88 + 0x10) == 0) {
          lVar6 = 0;
        }
        bVar5 = *param_2;
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        *(byte *)(*(long *)(DAT_051b1b88 + 0x10) + lVar6 * 0x10 + 0xc) = bVar5;
        FUN_013e594c(param_1);
        lVar6 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar6 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar6,6);
        return;
      }
      local_46 = *param_2;
      local_47 = 1;
      local_50 = PTR_DAT_04bbca38 + 0x10;
      local_48 = (undefined1)*(undefined4 *)(param_1 + 0x2a0);
      if (7 < local_46) {
        local_46 = 0xff;
      }
      FUN_013d89a0(DAT_051b1b88,&local_50);
      local_47 = 2;
      local_24[0] = cVar3;
      FUN_013d89f8(DAT_051b1b88,local_24,&local_50);
      lVar6 = (long)(int)*(uint *)(param_1 + 0x2a0);
      if (*(uint *)(DAT_051b1b88 + 8) <= *(uint *)(param_1 + 0x2a0) ||
          *(long *)(DAT_051b1b88 + 0x10) == 0) {
        lVar6 = 0;
      }
      *(undefined1 *)(*(long *)(DAT_051b1b88 + 0x10) + lVar6 * 0x10 + 0xf) = 1;
      FUN_013e594c(param_1);
      *(byte *)(param_1 + 0x274) = *(byte *)(param_1 + 0x274) | 4;
    }
  }
  return;
}

