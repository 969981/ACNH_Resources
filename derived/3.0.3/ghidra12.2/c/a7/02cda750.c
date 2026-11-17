
void FUN_02cda750(byte *param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (7 < param_2) {
    return;
  }
  if (7 < *param_1) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_3);
  if (*(long *)puVar1 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar2) {
    return;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return;
  }
  bVar7 = *param_1;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar7);
  lVar8 = FUN_02583354(DAT_055021a0,&local_58,1);
  if (lVar8 == 0) {
    return;
  }
  lVar8 = lVar8 + (ulong)param_2 * 0x2450;
  lVar6 = *(long *)(lVar8 + 0x3f28);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar8 + 0x3f28);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 == 0) goto LAB_02cda878;
    }
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar8 + 0x3f08);
      local_50 = *(undefined8 *)(lVar8 + 0x3f10);
      uStack_48 = 0x11f8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_02cda878:
  lVar6 = *(long *)(lVar8 + 0x3f10) + *(long *)(lVar8 + 0x3f08);
  *(undefined2 *)(lVar6 + 0x11f0) = *param_3;
  *(undefined1 *)(lVar6 + 0x11f2) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(lVar6 + 0x11f3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(lVar6 + 0x11f4) = *(undefined4 *)(param_3 + 2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x3f28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x3f28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

