
void FUN_01786810(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0)) {
        local_38 = lVar12;
      }
    }
  }
  uVar4 = FUN_01b020f0(&local_48);
  puVar3 = PTR_DAT_04bb5c60;
  puVar2 = PTR_DAT_04bb5c58;
  if (uVar4 != 0xffff) {
    lVar12 = *(long *)PTR_DAT_04bb46d0;
    uVar5 = (uint)uVar4 - (uint)*(ushort *)(lVar12 + 0x200);
    if ((uVar5 < *(uint *)(lVar12 + 0x1e0)) &&
       (puVar6 = *(uint **)(*(long *)(lVar12 + 0x1e8) + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0
       )) {
      if (*puVar6 != 0) {
        cVar7 = *PTR_DAT_04bb5c58;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x2c);
            if (-1 < (int)uVar5) {
              pcVar9 = (char *)((ulong)uVar5 + (long)puVar6);
              goto LAB_017869f8;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          pcVar9 = (char *)0x0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_017869f8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
          pcVar9 = (char *)0x0;
          if (uVar8 == 0) goto LAB_017869f8;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != 0x4b9c4229) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              pcVar9 = (char *)0x0;
              goto LAB_017869f8;
            }
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar3 + 0x2c) = iVar1;
        } while (*puVar6 != 0);
      }
      pcVar9 = (char *)0x0;
LAB_017869f8:
      pcStack_50 = *(char **)PTR_PTR_04bb5c50;
      if (pcVar9 != (char *)0x0) {
        pcStack_50 = pcVar9;
      }
      if ((pcStack_50 != (char *)0x0) && (local_58 = PTR_DAT_04bb2020 + 0x10, *pcStack_50 != '\0'))
      {
        FUN_0074ed40(param_2,&DAT_0528c830,0);
        FUN_0074ed40(param_2,&DAT_0528cfd0,0);
        FUN_0074ed40(param_2,&local_58,0);
        FUN_0074ed40(param_2,&DAT_0528c980,0);
      }
    }
  }
  return;
}

