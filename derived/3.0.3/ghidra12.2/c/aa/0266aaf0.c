
void FUN_0266aaf0(byte *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  bVar10 = *param_1;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar10);
  lVar5 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (lVar5 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar5 + 0xd0);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_0266ab9c;
      plVar7 = *(long **)(*(long *)(lVar5 + 0xd0) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar5 + 0xb0);
      uStack_30 = *(undefined8 *)(lVar5 + 0xb8);
      local_28 = 0xc120;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_38);
    }
  }
LAB_0266ab9c:
  lVar9 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
  *(undefined2 *)(lVar9 + 0xaf8a) = 0xff00;
  uVar2 = PTR_DAT_04bb37e0[2];
  uVar3 = PTR_DAT_04bb37e0[3];
  uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined1 *)(lVar9 + 0xc102) = uVar2;
  *(undefined1 *)(lVar9 + 0xc103) = uVar3;
  *(undefined2 *)(lVar9 + 0xaf90) = uVar4;
  *(undefined1 *)(lVar9 + 0xaf92) = uVar2;
  *(undefined1 *)(lVar9 + 0xaf93) = uVar3;
  *(undefined4 *)(lVar9 + 0xaf94) = uVar1;
  *(undefined2 *)(lVar9 + 0xb840) = uVar4;
  *(undefined1 *)(lVar9 + 0xb842) = uVar2;
  *(undefined1 *)(lVar9 + 0xb843) = uVar3;
  *(undefined4 *)(lVar9 + 0xb844) = uVar1;
  *(undefined2 *)(lVar9 + 0xb848) = uVar4;
  *(undefined1 *)(lVar9 + 0xb84a) = uVar2;
  *(undefined1 *)(lVar9 + 0xb84b) = uVar3;
  *(undefined4 *)(lVar9 + 0xb84c) = uVar1;
  *(undefined2 *)(lVar9 + 0xb850) = uVar4;
  *(undefined1 *)(lVar9 + 0xb852) = uVar2;
  *(undefined1 *)(lVar9 + 0xb853) = uVar3;
  *(undefined4 *)(lVar9 + 0xb854) = uVar1;
  *(undefined2 *)(lVar9 + 0xc100) = uVar4;
  *(undefined4 *)(lVar9 + 0xc104) = uVar1;
  *(undefined2 *)(lVar9 + 0xc108) = uVar4;
  *(undefined4 *)(lVar9 + 0xc10c) = uVar1;
  *(undefined2 *)(lVar9 + 0xc110) = uVar4;
  *(undefined4 *)(lVar9 + 0xc114) = uVar1;
  *(undefined2 *)(lVar9 + 0xc118) = uVar4;
  *(undefined4 *)(lVar9 + 0xc11c) = uVar1;
  *(undefined1 *)(lVar9 + 0xc10a) = uVar2;
  *(undefined1 *)(lVar9 + 0xc10b) = uVar3;
  *(undefined1 *)(lVar9 + 0xc112) = uVar2;
  *(undefined1 *)(lVar9 + 0xc113) = uVar3;
  *(undefined1 *)(lVar9 + 0xc11a) = uVar2;
  *(undefined1 *)(lVar9 + 0xc11b) = uVar3;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0xd0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0xd0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

