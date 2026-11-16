
void FUN_029fca50(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined1 local_12d0 [8];
  undefined1 local_12c8 [8];
  undefined1 local_12c0 [2];
  undefined2 local_12be [3];
  long local_12b8 [592];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  lVar12 = 0xc6;
  puVar11 = local_12c0;
  do {
    puVar11[-8] = 0;
    lVar12 = lVar12 + -1;
    *puVar11 = 0xf6;
    *(undefined2 *)(puVar11 + 2) = 0xfff6;
    *(undefined8 *)(puVar11 + 8) = 0xfffffffffffffff6;
    puVar11 = puVar11 + 0x18;
  } while (lVar12 != 0);
  uVar4 = *(uint *)(param_1 + 0x80);
  local_12d0[0] = 0;
  if (uVar4 == 0) {
    iVar6 = 8;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x88);
    lVar14 = *(long *)PTR_DAT_04bb29d0;
    uVar13 = 0;
    uVar7 = 0;
    do {
      uVar8 = uVar7 & 0xff;
      bVar5 = 0xc5 < ((uint)uVar7 & 0xff);
      lVar10 = lVar12 + ((long)((ulong)uVar13 << 0x20) >> 0x19);
      puVar11 = local_12c8 + uVar8 * 0x18;
      if (bVar5) {
        puVar11 = local_12c8;
      }
      *puVar11 = (char)uVar13;
      puVar3 = local_12be + uVar8 * 0xc;
      puVar11 = local_12c0 + uVar8 * 0x18;
      if (bVar5) {
        puVar3 = local_12be;
        puVar11 = local_12c0;
      }
      *puVar11 = *(undefined1 *)(lVar10 + 0x10);
      *puVar3 = (short)*(undefined4 *)(lVar10 + 0x14);
      lVar10 = *(long *)(lVar10 + 0x20) - param_3;
      if (lVar10 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar9 = 0;
        if (lVar14 != 0) {
          lVar9 = (lVar10 * 1000) / lVar14;
        }
      }
      else {
        lVar9 = 0;
        if (lVar14 != 0) {
          lVar9 = lVar10 / lVar14;
        }
        lVar9 = lVar9 * 1000;
      }
      uVar1 = (uint)uVar8 + 1;
      uVar7 = (ulong)uVar1;
      local_12d0[0] = (undefined1)uVar1;
      plVar2 = local_12b8 + uVar8 * 3;
      if (0xc5 < (uint)uVar8) {
        plVar2 = local_12b8;
      }
      *plVar2 = lVar9 + param_4;
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
    iVar6 = (uVar1 & 0xff) * 0x18 + 8;
  }
  local_33 = *param_2;
  local_38 = 0;
  local_32 = 0;
  local_34 = 4;
  if (-1 < *(int *)(param_1 + 0x1370)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x1370),&local_38,local_12d0
                 ,iVar6,0);
  }
  return;
}

