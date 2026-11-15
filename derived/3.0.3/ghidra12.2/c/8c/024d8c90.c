
/* WARNING: Removing unreachable block (ram,0x024d8d68) */

void FUN_024d8c90(long param_1)

{
  undefined *puVar1;
  undefined1 *__src;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *__dest;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x1902);
  if (0x1c < uVar4) {
    uVar4 = 0;
  }
  local_58._0_3_ =
       CONCAT12(*(char *)(param_1 + 0x1900) != '\0',CONCAT11(bVar8,*(int *)(param_1 + 0x178) == 0));
  local_58 = (undefined *)CONCAT44(*(undefined4 *)(param_1 + 0xcb0),(undefined4)local_58);
  uStack_48 = *(undefined4 *)(param_1 + 0xcb8);
  local_50 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 0xcb4),uVar4);
  FUN_0230af00(&local_58);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (puVar10[0x227] != 0) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,6);
    uVar3 = FUN_03850a90(puVar10[0x227],6,0,*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
    if ((uVar3 & 1) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      puVar1 = PTR_DAT_04bb2020;
      pcVar5 = (char *)(puVar10 + 0xb9e);
      local_58 = PTR_DAT_04bb2020 + 0x10;
      local_50 = &DAT_040ea8d6;
      if (*pcVar5 == '\0') {
        lVar7 = 0;
      }
      else {
        pcVar5 = (char *)(puVar10 + 0xbae);
        if (*pcVar5 == '\0') {
          lVar7 = 1;
        }
        else if (*(char *)(puVar10 + 0xbbe) == '\0') {
          pcVar5 = (char *)(puVar10 + 0xbbe);
          lVar7 = 2;
        }
        else {
          if (*(char *)(puVar10 + 0xbce) != '\0') goto LAB_024d8ee8;
          pcVar5 = (char *)(puVar10 + 0xbce);
          lVar7 = 3;
        }
      }
      *pcVar5 = '\x01';
      __dest = (undefined1 *)puVar10[lVar7 * 0x10 + 0xb90];
      *(int *)((long)puVar10 + lVar7 * 0x80 + 0x5cf4) =
           (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
      (**(code **)(puVar1 + 0x28))(&local_58);
      __src = local_50;
      if (__dest != local_50) {
        (**(code **)(local_58 + 0x18))(&local_58);
        lVar6 = 0;
        do {
          if (local_50[lVar6] == '\0') goto LAB_024d8ebc;
          if (local_50[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_024d8ebc;
          }
          if (local_50[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_024d8ebc;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_024d8ebc:
        iVar2 = (int)lVar6;
        if (*(int *)(puVar10 + lVar7 * 0x10 + 0xb91) <= (int)lVar6) {
          iVar2 = *(int *)(puVar10 + lVar7 * 0x10 + 0xb91) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined4 *)(puVar10 + lVar7 * 0x10 + 0xb9d) = 0;
    }
  }
LAB_024d8ee8:
  plVar9 = *(long **)(param_1 + 0x60);
  if (plVar9 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar9 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  *(undefined1 *)(plVar9 + 0xbe7) = 1;
  (**(code **)(*plVar9 + 0x4f0))(plVar9,plVar9 + 0xbe1);
  return;
}

