
void FUN_002f22d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  puVar1 = PTR_DAT_04bcb8b8;
  lVar7 = *(long *)PTR_DAT_04bcb8b8;
  if (*(int *)(lVar7 + (ulong)(*(char *)(lVar7 + 0x162) == '\0') * 4 + 0x180) != 0) {
code_r0x002f230c:
    *(undefined1 **)(param_1 + 0x30) = &LAB_00296be0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveSessionJob::LeaveBufferMatchmakeSession";
    return;
  }
  plVar9 = *(long **)(lVar7 + 8);
  if ((plVar9 != (long *)0x0) &&
     (iVar3 = FUN_002e9ad8(plVar9), puVar2 = PTR_DAT_04bcb8d8, iVar3 != 0)) {
    uVar10 = 0;
    do {
      iVar3 = FUN_002e9ab0(plVar9,uVar10);
      if (iVar3 != 0) {
        uVar5 = FUN_002bf8c0(*(undefined8 *)puVar2);
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar3,uVar5);
        if ((uVar6 & 1) == 0) {
          FUN_002e9860(plVar9,iVar3);
        }
        else {
          lVar7 = *(long *)puVar1;
          if (iVar3 != *(int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180)) {
            FUN_0029dbe8(lVar7,iVar3);
            goto code_r0x002f230c;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar4 = FUN_002e9ad8(plVar9);
    } while (uVar10 < uVar4);
  }
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  return;
}

