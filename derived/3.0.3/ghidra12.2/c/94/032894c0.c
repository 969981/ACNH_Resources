
undefined8 FUN_032894c0(long param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_28;
  
  if (param_2 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x578);
    if (((((uVar1 >> 2 & 1) == 0) || ((uVar1 & 1) == 0)) ||
        (((uVar1 >> 2 & 1) != 0 && ((uVar1 >> 3 & 1) != 0)))) &&
       ((((uVar1 >> 8 & 1) != 0 || ((uVar1 >> 1 & 1) == 0)) || ((uVar1 >> 9 & 1) != 0)))) {
      local_60 = local_60 & 0xffffffff00000000;
      FUN_03289968(param_1,(uVar1 & 1) == 0);
      FUN_0328a0b0(param_1,4,0,0);
      *(int *)(param_1 + 0x580) = param_2;
      if (*(char *)(param_1 + 0x57e) == '\0') {
        local_60 = 0;
        local_58 = 0;
        local_28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        FUN_032d3460(&local_28,&local_60);
        lVar2 = DAT_05734ea0;
        uVar3 = (undefined4)local_60;
        uVar4 = local_60._4_4_;
        local_60 = (ulong)local_60._4_4_ << 0x20;
        puVar6 = *(undefined4 **)(DAT_05734ea0 + 8);
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        *(undefined1 *)(*(long *)(lVar2 + 8) + 8) = 1;
        plVar5 = *(long **)(param_1 + 0x4e8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,param_1,*(undefined4 *)(param_1 + 0x580));
        }
      }
      else {
        *(char *)(param_1 + 0x57d) = *(char *)(param_1 + 0x57e);
        FUN_006d8678(&local_60,"ButtonEx:%p",param_1);
        uVar7 = *(undefined8 *)PTR_DAT_04bc8f40;
        (**(code **)(local_60 + 0x18))(&local_60);
        FUN_032ad3e0(uVar7,CONCAT44(uStack_54,local_58));
      }
    }
  }
  return 0;
}

