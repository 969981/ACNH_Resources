
void FUN_0038bf68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(long *)(param_1 + 0x10) = param_3;
  pcVar2 = *(char **)(param_3 + 0x80);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    lVar1 = *(long *)(param_3 + 0x68);
    FUN_0034f6d4(pcVar2,param_2,param_3 + 0x10,*(undefined8 *)(lVar1 + 0x28),
                 (*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x10)) + **(long **)(param_3 + 0x70) +
                 -0x10,*(undefined4 *)(param_3 + 0x50));
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_0034fd78(&local_60);
    local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_3 + 0x5c));
    local_30 = *(undefined8 *)(param_3 + 0x80);
    local_60 = CONCAT44(*(undefined4 *)(param_3 + 0x1c),(undefined4)local_60);
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_3 + 0x58));
    local_40 = CONCAT44(*(undefined4 *)(param_3 + 0x30),(undefined4)local_40);
    local_50._0_4_ = CONCAT22(*(undefined2 *)(param_3 + 0x16),(undefined2)local_50);
    FUN_0034f830(*(undefined8 *)(param_3 + 0x88),param_2,&local_60);
    return;
  }
  return;
}

