
void FUN_00283d90(undefined8 param_1,long *param_2,undefined4 *param_3,void *param_4,uint param_5,
                 undefined4 param_6,byte param_7,long param_8,undefined4 *param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_88;
  undefined4 local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  local_74 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_88);
  if (*(int *)(param_2[9] + 8) - 0x34U < param_5) {
    local_88 = CONCAT44(local_88._4_4_,0x10c07);
  }
  else {
    local_88 = 0;
    FUN_002282f0(&local_88);
    uVar2 = local_88;
    if ((param_8 == 0) || ((long)local_88 < param_8)) {
      uVar1 = 0;
      do {
        uVar8 = uVar1;
        uVar1 = uVar8 + 1;
      } while (*(int *)(param_2[2] + uVar8 * 4) != 0 && uVar8 < *(uint *)((long)param_2 + 0x5f4));
      if (uVar8 < *(uint *)((long)param_2 + 0x5f4)) {
        if ((int)param_2[10] == 0) {
          uVar7 = (uint)local_88;
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          *(uint *)(param_2 + 10) = uVar7;
        }
        lVar6 = uVar1 * 8;
        memcpy(*(void **)(param_2[3] + lVar6 + -8),param_4,(ulong)param_5);
        FUN_00228480(*(long *)(param_2[3] + lVar6 + -8) + (ulong)param_5,(int)param_2[10]);
        lVar4 = uVar1 * 4;
        *(uint *)(param_2[4] + lVar4 + -4) = param_5 + 4;
        *(undefined4 *)(param_2[7] + lVar4 + -4) = param_6;
        *(byte *)(param_2[8] + uVar1 + -1) = param_7 & 1;
        *(ulong *)(*param_2 + lVar6 + -8) = uVar2;
        *(long *)(param_2[1] + lVar6 + -8) = param_8;
        lVar6 = param_2[2];
        *(int *)(lVar6 + lVar4 + -4) = (int)param_2[10];
        iVar5 = 1;
        if (1 < (int)param_2[10] + 1U) {
          iVar5 = (int)param_2[10] + 1;
        }
        *(int *)(param_2 + 10) = iVar5;
        local_88 = local_88 & 0xffffffff00000000;
        *param_3 = *(undefined4 *)(lVar6 + lVar4 + -4);
        *param_9 = (int)uVar8;
        goto LAB_00283f68;
      }
      uVar3 = 0x4c0d;
    }
    else {
      uVar3 = 0x10c07;
    }
    local_88 = CONCAT44(local_88._4_4_,uVar3);
  }
LAB_00283f68:
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_64);
  FUN_002296c4(param_1,&local_88);
  return;
}

