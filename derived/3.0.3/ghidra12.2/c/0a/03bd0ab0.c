
undefined8 FUN_03bd0ab0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if (*param_2 != 'S') {
    return 0;
  }
  if (((param_2[1] == 'H') && (param_2[2] == 'S')) && (param_2[3] == 'T')) {
    if ((char)(*(ushort *)(param_2 + 4) >> 8) != -1) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 4) & 0xff) != 0xfe) {
      return 0;
    }
    sVar3 = FUN_038cd950(*(undefined2 *)(param_2 + 6));
    if (sVar3 == 2) {
      uVar4 = FUN_038cd970(*(undefined4 *)(param_2 + 8));
      if (0 < (int)uVar4) {
        uVar10 = (ulong)uVar4;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        pcVar11 = param_2 + 0x10;
        do {
          uVar8 = FUN_038cd970(*(undefined4 *)pcVar11);
          pcVar1 = param_2 + (uVar8 & 0xffffffff);
          local_68 = 0;
          local_90 = 0;
          local_64 = 0x101;
          local_62 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          local_80 = 0;
          uVar5 = FUN_038cd970(*(undefined4 *)pcVar1);
          local_90 = CONCAT44(local_90._4_4_,uVar5);
          uVar5 = FUN_038cd970(*(undefined4 *)(pcVar1 + 4));
          uVar6 = FUN_038cd970(*(undefined4 *)(pcVar1 + 8));
          uVar7 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0xc));
          local_90 = CONCAT44(uVar5,(undefined4)local_90);
          local_88 = CONCAT44(uVar7,uVar6);
          uVar5 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x10));
          uVar6 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x14));
          uVar7 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x18));
          local_78 = CONCAT44(local_78._4_4_,uVar7);
          local_80 = CONCAT44(uVar6,uVar5);
          uVar5 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x1c));
          uVar6 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x20));
          uVar7 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x24));
          local_78 = CONCAT44(uVar5,(undefined4)local_78);
          uStack_70 = CONCAT44(uVar7,uVar6);
          local_68 = FUN_038cd970(*(undefined4 *)(pcVar1 + 0x28));
          local_64 = CONCAT11(pcVar1[0x2d] == '\x01',pcVar1[0x2c] == '\x01');
          local_62 = pcVar1[0x2e] == '\x01';
          pcStack_98 = pcVar1 + 0x2f;
          local_a0 = puVar2;
          FUN_03bd0800(*(undefined8 *)(param_1 + 8),&local_a0,&local_90,param_3);
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar11 + 8;
        } while (uVar10 != 0);
        return 1;
      }
    }
    else {
      if (sVar3 != 1) goto LAB_03bd0b64;
      FUN_03bd0ce0(param_1,param_2,param_3);
    }
    uVar9 = 1;
  }
  else {
LAB_03bd0b64:
    uVar9 = 0;
  }
  return uVar9;
}

