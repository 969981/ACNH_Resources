
undefined8 FUN_011e6ec0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  if (DAT_050dfb20 != 0) {
    uVar2 = FUN_0277e158();
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_35 = 0;
    local_58 = 0x20;
    local_60 = local_54;
    local_54[0] = 0;
    local_68 = PTR_DAT_04bb2028 + 0x10;
    uVar2 = FUN_01238b20(&local_68,param_1,1,0,0);
    lVar3 = DAT_050dfb20;
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(DAT_050dfb20 + 0x1150) != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      uVar1 = FUN_006bd550(local_60,0);
      for (lVar3 = *(long *)(lVar3 + 0x1220); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
        while (uVar1 < *(uint *)(lVar3 + 0x30)) {
          lVar3 = *(long *)(lVar3 + 8);
          if (lVar3 == 0) {
            return 0;
          }
        }
        if (uVar1 <= *(uint *)(lVar3 + 0x30)) {
          if (*(long *)(lVar3 + 0x38) == 0) {
            return 0;
          }
          puVar4 = *(undefined4 **)(*(long *)(*(long *)(lVar3 + 0x38) + 0x18) + 0x38);
          *param_2 = *puVar4;
          param_2[1] = puVar4[1];
          param_2[2] = puVar4[2];
          param_2[3] = puVar4[3];
          return 1;
        }
      }
    }
  }
  return 0;
}

