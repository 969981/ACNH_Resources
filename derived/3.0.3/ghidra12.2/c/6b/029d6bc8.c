
void FUN_029d6bc8(long param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  int *piVar3;
  undefined1 uVar4;
  int local_34;
  int local_18;
  int local_14;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  if (cVar1 == '\x02') {
    if (*(int *)(param_1 + 0x38) == *param_2) {
      return;
    }
    *(int *)(param_1 + 0x38) = *param_2;
    if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 4;
      if (*(long *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x10) != 0) goto LAB_029d6ce0;
      }
      else {
        FUN_03f45838(param_1 + 0x18);
        if (*(long *)(param_1 + 0x10) == 0) {
          *(undefined4 *)(param_1 + 0xc) = 0xe;
        }
        else {
LAB_029d6ce0:
          if (DAT_05b05848 != 0) {
            FUN_03f350f4(DAT_05b05848,param_1);
          }
        }
      }
    }
    local_34 = *param_2;
    if (local_34 < 1) {
      uVar4 = 0;
      goto LAB_029d6d1c;
    }
    piVar3 = &local_34;
  }
  else {
    if (cVar1 == '\x01') {
      if (*(int *)(param_1 + 0x38) != *param_2) {
        *(int *)(param_1 + 0x38) = *param_2;
        if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 4;
          if (*(long *)(param_1 + 0x28) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_029d6d5c;
          }
          else {
            FUN_03f45838(param_1 + 0x18);
            if (*(long *)(param_1 + 0x10) == 0) {
              *(undefined4 *)(param_1 + 0xc) = 0xe;
              goto LAB_029d6d5c;
            }
          }
          if (DAT_05b05848 != 0) {
            FUN_03f350f4(DAT_05b05848,param_1);
          }
        }
LAB_029d6d5c:
        local_18 = *param_2;
        if (local_18 < 1) {
          *(undefined1 *)(param_1 + 0x3c) = 0;
          return;
        }
        FUN_029d6d90(param_1,&local_18,param_3);
        return;
      }
      uVar2 = FUN_03f2e0c0(param_1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_03f2dedc(param_1,0);
      uVar4 = 2;
      goto LAB_029d6d1c;
    }
    if (cVar1 != '\0') {
      return;
    }
    *(int *)(param_1 + 0x38) = *param_2;
    local_14 = *param_2;
    if (local_14 < 1) {
      return;
    }
    piVar3 = &local_14;
  }
  FUN_029d6d90(param_1,piVar3,param_3);
  uVar4 = 1;
LAB_029d6d1c:
  *(undefined1 *)(param_1 + 0x3c) = uVar4;
  return;
}

