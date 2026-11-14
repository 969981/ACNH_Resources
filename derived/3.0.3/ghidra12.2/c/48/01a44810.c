
void FUN_01a44810(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar3 = PTR_DAT_04bb37e0;
  lVar9 = 0;
  puVar10 = &DAT_052e0120;
  do {
    local_68 = (undefined2)lVar9;
    local_66 = 0;
    local_64 = 0;
    FUN_0277d4ac(&local_68);
    lVar11 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar4 == 0) {
LAB_01a44870:
      puVar8 = puVar3 + 3;
      puVar6 = puVar3 + 2;
      *puVar10 = *(undefined2 *)puVar3;
      puVar7 = (undefined4 *)(puVar3 + 4);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01a44870;
      *puVar10 = local_68;
      puVar6 = (undefined1 *)((ulong)&local_68 | 2);
      puVar7 = &local_64;
      puVar8 = (undefined1 *)((ulong)&local_68 | 3);
    }
    lVar9 = lVar9 + 1;
    uVar2 = *puVar8;
    *(undefined1 *)(puVar10 + 1) = *puVar6;
    uVar1 = *puVar7;
    *(undefined1 *)((long)puVar10 + 3) = uVar2;
    *(undefined4 *)(puVar10 + 2) = uVar1;
    puVar10 = puVar10 + 4;
    if (lVar9 == 15000) {
      return;
    }
  } while( true );
}

