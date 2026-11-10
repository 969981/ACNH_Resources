
void FUN_001f8acc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_100 [105];
  undefined1 local_97;
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
  uVar3 = FUN_001f719c(param_2,&local_58);
  uVar3 = FUN_001f8890(uVar3,&local_58,*(undefined1 *)(param_2 + 0x69));
  *param_3 = uVar3;
  local_88 = 1;
  local_84 = 0;
  local_90 = &PTR_FUN_048393d8;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_90,uVar3,0);
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x18);
  if ((ulong)(lVar5 - lVar1) < 4) {
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    uVar6 = (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar1);
    *(long *)(param_2 + 0x18) = lVar1 + 4;
    if ((ulong)(lVar5 - (lVar1 + 4)) < uVar6) {
      *(undefined1 *)(param_2 + 8) = 1;
    }
    else {
      lVar4 = FUN_001abe40(param_2);
      FUN_00193030(&local_90,
                   *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + *(long *)(param_2 + 0x18),
                   uVar6,0xffffffffffffffff);
      uVar6 = *(long *)(param_2 + 0x18) + uVar6;
      if (uVar6 <= *(ulong *)(*(long *)(param_2 + 0x10) + 0x18)) {
        *(ulong *)(param_2 + 0x18) = uVar6;
      }
    }
  }
  FUN_001abd58(auStack_100,&local_90);
  local_97 = *(undefined1 *)(param_2 + 0x69);
  (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3,auStack_100);
  FUN_001abdec(auStack_100);
  FUN_00196ce0(&local_90);
  local_58 = puVar2 + 0x10;
  FUN_0018b1a0(&local_58);
  return;
}

