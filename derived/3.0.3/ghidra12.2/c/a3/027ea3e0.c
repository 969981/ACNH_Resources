
void FUN_027ea3e0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  puVar4 = PTR_DAT_04bc2a20;
  puVar3 = PTR_DAT_04bc27f0;
  puVar2 = PTR_DAT_04bb5038;
  iVar8 = 0;
  iVar9 = 0;
  do {
    pbVar7 = (byte *)(param_1 + (long)iVar9 * 0x13230);
    uVar6 = (ulong)*pbVar7;
    if (((uVar6 < 0x23) && (bVar1 = pbVar7[1], bVar1 <= (byte)puVar3[uVar6])) &&
       ((*(uint *)(puVar4 + uVar6 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      FUN_02507c6c(local_6c,1,1,0,0);
      local_74 = local_68;
      local_78[0] = 0xff;
      if (local_6c[0] < 8) {
        local_78[0] = local_6c[0];
      }
      local_70 = local_64;
      if (local_6c[0] < 8) {
        FUN_020ec6c4(iVar8,local_78,1);
        while (local_78[0] < 8) {
          uVar6 = (ulong)local_78[0];
          do {
            if (uVar6 == 7) goto LAB_027ea440;
            uVar6 = uVar6 + 1;
            uVar5 = FUN_02507924(local_78,puVar2 + uVar6);
          } while ((uVar5 & 1) == 0);
          bVar1 = puVar2[uVar6];
          if (7 < bVar1) break;
          local_78[0] = bVar1;
          FUN_020ec6c4(iVar8,local_78,1);
        }
      }
    }
LAB_027ea440:
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 1;
    if (iVar8 == 10) {
      return;
    }
  } while( true );
}

