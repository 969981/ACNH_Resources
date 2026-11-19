
void FUN_0383f168(char *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_50;
  undefined8 uStack_48;
  
  if ((int)param_3 < 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar6 + 0x18) <= (int)param_3) {
    return;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  uVar1 = param_3;
  if (*(uint *)(lVar6 + 0x38) <= param_3) {
    uVar1 = 0;
  }
  plVar4 = (long *)(*(long *)(lVar6 + 0x40) + (ulong)uVar1 * 0x58);
  uStack_48 = param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
  plVar4 = *(long **)(param_1 + 0x18);
  if (param_3 < *(uint *)(plVar4 + 3)) {
    plVar7 = *(long **)(plVar4[4] + (ulong)param_3 * 8);
  }
  else {
    plVar7 = (long *)0x0;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,plVar7,param_2,0xffffffff);
  uVar3 = (**(code **)(*plVar7 + 0x38))(plVar7);
  uVar1 = *(uint *)((long)plVar7 + 0xc);
  lVar6 = *(long *)(param_1 + 8);
  if (((lVar6 != 0) && (*param_1 != '\0')) &&
     (lVar5 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))(),
     *(char *)(lVar5 + 0x78) != '\0')) {
    if (*(char *)(lVar5 + 0x79) == '\0') {
      plVar4 = (long *)(lVar6 + 0x88) + *(uint *)(lVar6 + 0x80);
      if (1 < *(uint *)(lVar6 + 0x80)) {
        plVar4 = (long *)(lVar6 + 0x88);
      }
      lVar5 = *plVar4;
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
        uVar2 = uVar1;
        if (*(uint *)(lVar5 + 0x30) <= uVar1) {
          uVar2 = 0;
        }
        if (*(long *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar2 * 8) != 0) goto LAB_0383f25c;
      }
    }
    else {
LAB_0383f25c:
      FUN_03bf2214(lVar6 + 0x80,param_2,uVar3,uVar1);
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (((lVar6 == 0) || (param_1[1] == '\0')) ||
     (lVar5 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))(),
     *(char *)(lVar5 + 0x78) == '\0')) goto LAB_0383f2b8;
  if (*(char *)(lVar5 + 0x79) == '\0') {
    plVar4 = (long *)(lVar6 + 0x88) + *(uint *)(lVar6 + 0x80);
    if (1 < *(uint *)(lVar6 + 0x80)) {
      plVar4 = (long *)(lVar6 + 0x88);
    }
    lVar5 = *plVar4;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x38) == 0)) goto LAB_0383f2b8;
    uVar2 = uVar1;
    if (*(uint *)(lVar5 + 0x30) <= uVar1) {
      uVar2 = 0;
    }
    if (*(long *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar2 * 8) == 0) goto LAB_0383f2b8;
  }
  FUN_03bf2214(lVar6 + 0x80,param_2,uVar3,uVar1);
LAB_0383f2b8:
  (**(code **)(**(long **)(param_1 + 0x18) + 0x100))(*(long **)(param_1 + 0x18),plVar7);
  return;
}

