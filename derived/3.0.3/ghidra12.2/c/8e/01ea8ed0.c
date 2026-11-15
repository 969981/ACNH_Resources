
/* WARNING: Removing unreachable block (ram,0x01ea8f64) */

void FUN_01ea8ed0(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  char *__src;
  undefined4 local_d4;
  undefined *local_d0;
  char *pcStack_c8;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  char local_ac [63];
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar10 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  lVar7 = puVar10[0x227];
  if (lVar7 == 0) {
    plVar11 = &DAT_04c931a0;
  }
  else {
    uVar4 = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    uVar8 = 0;
    if (*(long *)(lVar7 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar7 + 0x78) + 0x18);
    }
    if (uVar8 <= uVar4) {
      uVar4 = 0;
    }
    if (*(uint *)(lVar7 + 0x80) <= uVar4) {
      uVar4 = 0;
    }
    plVar11 = (long *)(*(long *)(lVar7 + 0x88) + (long)(int)uVar4 * 0xe8 + 0x60);
  }
  local_b0 = 0x40;
  local_6d = 0;
  local_c0 = PTR_DAT_04bb2f70 + 0x10;
  local_b8 = local_ac;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  __src = (char *)plVar11[1];
  if (local_ac != __src) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar7 = 0;
    do {
      if (*(char *)(plVar11[1] + lVar7) == '\0') goto LAB_01ea903c;
      lVar1 = plVar11[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01ea903c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01ea903c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01ea903c:
    iVar5 = (int)lVar7;
    if (local_b0 <= (int)lVar7) {
      iVar5 = local_b0 + -1;
    }
    memcpy(local_ac,__src,(long)iVar5);
    local_ac[iVar5] = '\0';
  }
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  local_68 = FUN_006bd550(plVar11[1],0);
  if (*local_b8 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0170b2d0(puVar10,&local_c0);
  }
  lVar7 = *(long *)(param_2 + 8);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  if (*(undefined1 **)(lVar7 + 1000) == &DAT_040d4701) {
LAB_01ea9130:
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c8 = "KotonoQuestCount";
    iVar5 = FUN_0274bce0(param_4,&local_d0);
    uVar6 = 3;
    if (iVar5 < 0x14) {
      uVar6 = 1;
    }
  }
  else {
    uVar9 = 0;
    bVar3 = true;
    do {
      cVar2 = (*(undefined1 **)(lVar7 + 1000))[uVar9];
      if (cVar2 != (&DAT_040d4701)[uVar9]) break;
      if (cVar2 == '\0') {
        if (bVar3) goto LAB_01ea9130;
        break;
      }
      bVar3 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    uVar6 = FUN_021d68a0(*(long *)(param_2 + 8) + 0x3e0);
  }
  local_d4 = *param_3;
  FUN_02071720(param_1,uVar6,&local_d4,uVar4 & 1);
  return;
}

