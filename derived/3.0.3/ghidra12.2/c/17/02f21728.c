
/* WARNING: Removing unreachable block (ram,0x02f21824) */
/* WARNING: Removing unreachable block (ram,0x02f2177c) */
/* WARNING: Removing unreachable block (ram,0x02f21784) */
/* WARNING: Removing unreachable block (ram,0x02f2182c) */

void FUN_02f21728(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_50;
  int local_48;
  
  puVar4 = PTR_DAT_04bc43f8;
  puVar3 = PTR_DAT_04bb27a8;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] == 0) {
    return;
  }
  local_50 = PTR_DAT_04bc43f8 + 0x10;
  if (0xf < uVar2) {
    uVar2 = 0;
  }
  local_48 = (&DAT_05636e58)[(int)uVar2];
  if (local_48 == 0) {
    return;
  }
  uVar5 = FUN_02a59140(puVar1,&local_50);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x58);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar3 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_50 = puVar4 + 0x10;
      if (0xf < uVar2) {
        uVar2 = 0;
      }
      local_48 = (&DAT_05636e58)[(int)uVar2];
      if ((local_48 != 0) && (uVar5 = FUN_02a59140(puVar1,&local_50), (uVar5 & 1) != 0)) {
        switch(*(undefined4 *)(param_1 + 0x58)) {
        case 0:
        case 2:
        case 5:
        case 6:
          if (*(char *)(param_1 + 0x5c) == '\x01') {
LAB_02f218ac:
            plVar6 = *(long **)(param_1 + 0x20);
            local_50 = PTR_DAT_04bc4f00 + 0x10;
            local_48 = 0x14;
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
            uVar7 = 0;
            goto LAB_02f21928;
          }
          break;
        case 0xf:
          uVar5 = FUN_016cebf4();
          if (((uVar5 & 1) != 0) && (uVar5 = FUN_016cec58(), (uVar5 & 1) == 0)) goto LAB_02f218ac;
        }
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x20);
  local_50 = PTR_DAT_04bc4f00 + 0x10;
  local_48 = 0x14;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  uVar7 = 0x3f800000;
LAB_02f21928:
  (**(code **)(plVar6[3] + 0x158))(uVar7,plVar6[1]);
  return;
}

