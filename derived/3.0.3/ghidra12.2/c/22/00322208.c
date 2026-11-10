
void FUN_00322208(long param_1,long param_2,long param_3,uint param_4,byte param_5,
                 undefined8 param_6,long param_7,code *param_8,code *param_9)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  byte local_4c;
  long local_48;
  
  if (((*(char *)(*(long *)(param_3 + 0xa0) + 0x790) == '\0' || *(char *)(param_3 + 2) == '\0') ||
      (*(float *)(param_3 + 0x6c) <= 0.0)) ||
     ((*(int *)(param_3 + 0x28) < 1 &&
      ((*(int *)(param_3 + 0x28) != 0 || (2 < *(int *)(*(long *)(param_3 + 0x240) + 0x340) - 1U)))))
     ) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar1 = 1 << (ulong)(*(uint *)(param_3 + 0x490) & 0x1f);
  puVar4 = *(uint **)(*(long *)(param_1 + 0x280) + 0x130);
  if ((*puVar4 & uVar1) == 0) {
    if ((puVar4[1] & uVar1) == 0) {
      if ((puVar4[2] & uVar1) == 0) {
        if ((puVar4[3] & uVar1) == 0) {
          if ((puVar4[4] & uVar1) == 0) {
            if ((puVar4[5] & uVar1) == 0) {
              if ((puVar4[6] & uVar1) == 0) {
                if ((puVar4[7] & uVar1) == 0) {
                  uVar5 = *(uint *)(param_3 + 0x40);
                  if (*(long *)(param_3 + 0x98) == 0) {
                    bVar2 = true;
                  }
                  uVar7 = *(uint *)(param_7 + 0x10);
                  *(undefined8 *)(param_3 + 0x488) = 0;
                  if (bVar2) {
                    return;
                  }
                  goto LAB_00322360;
                }
                lVar6 = 7;
              }
              else {
                lVar6 = 6;
              }
            }
            else {
              lVar6 = 5;
            }
          }
          else {
            lVar6 = 4;
          }
        }
        else {
          lVar6 = 3;
        }
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
  }
  else {
    lVar6 = 0;
  }
  uVar5 = *(uint *)(param_3 + 0x40);
  if (*(long *)(param_3 + 0x98) == 0) {
    bVar2 = true;
  }
  uVar7 = *(uint *)(param_7 + 0x10);
  *(undefined8 *)(param_3 + 0x488) = *(undefined8 *)(puVar4 + lVar6 * 2 + 8);
  if (bVar2) {
    return;
  }
LAB_00322360:
  if ((((uVar7 & uVar5) != 0) && ((uVar1 & param_4) != 0)) &&
     ((param_8 == (code *)0x0 ||
      (local_80 = param_3, uStack_78 = param_6, uVar3 = (*param_8)(&local_80), (uVar3 & 1) != 0))))
  {
    if (param_9 == (code *)0x0) {
      FUN_0031e430(param_3,param_2,param_5 & 1,param_6,param_7);
      return;
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_4c = param_5 & 1;
    local_5c = *(undefined4 *)(param_7 + 0x14);
    local_70 = 0;
    local_50 = *(undefined4 *)(param_1 + 0x38);
    local_60 = 0;
    local_80 = param_2;
    lStack_68 = param_3;
    local_58 = param_6;
    local_48 = param_7;
    (*param_9)(&local_80);
  }
  return;
}

