
void FUN_002f8690(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int local_44;
  
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  lVar10 = *(long *)PTR_DAT_04bcb8b8;
  if (*(undefined8 **)(param_1 + 0xb0) != puVar1) {
    puVar7 = *(undefined8 **)(param_1 + 0xb0);
    do {
      iVar3 = *(int *)(param_1 + 0xd4);
      puVar9 = (undefined8 *)puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      FUN_002236e0(param_1 + 0xc0,param_1 + 0xc0,(long)iVar3 + (long)puVar7);
      puVar7 = puVar9;
    } while (puVar9 != puVar1);
  }
  FUN_002236b0(puVar1);
  lVar4 = FUN_0026c89c(DAT_04c603c8);
  lVar11 = *(long *)(lVar4 + 8);
  uVar8 = *(undefined8 *)(lVar10 + 0xb8);
  if (lVar11 != lVar4) {
    do {
      uVar5 = FUN_00291da0(uVar8,*(undefined8 *)(lVar11 + 0x10));
      if ((((uVar5 & 1) != 0) &&
          (uVar5 = FUN_00292560(uVar8,*(undefined8 *)(lVar11 + 0x10),&local_44), (uVar5 & 1) != 0))
         && (local_44 == *(int *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x162) * 4 + 0x180) &&
             *(int *)(param_1 + 0xd0) != 0)) {
        lVar6 = FUN_002237a8(param_1 + 0xc0);
        lVar2 = 0;
        if (lVar6 != 0) {
          lVar2 = lVar6 - *(int *)(param_1 + 0xd4);
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_002236bc(puVar1,puVar1,lVar2);
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar4);
    uVar8 = *(undefined8 *)(lVar10 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0xf4) = 1;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar10 + 0xf0);
  *(undefined4 *)(param_1 + 0xf0) =
       *(undefined4 *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x162) * 4 + 0x180);
  FUN_00292000(uVar8);
  return;
}

