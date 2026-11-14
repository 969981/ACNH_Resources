
undefined8 FUN_01b08dd0(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_30;
  undefined *puStack_28;
  
  *(undefined1 *)param_2[1] = 0;
  uVar4 = FUN_01377be0();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_01377be0(param_1);
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = FUN_01377be0(param_1), puVar3 = PTR_DAT_04bbff60, puVar2 = PTR_DAT_04bbff58,
      (uVar4 & 1) != 0)) && (*(ushort *)(param_1 + 0xc) < 0xdc)) {
    uVar5 = (uint)*(ushort *)(param_1 + 0xc);
    if ((int)*(uint *)(DAT_0532a7d0 + 0x1c0) < 1) {
      if (*(long *)(DAT_0532a7d0 + 0xb0) == 0) {
        return 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_0532a7d0 + 0xb0) + 8);
      if (puVar6 == (uint *)0x0) {
        return 0;
      }
      if ((uVar5 < *(uint *)(DAT_0532a7d0 + 200)) &&
         (*(char *)(*(long *)(DAT_0532a7d0 + 0xd0) + (long)(int)uVar5) == '\0')) {
        return 0;
      }
      if (*puVar6 <= uVar5) {
        return 0;
      }
      if (puVar6[1] == 0) {
        return 0;
      }
      if ((ushort)puVar6[2] == 0) {
        return 0;
      }
      iVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(DAT_0532a7d0 + 0x1c0) <= uVar5) {
        return 0;
      }
      if (*(uint *)(DAT_0532a7d0 + 0x1b0) <= uVar5) {
        uVar5 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_0532a7d0 + 0x1b8) + (ulong)uVar5 * 8);
    }
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        cVar8 = *PTR_DAT_04bbff58;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x18) = 0xffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x18);
            if (-1 < (int)uVar5) {
              puVar9 = (undefined *)((ulong)uVar5 + (long)puVar6);
              goto LAB_01b08f38;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          puVar9 = (undefined *)0x0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01b08f38;
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar4 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
          puVar9 = (undefined *)0x0;
          if (uVar4 == 0) goto LAB_01b08f38;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x5aebbfb5) {
            piVar11 = piVar11 + 2;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              puVar9 = (undefined *)0x0;
              goto LAB_01b08f38;
            }
          }
          iVar7 = 0;
          if (*piVar11 != -1) {
            iVar7 = *piVar11;
          }
          *(int *)(puVar3 + 0x18) = iVar7;
        } while (*puVar6 != 0);
      }
      puVar9 = (undefined *)0x0;
LAB_01b08f38:
      puStack_28 = PTR_DAT_04c48598;
      if (puVar9 != (undefined *)0x0) {
        puStack_28 = puVar9;
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(*param_2 + 0x10))(param_2,&local_30);
      return 1;
    }
  }
  return 0;
}

