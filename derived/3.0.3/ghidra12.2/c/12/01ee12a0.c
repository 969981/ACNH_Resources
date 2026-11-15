
void FUN_01ee12a0(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *local_b8;
  ushort *puStack_b0;
  undefined8 *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  long lStack_68;
  undefined4 local_44;
  
  lVar10 = *param_1;
  lVar12 = param_1[2];
  memset((void *)(lVar10 + 0x52e8),2,0x20d);
  memset(*(void **)(lVar10 + 0x5508),0,(long)*(int *)(lVar10 + 0x5504) << 2);
  *(undefined4 *)(lVar10 + 0x5510) = 0;
  FUN_035a4230(lVar10);
  local_a8 = &local_70;
  puStack_a0 = PTR_DAT_04bbc1a0 + 0x10;
  puVar11 = (ushort *)*param_1;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_70 = *(undefined8 *)param_1[1];
  uStack_90 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_68 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_b8 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
  uVar9 = *(ulong *)(puVar11 + 0xc);
  puStack_b0 = puVar11;
  local_88 = local_98;
  if (uVar9 != 0) {
    uVar4 = *puVar11;
    uVar13 = 0;
    iVar3 = *(int *)(puVar11 + 6);
    uVar15 = (uint)puVar11[1];
    uVar16 = (uint)uVar4;
    do {
      iVar5 = uVar16 - *puVar11;
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar11 + 6))) &&
          (iVar6 = uVar15 - puVar11[1], -1 < iVar6)) &&
         ((iVar6 < *(int *)(puVar11 + 8) && (*(long *)(puVar11 + 0x10) != 0)))) {
        (*(code *)*local_b8)
                  (&local_b8,
                   *(long *)(puVar11 + 0x10) + (long)(iVar5 + *(int *)(puVar11 + 6) * iVar6) * 0x28)
        ;
        uVar9 = *(ulong *)(puVar11 + 0xc);
      }
      uVar13 = uVar13 + 1;
      bVar7 = uVar16 + 1 == iVar3 + (uint)uVar4;
      if (bVar7) {
        uVar15 = uVar15 + 1;
      }
      uVar14 = (uint)uVar4;
      if (!bVar7) {
        uVar14 = uVar16 + 1;
      }
      uVar16 = uVar14;
    } while (uVar13 < uVar9);
    puVar11 = (ushort *)*param_1;
  }
  FUN_035a56c0(puVar11,0);
  local_44 = *(undefined4 *)(*(long *)(lVar12 + 8) + 0x230);
  FUN_02146570(*param_1,&local_44,PTR_DAT_04bb3238,0);
  lVar10 = *param_1;
  uVar1 = *(undefined4 *)(param_1[3] + 8);
  uVar2 = *(undefined4 *)(param_1[3] + 0xc);
  *(undefined1 *)(lVar10 + 0x48) = 1;
  FUN_035a8968(lVar10,uVar1,uVar2);
  FUN_035a81f0(lVar10,uVar1,uVar2,0);
  *(undefined1 *)(lVar10 + 0x48) = 0;
  puVar8 = (undefined2 *)*param_1;
  FUN_035ac520(puVar8,puVar8 + 0x2974,puVar8 + 0x2a7c,puVar8,0,0,*puVar8,puVar8[1],0x19,0x15);
  return;
}

