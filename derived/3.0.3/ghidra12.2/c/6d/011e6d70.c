
void FUN_011e6d70(long param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  param_2[2] = *(undefined4 *)(param_1 + 0x40);
  if ((0.0 < *(float *)(param_1 + 0x48)) && (*(float *)(param_1 + 0x48) <= 1.0 && DAT_050dfb20 != 0)
     ) {
    local_35 = 0;
    local_58 = 0x20;
    local_54[0] = 0;
    local_60 = local_54;
    local_68 = PTR_DAT_04bb2028 + 0x10;
    uVar2 = FUN_01238b20(&local_68,param_1 + 0x30,1,0,0);
    lVar3 = DAT_050dfb20;
    if (((uVar2 & 1) != 0) && (*(long *)(DAT_050dfb20 + 0x1150) != 0)) {
      (**(code **)(local_68 + 0x18))(&local_68);
      uVar1 = FUN_006bd550(local_60,0);
      lVar3 = *(long *)(lVar3 + 0x1220);
      while (lVar3 != 0) {
        if (uVar1 < *(uint *)(lVar3 + 0x30)) {
          plVar4 = (long *)(lVar3 + 8);
        }
        else {
          if (uVar1 <= *(uint *)(lVar3 + 0x30)) {
            if (*(long *)(lVar3 + 0x38) == 0) {
              return;
            }
            fVar5 = *(float *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x18) + 0x38) + 4);
            param_2[1] = ((float)param_2[1] - fVar5 * *(float *)(param_1 + 0x48)) +
                         *(float *)(param_1 + 0x48) * fVar5 * (1.0 - *(float *)(param_1 + 0x44));
            return;
          }
          plVar4 = (long *)(lVar3 + 0x10);
        }
        lVar3 = *plVar4;
      }
    }
  }
  return;
}

