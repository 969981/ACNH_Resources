
void FUN_00643160(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long local_e8 [2];
  ulong local_d8;
  undefined1 auStack_d0 [144];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_2 + 3) >> 1 & 1) != 0) &&
     (puVar1 = (undefined8 *)FUN_00426db0(param_2,0x2000000), puVar1 != (undefined8 *)0x0)) {
    FUN_004297c0(&local_40,*puVar1);
    FUN_004d1be0(auStack_d0,local_40,uStack_38,param_2,0,param_3);
    while (uVar2 = FUN_004d1de0(auStack_d0), (uVar2 & 1) != 0) {
      FUN_004d3b80(local_e8,auStack_d0);
      if (local_e8[0] != 0) {
        FUN_00452380(param_1,local_e8);
      }
      if ((local_d8 & 1) != 0) {
        FUN_0043dd50(local_d8 & 0xfffffffffffffffe);
      }
    }
    FUN_004d1c70(auStack_d0);
  }
  return;
}

