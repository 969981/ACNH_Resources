
void FUN_00ad8794(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  local_45 = 0;
  local_88 = 0x40;
  puStack_90 = local_84;
  local_84[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_98 = puVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = FUN_01be5840(&local_98,param_2[1]);
  if ((uVar2 & 1) != 0) {
    local_150 = 0x40;
    puStack_158 = local_14c;
    local_10d = 0;
    local_14c[0] = 0;
    local_168 = PTR_DAT_04bc0cb0 + 0x10;
    local_f8 = 0;
    local_e0 = 0x40;
    local_9d = 0;
    local_dc[0] = 0;
    puStack_e8 = local_dc;
    local_108 = 0xffffffff00000000;
    uStack_100 = 0xffffffff;
    local_160 = puVar1;
    local_f0 = puVar1;
    FUN_01c01ff0(&local_168,&local_98);
    (**(code **)(local_168 + 0x28))(&local_168,param_3);
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x290);
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == 0) {
      plVar4 = *(long **)(lVar3 + 0x20);
      if (plVar4 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar4;
      }
    }
    (**(code **)(*(long *)(lVar5 + 0x170) + 0x38))(lVar5 + 0x170,&local_168);
    if (*(long *)(lVar5 + 0xc0) != 0) {
      plVar4 = (long *)(*(long *)(lVar5 + 0xc0) + 0x88);
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((uVar2 & 1) != 0) {
        (**(code **)*plVar4)(plVar4,lVar5 + 0x170);
      }
    }
    *(undefined1 *)(lVar5 + 0x2474) = 0;
    FUN_03ebb160(lVar5 + 0x40,1);
  }
  return;
}

