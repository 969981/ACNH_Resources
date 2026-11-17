
void FUN_030c7af0(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *__dest;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  uint local_64;
  
  puVar6 = PTR_DAT_04bb2bc0;
  if (*(long *)(param_1 + 0x210) != 0 && *param_2 != 0) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2f70 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      puVar13 = (uint *)(*(long *)(param_2 + 2) + (long)(int)uVar12 * 0x18);
      lVar11 = *(long *)(param_1 + 0x210);
      uVar5 = *puVar13;
      local_b0 = 0x40;
      local_6d = 0;
      puVar10 = puVar13 + 2;
      local_c0 = puVar1;
      local_b8 = local_ac;
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      puVar9 = *(undefined1 **)(puVar13 + 4);
      if (local_ac != puVar9) {
        (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
        lVar8 = *(long *)(puVar13 + 4);
        lVar7 = 0;
        do {
          if (*(char *)(lVar8 + lVar7) == '\0') goto LAB_030c7c3c;
          lVar3 = lVar8 + lVar7;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_030c7c3c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_030c7c3c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_030c7c3c:
        iVar4 = (int)lVar7;
        if (local_b0 <= (int)lVar7) {
          iVar4 = local_b0 + -1;
        }
        memcpy(local_ac,puVar9,(long)iVar4);
        local_ac[iVar4] = 0;
      }
      puVar9 = local_b8;
      local_64 = uVar5;
      if ((int)uVar5 < 5) {
        lVar11 = lVar11 + 0x290;
        lVar7 = lVar11 + (ulong)uVar5 * 0x58;
        if (4 < uVar5) {
          lVar7 = lVar11;
        }
        __dest = *(undefined1 **)(lVar7 + 8);
        local_b8[(long)local_b0 + -1] = 0;
        if (__dest != local_b8) {
          local_c0 = puVar2;
          (**(code **)(puVar6 + 0x28))(&local_c0);
          lVar11 = 0;
          do {
            if (local_b8[lVar11] == '\0') goto LAB_030c7b64;
            if (local_b8[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_030c7b64;
            }
            if (local_b8[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_030c7b64;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_030c7b64:
          iVar4 = (int)lVar11;
          if (*(int *)(lVar7 + 0x10) <= (int)lVar11) {
            iVar4 = *(int *)(lVar7 + 0x10) + -1;
          }
          memcpy(__dest,puVar9,(long)iVar4);
          __dest[iVar4] = 0;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *param_2);
  }
  return;
}

