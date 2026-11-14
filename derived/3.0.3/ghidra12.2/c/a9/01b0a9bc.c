
void FUN_01b0a9bc(undefined2 *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  ulong uVar8;
  undefined2 uVar9;
  uint *puVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  local_2c = 0xb0;
  puVar10 = *(uint **)(param_2 + 0x10);
  if (puVar10 == (uint *)0x0) {
    local_24 = 0xbc;
  }
  else {
    uVar5 = *puVar10;
    if (uVar5 != 0 && puVar10 != (uint *)(ulong)uVar5) {
      puVar14 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
      if (((*puVar14 != 0) && (uVar5 = puVar14[1], uVar5 != 0)) && ((ulong)(ushort)puVar14[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar14 + lVar1 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar1 != 0) {
          uVar4 = 0;
          if ((ulong)uVar5 != 0) {
            uVar4 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar5);
          }
          if (*puVar14 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < DAT_05326ec0) &&
             (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), local_24 = (uint)uVar6,
             uVar6 < 0xbd)) goto LAB_01b0aa70;
        }
      }
    }
    local_24 = 0;
  }
LAB_01b0aa70:
  if (local_24 == 0xb0) {
    puVar2 = &local_2c;
    FUN_01b01a74(&local_2c,param_2 + 0xc);
    uVar8 = FUN_0277e294(&local_2c);
    bVar7 = (uVar8 & 1) == 0;
    puVar12 = (undefined1 *)((ulong)puVar2 | 2);
    if (bVar7) {
      puVar12 = (undefined1 *)((long)&DAT_0532a850 + 2);
    }
    puVar15 = (undefined1 *)((ulong)puVar2 | 3);
    if (bVar7) {
      puVar2 = &DAT_0532a850;
    }
    if (bVar7) {
      puVar15 = (undefined1 *)((long)&DAT_0532a850 + 3);
    }
    puVar3 = &uStack_28;
    if (bVar7) {
      puVar3 = &DAT_0532a854;
    }
    uVar11 = *puVar12;
    uVar9 = *(undefined2 *)puVar2;
    uVar13 = *puVar15;
    uVar16 = *puVar3;
  }
  else {
    uVar11 = DAT_0532a850._2_1_;
    uVar9 = (undefined2)DAT_0532a850;
    uVar13 = DAT_0532a850._3_1_;
    uVar16 = DAT_0532a854;
  }
  *param_1 = uVar9;
  *(undefined1 *)(param_1 + 1) = uVar11;
  *(undefined1 *)((long)param_1 + 3) = uVar13;
  *(undefined4 *)(param_1 + 2) = uVar16;
  return;
}

