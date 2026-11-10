
void FUN_002ae400(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((int)param_2[5] == 0) {
    local_34 = 0x10c0c;
  }
  else if ((((param_3 == 0) || (param_2[1] == param_3)) ||
           ((uint)*(byte *)(param_2 + 2) == (param_4 & 0xff))) ||
          (param_2[(ulong)(byte)param_4 + 0xa7] != 0)) {
    local_34 = 0x10c07;
  }
  else {
    param_2[(ulong)(byte)param_4 + 0xa7] = param_3;
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x40))(param_2,param_4);
    (**(code **)*puVar6)();
    uVar8 = param_4 >> 5 & 7;
    *(uint *)((long)param_2 + (ulong)uVar8 * 4 + 0x670) =
         *(uint *)((long)param_2 + (ulong)uVar8 * 4 + 0x670) | 1 << (ulong)(param_4 & 0x1f);
    uVar5 = *(ushort *)((long)param_2 + 0x32);
    if (uVar5 != 0) {
      uVar3 = *(uint *)(param_2 + 5);
      iVar4 = *(int *)((long)param_2 + 0x2c);
      lVar7 = param_2[4];
      uVar8 = 0;
      if (uVar5 != 1) {
        do {
          uVar1 = iVar4 + uVar8;
          uVar8 = uVar8 + 2;
          uVar2 = 0;
          if (uVar3 <= uVar1) {
            uVar2 = uVar3;
          }
          *(undefined8 *)(lVar7 + (ulong)(uVar1 - uVar2) * 0x5d0 + 8) = 0;
          uVar2 = 0;
          if (uVar3 <= uVar1 + 1) {
            uVar2 = uVar3;
          }
          *(undefined8 *)(lVar7 + (ulong)((uVar1 + 1) - uVar2) * 0x5d0 + 8) = 0;
        } while ((uVar5 & 0xfffe) != uVar8);
      }
      if ((uVar5 & 1) != 0) {
        uVar8 = iVar4 + uVar8;
        uVar1 = 0;
        if (uVar3 <= uVar8) {
          uVar1 = uVar3;
        }
        *(undefined8 *)(lVar7 + (ulong)(uVar8 - uVar1) * 0x5d0 + 8) = 0;
      }
    }
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

