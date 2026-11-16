
void FUN_027dc460(long param_1,ushort *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  undefined *local_70;
  char *pcStack_68;
  
  puVar7 = PTR_DAT_04bc2a20;
  puVar6 = PTR_DAT_04bc27f0;
  if (param_2 != (ushort *)0x0) {
    iVar9 = 0;
    iVar13 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      pbVar12 = (byte *)(param_1 + (long)iVar13 * 0x13230);
      bVar4 = *pbVar12;
      uVar11 = (ulong)bVar4;
      if ((((uVar11 < 0x23) && (bVar5 = pbVar12[1], bVar5 <= (byte)puVar6[uVar11])) &&
          ((*(uint *)(puVar7 + uVar11 * 4) >> (ulong)(bVar5 & 0x1f) & 1) != 0)) &&
         (CONCAT11(bVar4,bVar5) != (ushort)(*param_2 >> 8 | *param_2 << 8))) {
        lVar3 = param_1 + (long)iVar13 * 0x13230 + 0x1267c;
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar8 = FUN_02749340(lVar3,&local_70);
        if (iVar8 == 0) {
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "MoveInOrder";
          local_70 = puVar2;
          iVar8 = FUN_02749340(lVar3,&local_70);
          if (iVar9 < iVar8) {
            pcStack_68 = "MoveInOrder";
            local_70 = puVar2;
            iVar9 = FUN_02749340(lVar3,&local_70);
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 10);
    uVar10 = FUN_021d7d60(param_2);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInOrder";
    FUN_02749650(param_2 + 0x933e,uVar10,&local_70,iVar9 + 1,0);
  }
  return;
}

