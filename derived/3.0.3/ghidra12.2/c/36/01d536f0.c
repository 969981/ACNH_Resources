
void FUN_01d536f0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined1 local_a0;
  undefined1 local_9f;
  long local_9e;
  undefined2 local_96;
  char local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar11 = DAT_05382a08;
  plVar4 = DAT_0537d558;
  iVar12 = *(int *)(param_1 + 0x2c0);
  if (iVar12 == 0) {
    if ((param_2 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x950);
      local_94 = *(char *)(*DAT_0537d558 + 0x473);
LAB_01d5380c:
      uVar8 = 0x14;
      local_9e = lVar10;
      goto joined_r0x01d53814;
    }
LAB_01d53880:
    uVar8 = 10;
    local_9e = -1;
  }
  else {
    iVar13 = *(int *)(param_1 + 700);
    local_9e = -1;
    lVar14 = *(long *)(param_1 + 0x2b0);
    iVar2 = *(int *)(param_1 + 0x2b8);
    iVar7 = iVar12;
    iVar6 = iVar13;
    do {
      iVar1 = 0;
      if (iVar2 <= iVar6) {
        iVar1 = iVar2;
      }
      uVar3 = iVar6 - iVar1;
      iVar6 = iVar6 + 1;
      lVar9 = *(long *)(lVar14 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4))
      ;
      lVar10 = lVar9;
      if (local_9e <= lVar9 && local_9e != -1) {
        lVar10 = local_9e;
      }
      if (lVar9 != -1) {
        local_9e = lVar10;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if ((param_2 & 1) == 0) {
      if (local_9e == -1) goto LAB_01d53880;
      local_94 = DAT_0537bdb8;
      do {
        iVar6 = 0;
        if (iVar2 <= iVar13) {
          iVar6 = iVar2;
        }
        uVar3 = iVar13 - iVar6;
        if (*(long *)(lVar14 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4))
            != -1) {
          bVar5 = local_94 != -1;
          local_94 = DAT_0537bdb8;
          if (bVar5) break;
          local_94 = *(char *)(lVar14 + (long)(int)uVar3 * 0x10 + 8);
        }
        iVar12 = iVar12 + -1;
        iVar13 = iVar13 + 1;
      } while (iVar12 != 0);
    }
    else {
      lVar10 = *(long *)(param_1 + 0x950);
      local_94 = *(char *)(*DAT_0537d558 + 0x473);
      if ((local_9e == -1) || (lVar10 + 20000U <= local_9e + 10000U)) goto LAB_01d5380c;
      local_94 = DAT_0537bdb8;
      do {
        iVar6 = 0;
        if (iVar2 <= iVar13) {
          iVar6 = iVar2;
        }
        uVar3 = iVar13 - iVar6;
        if (*(long *)(lVar14 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4))
            != -1) {
          bVar5 = local_94 != -1;
          local_94 = DAT_0537bdb8;
          if (bVar5) break;
          local_94 = *(char *)(lVar14 + (long)(int)uVar3 * 0x10 + 8);
        }
        iVar12 = iVar12 + -1;
        iVar13 = iVar13 + 1;
      } while (iVar12 != 0);
    }
    uVar8 = 10;
joined_r0x01d53814:
    if (local_94 != -1) {
      lVar10 = *(long *)(param_1 + 0x958);
      if (local_9e == -1) {
        if (lVar10 == -1) {
          return;
        }
        *(undefined8 *)(DAT_05382a08 + 8) = 0xffffffffffffffff;
      }
      else {
        if ((lVar10 != -1) && (lVar10 == local_9e)) {
          return;
        }
        lVar11 = *(long *)PTR_DAT_04bc10c0;
        if ((lVar10 == -1) &&
           (lVar10 = *(long *)(DAT_05354240 + 0x188), *(char *)(DAT_05354240 + 0x1a0) == '\0')) {
          lVar10 = -1;
        }
        *(long *)(lVar11 + 8) = lVar10;
        *(undefined4 *)(lVar11 + 0x10) = uVar8;
        *(undefined4 *)(lVar11 + 0x14) = uVar8;
      }
      *(undefined1 *)(lVar11 + 0x18) = 0;
      *(long *)(param_1 + 0x958) = local_9e;
      goto LAB_01d53940;
    }
  }
  if (*(long *)(param_1 + 0x958) == -1) {
    return;
  }
  *(undefined8 *)(DAT_05382a08 + 8) = 0xffffffffffffffff;
  *(undefined1 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x958) = 0xffffffffffffffff;
  local_94 = -1;
LAB_01d53940:
  local_28 = 0;
  uStack_20 = 0;
  local_90 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = 0x28;
  local_9f = 2;
  local_96 = (undefined2)uVar8;
  local_18 = 0;
  local_12 = 0;
  local_14 = 0xff00;
  if (-1 < *(int *)(PTR_DAT_04bc12f0 + 8)) {
    FUN_01db1df0(*plVar4 + 0x480,*(int *)(PTR_DAT_04bc12f0 + 8),&local_18,&local_a0,0x12,0);
  }
  return;
}

