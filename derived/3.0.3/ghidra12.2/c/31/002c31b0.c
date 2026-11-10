
void FUN_002c31b0(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined4 local_1c0 [32];
  int local_140;
  ErrorResultVariant aEStack_13c [124];
  int local_c0 [4];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  short local_78;
  undefined1 auStack_70 [24];
  undefined2 local_58;
  
  FUN_002c4080(*(undefined2 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2a));
  FUN_002c4068(0,*(undefined2 *)(param_2 + 0x2c));
  uVar1 = FUN_002c40a0();
  *(undefined2 *)(param_2 + 0x22) = uVar1;
  if (*(int *)(param_2 + 0x178) == 2) {
    *(undefined1 *)(param_2 + 0x20) = 2;
    if (*(long *)(param_2 + 8) != 0) {
      FUN_002c30d0(param_2);
    }
    local_140 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_00220f70(param_2 + 0x208,&LAB_002c3520,param_2);
      FUN_0021f4e0(auStack_70);
      local_58 = *(undefined2 *)(param_2 + 0x22);
      FUN_0021f4e0(auStack_90);
      FUN_0021f4e0(auStack_b0);
      if (((long)*(int *)(param_2 + 0x40) & 0x7ffffffffffffffU) != 0) {
        lVar4 = param_2 + 0x48;
        do {
          puVar6 = auStack_90;
          uVar2 = FUN_0021fea0(auStack_90);
          if ((uVar2 & 1) == 0) {
LAB_002c3270:
            FUN_0021f54c(puVar6,lVar4);
          }
          else {
            uVar2 = FUN_0021fea0(auStack_b0);
            if ((((uVar2 & 1) == 0) && (uVar2 = FUN_0021fe7c(lVar4,auStack_90), (uVar2 & 1) != 0))
               && (*(short *)(lVar4 + 0x18) != local_78)) {
              puVar6 = auStack_b0;
              goto LAB_002c3270;
            }
          }
          lVar4 = lVar4 + 0x20;
        } while (lVar4 != param_2 + (long)*(int *)(param_2 + 0x40) * 0x20 + 0x48);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x200);
      uVar7 = *(undefined8 *)(param_2 + 8);
      FUN_002b3fa8(&local_140);
      FUN_002b3fa8(local_1c0);
      FUN_002c5a60(local_c0,uVar5,param_2 + 0x208,uVar7,param_2 + 0x150,auStack_90,auStack_b0,
                   auStack_70,&local_140,local_1c0,0);
      FUN_002b4104(local_1c0);
      FUN_002b4104(&local_140);
      if (local_c0[0] == 0) {
        *(undefined1 *)(param_2 + 0x20) = 2;
        (**(code **)(**(long **)(param_2 + 0x200) + 0x50))();
        local_140 = 0;
        local_1c0[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_13c,(Result *)local_1c0);
        piVar3 = &local_140;
      }
      else {
        piVar3 = local_c0;
      }
      FUN_002296c4(param_1,piVar3);
      FUN_0021f584(auStack_b0);
      FUN_0021f584(auStack_90);
      FUN_0021f584(auStack_70);
      return;
    }
    local_140 = 0x10c08;
  }
  local_1c0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_13c,(Result *)local_1c0);
  FUN_002296c4(param_1,&local_140);
  return;
}

