
void FUN_038fdf04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04bc1010;
  lVar5 = *(long *)(param_1 + 0x88);
  *(long *)(lVar5 + 0x40) = param_1;
  uVar4 = *(undefined8 *)(*(long *)puVar2 + 0x30);
  lVar1 = *(long *)(param_1 + 0x68);
  FUN_0034f6d4(*(undefined8 *)(param_1 + 0x80),uVar4,param_1 + 0x10,*(undefined8 *)(lVar1 + 0x28),
               (*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x10)) + **(long **)(param_1 + 0x70) +
               -0x10,*(undefined4 *)(param_1 + 0x50));
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0034fd78(&local_70);
  local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(param_1 + 0x5c));
  local_40 = *(undefined8 *)(param_1 + 0x80);
  local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x1c),(undefined4)local_70);
  uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(param_1 + 0x58));
  local_50 = CONCAT44(*(undefined4 *)(param_1 + 0x30),(undefined4)local_50);
  local_60._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x16),(undefined2)local_60);
  FUN_0034f830(*(undefined8 *)(param_1 + 0x88),uVar4,&local_70);
  iVar3 = FUN_038fc7f0(*(undefined8 *)puVar2,*(undefined8 *)(lVar5 + 8),
                       *(undefined8 *)(lVar5 + 0x10),*(long *)(param_1 + 0x60) + 2,0);
  if (iVar3 == -1) {
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0x30);
    FUN_0034f7c4(*(undefined8 *)(param_1 + 0x80),uVar4);
    FUN_0034f968(*(undefined8 *)(param_1 + 0x88),uVar4);
  }
  *(long *)(param_1 + 0x90) = (long)iVar3;
  return;
}

