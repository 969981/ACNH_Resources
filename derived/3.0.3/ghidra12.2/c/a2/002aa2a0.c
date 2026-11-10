
long FUN_002aa2a0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined8 local_4c;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bc1510;
  plVar3 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  if ((*(char *)(param_4 + 3) == '\0') && (uVar4 = FUN_00227404(param_2), (uVar4 & 1) != 0)) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if ((int)plVar3[9] == 0) {
      local_44 = 0;
      local_4c = 0x400000000;
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_4c);
      return 0;
    }
  }
  lVar5 = FUN_002a9194(*(undefined8 *)(param_1 + 0x28));
  if (lVar5 == 0) {
    local_4c = 0x4000000000;
    local_44 = 0;
    FUN_002a9300(*(undefined8 *)(param_1 + 0x28),&local_4c);
    return 0;
  }
  FUN_0022b7ac(lVar5);
  *(undefined1 *)(lVar5 + 0x658) = 1;
  FUN_00227418(lVar5 + 0x600,param_2);
  *(undefined2 *)(lVar5 + 0x629) = *(undefined2 *)(param_4 + 1);
  cVar7 = *(char *)(param_4 + 3);
  *(char *)(lVar5 + 0x62b) = cVar7;
  if (plVar3 != (long *)0x0) {
    FUN_0022b8a8(lVar5,(char)plVar3[7]);
    cVar7 = *(char *)(param_4 + 3);
  }
  if ((cVar7 == '\0') && (uVar4 = FUN_00227404(param_2), (uVar4 & 1) != 0)) {
    if ((plVar3 == (long *)0x0) || ((int)plVar3[9] == 0)) {
      return 0;
    }
    *(int *)(lVar5 + 0x10) = (int)plVar3[9];
LAB_002aa388:
    uVar4 = FUN_00227404(param_2);
    if (((uVar4 & 1) != 0) && (1 < (byte)((char)plVar3[7] + 3U))) {
      uVar2 = FUN_002b3aa8(plVar3 + 0xb);
      *(undefined2 *)(lVar5 + 0x18) = uVar2;
      if (*(char *)(param_4 + 3) == '\0') {
        param_1 = param_1 + ((ulong)(*(byte *)(plVar3 + 7) >> 3) & 0x1c);
        *(uint *)(param_1 + 0x944) =
             1 << (ulong)(*(byte *)(plVar3 + 7) & 0x1f) | *(uint *)(param_1 + 0x944);
      }
      goto LAB_002aa3ac;
    }
  }
  else {
    *(undefined4 *)(lVar5 + 0x10) = 0;
    if (plVar3 != (long *)0x0) goto LAB_002aa388;
  }
  *(undefined2 *)(lVar5 + 0x18) = 0;
LAB_002aa3ac:
  if (param_3 == 0) {
    lVar6 = FUN_002ba790(*(undefined8 *)puVar1);
    if (*(long *)(lVar6 + 0x98) == 0) {
      *(undefined4 *)(lVar5 + 0x14) = 0;
    }
    else {
      lVar6 = FUN_002ba790(*(undefined8 *)puVar1);
      *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(*(long *)(lVar6 + 0x98) + 0x48);
    }
  }
  else {
    *(int *)(lVar5 + 0x14) = param_3;
  }
  return lVar5;
}

