
void FUN_038941e0(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  (**(code **)(*param_1 + 0xa8))();
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x128))(param_1);
  (**(code **)(*param_1 + 0x138))(param_1);
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    uVar4 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined1 *)(param_1[8] + uVar5) = 0;
        *(undefined1 *)(param_1[8] + uVar5 + 1) = 0;
        *(undefined1 *)(param_1[8] + uVar5 + 2) = 0;
        lVar7 = param_1[8] + uVar5;
        uVar5 = uVar5 + 4;
        *(undefined1 *)(lVar7 + 3) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar5);
    }
    if ((uVar3 & 3) != 0) {
      do {
        uVar4 = uVar4 - 1;
        *(undefined1 *)(param_1[8] + uVar5) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 9);
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      lVar7 = param_1[10];
      uVar1 = uVar6;
      if (uVar3 <= uVar6) {
        uVar1 = 0;
      }
      uVar2 = nn::os::GetSystemTick();
      *(undefined8 *)(lVar7 + (ulong)uVar1 * 8) = uVar2;
      uVar6 = uVar6 + 1;
      uVar3 = *(uint *)(param_1 + 9);
    } while ((int)uVar6 < (int)uVar3);
  }
  return;
}

