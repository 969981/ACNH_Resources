
void FUN_0021ded0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (*(int *)((long)param_2 + 0x6c) == 2) {
    if ((*(ushort *)(param_2 + 0xc) != 0) && (param_2[10] != 0)) {
      if (1 < *(ushort *)(param_2 + 0xc)) {
        lVar2 = 0;
        do {
          uVar1 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar2 * 0x30);
          if ((((uVar1 & 1) != 0) &&
              (uVar1 = FUN_0021dde0(param_2,*(undefined8 *)(param_2[10] + lVar2 * 0x30 + 0x10)),
              (uVar1 & 1) != 0)) && (*(char *)(param_2[10] + lVar2 * 0x30 + 3) == '\0')) {
            local_44 = 0x4c11;
            goto LAB_0021df90;
          }
          lVar2 = lVar2 + 1;
        } while ((int)((uint)lVar2 & 0xffff) < (int)(*(ushort *)(param_2 + 0xc) - 1));
      }
      FUN_0021e0d0(param_1,param_2,0,param_3);
      return;
    }
    local_44 = 0x10c08;
  }
  else {
    local_44 = 0x2c27;
  }
LAB_0021df90:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

