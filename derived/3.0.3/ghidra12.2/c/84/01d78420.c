
void FUN_01d78420(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long local_150;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined1 auStack_52 [2];
  undefined8 local_50;
  undefined1 local_48;
  undefined2 local_46;
  
  *param_2 = 0;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  local_138 = 0xb;
  local_134 = 0;
  puStack_140 = &local_68;
  local_120 = 0xffffffff;
  puStack_110 = local_104;
  local_108 = 0x40;
  local_c5 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = 0x40;
  local_6d = 0;
  local_ac[0] = 0;
  puStack_b8 = local_ac;
  uStack_58 = 0;
  local_148 = PTR_DAT_04bb5128 + 0x10;
  puVar2 = auStack_52;
  if (auStack_52 <= (undefined1 *)((long)&local_68 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_68 + 2U);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_5a = 0;
  local_c0 = local_118;
  memset(puStack_140,0,(ulong)(puVar2 + (-0xe1 - (long)&local_148)) & 0xfffffffffffffffc | 2);
  local_50 = 0;
  local_48 = 0;
  local_46 = *(undefined2 *)PTR_DAT_04bb3170;
  iVar4 = FUN_01d778dc(param_1,&local_150);
  if (iVar4 == 0) {
    lVar6 = *(long *)(DAT_0538adc8 + 0x270);
    if (lVar6 == 0) {
      bVar8 = false;
    }
    else {
      uVar7 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar5 = 0;
      if (1 < *(uint *)(lVar6 + 0x10)) {
        uVar7 = 0;
      }
      lVar6 = *(long *)(lVar6 + uVar7 * 8);
      do {
        bVar3 = (*(uint *)(lVar6 + 0x28) & ((int)*(uint *)(lVar6 + 0x28) >> 0x1f ^ 0xffffffffU)) ==
                uVar5;
        bVar8 = !bVar3;
        if (bVar3) break;
        uVar1 = uVar5;
        if (*(uint *)(lVar6 + 0x10) <= uVar5) {
          uVar1 = 0;
        }
        uVar5 = uVar5 + 1;
      } while (*(long *)(*(long *)(lVar6 + 0x18) + (ulong)uVar1 * 0x58) != local_150);
    }
    *param_2 = bVar8;
  }
  return;
}

