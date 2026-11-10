
void FUN_002ae560(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_34;
  
  if ((int)param_2[5] == 0) {
    local_50._0_4_ = 0x10c0c;
  }
  else if ((((param_3 == 0) || (param_2[1] == param_3)) ||
           (uVar1 = param_4 & 0xff, *(byte *)(param_2 + 2) == uVar1)) || (0x1f < uVar1)) {
    local_50._0_4_ = 0x10c07;
  }
  else {
    if (param_2[(ulong)(byte)param_4 + 0xa7] != 0) {
      (**(code **)(*param_2 + 0x40))(param_2,param_4);
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x40))(param_2,param_4);
      (**(code **)*puVar3)();
      uVar2 = *(ushort *)((long)param_2 + 0x32);
      if (uVar2 == 0) {
        uVar8 = ~(1 << (ulong)(param_4 & 0x1f));
        uVar4 = (ulong)(uVar1 >> 5);
      }
      else {
        lVar6 = param_2[4];
        uVar5 = 0;
        uVar8 = ~(1 << (ulong)(param_4 & 0x1f));
        uVar4 = (ulong)(uVar1 >> 5);
        do {
          uVar1 = 0;
          if (*(uint *)(param_2 + 5) <= uVar5 + *(int *)((long)param_2 + 0x2c)) {
            uVar1 = *(uint *)(param_2 + 5);
          }
          uVar1 = uVar5 + (*(int *)((long)param_2 + 0x2c) - uVar1);
          uVar5 = uVar5 + 1;
          lVar7 = lVar6 + uVar4 * 4 + (ulong)uVar1 * 0x5d0;
          *(uint *)(lVar7 + 0x2c) = *(uint *)(lVar7 + 0x2c) & uVar8;
        } while (uVar2 != uVar5);
      }
      *(uint *)((long)param_2 + uVar4 * 4 + 0x670) =
           *(uint *)((long)param_2 + uVar4 * 4 + 0x670) & uVar8;
      *(uint *)((long)param_2 + uVar4 * 4 + 0x674) =
           *(uint *)((long)param_2 + uVar4 * 4 + 0x674) & uVar8;
      FUN_002ae9c0(param_2);
      *(uint *)((long)param_2 + uVar4 * 4 + 0x670) =
           *(uint *)((long)param_2 + uVar4 * 4 + 0x670) & uVar8;
      *(uint *)((long)param_2 + uVar4 * 4 + 0x674) =
           *(uint *)((long)param_2 + uVar4 * 4 + 0x674) & uVar8;
      uVar4 = FUN_002aec18(param_2);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*param_2 + 0x40))(param_2,0);
        (**(code **)(*param_2 + 0x40))(param_2,1);
        (**(code **)(*param_2 + 0x40))(param_2,2);
        (**(code **)(*param_2 + 0x40))(param_2,3);
        (**(code **)(*param_2 + 0x40))(param_2,4);
        (**(code **)(*param_2 + 0x40))(param_2,5);
        (**(code **)(*param_2 + 0x40))(param_2,6);
        (**(code **)(*param_2 + 0x40))(param_2,7);
        (**(code **)(*param_2 + 0x40))(param_2,8);
        (**(code **)(*param_2 + 0x40))(param_2,9);
        (**(code **)(*param_2 + 0x40))(param_2,10);
        (**(code **)(*param_2 + 0x40))(param_2,0xb);
        (**(code **)(*param_2 + 0x40))(param_2,0xc);
        (**(code **)(*param_2 + 0x40))(param_2,0xd);
        (**(code **)(*param_2 + 0x40))(param_2,0xe);
        (**(code **)(*param_2 + 0x40))(param_2,0xf);
        (**(code **)(*param_2 + 0x40))(param_2,0x10);
        (**(code **)(*param_2 + 0x40))(param_2,0x11);
        (**(code **)(*param_2 + 0x40))(param_2,0x12);
        (**(code **)(*param_2 + 0x40))(param_2,0x13);
        (**(code **)(*param_2 + 0x40))(param_2,0x14);
        (**(code **)(*param_2 + 0x40))(param_2,0x15);
        (**(code **)(*param_2 + 0x40))(param_2,0x16);
        (**(code **)(*param_2 + 0x40))(param_2,0x17);
        (**(code **)(*param_2 + 0x40))(param_2,0x18);
        (**(code **)(*param_2 + 0x40))(param_2,0x19);
        (**(code **)(*param_2 + 0x40))(param_2,0x1a);
        (**(code **)(*param_2 + 0x40))(param_2,0x1b);
        (**(code **)(*param_2 + 0x40))(param_2,0x1c);
        (**(code **)(*param_2 + 0x40))(param_2,0x1d);
        (**(code **)(*param_2 + 0x40))(param_2,0x1e);
        (**(code **)(*param_2 + 0x40))(param_2,0x1f);
      }
      param_2[(ulong)(byte)param_4 + 0xa7] = 0;
      local_50 = 0x400000000;
      local_48 = 0;
      (**(code **)(*param_2 + 0x30))(param_2,&local_50);
      local_50 = local_50 & 0xffffffff00000000;
      goto LAB_002ae5d4;
    }
    local_50._0_4_ = 0;
  }
LAB_002ae5d4:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

