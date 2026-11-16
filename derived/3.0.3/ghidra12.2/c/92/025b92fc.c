
void FUN_025b92fc(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(byte *)(param_1 + 0x18) < 8) {
      local_50 = (undefined *)CONCAT71(local_50._1_7_,*(byte *)(param_1 + 0x18));
      lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
    }
    else {
      if (*(int *)(param_1 + 0x1c) == -1) {
        return;
      }
      if (DAT_05574040 == 0) {
        return;
      }
      lVar3 = FUN_026eec4c();
    }
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      FUN_02603350(*(undefined8 *)(param_1 + 0x48),
                   *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
      puVar1 = PTR_DAT_04bb2020;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "WearItem.";
      FUN_02603d40(param_1,*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158),&local_50);
      lVar7 = *(long *)(param_1 + 0x48);
      FUN_02814c00(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
      uVar5 = FUN_0277d6c4();
      lVar6 = nn::prepo::Struct::GetBuffer();
      if (lVar6 != 0) {
        local_50 = (undefined *)(uVar5 & 0xffffffff);
        nn::prepo::Struct::Add((char *)(lVar7 + 8),(Any64BitId *)"MarineSuit");
      }
      FUN_02814c00(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
      FUN_0277d6c4();
      if (*(long *)(param_1 + 8) != 0) {
        local_50 = puVar1 + 0x10;
        pcStack_48 = "WearItem";
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x48));
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x178) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x178) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  return;
}

