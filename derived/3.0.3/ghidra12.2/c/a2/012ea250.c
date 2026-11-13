
void FUN_012ea250(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  puVar3 = PTR_DAT_04bb27a8;
  uVar7 = 0;
  do {
    uVar4 = (ulong)uVar7;
    if (0x38 < uVar7) {
      uVar4 = 0;
    }
    if (*(int *)(param_1 + 0x8f0 + uVar4 * 4) == 1) {
      if (uVar7 == 0) {
        lVar6 = *(long *)(*(long *)puVar3 + 0x1f8);
      }
      else {
        plVar1 = (long *)(*(long *)puVar3 + 0x30);
        plVar2 = plVar1 + uVar7;
        if (0x38 < uVar7) {
          plVar2 = plVar1;
        }
        lVar6 = *plVar2;
      }
      if ((lVar6 != 0) && ((uVar7 != 0 || ((*(byte *)(lVar6 + 8) & 1) == 0)))) {
        uVar4 = (ulong)uVar7;
        if (0x38 < uVar7) {
          uVar4 = 0;
        }
        lVar5 = *(long *)(param_1 + 8 + uVar4 * 8);
        if (lVar5 != 0) {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x78));
        }
        FUN_0125934c(lVar6);
        uVar4 = (ulong)uVar7;
        if (0x38 < uVar7) {
          uVar4 = 0;
        }
        *(undefined4 *)(param_1 + 0x8f0 + uVar4 * 4) = 0;
      }
    }
    uVar8 = 0x39;
    if ((int)uVar7 < 0x39) {
      uVar8 = uVar7 + 1;
    }
    uVar7 = uVar8;
  } while (uVar8 != 0x39);
  return;
}

