
undefined * FUN_0219cfb0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  undefined *puVar12;
  uint *puVar13;
  int *piVar14;
  undefined *local_50;
  long local_48;
  undefined1 local_40;
  byte local_3f;
  byte local_34 [4];
  uint local_18;
  
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (*(long *)(param_1 + 0xaa0) == 0 || lVar7 == 0) {
    return (undefined *)0x0;
  }
  local_18 = *(uint *)(*(long *)(param_1 + 0xaa0) + 4);
  FUN_0252d11c(local_34);
  if ((local_18 != 0x16) && (lVar4 = *(long *)(param_1 + 0x928), lVar4 != param_1 + 0x920)) {
    lVar9 = lVar4 + -0x10;
    do {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,*(int *)(lVar9 + 4));
      if (*(int *)(lVar9 + 4) == 0x16) {
        if (((7 < local_34[0]) || (uVar11 = FUN_02915598(local_34), (uVar11 & 1) == 0)) ||
           (lVar4 = *(long *)PTR_DAT_04bb46b0, lVar4 == 0)) break;
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
          lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
          if (lVar4 == 0) break;
          lVar4 = lVar4 + 0x70;
        }
        else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
                (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) break;
        local_48 = lVar4 + 0xe6e78;
        local_40 = 1;
        if (*(long **)(lVar4 + 0xe6ea0) == (long *)0x0) {
          local_3f = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe6ea0);
          local_3f = 0;
          if (puVar5 != (undefined8 *)0x0) {
            local_3f = (**(code **)*puVar5)();
          }
        }
        local_3f = local_3f & 1;
        local_50 = PTR_DAT_04bb7000 + 0x10;
        lVar4 = *(long *)(lVar4 + 0xe6e88) + *(long *)(lVar4 + 0xe6e80);
        if ((*(char *)(lVar4 + 0x2f) == '\x02') && ((*(byte *)(lVar4 + 0x36) & 1) == 0)) {
          local_18 = 0x16;
        }
        FUN_02640184(&local_50);
        break;
      }
      lVar4 = *(long *)(lVar4 + 8);
      lVar9 = lVar4 + -0x10;
    } while (lVar9 != param_1 + 0x910);
  }
  puVar3 = PTR_DAT_04bc25f0;
  puVar1 = PTR_DAT_04bc25e8;
  if ((int)*(uint *)(lVar7 + 0x168f0) < 1) {
    if (*(long *)(lVar7 + 0x167e0) == 0) {
      return (undefined *)0x0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x167e0) + 8);
    if (puVar6 == (uint *)0x0) {
      return (undefined *)0x0;
    }
    if ((local_18 < *(uint *)(lVar7 + 0x167f8)) &&
       (*(char *)(*(long *)(lVar7 + 0x16800) + (long)(int)local_18) == '\0')) {
      return (undefined *)0x0;
    }
    if (*puVar6 <= local_18) {
      return (undefined *)0x0;
    }
    if (puVar6[1] == 0) {
      return (undefined *)0x0;
    }
    if ((ushort)puVar6[2] == 0) {
      return (undefined *)0x0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * local_18 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x168f0) <= local_18) {
      return (undefined *)0x0;
    }
    if (*(uint *)(lVar7 + 0x168e0) <= local_18) {
      local_18 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x168e8) + (ulong)local_18 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return (undefined *)0x0;
  }
  if (*puVar6 != 0) {
    cVar10 = *PTR_DAT_04bc25e8;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
      }
      else {
        uVar2 = *(uint *)(puVar3 + 4);
        if (-1 < (int)uVar2) {
          puVar12 = (undefined *)((ulong)uVar2 + (long)puVar6);
          goto LAB_0219d258;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)*puVar6;
      puVar12 = (undefined *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar13)) goto LAB_0219d258;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + (lVar7 - (long)puVar13);
      if (lVar7 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
      *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
      puVar12 = (undefined *)0x0;
      if (uVar11 == 0) goto LAB_0219d258;
      piVar14 = (int *)(lVar7 + 4);
      while (piVar14[-1] != -0xc8ce91a) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          puVar12 = (undefined *)0x0;
          goto LAB_0219d258;
        }
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar3 + 4) = iVar8;
    } while (*puVar6 != 0);
  }
  puVar12 = (undefined *)0x0;
LAB_0219d258:
  puVar1 = PTR_s_AI_NPC_Outdoor_AI_NPC_Indoor_04c48738;
  if (puVar12 != (undefined *)0x0) {
    puVar1 = puVar12;
  }
  return puVar1;
}

