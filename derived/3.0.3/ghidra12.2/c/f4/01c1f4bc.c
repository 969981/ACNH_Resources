
uint FUN_01c1f4bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar1 < -0x83ceb3d) {
    if (iVar1 < -0x15fdefdb) {
      if (iVar1 == -0x477aafe0) {
        lVar3 = 5;
        goto LAB_01c1f604;
      }
      if (iVar1 == -0x2099c902) {
        lVar3 = 9;
        goto LAB_01c1f604;
      }
    }
    else {
      if (iVar1 == -0x15fdefdb) {
        lVar3 = 7;
        goto LAB_01c1f604;
      }
      if (iVar1 == -0xe632453) {
        lVar3 = 3;
        goto LAB_01c1f604;
      }
    }
  }
  else if (iVar1 < 0x3b3bf38a) {
    if (iVar1 == -0x83ceb3d) {
      lVar3 = 4;
      goto LAB_01c1f604;
    }
    if (iVar1 == -0x169521c) {
      lVar3 = 1;
      goto LAB_01c1f604;
    }
  }
  else {
    if (iVar1 == 0x3b3bf38a) {
      lVar3 = 6;
      goto LAB_01c1f604;
    }
    if (iVar1 == 0x3fce6459) {
      lVar3 = 2;
      goto LAB_01c1f604;
    }
    if (iVar1 == 0x6148bcad) {
      lVar3 = 0;
      goto LAB_01c1f604;
    }
  }
  lVar3 = (ulong)(iVar1 == 0x17f77b87) << 3;
LAB_01c1f604:
  local_35 = 0;
  local_58 = 0x20;
  local_60 = local_54;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb2028 + 0x10;
  uVar2 = FUN_01c1da00(param_1,&local_78,param_4,lVar3);
  if ((uVar2 & 1) != 0) {
    *param_2 = local_78;
    *(undefined4 *)(param_2 + 1) = local_70;
    (**(code **)(local_68 + 0x18))(&local_68);
    FUN_038d1270(param_3,&DAT_0409e973,local_60);
  }
  return uVar2 & 1;
}

