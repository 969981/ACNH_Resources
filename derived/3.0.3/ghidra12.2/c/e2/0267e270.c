
uint FUN_0267e270(byte *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_34,1);
  puVar1 = PTR_DAT_04bb43c0;
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_0267e458;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_3);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_02648c90(param_1,param_3,0);
    }
  }
  lVar9 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
    lVar3 = *(long *)(lVar9 + 0x1b0);
    if (lVar3 == 0) goto LAB_0267e390;
LAB_0267e344:
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar9 + 0x1b0) == 0) goto LAB_0267e3c4;
      plVar5 = *(long **)(*(long *)(lVar9 + 0x1b0) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_70 = *(undefined ***)(lVar9 + 400);
      lStack_68 = *(undefined8 *)(lVar9 + 0x198);
      local_60 = (undefined1 *)0x148;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x19660);
    if (lVar3 != 0) goto LAB_0267e344;
LAB_0267e390:
    uVar4 = 0;
  }
LAB_0267e3c4:
  lVar3 = *(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400);
  bVar8 = *param_1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_70 = (undefined **)CONCAT71(local_70._1_7_,bVar8);
  uVar6 = FUN_02669430(&local_70);
  lStack_68 = lVar3;
  if ((uVar6 & 1) == 0) {
    lStack_68 = lVar3 + 0xa4;
  }
  local_70 = &PTR_LAB_04a88430;
  uVar2 = *(uint *)(lStack_68 + 0xa0);
  local_60 = &LAB_026827a4;
  uStack_58 = 0;
  if (0x13 < uVar2) {
    uVar2 = 0x14;
  }
  uVar2 = FUN_0277b494(param_2,param_3,uVar2,&local_70,0,param_4);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x1b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x1b0) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_0267e458:
  return uVar2 & 1;
}

