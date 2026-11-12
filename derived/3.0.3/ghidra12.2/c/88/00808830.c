
void FUN_00808830(uint *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined *local_1a8;
  uint *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  uint local_174;
  undefined **local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50 [2];
  long local_48;
  
  if ((param_1 != (uint *)0x0) && (0xfffffffc < *(byte *)(param_2 + 0x69) - 0xc)) {
    param_1[2] = 0;
    param_1[3] = 0;
    local_ed = 0;
    local_160 = 0x20;
    puStack_138 = local_12c;
    local_130 = 0x40;
    local_140 = PTR_DAT_04bb2bc0 + 0x10;
    local_d8 = 0x40;
    puStack_e0 = local_d4;
    local_50[0] = 0x14;
    local_95 = 0;
    local_170 = &PTR_LAB_049173e0;
    puVar3 = local_50;
    if (local_50 <= (undefined4 *)((long)&local_90 + 2U)) {
      puVar3 = (undefined4 *)((long)&local_90 + 2U);
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puStack_168 = &local_90;
    local_e8 = local_140;
    local_48 = param_2;
    memset(&local_90,0,(long)puVar3 + (-0xe0 - (long)&local_170));
    memset(&local_90,0,((long)puVar3 + ~(ulong)&local_90 & 0xfffffffffffffffe) + 2);
    local_15c = 0;
    local_158 = 0xffffffff;
    uStack_150 = 0xffffffff00000000;
    local_148 = 0xffffffff;
    local_12c[0] = 0;
    local_d4[0] = 0;
    local_198 = 0;
    uStack_180 = CONCAT31(uStack_180._1_3_,1);
    local_17c = 0;
    local_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    local_184 = 0;
    local_1a8 = PTR_DAT_04bc0cd8 + 0x10;
    local_1a0 = (uint *)0x0;
    FUN_02906b00(&local_1a8,&local_170,local_50);
    local_1a0 = param_1 + 4;
    local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0x14);
    FUN_02906c90(&local_1a8,&local_170);
    FUN_00808d60(&local_1a8,param_2);
    *(undefined **)(param_1 + 0xe) = local_1a8;
    *(uint **)(param_1 + 0x10) = local_1a0;
    *(undefined8 *)(param_1 + 0x12) = local_198;
    *(undefined1 *)(param_1 + 0x14) = (undefined1)local_190;
    *(ulong *)(param_1 + 0x15) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)(param_1 + 0x17) = CONCAT44(uStack_180,local_184);
    *(ulong *)(param_1 + 0x19) = CONCAT44(uStack_178,local_17c);
    if (1 < local_174) {
      local_174 = 0;
    }
    param_1[0x1b] = local_174;
    *(byte *)(param_1 + 0x1c) = (byte)param_1[0x1c] | 8;
    uVar6 = FUN_00808f00(param_2);
    *(undefined1 *)((long)param_1 + 0x71) = uVar6;
    uVar7 = 0;
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x58) * 4);
    *(char *)(param_1 + 0x1e) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x79) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x7a) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x59) * 4);
    *(char *)((long)param_1 + 0x7b) = (char)((uint)uVar4 >> 0x18);
    *(char *)(param_1 + 0x1f) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x7d) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5a) * 4);
    *(char *)((long)param_1 + 0x7e) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x7f) = (char)((uint)uVar4 >> 0x10);
    *(char *)(param_1 + 0x20) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5b) * 4);
    *(char *)((long)param_1 + 0x81) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x82) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x83) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5c) * 4);
    *(char *)(param_1 + 0x21) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x85) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x86) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5d) * 4);
    *(char *)((long)param_1 + 0x87) = (char)((uint)uVar4 >> 0x18);
    *(char *)(param_1 + 0x22) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x89) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5e) * 4);
    *(char *)((long)param_1 + 0x8a) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x8b) = (char)((uint)uVar4 >> 0x10);
    *(char *)(param_1 + 0x23) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5f) * 4);
    *(char *)((long)param_1 + 0x8d) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x8e) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x8f) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x60) * 4);
    *(char *)(param_1 + 0x24) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x91) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x92) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x61) * 4);
    *(char *)((long)param_1 + 0x93) = (char)((uint)uVar4 >> 0x18);
    *(char *)(param_1 + 0x25) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x95) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x62) * 4);
    *(char *)((long)param_1 + 0x96) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x97) = (char)((uint)uVar4 >> 0x10);
    *(char *)(param_1 + 0x26) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 99) * 4);
    *(char *)((long)param_1 + 0x99) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x9a) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x9b) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 100) * 4);
    *(char *)(param_1 + 0x27) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0x9d) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0x9e) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x65) * 4);
    *(char *)((long)param_1 + 0x9f) = (char)((uint)uVar4 >> 0x18);
    *(char *)(param_1 + 0x28) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)param_1 + 0xa1) = (char)((uint)uVar4 >> 8);
    uVar4 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x66) * 4);
    *(char *)((long)param_1 + 0xa2) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)param_1 + 0xa3) = (char)((uint)uVar4 >> 0x10);
    *(char *)(param_1 + 0x29) = (char)((uint)uVar4 >> 8);
    do {
      uVar10 = 0;
      do {
        uVar1 = uVar10 >> 5;
        bVar5 = (uVar10 & 1) != 0;
        bVar8 = 0xf;
        if (bVar5) {
          bVar8 = 0xf0;
        }
        uVar12 = (ulong)((uVar10 & 0x1e | (int)uVar7 << 5) >> 1);
        bVar9 = 0xf0;
        if (bVar5) {
          bVar9 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)((long)param_1 + uVar12 + 0xa5) =
             bVar9 & *(byte *)((long)param_1 + uVar12 + 0xa5) |
             bVar8 & *(byte *)(param_2 + (ulong)(((uint)(uVar7 >> 4) & 0x7fffffe) + uVar1) * 0x200 +
                               uVar12 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar10;
    } while (uVar10 != 0x20);
    uVar7 = 0;
    uVar10 = 0;
    bVar5 = true;
    do {
      iVar11 = 0x20;
      uVar12 = uVar7;
      do {
        if ((((*(byte *)((long)param_1 + uVar12 + 0xa5) ^ 0xff) & 0xf) == 0) ||
           (0xef < *(byte *)((long)param_1 + uVar12 + 0xa5))) goto LAB_00808c9c;
        uVar12 = (ulong)((int)uVar12 + 1);
        iVar11 = iVar11 + -2;
      } while (iVar11 != 0);
      bVar5 = uVar10 < 0x1f;
      uVar10 = uVar10 + 1;
      uVar7 = (ulong)((int)uVar7 + 0x10);
    } while (uVar10 != 0x20);
LAB_00808c9c:
    *param_1 = 0;
    bVar8 = 2;
    if (!bVar5) {
      bVar8 = 0;
    }
    uVar7 = 0;
    *(byte *)(param_1 + 0x1c) = bVar8 | (byte)param_1[0x1c] & 0xfc;
    uVar10 = 0;
    do {
      piVar2 = (int *)((long)param_1 + uVar7);
      uVar7 = uVar7 + 4;
      uVar10 = (*piVar2 * 0x16a88000 | (uint)(*piVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
    } while (uVar7 < 0x2a5);
    uVar10 = (uVar10 ^ uVar10 >> 0x10 ^ 0x2a8) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    *param_1 = uVar10 ^ uVar10 >> 0x10;
  }
  return;
}

