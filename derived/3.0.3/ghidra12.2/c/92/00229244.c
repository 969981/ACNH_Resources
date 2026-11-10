
void FUN_00229244(undefined8 param_1,long *param_2,long param_3,int param_4,uint param_5,int param_6
                 ,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  puVar2 = PTR_LAB_04bcd038;
  puVar1 = PTR_LAB_04bcd030;
  if ((((param_3 == 0) || (param_4 == 0)) || (9 < param_5)) ||
     ((param_6 - 0x10U < 0xfffffff8 || (param_7 - 10U < 0xfffffff7)))) {
    local_44 = 0x10c07;
  }
  else if (((int)param_2[2] == 0) && (*param_2 != 0)) {
    param_2[0xe] = (long)param_2;
    param_2[0xc] = (long)puVar1;
    param_2[0xd] = (long)puVar2;
    iVar3 = FUN_00180180(param_2 + 4,param_5,8,param_6,param_7,0,"1.3.1.f-NINTENDO-SDK-v1",0x70);
    if (iVar3 == -4) {
      local_44 = 0x10c01;
    }
    else if (iVar3 == 0) {
      lVar4 = FUN_001819c0(param_2 + 4,0x80);
      param_2[7] = param_3;
      *(int *)(param_2 + 8) = param_4;
      param_2[3] = lVar4 + -0x80;
      local_44 = 0;
    }
    else {
      local_44 = 0xc0b;
    }
  }
  else {
    local_44 = 0x10c08;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

