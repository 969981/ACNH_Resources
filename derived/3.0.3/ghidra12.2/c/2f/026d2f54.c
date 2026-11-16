
void FUN_026d2f54(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  ulong local_688;
  undefined1 *local_680;
  undefined1 auStack_238 [320];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  piVar1 = (int *)(param_1 + 0x777c);
  if (*(int *)(param_1 + 0x7798) == 0 || *piVar1 == 0) {
    local_e0 = CONCAT44(local_e0._4_4_,0x30);
    local_d8 = param_1 + 0x1e4;
    if (param_2 == (long *)0x0) {
      return;
    }
    (**(code **)(*param_2 + 0x38))(param_2);
    local_698 = 0;
    local_690 = 0;
    local_6a0 = 0;
    local_688 = CONCAT71(local_688._1_7_,1);
    local_688 = local_688 & 0xffffffff;
    local_6b0 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_6a8 = 0;
    FUN_02906b00(&local_6b0,param_2,&local_e0);
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar4 + 0xe7290) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe7290), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  piVar2 = (int *)(*(long *)(lVar4 + 0xe7278) + *(long *)(lVar4 + 0xe7270));
  if ((*(short *)(param_1 + 0x7780) == 0) || ((short)piVar2[1] == 0)) {
    if (*piVar1 != *piVar2) goto LAB_026d30bc;
  }
  else if ((*piVar1 != *piVar2) ||
          ((*(long *)(piVar2 + 1) != *(long *)(param_1 + 0x7780) ||
           *(long *)(piVar2 + 3) != *(long *)(param_1 + 0x7788)) ||
           piVar2[5] != *(int *)(param_1 + 0x7790))) {
LAB_026d30bc:
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    FUN_01bdde78(&local_6b0);
    local_78 = (undefined8 *)&DAT_040aae7f;
    goto LAB_026d3168;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_01bdde78(&local_6b0);
  local_78 = (undefined8 *)&DAT_040715bc;
LAB_026d3168:
  local_f0 = 0;
  local_f8 = 0;
  local_680 = auStack_238;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Board";
  local_690 = 0;
  local_688 = 0;
  local_e8 = &local_e0;
  local_70 = local_80;
  FUN_01bddba0(&local_6b0,&local_70,&local_80,piVar1);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x30);
  local_78 = &local_e0;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_48 = 1;
    local_44 = 0;
    local_70 = PTR_DAT_04bc0cd8 + 0x10;
    pcStack_68 = (char *)0x0;
    FUN_02906b00(&local_70,param_2,&local_80);
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xe7290) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7290) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

