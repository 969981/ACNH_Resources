
void FUN_02b83270(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x550) == 0x1f) {
    uVar7 = FUN_02b935d0();
    *(undefined2 *)(param_1 + 0xca2) = uVar7;
    uVar7 = FUN_02b93730();
    *(undefined2 *)(param_1 + 0xca4) = uVar7;
    uVar7 = FUN_02b93890();
    *(undefined2 *)(param_1 + 0xca6) = uVar7;
    FUN_02b939f0(&local_8);
    *(undefined4 *)(param_1 + 0xca8) = local_8;
    *(undefined4 *)(param_1 + 0xcac) = uStack_4;
    puVar6 = PTR_DAT_04bb5be8;
    puVar5 = PTR_DAT_04bb5be0;
    lVar8 = *(long *)PTR_DAT_04bb5008;
    uVar3 = (uint)*(ushort *)(param_1 + 0xca2) - (uint)*(ushort *)(lVar8 + 0x9f0);
    if ((uVar3 < *(uint *)(lVar8 + 0x9d0)) &&
       (puVar9 = *(uint **)(*(long *)(lVar8 + 0x9d8) + (long)(int)uVar3 * 8), puVar9 != (uint *)0x0)
       ) {
      uVar3 = *puVar9;
      if (uVar3 != 0) {
        cVar10 = *PTR_DAT_04bb5be0;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar3 = *puVar9;
          }
          else {
            uVar2 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar2) {
              if ((undefined2 *)((ulong)uVar2 + (long)puVar9) != (undefined2 *)0x0) {
                uVar7 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
                goto LAB_02b833dc;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar4 = (uint *)(ulong)uVar3;
          uVar7 = 0;
          if ((puVar4 == (uint *)0x0) || (uVar7 = 0, puVar9 == puVar4)) goto LAB_02b833dc;
          lVar8 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar4)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar9 + (lVar8 - (long)puVar4);
          uVar7 = 0;
          if (lVar8 == 0) goto LAB_02b833dc;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar4));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar8 + 4);
          while (piVar12[-1] != -0x490afe2e) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_02b833d8;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0xc) = iVar1;
          uVar3 = *puVar9;
          if (uVar3 == 0) break;
        } while( true );
      }
LAB_02b833d8:
      uVar7 = 0;
LAB_02b833dc:
      *(undefined2 *)(param_1 + 0xca0) = uVar7;
    }
  }
  return;
}

