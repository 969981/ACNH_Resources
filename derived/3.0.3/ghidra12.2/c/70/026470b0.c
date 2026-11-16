
void FUN_026470b0(byte *param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar9 + 0x28);
  if (lVar6 == 0) {
    uVar8 = 0;
    pbVar2 = param_1;
    goto LAB_02647140;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar8 = 0;
    plVar3 = *(long **)(lVar6 + 0x20);
    pbVar2 = (byte *)0x0;
    if (plVar3 == (long *)0x0) goto LAB_02647140;
  }
  else {
    pbVar2 = (byte *)(**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar8 = (ulong)pbVar2 & 0xffffffff;
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02647140;
    plVar3 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
    if (plVar3 == (long *)0x0) {
      pbVar2 = (byte *)0x0;
      goto LAB_02647140;
    }
  }
  local_58 = *(undefined **)(lVar9 + 8);
  pcStack_50 = *(char **)(lVar9 + 0x10);
  local_48 = 0xb548;
  pbVar2 = (byte *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
LAB_02647140:
  lVar6 = 0;
  plVar3 = (long *)(*(char **)(lVar9 + 0x10) + (long)*(undefined **)(lVar9 + 8));
  while( true ) {
    uVar1 = *(uint *)((long)plVar3 + lVar6 * 4 + 0xaf00);
    plVar4 = plVar3 + (ulong)uVar1 * 0xe;
    if (399 < uVar1) {
      plVar4 = plVar3;
    }
    if ((*plVar4 != 0) &&
       ((*(int *)((long)plVar4 + 0x2c) != 0 && (int)plVar4[2] != 0) && *plVar4 == *param_2)) break;
    lVar6 = lVar6 + 1;
    if (lVar6 == 400) {
LAB_02647290:
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      return;
    }
  }
  if (-1 < (int)(uint)lVar6) {
    if (*(long *)(lVar9 + 0x28) != 0) {
      plVar4 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
      pbVar2 = (byte *)0x0;
      if (plVar4 != (long *)0x0) {
        local_48 = 0xb548;
        local_58 = *(undefined **)(lVar9 + 8);
        pcStack_50 = *(char **)(lVar9 + 0x10);
        pbVar2 = (byte *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
        plVar3 = (long *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      }
    }
    plVar4 = plVar3;
    if (((uint)lVar6 < 400) &&
       (uVar1 = *(uint *)((long)plVar3 + lVar6 * 4 + 0xaf00), plVar4 = plVar3 + (ulong)uVar1 * 0xe,
       399 < uVar1)) {
      plVar4 = plVar3;
    }
    bVar7 = *(byte *)((long)plVar4 + 0x6e);
    *(byte *)((long)plVar4 + 0x6e) = bVar7 | 6;
    if (((bVar7 ^ 0xff) & 6) != 0) {
      if (*(long *)(lVar9 + 0x28) != 0) {
        plVar3 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
        pbVar2 = (byte *)0x0;
        if (plVar3 != (long *)0x0) {
          local_58 = *(undefined **)(lVar9 + 8);
          pcStack_50 = *(char **)(lVar9 + 0x10);
          local_48 = 0xb548;
          pbVar2 = (byte *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
        }
      }
      FUN_026463a0(pbVar2,*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      local_58 = PTR_DAT_04bb2020 + 0x10;
      pcStack_50 = "FriendListNotifyLook";
      FUN_0274bfe8(param_1,&local_58,1);
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar7);
      FUN_02f095f0(&local_58);
    }
  }
  goto LAB_02647290;
}

