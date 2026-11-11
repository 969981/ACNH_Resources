
undefined1  [16] FUN_004dc9d0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [16];
  
  FUN_004297c0(auStack_30);
  iVar1 = FUN_004c8350(*param_1 + 0x3d0,auStack_30);
  if ((iVar1 < 0) ||
     (puVar2 = (undefined8 *)FUN_004c5150(*param_1 + 0x68,auStack_30,iVar1),
     puVar2 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  auVar4._0_8_ = *param_1;
  auVar4._8_8_ = uVar3;
  return auVar4;
}

