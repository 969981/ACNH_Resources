
void FUN_02812a44(long param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = (uint *)(param_1 + 0x305b8);
  if (*(char *)((long)param_2 + 0x2e) == '\0') {
    bVar5 = false;
    lVar9 = *param_2;
  }
  else {
    iVar12 = *param_3;
    iVar6 = FUN_0252d29c();
    bVar5 = iVar12 == iVar6;
    lVar9 = *param_2;
  }
  if ((lVar9 != 0) || (bVar5)) {
    puVar2 = (uint *)(param_1 + 0x2d69c);
    uVar7 = *(uint *)(param_1 + 0x2d6a4);
    if ((*(byte *)(param_1 + 0x2d6ab) != 0 ||
         (((ulong)uVar7 != 0 || (ulong)*(ushort *)(param_1 + 0x2d6a8) != 0) ||
         *(byte *)(param_1 + 0x2d6aa) != 0)) &&
       (((uint)*(byte *)(param_1 + 0x2d6ab) ==
         ((uVar7 + (uVar7 >> 0x10) + (uVar7 >> 0x18) + (uVar7 >> 8)) - 0x2d & 0xff) &&
        (uVar10 = (ulong)uVar7 << ((ulong)(0x1d - *(byte *)(param_1 + 0x2d6aa)) & 0x3f),
        lVar9 = (uVar10 - *(ushort *)(param_1 + 0x2d6a8)) + (uVar10 >> 0x20) + 0x80e32b11,
        (int)lVar9 != 0)))) {
      uVar7 = *puVar2;
      iVar12 = 0;
      if ((*(byte *)(param_1 + 0x2d6a3) != 0 ||
           (((ulong)uVar7 != 0 || *(ushort *)(param_1 + 0x2d6a0) != 0) ||
           *(byte *)(param_1 + 0x2d6a2) != 0)) &&
         ((uint)*(byte *)(param_1 + 0x2d6a3) ==
          ((uVar7 + (uVar7 >> 0x10) + (uVar7 >> 0x18) + (uVar7 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar7 << ((ulong)(0x1d - *(byte *)(param_1 + 0x2d6a2)) & 0x3f);
        iVar12 = ((int)lVar11 - (uint)*(ushort *)(param_1 + 0x2d6a0)) + -0x7f1cd4ef +
                 (int)((ulong)lVar11 >> 0x20);
      }
      FUN_0285dc20(puVar2,lVar9,999999999);
      uVar7 = nn::os::GetSystemTick();
      uVar3 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      iVar8 = 0;
      uVar7 = uVar3 ^ uVar3 * 0x800;
      uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
      uVar3 = uVar4 ^ uVar4 * 0x800;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
      uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
      *(short *)(param_1 + 0x2d6a8) = (short)(uVar7 >> 0x10);
      uVar10 = (ulong)(uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7) * 0x1b;
      *(char *)(param_1 + 0x2d6aa) = (char)(uVar10 >> 0x20);
      lVar9 = (ulong)((uVar7 >> 0x10) + 0x7f1cd4ef) << (uVar10 >> 0x20) + 3;
      iVar6 = (int)((ulong)lVar9 >> 0x20) + (int)lVar9;
      uVar7 = *puVar2;
      *(int *)(param_1 + 0x2d6a4) = iVar6;
      *(char *)(param_1 + 0x2d6ab) =
           (char)iVar6 + (char)((uint)iVar6 >> 0x10) + (char)((uint)iVar6 >> 0x18) +
           (char)((uint)iVar6 >> 8) + -0x2d;
      if ((*(byte *)(param_1 + 0x2d6a3) != 0 ||
           (((ulong)uVar7 != 0 || *(ushort *)(param_1 + 0x2d6a0) != 0) ||
           *(byte *)(param_1 + 0x2d6a2) != 0)) &&
         ((uint)*(byte *)(param_1 + 0x2d6a3) ==
          ((uVar7 + (uVar7 >> 0x10) + (uVar7 >> 0x18) + (uVar7 >> 8)) - 0x2d & 0xff))) {
        lVar9 = (ulong)uVar7 << ((ulong)(0x1d - *(byte *)(param_1 + 0x2d6a2)) & 0x3f);
        iVar8 = ((int)lVar9 - (uint)*(ushort *)(param_1 + 0x2d6a0)) + -0x7f1cd4ef +
                (int)((ulong)lVar9 >> 0x20);
      }
      FUN_0285dc20(puVar1,iVar8 - iVar12,999999999);
      uVar7 = *puVar1;
      if (((*(byte *)(param_1 + 0x305bf) != 0 ||
            (((ulong)uVar7 != 0 || *(ushort *)(param_1 + 0x305bc) != 0) ||
            *(byte *)(param_1 + 0x305be) != 0)) &&
          ((uint)*(byte *)(param_1 + 0x305bf) ==
           ((uVar7 + (uVar7 >> 0x10) + (uVar7 >> 0x18) + (uVar7 >> 8)) - 0x2d & 0xff))) &&
         (lVar9 = (ulong)uVar7 << ((ulong)(0x1d - *(byte *)(param_1 + 0x305be)) & 0x3f),
         ((int)lVar9 - (uint)*(ushort *)(param_1 + 0x305bc)) + -0x7f1cd4ef +
         (int)((ulong)lVar9 >> 0x20) != 0)) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "StandByPhoneCallPurchaseBox";
        FUN_0274d104(param_3,&local_60,1);
      }
    }
  }
  if (bVar5) {
    uVar7 = nn::os::GetSystemTick();
    local_60 = PTR_DAT_04bb2020;
    uVar3 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = uVar3 ^ uVar3 * 0x800;
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
    *(short *)(param_1 + 0x305bc) = (short)(uVar7 >> 0x10);
    uVar10 = (ulong)(uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7) * 0x1b;
    *(char *)(param_1 + 0x305be) = (char)(uVar10 >> 0x20);
    local_60 = local_60 + 0x10;
    lVar9 = (ulong)((uVar7 >> 0x10) + 0x7f1cd4ef) << (uVar10 >> 0x20) + 3;
    uVar7 = (int)((ulong)lVar9 >> 0x20) + (int)lVar9;
    *puVar1 = uVar7;
    *(char *)(param_1 + 0x305bf) =
         (char)uVar7 + (char)(uVar7 >> 0x10) + (char)(uVar7 >> 0x18) + (char)(uVar7 >> 8) + -0x2d;
    pcStack_58 = "StandByPhoneCallPurchaseBox";
    FUN_0274d104(param_3,&local_60,0);
  }
  return;
}

