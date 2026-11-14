
undefined8 FUN_018b9644(undefined8 param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_50;
  float local_48;
  
  local_48 = 0.0;
  local_50 = 0;
  lVar1 = FUN_018b9734(*(undefined8 *)PTR_DAT_04bb47e0,3,*param_2);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x158) + 0xf0))(lVar1 + 0x158);
  fVar6 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x188) + 0xf0))(lVar1 + 0x188);
  fVar7 = *pfVar2;
  uVar3 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_01a1c7b0(&local_50,*param_2,0);
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
      fVar5 = (float)FUN_015cb8d4(&local_50,1);
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(float *)(param_3 + 8) = (float)local_50 + 0.0;
      *(float *)(param_3 + 0xc) = fVar6 + fVar5;
      *(float *)(param_3 + 0x10) = fVar7 + local_48;
    }
  }
  return uVar4;
}

