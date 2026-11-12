
void FUN_008a6584(long param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  byte local_28 [4];
  int local_24;
  undefined4 uStack_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  piVar1 = (int *)(param_1 + 0x8c);
  bVar5 = *param_2;
  bVar8 = bVar5;
  if (7 < bVar5) {
    bVar8 = 0xff;
  }
  piVar2 = piVar1 + ((long)(char)bVar8 & 0xffffffff);
  if (7 < bVar5) {
    piVar2 = piVar1;
  }
  if (param_3 != *piVar2) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    bVar5 = *param_2;
  }
  bVar4 = 7 < bVar5;
  if (bVar4) {
    bVar5 = 0xff;
  }
  uVar6 = (long)(char)bVar5 & 0xffffffff;
  if (bVar4) {
    uVar6 = 0;
  }
  piVar1[uVar6] = param_3;
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_008a664c:
    if (7 < *pbVar7) {
LAB_008a6658:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar8 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar3 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar8 = *pbVar7;
        if (bVar8 < 8) goto LAB_008a66c0;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008a664c;
      }
      goto LAB_008a6658;
    }
  }
  bVar8 = *pbVar7;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
LAB_008a66c0:
  bVar5 = *(byte *)(param_1 + 2);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  if (bVar8 == bVar5) {
    *(undefined4 *)(param_1 + 0xc) = param_4;
  }
  else {
    param_4 = 0xffffffff;
  }
  local_28[0] = *param_2;
  local_18 = 0;
  local_12 = 0;
  local_14 = 0xff00;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  if (-1 < *(int *)(PTR_DAT_04bc2bb0 + 8)) {
    local_24 = param_3;
    uStack_20 = param_4;
    local_1c = param_3;
    FUN_01db1df0(*DAT_0537d558 + 0x480,*(int *)(PTR_DAT_04bc2bb0 + 8),&local_18,local_28,0xc,0);
  }
  return;
}

