
void FUN_003d47e0(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_28 [8];
  
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    if (*(char *)((long)param_1 + 0x772) != '\0') {
      uVar4 = FUN_003ca198();
      FUN_003ca594(uVar4,param_1 + 0x18);
      *(undefined1 *)((long)param_1 + 0x772) = 0;
    }
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = *param_2;
  *(undefined4 *)(param_1 + 0xed) = param_2[1];
  param_1[0xeb] = *(long *)(param_2 + 2);
  param_1[0xec] = *(long *)(param_2 + 4);
  (**(code **)(*param_1 + 0x38))(param_1,1);
  if (*(char *)((long)param_1 + 0x772) == '\0') {
    uVar4 = FUN_003ca198();
    FUN_003ca570(uVar4,param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0x772) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x76c) = 0;
  FUN_003d4ea4(auStack_28,param_1[0xeb]);
  uVar5 = FUN_003d4f80(auStack_28,(long)param_1 + 0xdc);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    if (*(char *)((long)param_1 + 0x772) != '\0') {
      uVar4 = FUN_003ca198();
      FUN_003ca594(uVar4,param_1 + 0x18);
      *(undefined1 *)((long)param_1 + 0x772) = 0;
    }
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    return;
  }
  uVar1 = *(uint *)((long)param_1 + 0xdc);
  *(undefined1 *)(param_1 + 0x96) = 0;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    plVar6 = param_1 + 0x9f;
    plVar7 = param_1;
    do {
      *(undefined1 *)(param_1 + uVar5 * 0x15 + 0x97) = 0;
      uVar2 = *(uint *)((long)param_1 + uVar5 * 0xf4 + 0xe0);
      if (0 < (int)uVar2) {
        if (uVar2 < 4) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          plVar10 = plVar6;
          do {
            lVar9 = lVar9 + -4;
            *(undefined1 *)(plVar10 + -7) = 0;
            plVar10[-6] = 0;
            *(undefined1 *)(plVar10 + -5) = 0;
            plVar10[-4] = 0;
            *(undefined1 *)(plVar10 + -3) = 0;
            plVar10[-2] = 0;
            *(undefined1 *)(plVar10 + -1) = 0;
            *plVar10 = 0;
            plVar10 = plVar10 + 8;
          } while (-lVar9 != ((ulong)uVar2 & 0xfffffffc));
          lVar9 = -lVar9;
        }
        if ((uVar2 & 3) != 0) {
          lVar8 = 0;
          do {
            lVar3 = lVar8 + lVar9 * 0x10;
            lVar8 = lVar8 + 0x10;
            *(undefined1 *)((long)plVar7 + lVar3 + 0x4c0) = 0;
            *(undefined8 *)((long)plVar7 + lVar3 + 0x4c8) = 0;
          } while (((ulong)uVar2 & 3) * 0x10 != lVar8);
        }
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 0x15;
      plVar7 = plVar7 + 0x15;
    } while (uVar5 != uVar1);
  }
  *(undefined1 *)(param_1 + 0xee) = 1;
  return;
}

