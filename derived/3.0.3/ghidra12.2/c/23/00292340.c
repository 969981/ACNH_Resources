
void FUN_00292340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long local_160 [32];
  
  puVar2 = PTR_DAT_04bcd350;
  puVar1 = PTR_DAT_04bc1510;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != param_1 + 8) {
    uVar7 = 0;
    lVar6 = *(long *)PTR_DAT_04bcb8b8;
    bVar9 = false;
    lVar12 = *(long *)(lVar6 + 0xf0);
    do {
      plVar3 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(lVar11 + 0x20));
      if (((lVar4 == 0) || (*(char *)(lVar11 + 0x18) == '\0')) ||
         (*(int *)(lVar4 + 0x4c) - 7U < 0xfffffffe)) {
        if (*(long *)(lVar11 + 0x20) == lVar12) {
          bVar9 = true;
          uVar5 = FUN_0026c89c(*(undefined8 *)puVar2);
          lVar4 = FUN_00260e70(uVar5,*(undefined8 *)(lVar11 + 0x20));
        }
        else {
          if (0x1e < uVar7) break;
          uVar10 = (ulong)uVar7;
          uVar7 = uVar7 + 1;
          local_160[uVar10] = *(long *)(lVar11 + 0x20);
          uVar5 = FUN_0026c89c(*(undefined8 *)puVar2);
          lVar4 = FUN_00260e70(uVar5,*(undefined8 *)(lVar11 + 0x20));
        }
        if ((lVar4 != 0) && (*(char *)(lVar4 + 8) == -3)) {
          *(undefined1 *)(lVar4 + 8) = *(undefined1 *)(lVar11 + 0x2d);
        }
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != param_1 + 8);
    uVar8 = uVar7;
    if (bVar9) {
      uVar8 = uVar7 + 1;
      local_160[uVar7] = lVar12;
    }
    if (uVar8 != 0) {
      uVar10 = (ulong)uVar8;
      plVar3 = local_160;
      do {
        FUN_0029a3e0(lVar6,*plVar3,0xfd,0);
        uVar10 = uVar10 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar10 != 0);
    }
  }
  return;
}

