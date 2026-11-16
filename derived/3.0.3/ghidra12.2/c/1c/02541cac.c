
uint FUN_02541cac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar7 = &DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar7 = &DAT_054f0958;
    }
  }
  else {
    puVar7 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar7 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,0x33);
  *(uint *)((long)puVar7 + 4) = *(uint *)((long)puVar7 + 4) & 0xfff7ffff;
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar9);
  lVar3 = FUN_02583354(DAT_055021a0,&local_48,1);
  if (lVar3 == 0) {
    uVar1 = 0;
    goto LAB_02541e2c;
  }
  lVar8 = *(long *)(lVar3 + 0x178);
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
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_02541de4;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar3 + 0x158);
      uStack_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02541de4:
  uVar6 = FUN_026e85f0(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
  uVar1 = FUN_02538e78(param_1,uVar6,1,param_2 & 1,0);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x178) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x178) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_02541e2c:
  return uVar1 & 1;
}

