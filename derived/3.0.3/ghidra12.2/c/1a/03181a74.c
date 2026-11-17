
void FUN_03181a74(int *param_1,long *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  uVar6 = FUN_02915598(param_2[1]);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((((*param_1 != 0x11) && (param_1[1] != 0x11)) && (param_1[2] != 0x11)) &&
      ((param_1[3] != 0x11 && (param_1[4] != 0x11)))) &&
     ((param_1[5] != 0x11 && (param_1[6] != 0x11)))) {
    uVar3 = param_1[7];
    uVar6 = (ulong)uVar3;
    if (6 < uVar3) {
      uVar6 = 0;
    }
    param_1[7] = uVar3 + 1;
    param_1[uVar6] = 0x11;
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_03181b88:
    if (7 < *pbVar7) {
LAB_03181b94:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_24[0] = *pbVar7;
        if (local_24[0] < 8) goto LAB_03181c14;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_03181b88;
      }
      goto LAB_03181b94;
    }
  }
  local_24[0] = *pbVar7;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_03181c14:
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "WHEREAREN_Unlock_AccentWall";
  iVar5 = FUN_0274bce0(local_24,&local_38);
  if (iVar5 != 0) {
    local_40 = *(undefined4 *)(*param_2 + 8);
    uStack_3c = *(undefined4 *)(*param_2 + 0xc);
    puVar2 = PTR_DAT_04bb37e0;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
    }
    uVar6 = FUN_0277d7b4(&local_40,puVar2);
    if (((((uVar6 & 1) == 0) && (*param_1 != 0x14)) && (param_1[1] != 0x14)) &&
       (((param_1[2] != 0x14 && (param_1[3] != 0x14)) &&
        ((param_1[4] != 0x14 && ((param_1[5] != 0x14 && (param_1[6] != 0x14)))))))) {
      uVar3 = param_1[7];
      uVar6 = (ulong)uVar3;
      if (6 < uVar3) {
        uVar6 = 0;
      }
      param_1[7] = uVar3 + 1;
      param_1[uVar6] = 0x14;
    }
  }
  return;
}

