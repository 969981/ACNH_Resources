
undefined8 FUN_01d7c528(long param_1,byte *param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_8c [4];
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long lStack_30;
  byte local_24 [4];
  
  puVar2 = PTR_DAT_04bb21c8;
  local_24[0] = *param_2;
  if (local_24[0] < 8) {
    uVar3 = FUN_007b36c8(&local_88,local_24);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    local_38 = local_88;
    lStack_30 = local_80;
    if (**(long **)(param_1 + 8) != local_88 || (*(long **)(param_1 + 8))[1] != local_80) {
      local_8c[0] = *param_2;
      if (7 < local_8c[0]) {
        local_8c[0] = 0xff;
      }
      lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
      if (lVar4 == 0) {
        return 0;
      }
      lVar6 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar6 + 0x24838) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x24838), puVar5 == (undefined8 *)0x0)) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x24820) + *(long *)(lVar6 + 0x24818));
        local_58 = plVar1[6];
        local_50 = plVar1[7];
        local_48 = plVar1[8];
        local_40 = plVar1[9];
        local_78 = plVar1[2];
        local_70 = plVar1[3];
        local_68 = plVar1[4];
        local_60 = plVar1[5];
        local_88 = *plVar1;
        local_80 = plVar1[1];
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        plVar1 = (long *)(*(long *)(lVar6 + 0x24820) + *(long *)(lVar6 + 0x24818));
        local_58 = plVar1[6];
        local_50 = plVar1[7];
        local_48 = plVar1[8];
        local_40 = plVar1[9];
        local_78 = plVar1[2];
        local_70 = plVar1[3];
        local_68 = plVar1[4];
        local_60 = plVar1[5];
        local_88 = *plVar1;
        local_80 = plVar1[1];
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x24838) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x24838) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
      uVar3 = FUN_01d7c750(param_1,&local_38,&local_88);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      FUN_01d7cd70(param_1);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    lVar4 = *(long *)puVar2;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar4 = *(long *)(lVar4 + 0x120);
    local_88 = 0;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    FUN_01d7c750(param_1,&local_88,&DAT_04178a90);
  }
  return 1;
}

