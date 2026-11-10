
undefined8
FUN_0031f2e4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,int param_5,
            uint param_6,undefined8 param_7,uint param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  if ((param_6 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x34) == param_5) {
    return 0;
  }
  FUN_00348260(param_2,*(undefined8 *)(param_4 + 8),0x1ff);
  lVar5 = *(long *)(param_3 + 0x768);
  uStack_68 = *(undefined8 *)(lVar5 + 400);
  local_70 = (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x30) * 8 + 0x750) -
             *(long *)(lVar5 + 0x1a0)) + *(long *)(lVar5 + 0x188);
  if (*(char *)(param_4 + 0x40) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x40),5,&local_70,0xe0);
  }
  lVar4 = *(long *)(param_3 + 0x240);
  lVar5 = *(long *)(lVar4 + 0x20);
  uStack_68 = *(undefined8 *)(lVar5 + 400);
  local_70 = *(long *)(lVar5 + 0x188) + *(long *)(lVar4 + 0x28);
  if (*(char *)(param_4 + 0x3f) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x3f),5,&local_70,0x790);
    lVar4 = *(long *)(param_3 + 0x240);
    lVar5 = *(long *)(lVar4 + 0x20);
  }
  uStack_68 = *(undefined8 *)(lVar5 + 400);
  local_70 = *(long *)(lVar5 + 0x188) + *(long *)(lVar4 + 0x40);
  if (*(char *)(param_4 + 0x41) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x41),5,&local_70,0x160);
  }
  if (param_9 != (undefined4 *)0x0) {
    if ((*(long *)(param_9 + 6) != -1) && (*(char *)(param_4 + 0x13) != -1)) {
      FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x13),5,param_9 + 6,param_1[2] + 0x28);
    }
    if ((*(long *)(param_9 + 8) != -1) && (*(char *)(param_4 + 0x14) != -1)) {
      FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x14),5,param_9 + 8,param_1[2] + 0x28);
    }
  }
  cVar2 = *(char *)(param_4 + 0x15);
  lVar5 = FUN_00320d70();
  if (cVar2 != -1) {
    FUN_00348c64(param_2,(int)cVar2,5,lVar5 + 0x260,param_1[1] + 0x28);
  }
  if (param_9 != (undefined4 *)0x0) {
    uStack_88 = *(undefined8 *)(param_9 + 6);
    local_80 = *(undefined8 *)(param_9 + 8);
    uStack_78 = *(undefined8 *)(param_9 + 10);
    local_98 = CONCAT44(local_98._4_4_,*param_9);
    local_90 = *(undefined8 *)(param_9 + 2);
    uVar3 = FUN_0033ef18(*param_1,param_2,param_3,param_7,&local_98);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  cVar2 = *(char *)(param_4 + 0x49);
  uVar1 = *(undefined4 *)(param_3 + 0x9a0);
  if (cVar2 != -1) {
    uVar3 = FUN_0031ed2c(param_3 + 0x880);
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
      goto LAB_0031f878;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x8c0);
    local_98 = 0;
    local_90 = 0;
    FUN_0031edb4(param_3 + 0x880,&local_98,uVar1);
    FUN_00348d48(param_2,(int)cVar2,5,&local_98,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4a);
  if (cVar2 != -1) {
    uVar3 = FUN_0031ed2c(param_3 + 0x8c8);
    if ((uVar3 & 1) == 0) {
      uVar7 = 1;
      goto LAB_0031f878;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x908);
    local_98 = 0;
    local_90 = 0;
    FUN_0031edb4(param_3 + 0x8c8,&local_98,uVar1);
    FUN_00348d48(param_2,(int)cVar2,5,&local_98,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4b);
  if (cVar2 != -1) {
    uVar3 = FUN_0031ed2c(param_3 + 0x910);
    if ((uVar3 & 1) == 0) {
      uVar7 = 2;
      goto LAB_0031f878;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x950);
    local_98 = 0;
    local_90 = 0;
    FUN_0031edb4(param_3 + 0x910,&local_98,uVar1);
    FUN_00348d48(param_2,(int)cVar2,5,&local_98,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4c);
  if (cVar2 != -1) {
    uVar3 = FUN_0031ed2c(param_3 + 0x958);
    if ((uVar3 & 1) == 0) {
      uVar7 = 3;
LAB_0031f878:
      FUN_0032c410("Custom attribute %d is not initialized !!!",uVar7);
      return 0;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x998);
    local_98 = 0;
    local_90 = 0;
    FUN_0031edb4(param_3 + 0x958,&local_98,uVar1);
    FUN_00348d48(param_2,(int)cVar2,5,&local_98,uVar7);
  }
  lVar5 = *(long *)(param_3 + 0x780);
  lVar4 = (long)*(int *)(param_3 + 0x28) << 4;
  uStack_68 = *(undefined8 *)(lVar5 + 0x1e0);
  local_70 = (**(long **)(param_3 + 0xc0) - *(long *)(lVar5 + 0x170)) + *(long *)(lVar5 + 0x1d8);
  FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x4d),5,&local_70,lVar4);
  lVar5 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar5 + 0x1e0);
  local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 8) - *(long *)(lVar5 + 0x170)) +
             *(long *)(lVar5 + 0x1d8);
  FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x4e),5,&local_70,lVar4);
  lVar5 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar5 + 0x1e0);
  local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x10) - *(long *)(lVar5 + 0x170)) +
             *(long *)(lVar5 + 0x1d8);
  FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x4f),5,&local_70,lVar4);
  if (*(char *)(param_4 + 0x50) != -1) {
    lVar5 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar5 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x18) - *(long *)(lVar5 + 0x170)) +
               *(long *)(lVar5 + 0x1d8);
    FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x50),5,&local_70,lVar4);
  }
  if (*(char *)(param_4 + 0x51) != -1) {
    lVar5 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar5 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x20) - *(long *)(lVar5 + 0x170)) +
               *(long *)(lVar5 + 0x1d8);
    FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x51),5,&local_70,lVar4);
  }
  if (*(char *)(param_4 + 0x52) != -1) {
    lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x40);
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar6 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar6 + 0x1e0);
    local_70 = (lVar5 - *(long *)(lVar6 + 0x170)) + *(long *)(lVar6 + 0x1d8);
    FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x52),5,&local_70,lVar4);
  }
  if (*(char *)(param_4 + 0x53) != -1) {
    lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x48);
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar6 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar6 + 0x1e0);
    local_70 = (lVar5 - *(long *)(lVar6 + 0x170)) + *(long *)(lVar6 + 0x1d8);
    FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x53),5,&local_70,lVar4);
  }
  if (*(char *)(param_4 + 0x54) != -1) {
    lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x50);
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar6 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar6 + 0x1e0);
    local_70 = (lVar5 - *(long *)(lVar6 + 0x170)) + *(long *)(lVar6 + 0x1d8);
    FUN_00348d48(param_2,(long)*(char *)(param_4 + 0x54),5,&local_70,lVar4);
  }
  FUN_00348a34(param_2,0x40);
  FUN_00347da8(param_2,(int)((float)*(int *)(param_3 + 0x28) * 0.03125),1,1);
  if ((param_8 & 1) != 0) {
    FUN_00348a0c(param_2,0x40);
  }
  *(int *)(param_3 + 0x34) = param_5;
  *(undefined1 *)(param_3 + 10) = 1;
  return 1;
}

