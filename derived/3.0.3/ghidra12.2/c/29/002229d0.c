
void FUN_002229d0(long param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_1 + 0x88;
  puVar2 = (ulong *)(lVar1 + ((ulong)*(byte *)((long)param_2 + 0xf) & 0xf) * 0x10);
  puVar3 = (ulong *)(lVar1 + ((ulong)*(byte *)((long)param_2 + 0xf) & 0xf0));
  uVar8 = *puVar2;
  uVar7 = puVar2[1];
  uVar6 = (ulong)*(uint *)(&DAT_0410d94c + (uVar7 & 0xf) * 4) << 0x20 ^ uVar8 >> 4 ^ *puVar3;
  uVar8 = puVar3[1] ^ (uVar7 >> 4 | uVar8 << 0x3c);
  *(ulong *)(param_1 + 0x58) = uVar6;
  *(ulong *)(param_1 + 0x60) = uVar8;
  lVar5 = 0xe;
  do {
    bVar4 = lVar5 != 0;
    puVar2 = (ulong *)(lVar1 + ((ulong)*(byte *)((long)param_2 + lVar5) & 0xf) * 0x10);
    puVar3 = (ulong *)(lVar1 + ((ulong)*(byte *)((long)param_2 + lVar5) & 0xf0));
    uVar9 = puVar2[1] ^ (uVar8 >> 4 | uVar6 << 0x3c);
    uVar7 = (ulong)*(uint *)(&DAT_0410d94c + (uVar8 & 0xf) * 4) << 0x20 ^ uVar6 >> 4 ^ *puVar2;
    uVar8 = puVar3[1] ^ (uVar9 >> 4 | uVar7 << 0x3c);
    uVar6 = (ulong)*(uint *)(&DAT_0410d94c + (uVar9 & 0xf) * 4) << 0x20 ^ uVar7 >> 4 ^ *puVar3;
    *(ulong *)(param_1 + 0x58) = uVar6;
    *(ulong *)(param_1 + 0x60) = uVar8;
    lVar5 = lVar5 + -1;
  } while (bVar4);
  uVar8 = *(ulong *)(param_1 + 0x58);
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar7 = (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  *param_2 = uVar8 >> 0x20 | uVar8 << 0x20;
  param_2[1] = uVar7 >> 0x20 | uVar7 << 0x20;
  return;
}

