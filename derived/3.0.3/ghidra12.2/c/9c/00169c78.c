
undefined8 FUN_00169c78(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  uVar3 = param_1[0x18];
  if (uVar3 < 0x3d) {
    lVar5 = uVar3 * 0x80 + 0x4836828;
    uVar3 = (ulong)*(uint *)(&DAT_048368a0 + uVar3 * 0x80);
  }
  else {
    plVar4 = *(long **)(*param_1 + ((uVar3 + param_1[2]) - 0x3d & param_1[1]) * 8);
    lVar5 = *plVar4;
    uVar3 = plVar4[2];
  }
  local_38._5_3_ = (undefined3)(uVar3 >> 0x28);
  local_38._0_5_ = CONCAT14(*(char *)((long)param_1 + 0xea) != '\0',(int)uVar3);
  local_48 = lVar5;
  FUN_0016b17c(lVar5);
  lVar6 = param_1[0x14];
  local_40 = lVar6;
  if ((*(char *)((long)param_1 + 0xe9) == '\0') ||
     (iVar1 = FUN_0016ad18(param_1,&local_48,0,0), iVar1 == 0)) {
    uVar2 = 0;
    *param_2 = local_48;
    param_2[1] = local_40;
    param_2[2] = local_38;
    param_1[0x15] = lVar5;
    param_1[0x16] = lVar6;
    param_1[0x14] = 0;
  }
  else {
    FUN_0016b194(lVar5);
    uVar2 = 0xfffffc7b;
  }
  return uVar2;
}

