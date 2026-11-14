
void FUN_016aa180(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  undefined *local_70;
  char *pcStack_68;
  uint local_5c;
  int local_58;
  uint local_54;
  
  if ((DAT_05574040 != 0) && (FUN_02705554(&local_58,0,1), local_54 != 8)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    uVar5 = local_54;
    do {
      if (uVar5 < 8) {
        if (DAT_05574040 == 0) {
          return;
        }
        local_5c = uVar5;
        lVar2 = FUN_026eec4c(DAT_05574040,uVar5);
        if (lVar2 != 0) {
          pcStack_68 = "TodayWanderingNpcInvitePattern";
          local_70 = puVar1;
          FUN_0274d104(&local_5c,&local_70,0);
        }
        lVar2 = DAT_05574040;
        if (DAT_05574040 == 0) {
          return;
        }
        (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
        if ((local_58 == 0) && ((*(byte *)(lVar2 + 0x453) & 1) != 0)) {
          lVar2 = (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + 0x130) + 0x18))();
        }
        else {
          lVar2 = (**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x10) + 0x18))();
          lVar2 = lVar2 + 0x110;
        }
        if (uVar5 == 7) {
          return;
        }
        uVar3 = (ulong)uVar5;
        plVar4 = (long *)(lVar2 + (ulong)uVar5 * 0x48 + 0x1e3400);
        while ((6 < uVar3 || (plVar4[-1] == 0 && *plVar4 == 0))) {
          uVar3 = uVar3 + 1;
          plVar4 = plVar4 + 9;
          if (uVar3 == 7) {
            return;
          }
        }
        uVar5 = (int)uVar3 + 1;
      }
    } while (uVar5 != 8);
  }
  return;
}

