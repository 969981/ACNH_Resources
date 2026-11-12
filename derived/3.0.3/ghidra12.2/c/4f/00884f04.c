
void FUN_00884f04(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_24;
  
  FUN_0074fda4(&local_d8,"%s%03d","BCAT_EventFlag_",param_2);
  puVar1 = PTR_DAT_04bb2208;
  lVar4 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(local_d8 + 0x18))(&local_d8);
  uVar2 = FUN_006bd550(local_d0,0);
  local_130 = (undefined *)CONCAT44(local_130._4_4_,uVar2);
  lVar4 = FUN_008a1920(lVar4 + 0x880,&local_130);
  if (lVar4 != 0) {
    FUN_0273f3c4(&local_d8,param_3);
    uVar3 = FUN_0273f0a0(&local_d8);
    if ((uVar3 & 1) != 0) {
      local_dd = 0;
      local_120 = 0x40;
      puStack_128 = local_11c;
      local_11c[0] = 0;
      local_130 = PTR_DAT_04bb2bc0 + 0x10;
      FUN_038d1270(&local_130,"RandomKey%d",param_2);
      lVar4 = *(long *)puVar1;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      local_24 = FUN_006bd550(local_d0,0);
      lVar4 = FUN_008a1920(lVar4 + 0x880,&local_24);
      if ((lVar4 != 0) && ((int)param_2 < 0xd)) {
        uVar3 = (ulong)param_2;
        if (0xc < param_2) {
          uVar3 = 0;
        }
        FUN_0273f3c4(&local_130,(&DAT_041672b8)[uVar3]);
      }
    }
  }
  return;
}

