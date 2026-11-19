
void FUN_03bd0ce0(long param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar3 = FUN_038cd970(*(undefined4 *)(param_2 + 8));
  if (0 < (int)uVar3) {
    uVar8 = (ulong)uVar3;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar9 = (undefined4 *)(param_2 + 0x10);
    do {
      uVar7 = FUN_038cd970(*puVar9);
      puVar1 = (undefined4 *)(param_2 + (uVar7 & 0xffffffff));
      local_68 = 0;
      local_90 = 0;
      local_64 = 0x101;
      local_62 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar4 = FUN_038cd970(*puVar1);
      local_90 = CONCAT44(local_90._4_4_,uVar4);
      uVar4 = FUN_038cd970(puVar1[1]);
      uVar5 = FUN_038cd970(puVar1[2]);
      uVar6 = FUN_038cd970(puVar1[3]);
      local_90 = CONCAT44(uVar4,(undefined4)local_90);
      local_88 = CONCAT44(uVar6,uVar5);
      uVar4 = FUN_038cd970(puVar1[4]);
      uVar5 = FUN_038cd970(puVar1[5]);
      uVar6 = FUN_038cd970(puVar1[6]);
      local_78 = CONCAT44(local_78._4_4_,uVar6);
      local_80 = CONCAT44(uVar5,uVar4);
      uVar4 = FUN_038cd970(puVar1[7]);
      uVar5 = FUN_038cd970(puVar1[8]);
      uVar6 = FUN_038cd970(puVar1[9]);
      local_78 = CONCAT44(uVar4,(undefined4)local_78);
      uStack_70 = CONCAT44(uVar6,uVar5);
      local_68 = FUN_038cd970(puVar1[10]);
      local_64 = CONCAT11(*(char *)((long)puVar1 + 0x2d) == '\x01',*(char *)(puVar1 + 0xb) == '\x01'
                         );
      lStack_98 = (long)puVar1 + 0x2e;
      local_a0 = puVar2;
      FUN_03bd0800(*(undefined8 *)(param_1 + 8),&local_a0,&local_90,param_3);
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar8 != 0);
  }
  return;
}

