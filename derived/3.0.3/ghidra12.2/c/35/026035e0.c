
void FUN_026035e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined *local_50;
  char *pcStack_48;
  
  lVar5 = FUN_02602770();
  if (lVar5 != 0) {
    if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    puVar2 = PTR_DAT_04bb2020;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "Friendship";
    local_50 = puVar1;
    uVar4 = FUN_02746e10(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40),&local_50);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    pcStack_48 = "NNPCFriendship";
    if (*(long *)(param_1 + 8) != 0) {
      local_50 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,(long)(int)uVar4);
    }
    if (uVar4 < 0x1e) {
      uVar7 = 1;
    }
    else if (uVar4 < 0x3c) {
      uVar7 = 2;
    }
    else if (uVar4 < 100) {
      uVar7 = 3;
    }
    else if (uVar4 < 0x96) {
      uVar7 = 4;
    }
    else {
      uVar7 = 5;
      if (199 < uVar4) {
        uVar7 = 6;
      }
    }
    local_50 = puVar2 + 0x10;
    pcStack_48 = "NNPCFavor";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_50,uVar7);
    }
  }
  return;
}

