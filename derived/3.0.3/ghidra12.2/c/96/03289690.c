
undefined8 FUN_03289690(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_28;
  
  if (param_2 != 0) {
    local_60 = CONCAT44(local_60._4_4_,(int)*(char *)(param_1 + 0x57c));
    if (*(char *)(param_1 + 0x57c) == 3) {
      FUN_0328a0b0(param_1,9,0,0);
      *(int *)(param_1 + 0x580) = param_2;
      if (*(char *)(param_1 + 0x57e) == '\0') {
        local_60 = 0;
        local_58 = 0;
        local_28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        FUN_032d3460(&local_28,&local_60);
        lVar1 = DAT_05734ea0;
        uVar2 = (undefined4)local_60;
        uVar3 = local_60._4_4_;
        local_60 = (ulong)local_60._4_4_ << 0x20;
        puVar5 = *(undefined4 **)(DAT_05734ea0 + 8);
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        *(undefined1 *)(*(long *)(lVar1 + 8) + 8) = 1;
        plVar4 = *(long **)(param_1 + 0x4e8);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,param_1,*(undefined4 *)(param_1 + 0x580));
        }
      }
      else {
        *(char *)(param_1 + 0x57d) = *(char *)(param_1 + 0x57e);
        FUN_006d8678(&local_60,"ButtonEx:%p",param_1);
        uVar6 = *(undefined8 *)PTR_DAT_04bc8f40;
        (**(code **)(local_60 + 0x18))(&local_60);
        FUN_032ad3e0(uVar6,CONCAT44(uStack_54,local_58));
      }
    }
  }
  return 0;
}

