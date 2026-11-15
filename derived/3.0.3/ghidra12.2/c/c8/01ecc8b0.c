
void FUN_01ecc8b0(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined *local_50;
  undefined8 *puStack_48;
  
  puVar6 = PTR_DAT_04bb2020;
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "TalkWatchPoint";
  iVar2 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar3 * 0xba0,&local_70);
  if (iVar2 == 0) {
    puVar6 = &DAT_04a5d508;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
  }
  else {
    lVar4 = FUN_0265c2a0(uVar3);
    if (lVar4 == 0) {
      bVar1 = 0;
    }
    else {
      if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      bVar1 = FUN_020fd7d8(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    local_55 = 0;
    local_60 = 8;
    pcStack_68 = local_5c;
    local_5c[0] = 0;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    iVar2 = FUN_02076ae0(param_1 + 0xaf3c);
    if (bVar1 < 8) {
      puVar5 = (undefined8 *)(&PTR_DAT_04937218)[bVar1];
    }
    else {
      puVar5 = &DAT_0407ebb1;
    }
    FUN_038d1270(&local_70,"%02d_%s",iVar2 + 1,puVar5);
    lVar7 = *(long *)(param_1 + 8);
    local_80 = puVar6 + 0x10;
    pcStack_78 = "BLN_Spot_Gstore";
    puStack_48 = &DAT_0407ebb1;
    local_50 = local_80;
    FUN_01e3dab0(lVar7 + 0x540,&local_80,&local_70,&local_50);
    lVar4 = *(long *)(lVar7 + 0x3b8);
    *(long *)(lVar4 + 0x7f00) = lVar7;
    *(undefined **)(lVar4 + 0x7f08) = PTR_LAB_04bc15b8;
    puVar6 = &DAT_04a5d4b8;
    *(undefined8 *)(lVar4 + 0x7f10) = 0;
  }
  *(undefined **)(lVar4 + 0x7ef8) = puVar6 + 0x10;
  return;
}

