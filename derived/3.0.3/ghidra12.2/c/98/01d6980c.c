
void FUN_01d6980c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  short sVar7;
  short local_28;
  byte local_26;
  undefined4 local_24;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_01d69a10(param_1);
    plVar4 = DAT_0537d558;
    if (*(int *)(param_1 + 0xc0) != 0) {
      return;
    }
    lVar5 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar5 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar3)) goto LAB_01d69894;
    }
    *(undefined2 *)(param_1 + 0x1e0) = 0xffff;
    *(undefined1 *)(param_1 + 0x1e2) = 0xff;
    if (*(int *)(param_1 + 0x1a8) == 0) {
      local_28 = -1;
      local_24 = 3;
      local_26 = 0xff;
      local_8 = 0;
      local_2 = 0;
      local_4 = 0xff00;
      if ((-1 < *(int *)(param_1 + 8)) &&
         (FUN_01db1df0(*plVar4 + 0x480,*(int *)(param_1 + 8),&local_8,&local_28,8,0),
         *(int *)(param_1 + 0xc0) != 0)) {
        return;
      }
    }
  }
LAB_01d69894:
  FUN_01d69be4(param_1);
  bVar3 = *(byte *)(param_1 + 0x1e2);
  if (bVar3 != 0xff) {
    lVar5 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar5 + 0x473);
    if (bVar3 == bVar2) {
      FUN_01d69d64(param_1);
    }
    else {
      if (bVar2 != 0xff) {
        uVar6 = (uint)bVar2;
        pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
        if (7 < uVar6) {
          pbVar1 = (byte *)(lVar5 + 0x48);
        }
        if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) {
          local_28 = *(short *)(param_1 + 0x1e0);
          if (uVar6 < 8) {
            sVar7 = *(short *)(param_1 + (ulong)uVar6 * 0xc + 0x108);
          }
          else {
            sVar7 = -1;
          }
          if (local_28 == sVar7) {
            lVar5 = param_1 + 0x108 + ((long)(char)bVar2 & 0xffffffffU) * 0xc;
            if (0xb < bVar2) {
              lVar5 = param_1 + 0x108;
            }
            if (*(char *)(lVar5 + 10) != '\0' && *(char *)(param_1 + 0x1fc) == '\0') {
              return;
            }
          }
          local_24 = 1;
          local_8 = 0;
          local_2 = 0;
          local_4 = CONCAT11(bVar3,4);
          local_26 = bVar3;
          if (-1 < *(int *)(param_1 + 8)) {
            FUN_01db1df0(*DAT_0537d558 + 0x480,*(int *)(param_1 + 8),&local_8,&local_28,8,0);
          }
        }
      }
      local_8 = 0xe;
      FUN_03ebb160(param_1 + 0xb8,0xe);
    }
  }
  return;
}

