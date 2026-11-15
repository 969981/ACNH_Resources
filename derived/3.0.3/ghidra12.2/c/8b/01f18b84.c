
void FUN_01f18b84(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  undefined *local_40;
  undefined8 *puStack_38;
  
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x50c);
  lVar4 = FUN_021c9770(uVar2,1);
  if ((lVar4 == 0) ||
     (local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20), (*(uint *)(lVar4 + 0x2ac) & 1) == 0))
  {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    puVar6 = PTR_DAT_04bc15d0;
  }
  else {
    FUN_021d6190(&local_60,uVar2);
    local_45 = 0;
    local_4c[0] = 0;
    local_50 = 8;
    puStack_58 = local_4c;
    uVar1 = 0;
    if (local_60._4_1_ != '\0') {
      uVar1 = (uint)local_60;
    }
    local_60 = PTR_DAT_04bb3768 + 0x10;
    iVar3 = FUN_02076ae0(param_1 + 0xaf3c);
    if (uVar1 < 8) {
      puVar5 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar1 * 8 + 0x20);
    }
    else {
      puVar5 = &DAT_0407ebb1;
    }
    FUN_038d1270(&local_60,"%02d_%s",iVar3 + 1,puVar5);
    lVar7 = *(long *)(param_1 + 8);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "BLN_Spot_Gstore";
    puStack_38 = &DAT_0407ebb1;
    local_40 = local_70;
    FUN_01e3dab0(lVar7 + 0x540,&local_70,&local_60,&local_40);
    lVar4 = *(long *)(lVar7 + 0x3b8);
    *(long *)(lVar4 + 0x7f00) = lVar7;
    *(undefined **)(lVar4 + 0x7f08) = PTR_LAB_04bc15b8;
    puVar6 = PTR_DAT_04bc15d8;
    *(undefined8 *)(lVar4 + 0x7f10) = 0;
  }
  *(undefined **)(lVar4 + 0x7ef8) = puVar6 + 0x10;
  return;
}

