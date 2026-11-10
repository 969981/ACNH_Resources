
void FUN_001570a8(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_2e8 [8];
  long alStack_2a8 [5];
  ulong auStack_280 [66];
  ulong local_70 [8];
  
  memset(auStack_280 + 2,0,0x200);
  memcpy(local_70,(void *)(param_1 + 8),0x40);
  lVar6 = 0;
  param_2 = param_2 + 3;
  do {
    puVar1 = (uint *)(param_2 + -3);
    param_2 = param_2 + 4;
    uVar5 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    *(ulong *)((long)auStack_280 + lVar6 + 0x10) = (ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x80);
  lVar6 = 0x80;
  uVar9 = auStack_280[2];
  do {
    lVar3 = lVar6 + 8;
    uVar11 = *(ulong *)((long)auStack_280 + lVar6);
    lVar4 = uVar9 + *(long *)((long)alStack_2a8 + lVar6);
    uVar9 = *(ulong *)((long)auStack_2e8 + lVar6);
    *(ulong *)((long)auStack_280 + lVar6 + 0x10) =
         lVar4 + (((ulong)(uint)((int)uVar11 << 0xd) | uVar11 >> 0x13 & 0x1fff) ^
                  (uVar11 & 0xffffffff) >> 10 ^
                 ((ulong)(uint)((int)uVar11 << 0xf) | uVar11 >> 0x11 & 0x7fff)) +
         (((ulong)(uint)((int)uVar9 << 0xe) | uVar9 >> 0x12 & 0x3fff) ^ (uVar9 & 0xffffffff) >> 3 ^
         ((ulong)(uint)((int)uVar9 << 0x19) | uVar9 >> 7 & 0x1ffffff));
    lVar6 = lVar3;
  } while (lVar3 != 0x200);
  lVar6 = 0;
  do {
    uVar10 = local_70[0];
    uVar8 = local_70[2];
    local_70[2] = local_70[1];
    uVar11 = local_70[5];
    uVar9 = local_70[6];
    local_70[5] = local_70[4];
    lVar3 = lVar6 + 0x10;
    iVar7 = (int)local_70[5];
    plVar2 = (long *)((long)&DAT_04102c20 + lVar6);
    lVar6 = lVar6 + 8;
    lVar3 = *plVar2 + local_70[7] + *(long *)((long)auStack_280 + lVar3) +
            (((ulong)(uint)(iVar7 << 0x1a) | local_70[5] >> 6 & 0x3ffffff) ^
             ((ulong)(uint)(iVar7 << 0x15) | local_70[5] >> 0xb & 0x1fffff) ^
            ((ulong)(uint)(iVar7 << 7) | local_70[5] >> 0x19 & 0x7f)) +
            (uVar11 & local_70[5] | uVar9 & (local_70[5] ^ 0xffffffffffffffff));
    local_70[4] = lVar3 + local_70[3];
    iVar7 = (int)uVar10;
    local_70[0] = lVar3 + ((local_70[2] | uVar10) & uVar8 | local_70[2] & uVar10) +
                          (((ulong)(uint)(iVar7 << 0x1e) | uVar10 >> 2 & 0x3fffffff) ^
                           ((ulong)(uint)(iVar7 << 0x13) | uVar10 >> 0xd & 0x7ffff) ^
                          ((ulong)(uint)(iVar7 << 10) | uVar10 >> 0x16 & 0x3ff));
    local_70[6] = uVar11;
    local_70[1] = uVar10;
    local_70[3] = uVar8;
    local_70[7] = uVar9;
  } while (lVar6 != 0x200);
  lVar6 = 0;
  do {
    *(long *)(param_1 + 8 + lVar6) =
         *(long *)((long)local_70 + lVar6) + *(long *)(param_1 + 8 + lVar6);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x40);
  return;
}

