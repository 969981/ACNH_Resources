
void FUN_0340da70(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined *local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bc4f00;
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  local_40 = PTR_DAT_04bc4f00 + 0x10;
  local_38 = 2;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  uVar2 = (**(code **)(plVar5[3] + 0x40))(plVar5[1]);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_0340d880((long)param_1 + 0xc);
  fVar6 = 1.0;
  if (*(char *)((long)param_1 + 0xac) != '\0') {
    if (*(int *)(param_1 + 0x20) == *(int *)((long)param_1 + 0x5c)) {
      piVar3 = (int *)(param_1 + 0x21);
      piVar4 = (int *)((long)param_1 + 100);
    }
    else {
      fVar6 = 1.0;
      if (*(int *)(param_1 + 0x17) != *(int *)((long)param_1 + 0x14)) goto LAB_0340db34;
      piVar3 = (int *)(param_1 + 0x18);
      piVar4 = (int *)((long)param_1 + 0x1c);
    }
    fVar6 = (float)(*piVar3 - *piVar4);
  }
LAB_0340db34:
  plVar5 = (long *)*param_1;
  local_38 = 9;
  fVar7 = 1.0;
  if (1.0 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar7 = *(float *)(param_1 + 1) + fVar7;
  local_40 = puVar1 + 0x10;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  fVar6 = (float)(**(code **)(plVar5[3] + 0xb0))(plVar5[1]);
  plVar5 = (long *)*param_1;
  if (fVar6 <= fVar7) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x1c0))(plVar5[1]);
  }
  else {
    local_38 = 7;
    local_40 = puVar1 + 0x10;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x88))(fVar7,plVar5[1]);
    *(float *)(param_1 + 1) = fVar7;
  }
  return;
}

