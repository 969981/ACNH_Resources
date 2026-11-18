
void FUN_032356b0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  undefined *local_40;
  long lStack_38;
  byte local_14 [4];
  
  local_14[0] = *(byte *)(param_1 + 0x1f8);
  uVar3 = *(undefined4 *)(param_1 + 0x220);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  local_40 = (undefined *)CONCAT71(local_40._1_7_,local_14[0]);
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x18358) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18358), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    puVar9 = (uint *)FUN_027a0fc0(*(long *)(lVar7 + 0x18340) + *(long *)(lVar7 + 0x18338),uVar3);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18358) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18358) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    puVar5 = PTR_DAT_04bb6428;
    puVar4 = PTR_DAT_04bb6420;
    if (puVar9 != (uint *)0x0) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bb6420;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar5 + 0x3c);
            if (-1 < (int)uVar6) {
              lVar7 = (ulong)uVar6 + (long)puVar9;
              goto LAB_03235848;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar9;
          lVar7 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_03235848;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar7 - (long)puVar12);
          if (lVar1 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
          lVar7 = 0;
          if (uVar11 == 0) goto LAB_03235848;
          piVar13 = (int *)(lVar1 + 4);
          while (piVar13[-1] != 0x45f320f2) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              lVar7 = 0;
              goto LAB_03235848;
            }
          }
          iVar2 = 0;
          if (*piVar13 != -1) {
            iVar2 = *piVar13;
          }
          *(int *)(puVar5 + 0x3c) = iVar2;
        } while (*puVar9 != 0);
      }
      lVar7 = 0;
LAB_03235848:
      lStack_38 = *(long *)PTR_PTR_04bb6418;
      if (lVar7 != 0) {
        lStack_38 = lVar7;
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      FUN_0279fd9c(local_14,&local_40);
    }
  }
  return;
}

