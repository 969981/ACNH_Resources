
/* WARNING: Removing unreachable block (ram,0x02664860) */
/* WARNING: Removing unreachable block (ram,0x02664868) */

bool FUN_02664820(uint param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_38;
  undefined4 local_30;
  uint local_24;
  
  puVar6 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar6 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar6[1] != 0) {
    local_38 = PTR_DAT_04bc43f8 + 0x10;
    uVar1 = param_1;
    if (9 < param_1) {
      uVar1 = 0;
    }
    local_30 = (&DAT_05636e30)[(int)uVar1];
    local_24 = param_1;
    uVar4 = FUN_02a59140(puVar6,&local_38);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    local_38 = (undefined *)CONCAT44(local_38._4_4_,param_1);
    lVar5 = *(long *)PTR_DAT_04bb46b0;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 == 0) {
          return false;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar6 == (undefined8 *)0x0) {
          return false;
        }
        if ((long *)puVar6[0x26] == (long *)0x0) {
          return false;
        }
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        if (lVar5 == 0) {
          return false;
        }
      }
      if ((uint)local_38 < 10) {
        lVar2 = lVar5 + 0x1962d8 + ((ulong)local_38 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_38) {
          lVar2 = lVar5 + 0x1962d8;
        }
        if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar6 == (undefined8 *)0x0)) {
          return *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 4) == 2;
        }
        uVar4 = (**(code **)*puVar6)();
        bVar3 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 4) == 2;
        if ((uVar4 & 1) == 0) {
          return bVar3;
        }
        if (*(long *)(lVar2 + 0x28) == 0) {
          return bVar3;
        }
        puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return bVar3;
        }
        (**(code **)*puVar6)();
        return bVar3;
      }
    }
  }
  return false;
}

