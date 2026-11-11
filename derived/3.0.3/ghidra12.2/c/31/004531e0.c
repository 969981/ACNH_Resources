
void FUN_004531e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 ulong *param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar8 = param_5[2];
  lVar10 = 7 - uVar8;
  puVar9 = (undefined1 *)param_5[1];
  puVar1 = (undefined1 *)((lVar10 + *param_5 & 0xfffffffffffffff8) + uVar8);
  puVar11 = puVar1 + 0x10;
  *param_5 = (ulong)puVar11;
  if (puVar9 < puVar11) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_78);
    puVar9 = (undefined1 *)param_5[1];
    uVar8 = param_5[2];
    puVar11 = (undefined1 *)*param_5;
    lVar10 = 7 - uVar8;
  }
  lVar10 = ((ulong)(puVar11 + lVar10) & 0xfffffffffffffff8) + uVar8;
  puVar11 = (undefined1 *)(lVar10 + (long)*(int *)(param_1 + 5) * 0x10);
  *param_5 = (ulong)puVar11;
  if (puVar9 < puVar11) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_78);
  }
  *puVar1 = (char)*(undefined4 *)(param_1 + 5);
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  if (0 < *(int *)(param_1 + 5)) {
    lVar13 = 0;
    puVar14 = (ushort *)(lVar10 + 8);
    do {
      uVar12 = *(undefined8 *)(param_1[4] + lVar13 * 8);
      iVar7 = FUN_00427030(uVar12);
      if ((int)(uint)(byte)puVar1[1] < iVar7) {
        uVar3 = FUN_00427030(uVar12);
        puVar1[1] = uVar3;
      }
      sVar6 = *(short *)(puVar1 + 2);
      sVar4 = FUN_00427030(uVar12);
      sVar5 = FUN_00427030(uVar12);
      uVar2 = (sVar4 + sVar6) - 1U & -sVar5;
      *puVar14 = uVar2;
      *(undefined8 *)(puVar14 + -4) = uVar12;
      sVar6 = FUN_00426fc0(uVar12);
      *(ushort *)(puVar1 + 2) = sVar6 + uVar2;
      lVar13 = lVar13 + 1;
      puVar14 = puVar14 + 8;
    } while (lVar13 < *(int *)(param_1 + 5));
  }
  uVar12 = param_1[2];
  *param_4 = param_1[1];
  param_4[1] = uVar12;
  param_4[2] = puVar1;
  param_4[3] = param_3;
  param_4[5] = *param_1;
  return;
}

