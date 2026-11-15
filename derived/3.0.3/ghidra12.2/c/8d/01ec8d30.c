
void FUN_01ec8d30(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 *__src;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  undefined1 *__dest;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *local_80;
  undefined1 *local_78;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  pcVar7 = (char *)(puVar10 + 0xb9e);
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar11 = *(undefined4 *)(lVar9 + 0x278);
  uVar12 = *(undefined4 *)(lVar9 + 0x27c);
  uVar13 = *(undefined4 *)(lVar9 + 0x280);
  uVar2 = *(undefined4 *)(lVar9 + 0x2b0);
  uVar3 = *(undefined4 *)(lVar9 + 0x2b4);
  uVar4 = *(undefined4 *)(lVar9 + 0x2b8);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = &DAT_040a6976;
  if (*pcVar7 == '\0') {
    lVar9 = 0;
  }
  else {
    pcVar7 = (char *)(puVar10 + 0xbae);
    if (*pcVar7 == '\0') {
      lVar9 = 1;
    }
    else if (*(char *)(puVar10 + 0xbbe) == '\0') {
      pcVar7 = (char *)(puVar10 + 0xbbe);
      lVar9 = 2;
    }
    else {
      if (*(char *)(puVar10 + 0xbce) != '\0') {
        return;
      }
      pcVar7 = (char *)(puVar10 + 0xbce);
      lVar9 = 3;
    }
  }
  *pcVar7 = '\x01';
  lVar1 = lVar9 * 0x80;
  __dest = (undefined1 *)puVar10[lVar9 * 0x10 + 0xb90];
  *(int *)((long)puVar10 + lVar1 + 0x5cf4) = (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508)
  ;
  (**(code **)(puVar5 + 0x28))(&local_80);
  __src = local_78;
  if (__dest != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar8 = 0;
    do {
      if (local_78[lVar8] == '\0') goto LAB_01ec8eac;
      if (local_78[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01ec8eac;
      }
      if (local_78[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01ec8eac;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01ec8eac:
    iVar6 = (int)lVar8;
    if (*(int *)(puVar10 + lVar9 * 0x10 + 0xb91) <= (int)lVar8) {
      iVar6 = *(int *)(puVar10 + lVar9 * 0x10 + 0xb91) + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    __dest[iVar6] = 0;
  }
  *(undefined4 *)(puVar10 + lVar9 * 0x10 + 0xb9a) = uVar11;
  *(undefined4 *)((long)puVar10 + lVar1 + 0x5cd4) = uVar12;
  *(undefined4 *)(puVar10 + lVar9 * 0x10 + 0xb9b) = uVar13;
  *(undefined4 *)((long)puVar10 + lVar1 + 0x5cdc) = uVar2;
  *(undefined4 *)(puVar10 + lVar9 * 0x10 + 0xb9c) = uVar3;
  *(undefined4 *)((long)puVar10 + lVar1 + 0x5ce4) = uVar4;
  *(undefined4 *)(puVar10 + lVar9 * 0x10 + 0xb9d) = 1;
  return;
}

