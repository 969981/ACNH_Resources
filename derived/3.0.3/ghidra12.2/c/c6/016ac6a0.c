
/* WARNING: Removing unreachable block (ram,0x016ac708) */

void FUN_016ac6a0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined *local_90;
  char *pcStack_88;
  uint local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = *(undefined8 *)(param_1 + 0x10);
  FUN_00a81090(&local_68);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  FUN_00a81090(&local_70);
  lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
  lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
  if ((((lVar4 < lVar3) ||
       (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68), lVar4 != lVar3)) &&
      (DAT_05574040 != 0)) && (FUN_02705554(&local_78,0,1), local_74 != 8)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    uVar8 = local_74;
    do {
      if (uVar8 < 8) {
        if (DAT_05574040 == 0) {
          return;
        }
        local_7c = uVar8;
        lVar3 = FUN_026eec4c(DAT_05574040,uVar8);
        if (lVar3 != 0) {
          if ((*(long **)(lVar3 + 0x18320) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x18320), puVar5 == (undefined8 *)0x0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)*puVar5)();
            uVar6 = uVar6 & 0xffffffff;
          }
          pcStack_88 = "HotelUnlockDIYTrade";
          local_90 = puVar1;
          iVar2 = FUN_0274bbb0(*(long *)(lVar3 + 0x18308) + *(long *)(lVar3 + 0x18300),&local_90);
          if (iVar2 != 0) {
            FUN_02617ccc(&local_7c,2);
          }
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
             (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 8), puVar5 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar5)();
          }
        }
        lVar3 = DAT_05574040;
        if (DAT_05574040 == 0) {
          return;
        }
        (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
        if ((local_78 == 0) && ((*(byte *)(lVar3 + 0x453) & 1) != 0)) {
          lVar3 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x10) + 0x130) + 0x18))();
        }
        else {
          lVar3 = (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x10) + 0x18))();
          lVar3 = lVar3 + 0x110;
        }
        if (uVar8 == 7) {
          return;
        }
        uVar6 = (ulong)uVar8;
        plVar7 = (long *)(lVar3 + (ulong)uVar8 * 0x48 + 0x1e3400);
        while ((6 < uVar6 || (plVar7[-1] == 0 && *plVar7 == 0))) {
          uVar6 = uVar6 + 1;
          plVar7 = plVar7 + 9;
          if (uVar6 == 7) {
            return;
          }
        }
        uVar8 = (int)uVar6 + 1;
      }
    } while (uVar8 != 8);
  }
  return;
}

