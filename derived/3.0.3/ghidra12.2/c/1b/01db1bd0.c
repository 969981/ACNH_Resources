
void FUN_01db1bd0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  long *plVar13;
  uint *puVar14;
  char local_70 [4];
  int local_6c;
  byte local_67;
  undefined4 local_64;
  
  puVar7 = PTR_DAT_04bc10a8;
  puVar12 = *(uint **)(param_1 + 8);
  local_67 = 0xff;
  lVar9 = FUN_01cab720(*(undefined8 *)PTR_DAT_04bc10a8,2);
  puVar8 = PTR_DAT_04bc1408;
  puVar6 = PTR_DAT_04bb5018;
  puVar5 = PTR_DAT_04bb21d0;
  while (lVar9 != 0) {
    FUN_01cab920(*(undefined8 *)puVar7,puVar12,&local_6c,0x19000,2);
    lVar9 = *(long *)puVar5;
    pcVar1 = (char *)(*(long *)(lVar9 + 0xf88) + (ulong)local_67 * 0x20 + 0x28);
    if (7 < local_67) {
      pcVar1 = puVar6;
    }
    puVar14 = (uint *)(param_1 + (long)*pcVar1 * 4 + 0x14);
    uVar4 = *puVar14;
    if ((int)uVar4 < 0) {
      if (local_6c == 0xc) {
        uVar4 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar14 = uVar4;
        if ((uVar4 < *(uint *)puVar8) &&
           (plVar13 = *(long **)(*(long *)(puVar8 + 8) + (long)(int)uVar4 * 8),
           plVar13 != (long *)0x0)) {
          if ((plVar13[4] != 0) &&
             (((*(uint *)(plVar13 + 5) < uVar2 && (local_64 = 0x12, *(int *)(lVar9 + 0x38) != 0)) &&
              (*(char *)(lVar9 + 0xfd8) == '\0')))) {
            plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
            uVar11 = (**(code **)(*plVar10 + 0x10))();
            if (((uVar11 & 1) == 0) &&
               (uVar11 = (**(code **)(*plVar10 + 0x18))(), (uVar11 & 1) == 0)) {
              FUN_0387de70(plVar10,&DAT_05b03f00,0xe,0x14,0x12);
            }
          }
          *(uint *)((long)plVar13 + 0x2c) = uVar2;
          *(undefined4 *)(plVar13 + 6) = 0;
          *(uint *)(plVar13 + 7) = uVar3;
          (**(code **)(*plVar13 + 0x30))(plVar13);
          *(undefined1 *)((long)plVar13 + 0x41) = 1;
        }
      }
    }
    else if (((*(uint *)puVar8 <= uVar4) ||
             (lVar9 = *(long *)(*(long *)(puVar8 + 8) + (ulong)uVar4 * 8), lVar9 == 0)) ||
            (local_70[0] = *pcVar1, FUN_01d7f8f4(lVar9,local_70,puVar12,local_6c),
            *(char *)(lVar9 + 0x41) == '\0')) {
      *puVar14 = 0xffffffff;
    }
    lVar9 = FUN_01cab720(*(undefined8 *)puVar7,2);
  }
  return;
}

