
void FUN_03c016ec(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_680 [1584];
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  uVar2 = (**(code **)(*param_1 + 0x98))();
  puVar1 = PTR_DAT_04bcb7d8;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((int)param_1[2] != 0) {
    return;
  }
  if (*(char *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38) + 0x2ac) == '\0') {
    return;
  }
  FUN_0030c500(auStack_680);
  if (*(char *)((long)param_1 + 0x40b) != '\0') {
    if ((int)param_1[0x2a] == 0) {
      if (*(int *)((long)param_1 + 0x154) == 0) {
        if ((int)param_1[0x2b] == 0) {
          if (*(int *)((long)param_1 + 0x15c) == 0) {
            if ((int)param_1[0x2c] == 0) {
              if (*(int *)((long)param_1 + 0x164) == 0) {
                *(undefined1 *)((long)param_1 + 0x40b) = 0;
                goto LAB_03c01878;
              }
              FUN_0030caac(&local_50,auStack_680,5,*(undefined4 *)((long)param_1 + 0x144));
              *(undefined4 *)((long)param_1 + 0x164) = 0;
            }
            else {
              FUN_0030caac(&local_50,auStack_680,4,(int)param_1[0x28]);
              *(undefined4 *)(param_1 + 0x2c) = 0;
            }
          }
          else {
            FUN_0030caac(&local_50,auStack_680,3,*(undefined4 *)((long)param_1 + 0x13c));
            *(undefined4 *)((long)param_1 + 0x15c) = 0;
          }
        }
        else {
          FUN_0030caac(&local_50,auStack_680,2,(int)param_1[0x27]);
          *(undefined4 *)(param_1 + 0x2b) = 0;
        }
      }
      else {
        FUN_0030caac(&local_50,auStack_680,1,*(undefined4 *)((long)param_1 + 0x134));
        *(undefined4 *)((long)param_1 + 0x154) = 0;
      }
    }
    else {
      FUN_0030caac(&local_50,auStack_680,0,(int)param_1[0x26]);
      *(undefined4 *)(param_1 + 0x2a) = 0;
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0x38);
    if ((*(char *)(lVar3 + 0x2ac) != '\0') && (*(char *)(lVar3 + 0x2ae) != '\0')) {
      FUN_0030d4f0(lVar3 + 0xa38,auStack_680);
      local_40 = PTR_LAB_04bcb8a0;
      uStack_38 = 0;
      local_50 = PTR_DAT_04bcb8a8 + 0x10;
      lStack_48 = lVar3;
      FUN_038755f4(*(undefined8 *)(*(long *)puVar1 + 0x88),&local_50,lVar3 + 9,0,0,0);
    }
  }
LAB_03c01878:
  FUN_0030c880(auStack_680);
  return;
}

