
undefined8 FUN_02543510(byte *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  byte bVar9;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_14;
  
  if (param_1[0x4c] == 0) goto LAB_02543bc4;
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_48 = (long *)CONCAT71(local_48._1_7_,bVar9);
  lVar3 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_48,1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar3 + 0x178);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_025435cc;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_025435cc:
  puVar1 = (undefined2 *)(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
  *puVar1 = *(undefined2 *)(param_1 + 4);
  *(byte *)(puVar1 + 1) = param_1[6];
  *(byte *)((long)puVar1 + 3) = param_1[7];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 8);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543618:
    if (lVar7 != 0) goto LAB_0254361c;
LAB_02543648:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_02543648;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543618;
    }
LAB_0254361c:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_0254367c;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_0254367c:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x8b0) = *(undefined2 *)(param_1 + 0xc);
  *(byte *)(lVar7 + 0x8b2) = param_1[0xe];
  *(byte *)(lVar7 + 0x8b3) = param_1[0xf];
  *(undefined4 *)(lVar7 + 0x8b4) = *(undefined4 *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_025436c8:
    if (lVar7 != 0) goto LAB_025436cc;
LAB_025436f8:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_025436f8;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_025436c8;
    }
LAB_025436cc:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_0254372c;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_0254372c:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x8b8) = *(undefined2 *)(param_1 + 0x14);
  *(byte *)(lVar7 + 0x8ba) = param_1[0x16];
  *(byte *)(lVar7 + 0x8bb) = param_1[0x17];
  *(undefined4 *)(lVar7 + 0x8bc) = *(undefined4 *)(param_1 + 0x18);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543778:
    if (lVar7 != 0) goto LAB_0254377c;
LAB_025437a8:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_025437a8;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543778;
    }
LAB_0254377c:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_025437dc;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_025437dc:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x1190) = *(undefined2 *)(param_1 + 0x44);
  *(byte *)(lVar7 + 0x1192) = param_1[0x46];
  *(byte *)(lVar7 + 0x1193) = param_1[0x47];
  *(undefined4 *)(lVar7 + 0x1194) = *(undefined4 *)(param_1 + 0x48);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543830:
    if (lVar7 != 0) goto LAB_02543834;
LAB_02543860:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_02543860;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543830;
    }
LAB_02543834:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_02543894;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02543894:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x8c0) = *(undefined2 *)(param_1 + 0x1c);
  *(byte *)(lVar7 + 0x8c2) = param_1[0x1e];
  *(byte *)(lVar7 + 0x8c3) = param_1[0x1f];
  *(undefined4 *)(lVar7 + 0x8c4) = *(undefined4 *)(param_1 + 0x20);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_025438e0:
    if (lVar7 != 0) goto LAB_025438e4;
LAB_02543910:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_02543910;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_025438e0;
    }
LAB_025438e4:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_02543944;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02543944:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x1170) = *(undefined2 *)(param_1 + 0x24);
  *(byte *)(lVar7 + 0x1172) = param_1[0x26];
  *(byte *)(lVar7 + 0x1173) = param_1[0x27];
  *(undefined4 *)(lVar7 + 0x1174) = *(undefined4 *)(param_1 + 0x28);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543998:
    if (lVar7 != 0) goto LAB_0254399c;
LAB_025439c8:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_025439c8;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543998;
    }
LAB_0254399c:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_025439fc;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_025439fc:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x1178) = *(undefined2 *)(param_1 + 0x2c);
  *(byte *)(lVar7 + 0x117a) = param_1[0x2e];
  *(byte *)(lVar7 + 0x117b) = param_1[0x2f];
  *(undefined4 *)(lVar7 + 0x117c) = *(undefined4 *)(param_1 + 0x30);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543a50:
    if (lVar7 != 0) goto LAB_02543a54;
LAB_02543a80:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_02543a80;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543a50;
    }
LAB_02543a54:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_02543ab4;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02543ab4:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x1180) = *(undefined2 *)(param_1 + 0x34);
  *(byte *)(lVar7 + 0x1182) = param_1[0x36];
  *(byte *)(lVar7 + 0x1183) = param_1[0x37];
  *(undefined4 *)(lVar7 + 0x1184) = *(undefined4 *)(param_1 + 0x38);
  lVar7 = *(long *)(lVar3 + 0x178);
  if ((uVar4 & 1) == 0) {
LAB_02543b08:
    if (lVar7 != 0) goto LAB_02543b0c;
LAB_02543b38:
    uVar4 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_02543b38;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x178);
      goto LAB_02543b08;
    }
LAB_02543b0c:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x178) == 0) goto LAB_02543b6c;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long **)(lVar3 + 0x158);
      local_40 = *(undefined8 *)(lVar3 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02543b6c:
  lVar7 = *(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158);
  *(undefined2 *)(lVar7 + 0x1188) = *(undefined2 *)(param_1 + 0x3c);
  *(byte *)(lVar7 + 0x118a) = param_1[0x3e];
  *(byte *)(lVar7 + 0x118b) = param_1[0x3f];
  *(undefined4 *)(lVar7 + 0x118c) = *(undefined4 *)(param_1 + 0x40);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x178) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x178) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  FUN_02648820(param_1);
LAB_02543bc4:
  piVar8 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar8 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *piVar8;
  if (local_14 != 0) {
    FUN_0071c8d0(&local_48,&local_14,PTR_DAT_04bb3238,0);
    plVar5 = local_48;
    if (local_48 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
      if ((uVar4 & 1) == 0) {
        local_40._0_2_ = (ushort)(byte)local_40;
      }
    }
    if (((local_48 != (long *)0x0) && ((byte)local_40 != '\0')) &&
       ((local_40._1_1_ != '\0' && (local_40._2_1_ != '\0')))) {
      FUN_023203ac(local_48,*(undefined4 *)(param_1 + 0x50),0);
      return 1;
    }
  }
  return 0;
}

