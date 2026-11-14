
void FUN_01aff000(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_30;
  undefined *puStack_28;
  uint local_4;
  
  local_4 = 0;
  uVar5 = FUN_01afee38(param_1,&local_4);
  puVar4 = PTR_DAT_04bbff60;
  puVar3 = PTR_DAT_04bbff58;
  if ((uVar5 & 1) != 0) {
    if ((int)*(uint *)(DAT_0532a7d0 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a7d0 + 0xb0) == 0) ||
           (puVar6 = *(uint **)(*(long *)(DAT_0532a7d0 + 0xb0) + 8), puVar6 == (uint *)0x0)) ||
          ((local_4 < *(uint *)(DAT_0532a7d0 + 200) &&
           (*(char *)(*(long *)(DAT_0532a7d0 + 0xd0) + (long)(int)local_4) == '\0')))) ||
         (((*puVar6 <= local_4 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0))))
      goto LAB_01aff1dc;
      iVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * local_4 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(DAT_0532a7d0 + 0x1c0) <= local_4) goto LAB_01aff1dc;
      uVar1 = local_4;
      if (*(uint *)(DAT_0532a7d0 + 0x1b0) <= local_4) {
        uVar1 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_0532a7d0 + 0x1b8) + (ulong)uVar1 * 8);
    }
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        cVar8 = *PTR_DAT_04bbff58;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x18);
            if (-1 < (int)uVar1) {
              puVar9 = (undefined *)((ulong)uVar1 + (long)puVar6);
              goto LAB_01aff138;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          puVar9 = (undefined *)0x0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01aff138;
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar5 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
          puVar9 = (undefined *)0x0;
          if (uVar5 == 0) goto LAB_01aff138;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != 0x5aebbfb5) {
            piVar11 = piVar11 + 2;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              puVar9 = (undefined *)0x0;
              goto LAB_01aff138;
            }
          }
          iVar7 = 0;
          if (*piVar11 != -1) {
            iVar7 = *piVar11;
          }
          *(int *)(puVar4 + 0x18) = iVar7;
        } while (*puVar6 != 0);
      }
      puVar9 = (undefined *)0x0;
LAB_01aff138:
      puStack_28 = PTR_DAT_04c48598;
      if (puVar9 != (undefined *)0x0) {
        puStack_28 = puVar9;
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(*param_2 + 0x10))(param_2,&local_30);
      return;
    }
  }
LAB_01aff1dc:
  *(undefined1 *)param_2[1] = 0;
  return;
}

