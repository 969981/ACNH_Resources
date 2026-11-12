
void FUN_00ad4d80(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 local_14;
  
  lVar6 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar5 = (uint *)FUN_00ad5fc0(lVar6 + 0x1960,&local_14);
  puVar4 = PTR_DAT_04bb6428;
  puVar3 = PTR_DAT_04bb6420;
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar7 = *PTR_DAT_04bb6420;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 0x20);
          if (-1 < (int)uVar1) {
            if ((ushort *)((ulong)uVar1 + (long)puVar5) != (ushort *)0x0) {
              uVar9 = (ulong)*(ushort *)((ulong)uVar1 + (long)puVar5);
              goto LAB_00ad4ee0;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        uVar9 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_00ad4ee0;
        lVar6 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar5 + (lVar6 - (long)puVar10);
        if (lVar6 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
        uVar9 = 0;
        if (uVar8 == 0) goto LAB_00ad4ee0;
        piVar11 = (int *)(lVar6 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar9 = 0;
            goto LAB_00ad4ee0;
          }
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar4 + 0x20) = iVar2;
      } while (*puVar5 != 0);
    }
    uVar9 = 0;
LAB_00ad4ee0:
    piVar11 = (int *)(param_1 + uVar9 * 4 + 0x8000);
    iVar2 = *piVar11;
    if (0 < iVar2) {
      *piVar11 = iVar2 + -1;
    }
  }
  return;
}

