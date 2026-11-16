
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0262b678(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 local_24;
  
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar7 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
      return 0;
    }
  }
  if (DAT_05574040 != 0) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar6 + 0x70;
      }
      plVar9 = *(long **)(lVar7 + 0x28);
      goto joined_r0x0262b748;
    }
    if ((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) {
      lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      plVar9 = *(long **)(lVar7 + 0x28);
      goto joined_r0x0262b748;
    }
  }
  lVar7 = 0;
  plVar9 = _DAT_00000028;
joined_r0x0262b748:
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar9)();
    uVar3 = uVar3 ^ 1;
  }
  uVar4 = 0;
  local_24 = 0;
  lVar6 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
  if (*(long *)(lVar6 + 0x1e33b0) != 0 || *(long *)(lVar6 + 0x1e33b8) != 0) {
    uVar4 = FUN_0262f630(&local_24,param_1);
  }
  local_24 = 1;
  if (*(long *)(lVar6 + 0x1e33f8) != 0 || *(long *)(lVar6 + 0x1e3400) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 2;
  if (*(long *)(lVar6 + 0x1e3440) != 0 || *(long *)(lVar6 + 0x1e3448) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 3;
  if (*(long *)(lVar6 + 0x1e3488) != 0 || *(long *)(lVar6 + 0x1e3490) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 4;
  if (*(long *)(lVar6 + 0x1e34d0) != 0 || *(long *)(lVar6 + 0x1e34d8) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 5;
  if (*(long *)(lVar6 + 0x1e3518) != 0 || *(long *)(lVar6 + 0x1e3520) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 6;
  if (*(long *)(lVar6 + 0x1e3560) != 0 || *(long *)(lVar6 + 0x1e3568) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  local_24 = 7;
  if (*(long *)(lVar6 + 0x1e35a8) != 0 || *(long *)(lVar6 + 0x1e35b0) != 0) {
    uVar5 = FUN_0262f630(&local_24,param_1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return uVar4;
}

