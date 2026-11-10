
void FUN_0030ad94(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (param_3 < 3) {
    iVar2 = FUN_00227d94(param_4);
    if (((iVar2 == 1) && (uVar3 = FUN_00227cb0(param_4), uVar3 < 9)) &&
       (iVar2 = FUN_00227cb0(param_4), iVar2 != 0)) {
      lVar1 = param_2 + (ulong)param_3 * 0x40;
      (**(code **)(*(long *)(lVar1 + 0xa40) + 0x10))(&local_50,lVar1 + 0xa40,param_4);
      uVar4 = *param_5;
      lVar1 = param_2 + (ulong)param_3 * 0x10;
      local_50 = 0;
      *(undefined4 *)(lVar1 + 0xb08) = *(undefined4 *)(param_5 + 1);
      *(undefined8 *)(lVar1 + 0xb00) = uVar4;
      *(uint *)(param_2 + 0xd30) = *(uint *)(param_2 + 0xd30) | 0x2000000 << (ulong)(param_3 & 0x1f)
      ;
      goto LAB_0030ae5c;
    }
  }
  local_50 = 0x10c07;
LAB_0030ae5c:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

