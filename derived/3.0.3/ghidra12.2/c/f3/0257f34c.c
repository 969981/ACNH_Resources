
void FUN_0257f34c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  param_1[1] = 0xfffe;
  FUN_0277d4ac();
  param_1[2] = 0xfffe;
  FUN_0277d4ac();
  param_1[3] = 0xfffe;
  FUN_0277d4ac();
  param_1[4] = 0xfffe;
  FUN_0277d4ac();
  param_1[5] = 0xfffe;
  FUN_0277d4ac();
  param_1[6] = 0xfffe;
  FUN_0277d4ac();
  lVar3 = DAT_054ecc70;
  uVar2 = *(uint *)(*(long *)(DAT_054ecc70 + 8) + 0x1c0);
  uVar4 = (ulong)uVar2;
  if ((((int)uVar2 < 1) &&
      (lVar5 = *(long *)(*(long *)(DAT_054ecc70 + 8) + 0xb0), uVar4 = 0, lVar5 != 0)) &&
     (puVar6 = *(uint **)(lVar5 + 8), uVar4 = 0, puVar6 != (uint *)0x0)) {
    uVar4 = (ulong)*puVar6;
  }
  uVar2 = *param_2 ^ *param_2 << 0xb;
  uVar1 = param_2[3];
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  FUN_024fc2c0(&local_68,lVar3,uVar2 * uVar4 >> 0x20);
  *(undefined4 *)param_1 = local_68;
  *(undefined4 *)((long)param_1 + 4) = uStack_64;
  param_1[1] = local_60;
  param_1[2] = uStack_58;
  *(undefined4 *)(param_1 + 3) = local_50;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_4c;
  *(undefined2 *)(param_1 + 4) = local_48;
  *(undefined1 *)((long)param_1 + 0x22) = local_46;
  *(undefined1 *)((long)param_1 + 0x23) = local_45;
  *(undefined4 *)((long)param_1 + 0x24) = local_44;
  param_1[5] = local_40;
  *(undefined4 *)(param_1 + 6) = local_38;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_34;
  return;
}

