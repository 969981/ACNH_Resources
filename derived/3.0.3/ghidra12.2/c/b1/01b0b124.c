
void FUN_01b0b124(short *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (((DAT_0532ace0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0532ace0), iVar8 != 0)) {
    DAT_0532acd8 = 0xfffe;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0532ace0);
  }
  local_2c = 0xb8;
  puVar9 = *(uint **)(param_2 + 0x10);
  if (puVar9 == (uint *)0x0) {
    local_24 = 0xbc;
  }
  else {
    uVar7 = *puVar9;
    if (uVar7 != 0 && puVar9 != (uint *)(ulong)uVar7) {
      puVar13 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
      if (((*puVar13 != 0) && (uVar7 = puVar13[1], uVar7 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + lVar1 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar7);
          }
          if (*puVar13 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), local_24 = (uint)uVar4,
             uVar4 < 0xbd)) goto LAB_01b0b1e8;
        }
      }
    }
    local_24 = 0;
  }
LAB_01b0b1e8:
  if (local_24 == 0xb8) {
    FUN_01b01a74(&local_2c,param_2 + 0xc);
    uVar7 = FUN_0277e294(&local_2c);
    bVar6 = (short)local_2c != -2;
    bVar5 = (uVar7 & 1) == 0;
    if (bVar5 && bVar6) {
      local_2c._0_2_ = (short)DAT_0532acd8;
    }
    puVar11 = (undefined1 *)((ulong)&local_2c | 2);
    if (bVar5 && bVar6) {
      puVar11 = (undefined1 *)((long)&DAT_0532acd8 + 2);
    }
    puVar14 = (undefined1 *)((ulong)&local_2c | 3);
    if (bVar5 && bVar6) {
      puVar14 = (undefined1 *)((long)&DAT_0532acd8 + 3);
    }
    puVar2 = &uStack_28;
    if (bVar5 && bVar6) {
      puVar2 = (undefined4 *)((long)&DAT_0532acd8 + 4);
    }
    uVar10 = *puVar11;
    uVar12 = *puVar14;
    uVar15 = *puVar2;
  }
  else {
    uVar10 = DAT_0532acd8._2_1_;
    uVar12 = DAT_0532acd8._3_1_;
    uVar15 = DAT_0532acd8._4_4_;
    local_2c._0_2_ = (short)DAT_0532acd8;
  }
  *param_1 = (short)local_2c;
  *(undefined1 *)(param_1 + 1) = uVar10;
  *(undefined1 *)((long)param_1 + 3) = uVar12;
  *(undefined4 *)(param_1 + 2) = uVar15;
  return;
}

