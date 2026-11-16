
uint FUN_0267d480(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), puVar2 = PTR_DAT_04bb43c0,
     lVar5 == 0)) {
    uVar4 = 0;
    goto LAB_0267d570;
  }
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02649620(param_1,param_3,0);
    }
  }
  lVar10 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)puVar3 + 0x20);
    lVar5 = *(long *)(lVar10 + 0x178);
    if (lVar5 == 0) goto LAB_0267d5a0;
LAB_0267d540:
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x178) == 0) goto LAB_0267d5d8;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x178) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar10 + 0x158);
      uStack_60 = *(undefined8 *)(lVar10 + 0x160);
      local_58 = 0x11944;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x19628);
    if (lVar5 != 0) goto LAB_0267d540;
LAB_0267d5a0:
    uVar6 = 0;
  }
LAB_0267d5d8:
  lVar5 = *(long *)(lVar10 + 0x158);
  lVar1 = *(long *)(lVar10 + 0x160);
  uVar8 = FUN_0277e9e0(param_3);
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_026825d0(lVar1 + lVar5,param_2,param_3,param_4);
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x178) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x178) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_0267d570:
  return uVar4 & 1;
}

