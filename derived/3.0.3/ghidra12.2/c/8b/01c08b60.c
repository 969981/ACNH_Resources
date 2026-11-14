
void FUN_01c08b60(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined **local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined4 local_48 [2];
  
  local_48[0] = 0x72;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x73;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x74;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x75;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x76;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x77;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x79;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7a;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7b;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7c;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7d;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7e;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x7f;
  local_80 = &PTR_FUN_049ff4e8;
  local_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  puVar2 = PTR_DAT_04bb43c0;
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_80 = &PTR_FUN_04a3f7f0;
  uVar7 = 0;
  local_78 = (undefined4 *)(PTR_DAT_04bb8610 + 0x10);
  do {
    (**(code **)(*param_1 + 0x10))(local_48,param_1,uVar7);
    lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar4 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(local_48);
      if (*(long *)puVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = (*(code *)*local_80)(&local_80,local_48), (uVar5 & 1) != 0)) goto LAB_01c08d30;
      }
      lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
    }
LAB_01c08d30:
    uVar7 = uVar7 + 1;
    if (uVar7 == 15000) {
      return;
    }
  } while( true );
}

