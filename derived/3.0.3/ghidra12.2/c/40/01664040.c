
void FUN_01664040(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = 0x40;
  do {
    if (*(long **)(param_1 + lVar7) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + lVar7) + 0x58))();
    }
    puVar3 = PTR_DAT_04bbd4c8;
    puVar2 = PTR_DAT_04bbd4c0;
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x150);
  lVar7 = 0x40;
  puVar1 = PTR_DAT_04bbd4d0 + 0x10;
  do {
    puVar5 = *(undefined8 **)(param_1 + lVar7);
    if (puVar5 == (undefined8 *)0x0) {
LAB_016640b0:
      *(undefined8 *)(param_1 + lVar7) = 0;
    }
    else {
      if ((*puVar3 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(puVar3);
        if (iVar4 != 0) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
      }
      uVar6 = (**(code **)*puVar5)(puVar5,puVar2);
      if ((uVar6 & 1) == 0) {
        if (*(long **)(param_1 + lVar7) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + lVar7) + 0x18))();
        }
        goto LAB_016640b0;
      }
    }
    lVar7 = lVar7 + 8;
    if (lVar7 == 0x150) {
      if (*(long **)(param_1 + 0x158) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x158) + 0x20))();
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      *(undefined8 *)(param_1 + 0x160) = 0;
      return;
    }
  } while( true );
}

