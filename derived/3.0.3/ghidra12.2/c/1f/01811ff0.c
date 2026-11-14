
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01811ff0(undefined4 param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *local_68;
  long local_60;
  undefined1 local_58;
  byte local_57;
  undefined *local_50;
  long local_48;
  undefined1 local_40;
  byte local_3f;
  undefined4 local_34;
  
  *param_2 = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 1) = 0;
  local_34 = param_1;
  uVar5 = FUN_02663fa0(&local_34);
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_0265c3e0(param_1);
    if (lVar6 == 0) {
      return 0;
    }
    if ((*(long **)(lVar6 + 0xf950) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0xf950), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar6 + 0xf938) + *(long *)(lVar6 + 0xf930);
    if ((*(byte *)(lVar1 + 0x20) & 0xe) == 6) {
      *(undefined1 *)((long)param_2 + 2) = 1;
      bVar2 = *(byte *)(*(long *)(lVar6 + 0xf938) + *(long *)(lVar6 + 0xf930) + 0x20);
    }
    else {
      bVar2 = *(byte *)(lVar1 + 0x20);
    }
    if ((bVar2 & 1) != 0) {
      *(undefined1 *)((long)param_2 + 3) = 1;
    }
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(lVar6 + 0xf950);
joined_r0x01812108:
      if ((lVar6 != 0) && (*(undefined8 **)(lVar6 + 8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar6 + 8))();
      }
    }
LAB_01812268:
    uVar7 = 1;
  }
  else {
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    uVar5 = FUN_02b67a30(&local_68,param_1);
    if ((uVar5 & 1) != 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,local_68._0_4_);
      if (DAT_05574040 != 0) {
        puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
          if (lVar6 != 0) {
            lVar6 = lVar6 + 0x70;
LAB_01812140:
            if ((uint)local_50 < 10) {
              local_40 = 1;
              lVar1 = lVar6 + 0x1962d8 + ((ulong)local_50 & 0xffffffff) * 0x10d8;
              if (9 < (uint)local_50) {
                lVar1 = lVar6 + 0x1962d8;
              }
              local_48 = lVar1 + 0x968;
              if ((*(long **)(lVar1 + 0x990) == (long *)0x0) ||
                 (puVar8 = (undefined8 *)**(long **)(lVar1 + 0x990), puVar8 == (undefined8 *)0x0)) {
                bVar2 = 0;
              }
              else {
                bVar2 = (**(code **)*puVar8)();
              }
              local_3f = bVar2 & 1;
              local_60 = lVar1 + 0xb98;
              local_58 = 1;
              local_50 = PTR_DAT_04bb4cb0 + 0x10;
              if ((*(long **)(lVar1 + 0xbc0) == (long *)0x0) ||
                 (puVar8 = (undefined8 *)**(long **)(lVar1 + 0xbc0), puVar8 == (undefined8 *)0x0)) {
                local_57 = 0;
                local_68 = PTR_DAT_04bbc500 + 0x10;
                FUN_01811d80(&local_50,&local_68,param_2);
              }
              else {
                bVar3 = (**(code **)*puVar8)();
                local_57 = bVar3 & 1;
                local_68 = PTR_DAT_04bbc500 + 0x10;
                FUN_01811d80(&local_50,&local_68,param_2);
                if ((((bVar3 & 1) != 0) && (*(long *)(lVar1 + 0xbc0) != 0)) &&
                   (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0xbc0) + 8),
                   puVar8 != (undefined8 *)0x0)) {
                  (**(code **)*puVar8)();
                }
              }
              if ((bVar2 & 1) != 0) {
                lVar6 = *(long *)(lVar1 + 0x990);
                goto joined_r0x01812108;
              }
              goto LAB_01812268;
            }
          }
        }
        else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
                (lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar6 != 0))
        goto LAB_01812140;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

