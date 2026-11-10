
void FUN_0031a25c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_100 [112];
  undefined **local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04bc0ec8;
  local_50[0] = 0;
  local_58 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  FUN_001f719c(param_2,&local_58);
  uVar3 = FUN_0018b44c(local_40,"Community");
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_0018a58c(&local_58,"PersistentGathering");
  }
  uVar4 = FUN_00319fb0(uVar3,&local_58);
  *param_3 = uVar4;
  local_88 = 1;
  local_84 = 0;
  local_90 = &PTR_FUN_048393d8;
  uVar4 = FUN_00196a18();
  FUN_00196a24(&local_90,uVar4,0);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x18);
  if ((ulong)(lVar6 - lVar1) < 4) {
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    uVar3 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_2 + 0x18) = lVar1 + 4;
    if ((ulong)(lVar6 - (lVar1 + 4)) < uVar3) {
      *(undefined1 *)(param_2 + 8) = 1;
    }
    else {
      lVar5 = FUN_001abe40(param_2);
      FUN_00193030(&local_90,
                   *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_2 + 0x18),
                   uVar3,0xffffffffffffffff);
      uVar3 = *(long *)(param_2 + 0x18) + uVar3;
      if (uVar3 <= *(ulong *)(*(long *)(param_2 + 0x10) + 0x18)) {
        *(ulong *)(param_2 + 0x18) = uVar3;
      }
    }
  }
  FUN_001abd58(auStack_100,&local_90);
  (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3,auStack_100);
  FUN_001abdec(auStack_100);
  FUN_00196ce0(&local_90);
  local_58 = puVar2 + 0x10;
  FUN_0018b1a0(&local_58);
  return;
}

