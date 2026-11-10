
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0035afc0(ulong param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_80 [3];
  ulong local_68;
  
  if (param_1 != param_2) {
    local_80[1] = 0;
    local_80[2] = param_1;
    local_68 = param_1;
    uVar5 = FUN_0035b510(local_80 + 2,&local_68,param_2,param_3,local_80 + 1);
    if (uVar5 == 0x1f) {
      param_1 = local_68;
    }
    else {
      uVar8 = (ulong)uVar5;
      if (uVar5 == 0x27) {
        uVar8 = 0x16;
      }
      lVar6 = (**(code **)*param_3)(param_3,param_1,param_2);
      uVar2 = lVar6 - 2U;
      if (lVar6 - 2U <= param_1) {
        uVar2 = param_1;
      }
      uVar9 = param_2;
      if (local_80[2] == param_2) {
        if (param_2 < uVar2 + 2) {
          return local_68;
        }
      }
      else {
        bVar4 = false;
        uVar1 = uVar2 + 2;
        uVar7 = local_68;
        do {
          uVar5 = FUN_0035b510(local_80 + 2,local_80,param_2,param_3,local_80 + 1);
          if (uVar5 == 0x1d) {
            if ((*(char *)(param_4 + 6) == '\0') ||
               ((uVar5 = 0x1d, !bVar4 &&
                ((0x27 < (uint)uVar8 || (uVar5 = 0x1d, (1L << (uVar8 & 0x3f) & 0x8000000089U) == 0))
                )))) {
              uVar5 = 0xc;
            }
LAB_0035b114:
            puVar3 = &UNK_04133bc8 + uVar8 * 0x78;
            if (*(char *)(param_4 + 5) != '\0') {
              puVar3 = &UNK_04132db8 + uVar8 * 0x78;
            }
            if (*(int *)(puVar3 + (ulong)uVar5 * 4) - 1U < 2) {
              if (bVar4) {
                if (uVar1 <= local_80[0]) goto LAB_0035b218;
                goto LAB_0035b1a0;
              }
            }
            else if (*(int *)(puVar3 + (ulong)uVar5 * 4) == 0) {
              if (uVar1 <= local_80[0]) {
                if (bVar4) {
                  return uVar2;
                }
LAB_0035b218:
                if (uVar7 != param_2) {
                  uVar2 = uVar7;
                }
                return uVar2;
              }
LAB_0035b1a0:
              bVar4 = false;
              uVar8 = (ulong)uVar5;
              uVar9 = uVar7;
              goto LAB_0035b088;
            }
            if (uVar1 <= local_80[0]) {
              if (uVar9 != param_2) {
                uVar2 = uVar9;
              }
              return uVar2;
            }
            bVar4 = false;
            uVar8 = (ulong)uVar5;
          }
          else {
            if (uVar5 != 0x27) {
              if (uVar5 == 0x1f) {
                if (local_80[0] < uVar1) {
                  return local_80[0];
                }
                goto LAB_0035b218;
              }
              goto LAB_0035b114;
            }
            bVar4 = true;
          }
LAB_0035b088:
          uVar7 = local_80[0];
        } while (local_80[2] != param_2);
        if (param_2 < uVar2 + 2) {
          bVar4 = true;
        }
        else {
          local_80[0] = uVar2;
        }
        if (bVar4) {
          return local_80[0];
        }
      }
      param_1 = uVar2;
      if (uVar9 != param_2) {
        param_1 = uVar9;
      }
    }
  }
  return param_1;
}

