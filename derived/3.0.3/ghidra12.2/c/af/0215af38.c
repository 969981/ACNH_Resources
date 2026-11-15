
void FUN_0215af38(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  undefined4 local_14;
  
  if (**(char **)(param_1 + 0x6e8) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x7f0);
    if ((uVar5 >> 2 & 1) != 0) {
      if (**(char **)(param_1 + 0x798) != '\0') {
        uVar2 = FUN_01ad5de0(param_1 + 0x790);
        local_68 = (undefined *)(ulong)uVar2;
        FUN_0277d4ac(&local_68);
        uVar3 = FUN_01e57b44(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0));
        uVar4 = FUN_0277d7b4(uVar3,&local_68);
        if ((uVar4 & 1) != 0) {
          local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
          local_14 = 0;
          lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
          FUN_01e5a930(0x40000000,lVar6,0xe,PTR_DAT_04bb2150,&local_68,&local_14,PTR_DAT_04bc1600,6)
          ;
          local_35 = 0;
          local_54[0] = 0;
          uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          *(undefined4 *)(lVar6 + 0x408) = *(undefined4 *)PTR_DAT_04bb37e0;
          *(undefined4 *)(lVar6 + 0x40c) = uVar1;
          puStack_60 = local_54;
          local_58 = 0x20;
          lVar6 = *(long *)(lVar6 + 0x358);
          local_68 = PTR_DAT_04bb2028 + 0x10;
          (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
          FUN_038d1270(&local_68,"NpcActorAction.%s",*(undefined8 *)(lVar6 + 1000));
        }
        uVar5 = *(uint *)(param_1 + 0x7f0);
      }
      *(uint *)(param_1 + 0x7f0) = uVar5 & 0xfffffffb;
    }
  }
  return;
}

