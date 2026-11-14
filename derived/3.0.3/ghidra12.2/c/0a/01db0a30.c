
void FUN_01db0a30(long param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined4 local_6c;
  undefined1 local_68;
  undefined2 local_67;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_5f;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  byte local_34 [4];
  
  puVar7 = PTR_DAT_04bc1408;
  uVar13 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)PTR_DAT_04bc1408;
  if ((int)uVar13 < 0) {
    if (0 < (int)uVar3) {
      uVar10 = 0;
      do {
        lVar9 = *(long *)(*(long *)(PTR_DAT_04bc1408 + 8) + uVar10 * 8);
        if (((lVar9 != 0) && (*(char *)(lVar9 + 0x40) != '\0')) &&
           (local_58 = *(int *)(lVar9 + 0x18), *(uint *)(lVar9 + 0x1c) <= local_58 - 1U)) {
          uStack_54 = *(undefined4 *)(lVar9 + 0x34);
          local_64 = *(undefined4 *)(lVar9 + 8);
          local_60 = *(undefined1 *)(lVar9 + 0xc);
          local_5f = *(undefined2 *)(lVar9 + 0xd);
          local_5c = (int)uVar10;
          lVar9 = FUN_01db0cc0(&local_64);
          local_34[0] = *param_2;
          if ((ulong)local_34[0] < 8) {
            bVar4 = *(byte *)(*DAT_0537d558 + (ulong)local_34[0] * 4 + 0x44e);
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              puVar1 = (uint *)(*DAT_0537d558 + 0x48);
              puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
              if (7 < bVar4) {
                puVar2 = puVar1;
              }
              if (((lVar9 != 0) && ((*puVar2 >> 1 & 1) != 0)) &&
                 (uVar8 = FUN_01cab2e0(*(undefined8 *)PTR_DAT_04bc10a8,lVar9,&local_5c,0xc,local_34,
                                       2), (uVar8 & 1) == 0)) {
                return;
              }
            }
          }
          *(int *)(param_1 + 0x10) = (int)uVar10;
          return;
        }
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
  }
  else {
    if (uVar13 < uVar3) {
      plVar12 = *(long **)(*(long *)(PTR_DAT_04bc1408 + 8) + (ulong)uVar13 * 8);
    }
    else {
      plVar12 = (long *)0x0;
    }
    uVar3 = *(uint *)((long)plVar12 + 0x1c);
    uVar13 = *(uint *)(plVar12 + 3) - uVar3;
    if (*(uint *)(plVar12 + 3) < uVar3 || uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      uVar11 = 0x1000;
      if (*PTR_DAT_04bc13f0 != '\0') {
        uVar11 = 0x8000;
      }
      if (uVar11 <= uVar13) {
        uVar13 = uVar11;
      }
    }
    local_6c = (undefined4)plVar12[1];
    local_68 = *(undefined1 *)((long)plVar12 + 0xc);
    local_67 = *(undefined2 *)((long)plVar12 + 0xd);
    lVar14 = plVar12[2];
    lVar9 = FUN_01db0cc0(&local_6c);
    puVar6 = PTR_DAT_04bc10a8;
    bVar4 = *param_2;
    if ((ulong)bVar4 < 8) {
      bVar5 = *(byte *)(*DAT_0537d558 + (ulong)bVar4 * 4 + 0x44e);
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar1 = (uint *)(*DAT_0537d558 + 0x48);
        puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = puVar1;
        }
        if ((lVar9 != 0) && ((*puVar2 >> 1 & 1) != 0)) {
          local_5c = CONCAT31(local_5c._1_3_,bVar4);
          uVar10 = FUN_01cab2e0(*(undefined8 *)PTR_DAT_04bc10a8,lVar9,lVar14 + (ulong)uVar3,uVar13,
                                &local_5c,2);
          if ((uVar10 & 1) == 0) {
            return;
          }
        }
      }
    }
    uVar13 = *(int *)((long)plVar12 + 0x1c) + uVar13;
    *(uint *)((long)plVar12 + 0x1c) = uVar13;
    if ((*(uint *)(plVar12 + 3) <= uVar13) &&
       (uVar10 = (**(code **)(*plVar12 + 0x28))(plVar12), (uVar10 & 1) != 0)) {
      *(undefined1 *)(plVar12 + 8) = 0;
    }
    lVar9 = *(long *)(*(long *)(puVar7 + 8) + (long)*(int *)(param_1 + 0x10) * 8);
    if (*(int *)(lVar9 + 0x18) - 1U < *(uint *)(lVar9 + 0x1c)) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    FUN_01cab5e0(*(undefined8 *)puVar6,2);
  }
  return;
}

