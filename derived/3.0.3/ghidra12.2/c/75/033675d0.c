
void FUN_033675d0(byte *param_1)

{
  uint uVar1;
  undefined2 *__src;
  uint uVar2;
  long lVar3;
  short *psVar4;
  ulong __n;
  undefined **local_4b0;
  undefined2 *puStack_4a8;
  undefined4 local_4a0;
  undefined2 local_49c [499];
  undefined2 local_b6;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  byte *pbStack_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 local_78;
  byte *pbStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  
  lVar3 = DAT_05355a60;
  if (((DAT_05355a60 != 0) && (*(int *)(DAT_05355a60 + 0x38) == 0)) &&
     (__src = (undefined2 *)FUN_032fc1e0(DAT_05355a60), __src != (undefined2 *)0x0)) {
    uVar1 = *(uint *)(lVar3 + 0x3c);
    local_b6 = 0;
    local_49c[0] = 0;
    local_4a0 = 500;
    local_4b0 = &PTR_LAB_0493a2e8;
    puStack_4a8 = local_49c;
    if (local_49c != __src) {
      lVar3 = 0;
      psVar4 = __src + 1;
      do {
        if (psVar4[-1] == 0) goto LAB_033676bc;
        if (*psVar4 == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_033676bc;
        }
        if (psVar4[1] == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_033676bc;
        }
        lVar3 = lVar3 + 3;
        psVar4 = psVar4 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_033676bc:
      uVar2 = (uint)lVar3;
      if (0x1f2 < (int)uVar2) {
        uVar2 = 499;
      }
      __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(local_49c,__src,__n);
      *(undefined2 *)((long)local_49c + __n) = 0;
    }
    FUN_006f5580(param_1 + 0x68,&local_4b0);
    if (*(long *)(param_1 + 0x58) == 0) {
      param_1[0x10] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *param_1 = (ulong)uVar1 < 0x2f & (byte)(0x420c00008003 >> ((ulong)uVar1 & 0x3f));
      *(byte **)(param_1 + 8) = param_1 + 0x68;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      local_b0 = 1;
      *(byte **)(param_1 + 0x30) = param_1;
      *(code **)(param_1 + 0x38) = FUN_01be0a04;
      if (*(long *)(DAT_0533ec08 + 0x8820) != 0) {
        pbStack_70 = param_1 + 0x28;
        local_88 = 1;
        local_90 = PTR_DAT_04bb5070 + 0x10;
        local_50 = PTR_DAT_04bb2020 + 0x10;
        local_80 = 0;
        local_86 = 1;
        pbStack_98 = param_1 + 0x48;
        local_78 = *(undefined8 *)(DAT_0533ec08 + 0x8808);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_48 = PTR_DAT_04bb2120;
        local_a8 = 0;
        local_a0 = &local_90;
        FUN_03f45184(*(long *)(DAT_0533ec08 + 0x8820),&local_a8);
      }
    }
  }
  return;
}

