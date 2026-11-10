
void FUN_00299c88(undefined8 param_1,long param_2,int *param_3)

{
  ulong uVar1;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar1 = FUN_002913b0();
  if (((uVar1 & 1) == 0) && (*(int *)(param_2 + 0xd0) == 0)) {
    if (((DAT_04be24da == '\0') || (0xffff8eb6 < *param_3 - 0x7531U)) &&
       (0xfffff446 < param_3[2] - 0xfa1U)) {
      (**(code **)(**(long **)(param_2 + 8) + 0x10))(&local_34,*(long **)(param_2 + 8),param_3);
      if (local_34 == 0) {
        (**(code **)(**(long **)(param_2 + 8) + 0xa8))();
        *(undefined4 *)(param_2 + 0x158) = 0;
        *(undefined4 *)(param_2 + 0x206) = 0;
        *(undefined4 *)(param_2 + 0xd0) = 1;
        FUN_002a394c(&local_44,*(undefined8 *)(param_2 + 0x10));
        FUN_00229780(&local_34,&local_44);
        if (local_34 == 0) {
          FUN_002211bc(*(undefined8 *)(param_2 + 0x10),0);
          *(undefined4 *)(param_2 + 0xd8) = 0;
          local_44 = 0;
          local_24 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
          FUN_00229780(param_2 + 0xdc,&local_44);
          FUN_00223674(DAT_04c5fbb0);
          FUN_00299bd0(param_2 + 0x198);
          if (*(long *)(param_2 + 0x268) != 0) {
            FUN_002a067c(&local_44);
            FUN_00229780(&local_34,&local_44);
            if (local_34 != 0) goto LAB_00299cd4;
            FUN_002211bc(*(undefined8 *)(param_2 + 0x268),0);
          }
          FUN_00299c30(param_2 + 0x228);
          FUN_0026c254(*(undefined8 *)PTR_DAT_04bcd350,1);
          FUN_002b9888(&local_44,*(undefined8 *)PTR_DAT_04bc1510,0);
          FUN_00229780(&local_34,&local_44);
          if (local_34 == 0) {
            local_44 = 0;
            local_24 = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
            FUN_002296c4(param_1,&local_44);
            return;
          }
        }
      }
      goto LAB_00299cd4;
    }
    local_34 = 0x10c07;
  }
  else {
    local_34 = 0x10c08;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
LAB_00299cd4:
  FUN_002296c4(param_1,&local_34);
  return;
}

