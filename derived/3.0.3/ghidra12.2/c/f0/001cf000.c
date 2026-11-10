
void FUN_001cf000(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long local_d8 [18];
  undefined1 local_48;
  
  if ((int)param_2[0x14] != 0) {
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    *(undefined4 *)(param_2 + 0x12) = 0;
  }
  else {
    if ((int)param_2[0x12] == 0) {
      *(undefined4 *)(param_2 + 0x12) = 0;
    }
    else {
      (**(code **)(*plVar4 + 0xf8))(plVar4,(int)param_2[0x12],param_2);
      plVar4 = (long *)param_2[1];
      *(undefined4 *)(param_2 + 0x12) = 0;
      if (plVar4 == (long *)0x0) goto LAB_001cf090;
    }
    if (param_2[0x13] != 0) {
      (**(code **)(*plVar4 + 0xe8))(plVar4,param_2[0x13],param_2);
    }
  }
LAB_001cf090:
  param_2[0x13] = 0;
  if ((char)param_2[0xf] == '\0') {
    FUN_001b8590(param_2 + 2);
  }
  lVar6 = param_2[3];
  plVar4 = param_2 + 2;
  uVar2 = FUN_001b8fa0(plVar4,&DAT_0410a683,0);
  FUN_001e1500(local_d8);
  FUN_001e15a8(local_d8,lVar6);
  plVar8 = (long *)(param_1 + 0xa0);
  plVar9 = (long *)*plVar8;
  local_48 = uVar2;
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar8;
    do {
      uVar3 = FUN_001dc410(plVar9 + 4,local_d8);
      plVar1 = plVar9 + 1;
      if ((uVar3 & 1) == 0) {
        plVar7 = plVar9;
        plVar1 = plVar9;
      }
      plVar9 = (long *)*plVar1;
    } while (plVar9 != (long *)0x0);
    if ((plVar7 != plVar8) && (uVar3 = FUN_001dc410(local_d8,plVar7 + 4), (uVar3 & 1) == 0)) {
      lVar6 = plVar7[0x17];
      FUN_001e1868(local_d8);
      if (lVar6 == 0) {
        return;
      }
      if ((char)param_2[0xf] == '\0') {
        FUN_001b8590(plVar4);
      }
      lVar6 = param_2[3];
      uVar5 = FUN_001b8fa0(plVar4,&DAT_0410a683,0);
      FUN_001cf1f0(param_1 + 0x98,lVar6,uVar5);
      FUN_00187810(local_d8);
      param_2[0x95] = local_d8[0] + 5000;
      plVar4 = (long *)FUN_00187df4(0x18);
      *plVar4 = 0;
      plVar4[2] = (long)param_2;
      plVar8 = (long *)(param_1 + 0xb0);
      lVar6 = *plVar8;
      *plVar4 = lVar6;
      plVar4[1] = (long)plVar8;
      *(long **)(lVar6 + 8) = plVar4;
      *plVar8 = (long)plVar4;
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
      return;
    }
  }
  FUN_001e1868(local_d8);
  return;
}

