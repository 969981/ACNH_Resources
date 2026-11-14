
bool FUN_01b379d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_64;
  int local_48;
  uint local_44;
  
  lVar1 = DAT_05574040;
  if (DAT_05574040 != 0) {
    FUN_02705554(&local_48,0,1);
    uVar4 = (ulong)local_44;
    if (local_44 != 8) {
      do {
        if (uVar4 < 8) {
          local_64 = (undefined4)uVar4;
          FUN_01b387f4(&local_64,param_1);
          lVar2 = DAT_05574040;
          if (DAT_05574040 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
          if ((local_48 == 0) && ((*(byte *)(lVar2 + 0x453) & 1) != 0)) {
            lVar2 = (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar2 = (**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x10) + 0x18))();
            lVar2 = lVar2 + 0x110;
          }
          if (uVar4 == 7) break;
          plVar3 = (long *)(lVar2 + uVar4 * 0x48 + 0x1e3400);
          while ((6 < uVar4 || (plVar3[-1] == 0 && *plVar3 == 0))) {
            uVar4 = uVar4 + 1;
            plVar3 = plVar3 + 9;
            if (uVar4 == 7) goto LAB_01b37a20;
          }
          uVar4 = (ulong)((int)uVar4 + 1);
        }
      } while (uVar4 != 8);
    }
  }
LAB_01b37a20:
  return lVar1 != 0;
}

