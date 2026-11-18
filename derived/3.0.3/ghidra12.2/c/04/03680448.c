
void FUN_03680448(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  void *__src;
  size_t __n;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined *local_50;
  undefined *puStack_48;
  
  if ((*(long *)(param_1 + 0x1e8) == 0 && *(char *)(param_1 + 0x1f0) == '\0') &&
     (**(char **)(param_1 + 8) != '\0')) {
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      puVar2 = PTR_DAT_04bdf090;
      *(undefined1 *)(param_1 + 0xb0) = 0x22;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(long *)(param_1 + 0xd8) = param_1 + 0xd8;
      *(long *)(param_1 + 0xe0) = param_1 + 0xd8;
      *(undefined **)(param_1 + 0x98) = puVar2 + 0x10;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(long *)(param_1 + 0xf8) = param_1 + 0xf0;
      *(undefined8 *)(param_1 + 0x100) = 0xffffffff00000000;
      *(undefined8 *)(param_1 + 0xe8) = 0xffffffff00000000;
      *(long *)(param_1 + 0xf0) = param_1 + 0xf0;
      FUN_038e18e4(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      local_a0 = PTR_DAT_04bb2120;
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      *(undefined4 *)(param_1 + 0xec) = 0x98;
      *(undefined4 *)(param_1 + 0x104) = 0xa8;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined2 *)(param_1 + 0x1a0) = 0;
      *(undefined1 *)(param_1 + 0x1a3) = 0;
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      local_b8 = (undefined *)CONCAT53(local_b8._3_5_,1);
      local_b8 = (undefined *)CONCAT44(8,(undefined4)local_b8);
      uStack_80 = 1;
      uStack_7e = 0;
      uStack_6c = 0;
      local_78 = 0;
      uStack_74 = 0;
      *(undefined **)(param_1 + 0x188) = local_a8;
      *(undefined **)(param_1 + 400) = local_a0;
      local_98 = 0;
      local_94 = 0;
      local_70 = 0x100;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = SUB84(param_2,0);
      local_84 = (undefined4)((ulong)param_2 >> 0x20);
      local_b0 = 0x102800;
      FUN_03f2ab60(param_1 + 0x98,&local_b8);
    }
    lVar6 = param_1 + 0x1b0;
    if ((*(byte *)(param_1 + 0x1b8) >> 1 & 1) == 0) {
      local_b0 = CONCAT44(local_b0._4_4_,1);
      local_98 = 0x1010100;
      uStack_90 = CONCAT31(uStack_90._1_3_,1);
      local_94 = 0x1010100;
      uStack_74 = 0;
      uStack_68 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      uStack_7d = 0;
      local_a0 = PTR_DAT_04bb2120;
      local_b8 = PTR_DAT_04bdf0b0 + 0x10;
      uStack_7c = 0;
      local_78 = 0;
      local_64 = 0;
      local_5c = 0;
      local_54 = 0;
      puStack_48 = PTR_DAT_04bb2120;
      lVar1 = 0;
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        lVar1 = param_1 + 0x98;
      }
      local_70 = (undefined2)lVar1;
      uStack_6e = (undefined2)((ulong)lVar1 >> 0x10);
      uStack_6c = (undefined4)((ulong)lVar1 >> 0x20);
      uVar3 = *(undefined8 *)PTR_DAT_04bb49b8;
      *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xf0 | 2;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      local_50 = local_a8;
      FUN_03f33f70(uVar3,lVar6,param_1,&local_b8);
    }
    else {
      uVar4 = FUN_03f2e0c0(lVar6);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_03f2eb0c(lVar6);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_03f2d924(lVar6);
          if ((uVar4 & 1) != 0) {
            FUN_03f2e80c(lVar6);
            uVar3 = FUN_03680708(lVar6);
            *(undefined8 *)(param_1 + 0x1e8) = uVar3;
            FUN_0368079c(param_1);
            puVar5 = (undefined8 *)FUN_038aa4a0(0x18,param_2,8);
            lVar6 = *(long *)(param_1 + 0x1e8);
            if (lVar6 == 0) {
              __src = (void *)0x0;
              __n = 0;
            }
            else {
              __src = *(void **)(lVar6 + 8);
              __n = (size_t)*(uint *)(lVar6 + 0x10);
            }
            __dest = (void *)(**(code **)(*param_2 + 0x30))(param_2,__n,8);
            puVar5[2] = param_2;
            *puVar5 = __dest;
            puVar5[1] = __n;
            memcpy(__dest,__src,__n);
            FUN_03680808(param_1 + 0x1f8,puVar5);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1f0) = 1;
        }
      }
      else {
        FUN_03f2dedc(lVar6,0);
      }
    }
  }
  return;
}

