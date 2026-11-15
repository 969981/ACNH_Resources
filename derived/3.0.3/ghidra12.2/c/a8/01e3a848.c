
int FUN_01e3a848(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_38;
  undefined8 uStack_30;
  byte local_28;
  undefined1 local_27;
  
  if (*(int *)(param_1 + 0x758) != 1) {
    return 1;
  }
  sVar4 = *(short *)(param_1 + 0x284);
  if (sVar4 == -1) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar4 * 0x10;
    if (999 < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bb6258;
    }
    uVar6 = *(undefined8 *)(puVar1 + 8);
  }
  lVar8 = *DAT_0537d558;
  if (1 < *(byte *)(lVar8 + 0x476)) {
    bVar3 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      uVar9 = (long)(char)bVar3 & 0xffffffff;
      pbVar2 = (byte *)(lVar8 + 0x48) + uVar9 * 0x80;
      if (7 < bVar3) {
        pbVar2 = (byte *)(lVar8 + 0x48);
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar8 = DAT_0537d558[2] + 0x108 + uVar9 * 0xc;
        if (0xb < bVar3) {
          lVar8 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar8 + 10) == '\0') {
          iVar5 = 1;
          goto LAB_01e3a944;
        }
      }
    }
  }
  local_27 = 0;
  local_28 = *PTR_DAT_04bb32e0;
  if (7 < local_28) {
    local_28 = 0xff;
  }
  local_38 = &PTR_LAB_04a7ef60;
  uStack_30 = 0x11;
  iVar5 = FUN_022f1e1c(&local_38,uVar6);
LAB_01e3a944:
  if (iVar5 == 0) {
    uVar7 = 2;
  }
  else {
    if (iVar5 != 1) {
      return iVar5;
    }
    uVar7 = 0;
  }
  *(undefined4 *)(param_1 + 0x758) = uVar7;
  return iVar5;
}

