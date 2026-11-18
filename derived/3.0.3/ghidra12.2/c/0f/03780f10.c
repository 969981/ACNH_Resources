
/* WARNING: Removing unreachable block (ram,0x03780fb0) */

void FUN_03780f10(uint param_1,long *param_2)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_70 [2];
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  (**(code **)(*param_2 + 0x38))(param_2);
  if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
    if (DAT_05574040 != 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
         lVar6 != 0)) {
        if ((*(long **)(lVar6 + 0x36620) == (long *)0x0) ||
           (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x36620), puVar4 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar4)();
          uVar3 = uVar3 ^ 1;
        }
        pcVar1 = (char *)(*(long *)(lVar6 + 0x36608) + *(long *)(lVar6 + 0x36600));
        uVar5 = (uint)*pcVar1;
        if (((uVar5 == 2) && (DAT_05ab5ea8 != 0)) &&
           ((*(int *)(DAT_05ab5ea8 + 0x14) != 0 &&
            ((((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)) && (param_1 != 5)) &&
             (param_1 != 6)))))) {
          uVar5 = (uint)*(ushort *)(pcVar1 + 0x899c);
          bVar2 = param_1 == uVar5;
        }
        else {
          bVar2 = false;
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar5);
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x36620) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x36620) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
        if (bVar2) {
          if ((*(long **)(lVar6 + 0x39058) == (long *)0x0) ||
             (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x39058), puVar4 == (undefined8 *)0x0)) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)*puVar4)();
            uVar3 = uVar3 ^ 1;
          }
          local_68 = *(long *)(lVar6 + 0x39040) + *(long *)(lVar6 + 0x39038) + 0x2e;
          local_70[0] = 0x17;
          (**(code **)(*param_2 + 0x38))(param_2);
          local_48 = 0;
          uStack_40 = 0;
          local_50 = 0;
          local_38 = 1;
          local_34 = 0;
          local_60 = PTR_DAT_04bc0cd8 + 0x10;
          uStack_58 = 0;
          FUN_02906b00(&local_60,param_2,local_70);
          if ((uVar3 & 1) != 0) {
            return;
          }
          lVar6 = *(long *)(lVar6 + 0x39058);
          goto joined_r0x037811d8;
        }
      }
    }
    lVar6 = FUN_03776400(param_1);
    if (lVar6 == 0) {
      return;
    }
    if (*(long **)(lVar6 + 0x13a0) != (long *)0x0) {
      puVar4 = (undefined8 *)**(long **)(lVar6 + 0x13a0);
      goto joined_r0x037810d4;
    }
LAB_037810ec:
    uVar3 = 1;
  }
  else {
    lVar6 = *(long *)(DAT_05ab7608 + 0x30);
    if (*(long **)(lVar6 + 0x13a0) == (long *)0x0) goto LAB_037810ec;
    puVar4 = (undefined8 *)**(long **)(lVar6 + 0x13a0);
joined_r0x037810d4:
    if (puVar4 == (undefined8 *)0x0) goto LAB_037810ec;
    uVar3 = (**(code **)*puVar4)();
    uVar3 = uVar3 ^ 1;
  }
  local_68 = *(long *)(lVar6 + 5000) + *(long *)(lVar6 + 0x1380) + 0x2e;
  local_70[0] = 0x17;
  (**(code **)(*param_2 + 0x38))(param_2);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_58 = 0;
  FUN_02906b00(&local_60,param_2,local_70);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x13a0);
joined_r0x037811d8:
  if ((lVar6 != 0) && (*(undefined8 **)(lVar6 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar6 + 8))();
  }
  return;
}

