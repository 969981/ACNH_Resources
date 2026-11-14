
/* WARNING: Removing unreachable block (ram,0x017ff610) */

undefined4 FUN_017ff544(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  iVar5 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      iVar5 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar5 = 0;
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(*(long *)puVar1 + 0x330);
          iVar5 = 0;
          if (lVar6 != 0) {
            iVar5 = *(int *)(lVar6 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529240c == iVar5) {
    uVar7 = *(undefined4 *)(param_1 + 0x1e8);
  }
  else if (((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
          (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
          lVar6 == 0)) {
    uVar7 = 0;
  }
  else {
    if ((*(long **)(lVar6 + 0x5d3cd8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x5d3cd8), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    uVar7 = *(undefined4 *)(*(long *)(lVar6 + 0x5d3cc0) + *(long *)(lVar6 + 0x5d3cb8) + 0x62a0);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x5d3cd8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x5d3cd8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar7;
}

