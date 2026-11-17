
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030be140(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_50;
  char *pcStack_48;
  long local_28;
  
  FUN_030bc030();
  local_28 = 0;
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),&local_28);
  pcStack_48 = (char *)FUN_00364d70(local_28 + 0xb8,"ResizeWindow");
  local_50 = &PTR_LAB_048f9770;
  if (*pcStack_48 == '\0') {
LAB_030be1ec:
    FUN_0386fd70(&local_50);
    uVar4 = FUN_03c688b0(param_2,&local_50);
  }
  else {
    if (*pcStack_48 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar8 = lVar5 + 1, pcStack_48[lVar8] == '\0')) goto LAB_030be1ec;
        lVar5 = lVar5 + 1;
      } while (pcStack_48[lVar8] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&local_50);
  }
  *(undefined8 *)(param_1 + 0x228) = uVar4;
  if (((DAT_056eb080 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056eb080), iVar3 != 0)) {
    DAT_056eb000 = &PTR_LAB_048f9770;
    DAT_056eb008 = "Decide";
    DAT_056eb020 = &PTR_LAB_048f9770;
    DAT_056eb028 = &DAT_04078f8d;
    DAT_056eb040 = &PTR_LAB_048f9770;
    DAT_056eb048 = "Release";
    DAT_056eb010 = &PTR_LAB_048f9770;
    DAT_056eb018 = &DAT_0407ebb1;
    DAT_056eb030 = &PTR_LAB_048f9770;
    DAT_056eb038 = &DAT_0407ebb1;
    DAT_056eb050 = &PTR_LAB_048f9770;
    DAT_056eb058 = &DAT_0407ebb1;
    DAT_056eb060 = &PTR_LAB_048f9770;
    DAT_056eb068 = &DAT_040fe5ab;
    DAT_056eb070 = &PTR_LAB_048f9770;
    DAT_056eb078 = &DAT_0407ebb1;
    __cxa_guard_release(&DAT_056eb080);
  }
  if (((DAT_056eb098 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056eb098), iVar3 != 0)) {
    _DAT_056eb088 = 0x400000002;
    DAT_056eb090 = &DAT_056eb000;
    __cxa_guard_release(&DAT_056eb098);
  }
  uVar1 = DAT_056eb08c;
  uVar9 = (ulong)DAT_056eb08c;
  if (0 < (int)DAT_056eb08c) {
    uVar4 = FUN_03c68d44(param_2,DAT_056eb090,DAT_056eb090 + (ulong)(1 < DAT_056eb088) * 2);
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    if (uVar1 != 1) {
      uVar6 = (ulong)(int)DAT_056eb088;
      uVar7 = uVar6;
      if (uVar6 == 0 || DAT_056eb08c < 2) {
        uVar7 = 0;
      }
      lVar5 = 0;
      if (1 < uVar6 && DAT_056eb08c >= 2) {
        lVar5 = uVar6 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056eb090 + uVar7 * 2,DAT_056eb090 + lVar5 * 2);
      *(undefined8 *)(param_1 + 0x210) = uVar4;
      if (uVar1 != 2) {
        uVar7 = (ulong)(int)DAT_056eb088;
        lVar5 = uVar7 << 1;
        if (uVar7 == 0 || DAT_056eb08c < 3) {
          lVar5 = 0;
        }
        lVar8 = (long)(int)((uint)(uVar7 << 1) | 1);
        if (uVar7 < 2 || DAT_056eb08c < 3) {
          lVar8 = 0;
        }
        uVar4 = FUN_03c68d44(param_2,DAT_056eb090 + lVar5 * 2,DAT_056eb090 + lVar8 * 2);
        *(undefined8 *)(param_1 + 0x218) = uVar4;
        if (uVar1 != 3) {
          uVar7 = (ulong)(int)DAT_056eb088;
          lVar5 = uVar7 * 3;
          if (uVar7 == 0 || DAT_056eb08c < 4) {
            lVar5 = 0;
          }
          lVar8 = (long)((int)(uVar7 * 3) + 1);
          if (uVar7 < 2 || DAT_056eb08c < 4) {
            lVar8 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056eb090 + lVar5 * 2,DAT_056eb090 + lVar8 * 2);
          *(undefined8 *)(param_1 + 0x220) = uVar4;
          if (uVar1 != 4) {
            uVar7 = 4;
            do {
              iVar3 = DAT_056eb088 * (int)uVar7;
              bVar2 = _DAT_056eb088 >> 0x20 <= uVar7;
              lVar5 = (long)iVar3;
              if (DAT_056eb088 == 0 || bVar2) {
                lVar5 = 0;
              }
              lVar8 = (long)(iVar3 + 1);
              if (DAT_056eb088 < 2 || bVar2) {
                lVar8 = 0;
              }
              uVar4 = FUN_03c68d44(param_2,DAT_056eb090 + lVar5 * 2,DAT_056eb090 + lVar8 * 2);
              uVar7 = uVar7 + 1;
              *(undefined8 *)(param_1 + 0x208) = uVar4;
            } while (uVar9 != uVar7);
          }
        }
      }
    }
  }
  return;
}

