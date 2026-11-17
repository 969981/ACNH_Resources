
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ddf20(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056ed9f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056ed9f8), iVar2 != 0)) {
    DAT_056ed9d8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ed9e0 = "Pattern";
    DAT_056ed9f0 = &DAT_0407ebb1;
    DAT_056ed9e8 = DAT_056ed9d8;
    __cxa_guard_release(&DAT_056ed9f8);
  }
  if (((DAT_056eda10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056eda10), iVar2 != 0)) {
    _DAT_056eda00 = 0x100000002;
    DAT_056eda08 = &DAT_056ed9d8;
    __cxa_guard_release(&DAT_056eda10);
  }
  uVar1 = DAT_056eda04;
  if (0 < (int)DAT_056eda04) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056eda00 * uVar6);
      if (DAT_056eda00 == 0 || DAT_056eda04 <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056eda00 * uVar6 + 1);
      if (DAT_056eda00 < 2 || DAT_056eda04 <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056eda08 + lVar5 * 2,DAT_056eda08 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x250) = uVar3;
    } while (uVar1 != uVar6);
  }
  if (((DAT_056eda28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056eda28), iVar2 != 0)) {
    DAT_056eda18 = PTR_DAT_04bb2020 + 0x10;
    DAT_056eda20 = "P_DummyTex_00";
    __cxa_guard_release(&DAT_056eda28);
  }
  (**(code **)(DAT_056eda18 + 0x18))(&DAT_056eda18);
  if (*DAT_056eda20 == '\0') {
LAB_030de054:
    FUN_0386fd70(&DAT_056eda18);
    uVar3 = FUN_03c688b0(param_2,&DAT_056eda18);
  }
  else {
    if (*DAT_056eda20 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056eda20[lVar4] == '\0'))
        goto LAB_030de054;
        lVar5 = lVar5 + 1;
      } while (DAT_056eda20[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056eda18);
  }
  *(undefined8 *)(param_1 + 600) = uVar3;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

