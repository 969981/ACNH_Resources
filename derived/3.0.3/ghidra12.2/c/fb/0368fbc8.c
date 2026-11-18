
uint FUN_0368fbc8(long param_1,uint param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar5 = FUN_03696df0();
  if ((uVar5 & 1) != 0) {
    local_34 = 0x23;
    puVar2 = (undefined2 *)(param_1 + 0x698) + (ulong)param_2 * 0x6c;
    if (0x25 < param_2) {
      puVar2 = (undefined2 *)(param_1 + 0x698);
    }
    local_32 = 8;
    FUN_020fd3a0(&local_34,param_3);
    puVar1 = puVar2 + 4;
    FUN_038d1270(puVar1,"-----");
    if ((ulong)(byte)local_34 < 0x23) {
      FUN_038d1270(puVar1,"%s%02d",
                   *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)local_34 * 8 + 0xb0),
                   local_34._1_1_);
    }
    uVar4 = FUN_0376baa0(puVar1);
    puVar3 = PTR_DAT_04bb37e0;
    *puVar2 = uVar4;
    uStack_74 = *(undefined2 *)puVar3;
    uStack_72 = puVar3[2];
    uStack_71 = puVar3[3];
    local_3c = *(undefined4 *)puVar3;
    local_7c = *(undefined4 *)puVar3;
    local_78 = *(undefined4 *)(puVar3 + 4);
    local_70 = local_78;
    local_6c = uStack_74;
    local_6a = uStack_72;
    local_69 = uStack_71;
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_62 = uStack_72;
    uStack_61 = uStack_71;
    local_60 = local_78;
    local_5c = uStack_74;
    local_5a = uStack_72;
    local_59 = uStack_71;
    local_58 = local_78;
    local_54 = uStack_74;
    local_52 = uStack_72;
    local_51 = uStack_71;
    local_50 = local_78;
    local_4c = uStack_74;
    uStack_4a = uStack_72;
    uStack_49 = uStack_71;
    uStack_48 = local_78;
    local_44 = uStack_74;
    uStack_42 = uStack_72;
    uStack_41 = uStack_71;
    uStack_40 = local_78;
    local_38 = local_78;
    FUN_021e2fb0(&local_7c,puVar2 + 0x18,&local_34,puVar2 + 0x2e,puVar2 + 0x22,puVar2 + 0x26);
    *(undefined1 *)((long)puVar2 + 0x41) = 1;
    *(undefined4 *)(puVar2 + 0x22) = local_7c;
    *(ulong *)(puVar2 + 0x24) = CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT24(uStack_74,local_78)))
    ;
    *(ulong *)(puVar2 + 0x28) = CONCAT17(local_69,CONCAT16(local_6a,CONCAT24(local_6c,local_70)));
    *(ulong *)(puVar2 + 0x2c) = CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT24(uStack_64,local_68)))
    ;
    *(ulong *)(puVar2 + 0x30) = CONCAT17(local_59,CONCAT16(local_5a,CONCAT24(local_5c,local_60)));
    *(undefined4 *)(puVar2 + 0x34) = local_58;
    *(ulong *)(puVar2 + 0x3e) = CONCAT44(uStack_40,CONCAT13(uStack_41,CONCAT12(uStack_42,local_44)))
    ;
    puVar2[0x36] = local_54;
    *(undefined1 *)(puVar2 + 0x37) = local_52;
    *(undefined1 *)((long)puVar2 + 0x6f) = local_51;
    *(undefined4 *)(puVar2 + 0x38) = local_50;
    *(ulong *)(puVar2 + 0x3a) = CONCAT44(uStack_48,CONCAT13(uStack_49,CONCAT12(uStack_4a,local_4c)))
    ;
    *(undefined4 *)(puVar2 + 0x42) = local_3c;
    *(undefined4 *)(puVar2 + 0x44) = local_38;
  }
  return uVar5 & 1;
}

