
/* WARNING: Removing unreachable block (ram,0x03780824) */

void FUN_03780780(uint param_1,long *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_80 [2];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  (**(code **)(*param_2 + 0x38))(param_2);
  if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
    if (DAT_05574040 != 0) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
         lVar7 != 0)) {
        if (*(long **)(lVar7 + 0x36620) == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar7 + 0x36620);
          uVar6 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            uVar6 = (**(code **)*puVar5)();
          }
        }
        puVar2 = PTR_DAT_04bb27f8;
        pcVar1 = (char *)(*(long *)(lVar7 + 0x36608) + *(long *)(lVar7 + 0x36600));
        uVar4 = (uint)*pcVar1;
        if (((uVar4 == 2) && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
           ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 0 &&
            ((((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)) && (param_1 != 5)) &&
             (param_1 != 6)))))) {
          uVar4 = (uint)*(ushort *)(pcVar1 + 0x899c);
          bVar3 = param_1 == uVar4;
        }
        else {
          bVar3 = false;
        }
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar4);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x36620) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x36620) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        if (((bVar3) && (*(int *)(*(long *)puVar2 + 0x14) != 0)) &&
           ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
          if ((*(long **)(lVar7 + 0x39058) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x39058), puVar5 == (undefined8 *)0x0)) {
            uVar4 = 1;
          }
          else {
            uVar4 = (**(code **)*puVar5)();
            uVar4 = uVar4 ^ 1;
          }
          local_78 = *(long *)(lVar7 + 0x39040) + *(long *)(lVar7 + 0x39038);
          local_80[0] = 0x17;
          (**(code **)(*param_2 + 0x38))(param_2);
          local_58 = 0;
          uStack_50 = 0;
          local_60 = 0;
          local_48 = 1;
          local_44 = 0;
          local_70 = PTR_DAT_04bc0cd8 + 0x10;
          uStack_68 = 0;
          FUN_02906b00(&local_70,param_2,local_80);
          if ((uVar4 & 1) != 0) {
            return;
          }
          lVar7 = *(long *)(lVar7 + 0x39058);
          goto joined_r0x03780a70;
        }
      }
    }
    lVar7 = FUN_03776400(param_1);
    if (lVar7 == 0) {
      return;
    }
    if (*(long **)(lVar7 + 0x13a0) != (long *)0x0) {
      puVar5 = (undefined8 *)**(long **)(lVar7 + 0x13a0);
      goto joined_r0x03780960;
    }
LAB_03780978:
    uVar4 = 1;
  }
  else {
    lVar7 = *(long *)(DAT_05ab7608 + 0x30);
    if (*(long **)(lVar7 + 0x13a0) == (long *)0x0) goto LAB_03780978;
    puVar5 = (undefined8 *)**(long **)(lVar7 + 0x13a0);
joined_r0x03780960:
    if (puVar5 == (undefined8 *)0x0) goto LAB_03780978;
    uVar4 = (**(code **)*puVar5)();
    uVar4 = uVar4 ^ 1;
  }
  local_78 = *(long *)(lVar7 + 5000) + *(long *)(lVar7 + 0x1380);
  local_80[0] = 0x17;
  (**(code **)(*param_2 + 0x38))(param_2);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_48 = 1;
  local_44 = 0;
  local_70 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,param_2,local_80);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x13a0);
joined_r0x03780a70:
  if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar7 + 8))();
  }
  return;
}

