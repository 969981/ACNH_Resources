
void FUN_0136ce70(byte *param_1)

{
  uint *puVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined8 local_78;
  undefined **ppuStack_70;
  long local_68;
  undefined *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 local_48;
  byte *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined *puStack_20;
  char *local_18;
  
  local_68 = *(long *)(param_1 + 0x100);
  if ((*(uint *)(local_68 + 8) & 0xfffffffd) != 0) {
    return;
  }
  if (*(int *)(param_1 + 8) < 0xa9) {
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    param_1[0xfa] = 0;
    param_1[0xfb] = 0;
    param_1[0xfc] = 0;
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    *(byte **)(param_1 + 0xe8) = param_1;
    *(undefined1 **)(param_1 + 0xf0) = &LAB_0136de20;
    local_40 = param_1 + 0xe0;
    local_60 = PTR_DAT_04bb5070 + 0x10;
    local_38 = 0;
    uStack_30 = 0;
    local_50 = 0;
    local_58 = 1;
    local_56 = 1;
    puStack_20 = PTR_DAT_04bb2020 + 0x10;
    local_28 = 0;
    local_18 = "FieldTidyingExecute";
    local_48 = (*(undefined8 **)PTR_DAT_04bb49a8)[1];
    ppuStack_70 = &local_60;
    local_78 = 0;
    FUN_03f45184(**(undefined8 **)PTR_DAT_04bb49a8,&local_78);
    return;
  }
  bVar4 = *param_1;
  *param_1 = bVar4 & 0xfc | 2;
  if ((bVar4 >> 2 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar3 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_0136cf94:
    if (7 < *pbVar3) {
LAB_0136cfa0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar5 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar5 + 0x471);
          }
        }
        bVar4 = *pbVar3;
        bVar2 = 7 < bVar4;
        if (bVar2) {
          bVar4 = 0xff;
        }
        local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar4);
        if (!bVar2) goto LAB_0136d020;
      }
      pbVar3 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar3 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0136cf94;
      }
      goto LAB_0136cfa0;
    }
  }
  bVar4 = *pbVar3;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar4);
LAB_0136d020:
  FUN_02649500(&local_60);
  return;
}

