
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03141410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (((DAT_056f8360 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f8360), iVar3 != 0)) {
    DAT_056f8340 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f8348 = "SeasonType";
    DAT_056f8358 = &DAT_0407ebb1;
    DAT_056f8350 = DAT_056f8340;
    __cxa_guard_release(&DAT_056f8360);
  }
  if (((DAT_056f8378 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f8378), iVar3 != 0)) {
    _DAT_056f8368 = 0x100000002;
    DAT_056f8370 = &DAT_056f8340;
    __cxa_guard_release(&DAT_056f8378);
  }
  uVar2 = DAT_056f836c;
  if (0 < (int)DAT_056f836c) {
    uVar8 = 0;
    do {
      lVar7 = (long)(int)(DAT_056f8368 * uVar8);
      if (DAT_056f8368 == 0 || DAT_056f836c <= uVar8) {
        lVar7 = 0;
      }
      lVar6 = (long)(int)(DAT_056f8368 * uVar8 + 1);
      if (DAT_056f8368 < 2 || DAT_056f836c <= uVar8) {
        lVar6 = 0;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f8370 + lVar7 * 2,DAT_056f8370 + lVar6 * 2);
      uVar8 = uVar8 + 1;
      *(undefined8 *)(param_1 + 0x288) = uVar4;
    } while (uVar2 != uVar8);
  }
  if (*(long *)(param_1 + 0x250) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      plVar5 = malloc(0x20);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
    }
    plVar5[2] = (long)(plVar5 + 1);
    plVar5[3] = 0x20800000000;
    *plVar5 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar5[1] = (long)(plVar5 + 1);
    *(long **)(param_1 + 0x250) = plVar5;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

