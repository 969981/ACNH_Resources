
/* WARNING: Removing unreachable block (ram,0x03780aec) */

void FUN_03780aa0(uint param_1,undefined8 param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 != 0) {
    local_48 = CONCAT44(local_48._4_4_,1);
    if ((((*(byte *)(lVar7 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar7 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x10) + 0x188) + 0x30))(), lVar7 != 0)) {
      if (*(long **)(lVar7 + 0x36620) == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar3 = (undefined8 *)**(long **)(lVar7 + 0x36620);
        uVar4 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = (**(code **)*puVar3)();
        }
      }
      pcVar1 = (char *)(*(long *)(lVar7 + 0x36608) + *(long *)(lVar7 + 0x36600));
      uVar6 = (uint)*pcVar1;
      if (((((uVar6 == 2) && (DAT_05ab5ea8 != 0)) && (*(int *)(DAT_05ab5ea8 + 0x14) != 0)) &&
          ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) &&
         ((param_1 != 5 && (param_1 != 6)))) {
        uVar6 = (uint)*(ushort *)(pcVar1 + 0x899c);
        bVar2 = param_1 == uVar6;
      }
      else {
        bVar2 = false;
      }
      local_48 = CONCAT44(local_48._4_4_,uVar6);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x36620) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x36620) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
      if (bVar2) {
        lVar8 = *(long *)(lVar7 + 0x39058);
        if (lVar8 == 0) {
          uVar4 = 0;
        }
        else {
          if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            lVar8 = *(long *)(lVar7 + 0x39058);
            uVar4 = uVar4 & 0xffffffff;
            if (lVar8 == 0) goto LAB_03780cf4;
          }
          plVar5 = *(long **)(lVar8 + 0x20);
          if (plVar5 != (long *)0x0) {
            local_48 = *(undefined8 *)(lVar7 + 0x39038);
            local_40 = *(undefined8 *)(lVar7 + 0x39040);
            local_38 = 0x6c;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
          }
        }
LAB_03780cf4:
        local_48 = CONCAT44(local_48._4_4_,0x17);
        local_40 = *(long *)(lVar7 + 0x39040) + *(long *)(lVar7 + 0x39038);
        FUN_02906c90(&local_48,param_2);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x39058);
        goto joined_r0x03780ca0;
      }
    }
  }
  lVar7 = FUN_03776400(param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar7 + 0x13a0);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar7 + 0x13a0) == 0) goto LAB_03780c74;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x13a0) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar7 + 0x1380);
      local_40 = *(undefined8 *)(lVar7 + 5000);
      local_38 = 0x6c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_03780c74:
  local_48 = CONCAT44(local_48._4_4_,0x17);
  local_40 = *(long *)(lVar7 + 5000) + *(long *)(lVar7 + 0x1380);
  FUN_02906c90(&local_48,param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x13a0);
joined_r0x03780ca0:
  if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar7 + 0x18))();
  }
  return;
}

