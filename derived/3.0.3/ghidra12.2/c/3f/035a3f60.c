
undefined4 FUN_035a3f60(float param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_78 [4];
  char local_74 [4];
  
  iVar4 = (int)param_2[2];
  if (iVar4 < 1) {
    uVar1 = 0;
LAB_035a40a8:
    (**(code **)(*(long *)param_2[1] + 0x10))((long *)param_2[1],param_3,uVar1);
    return uVar1;
  }
  if (param_4 < 3) {
    iVar4 = 0;
LAB_035a40f4:
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_4);
    plVar3 = (long *)param_2[1];
    local_74[0] = '\0';
    local_78[0] = '\0';
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,local_74,local_78,0,param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      iVar7 = 0;
      iVar4 = iVar4 + 1;
      iVar5 = 1;
      do {
        if (local_74[0] != '\0') {
          if (local_78[0] != '\0') goto LAB_035a41a4;
          iVar7 = iVar7 + 1;
          if (param_4 + -1 <= iVar7) break;
        }
        local_74[0] = '\0';
        local_78[0] = '\0';
        uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,local_74,local_78,iVar5,param_3,uVar1);
        iVar5 = iVar5 + 1;
        if ((uVar2 & 1) == 0) break;
      } while( true );
    }
    goto LAB_035a40a8;
  }
  iVar5 = 0;
LAB_035a3fbc:
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_4);
  plVar3 = (long *)param_2[1];
  local_74[0] = '\0';
  local_78[0] = '\0';
  uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,local_74,local_78,0,param_3,uVar1);
  if ((uVar2 & 1) != 0) {
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    iVar7 = 1;
    do {
      if (local_74[0] != '\0') {
        if (local_78[0] != '\0') goto LAB_035a4094;
        iVar6 = iVar6 + 1;
        if (~(int)(param_1 * ((float)iVar5 / (float)iVar4) * (float)(param_4 + -2) + 0.5) + param_4
            <= iVar6) break;
      }
      local_74[0] = '\0';
      local_78[0] = '\0';
      uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,local_74,local_78,iVar7,param_3,uVar1);
      iVar7 = iVar7 + 1;
      if ((uVar2 & 1) == 0) break;
    } while( true );
  }
  goto LAB_035a40a8;
LAB_035a41a4:
  if ((int)param_2[2] <= iVar4) goto LAB_035a40a8;
  goto LAB_035a40f4;
LAB_035a4094:
  iVar4 = (int)param_2[2];
  if (iVar4 <= iVar5) goto LAB_035a40a8;
  goto LAB_035a3fbc;
}

