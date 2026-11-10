
void FUN_002c7400(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [144];
  undefined1 local_60;
  long local_38;
  
  uVar1 = FUN_002b440c(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_002b4460(param_2);
    uVar1 = FUN_0021fea0();
    if (((uVar1 & 1) == 0) && (uVar1 = FUN_002b44d4(param_2), (uVar1 & 1) == 0)) {
      uVar1 = FUN_002b4420(param_1 + 0x50);
      uVar3 = 4;
      if ((uVar1 & 1) == 0) {
        uVar3 = 2;
      }
      goto LAB_002c744c;
    }
  }
  uVar3 = 0;
LAB_002c744c:
  local_108 = 0;
  lVar4 = (long)DAT_04be24f4;
  plVar2 = (long *)FUN_00228380();
  local_38 = *plVar2 * lVar4;
  FUN_002cac48(&local_f8,param_2,&local_108,&local_38,0,DAT_04be24f8,uVar3);
  if ((param_3 & 1) != 0) {
    plVar2 = (long *)FUN_00228380();
    lVar4 = *plVar2;
    local_108 = 0;
    FUN_002282f0(&local_108);
    local_60 = 1;
    local_100 = 0;
    *(long *)(param_1 + 0x17c0) = local_108 + lVar4 * 5000;
    local_108 = 0x40000;
    FUN_002cb258(&local_f8,&local_108);
  }
  FUN_002c9c20(param_1 + 0x180,&local_f8);
  local_f8 = PTR_DAT_04bce240 + 0x10;
  FUN_002b4104(auStack_f0);
  return;
}

