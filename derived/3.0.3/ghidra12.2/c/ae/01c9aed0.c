
void FUN_01c9aed0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 *puVar11;
  char local_50 [4];
  int local_4c;
  undefined1 uStack_45;
  int local_44;
  
  puVar6 = PTR_DAT_04bb21d0;
  local_44 = 0;
  lVar8 = *(long *)PTR_DAT_04bb21d0;
  uVar1 = *(uint *)(lVar8 + 0x38);
  cVar5 = *(char *)(lVar8 + 0x2079);
  iVar2 = *(int *)(lVar8 + 0x1cd0);
  FUN_01c9ad64(&local_44,&uStack_45,*(undefined4 *)(lVar8 + 0x78));
  lVar8 = *(long *)puVar6;
  if (**(char **)(lVar8 + 0x2070) == '\0') {
    if (*(char *)(lVar8 + 0xf78) != '\0') {
      local_44 = 2;
    }
  }
  else {
    local_44 = 3;
  }
  bVar7 = *(int *)(lVar8 + 0x38) == 2;
  cVar4 = *(char *)(param_1 + 0x78);
  uVar3 = *(uint *)(param_1 + 0x30);
  *(bool *)(param_1 + 0x78) = bVar7;
  if (1 < uVar1 || cVar5 != '\0') {
    if (uVar3 == 0xffffffff) {
      return;
    }
    if (*(uint *)(param_1 + 0x20) <= uVar3) {
      uVar3 = 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x28) + (long)(int)uVar3 * 0x38 + 0x2f) == '\0') {
      return;
    }
    *(undefined1 *)(lVar8 + 0x207e) = 1;
    return;
  }
  if (uVar3 == 0xffffffff) goto LAB_01c9afd4;
  uVar9 = 0;
  if (*(uint *)(param_1 + 0x20) <= uVar3) {
    uVar3 = 0;
  }
  if (iVar2 == 1) {
    if (*(int *)(lVar8 + 0xf64) == *(int *)(*(long *)(param_1 + 0x28) + (long)(int)uVar3 * 0x38)) {
      uVar9 = 1;
      goto LAB_01c9afb8;
    }
  }
  else {
LAB_01c9afb8:
    lVar8 = *(long *)(param_1 + 0x28) + (long)(int)uVar3 * 0x38;
    *(undefined1 *)(lVar8 + 0x2c) = 1;
    *(undefined1 *)(lVar8 + 0x2d) = uVar9;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
LAB_01c9afd4:
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    iVar10 = 0;
    if (cVar4 == '\0' || bVar7) {
      do {
        puVar11 = (undefined4 *)(lVar8 + (long)iVar10 * 0x38);
        local_4c = 0;
        FUN_01c9aadc(&local_4c,local_50,*puVar11,puVar11[10]);
        if ((*(char *)(puVar11 + 0xb) != '\0' && local_50[0] == '\0') && (local_44 < local_4c)) {
          *(undefined1 *)(lVar8 + (long)iVar10 * 0x38 + 0x2d) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar2 != iVar10);
    }
    else {
      do {
        puVar11 = (undefined4 *)(lVar8 + (long)iVar10 * 0x38);
        local_4c = 0;
        FUN_01c9aadc(&local_4c,local_50,*puVar11,puVar11[10]);
        if (*(char *)(puVar11 + 0xb) == '\0') {
          if (local_44 < local_4c) {
            *(char *)(puVar11 + 0xb) = '\x01';
            goto LAB_01c9b054;
          }
        }
        else if ((local_50[0] == '\0') && (local_44 < local_4c)) {
LAB_01c9b054:
          *(undefined1 *)(lVar8 + (long)iVar10 * 0x38 + 0x2d) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar2 != iVar10);
    }
  }
  return;
}

