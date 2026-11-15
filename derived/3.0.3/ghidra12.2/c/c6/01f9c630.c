
void FUN_01f9c630(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_5c;
  undefined4 local_58 [2];
  
  lVar4 = param_1[3];
  local_5c = *(undefined4 *)(lVar4 + 0x294);
  local_58[0] = 0;
  *(undefined4 *)(lVar4 + 0x294) = 0;
  lVar3 = param_1[3];
  uVar2 = FUN_02085a50(lVar3,1,0);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(lVar3 + 0x801) = 1;
    lVar1 = lVar3 + 0x10 + (ulong)*(uint *)(lVar3 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar3 + 0x294)) {
      lVar1 = lVar3 + 0x10;
    }
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  *(undefined4 *)(lVar4 + 0x294) = local_5c;
  param_1[0x1613] = 0;
  *(undefined4 *)((long)param_1 + 0x1203c) = 0x708;
  *(undefined4 *)(param_1 + 0x2477) = 2;
  if ((param_3 & 1) != 0) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  if ((param_2 & 1) == 0) {
    local_5c = 0;
    local_58[0] = 0;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,local_58,&local_5c,PTR_DAT_04bc1600,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f9c73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1);
  return;
}

