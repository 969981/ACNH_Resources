
void FUN_01c6f23c(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined *puVar20;
  long lVar21;
  bool bVar22;
  int iVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined **ppuVar29;
  undefined8 uVar30;
  void *__ptr;
  undefined *local_68;
  undefined local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined *local_50;
  undefined *local_48;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 != 0xffffffff) {
    if (uVar4 == 2) {
      uVar27 = *(undefined4 *)param_2;
      goto LAB_01c6f2b8;
    }
    (*(code *)(&PTR_FUN_04a42fa0)[uVar4])(&local_68,param_2);
  }
  uVar27 = 0;
  *(undefined4 *)(param_2 + 8) = 2;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_01c6f2b8:
  *(undefined4 *)(param_1 + 0xa8) = uVar27;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((long)param_2 + 4);
  *(undefined8 *)(param_1 + 0xb0) = param_2[1];
  uVar30 = param_2[4];
  uVar28 = param_2[2];
  uVar3 = param_2[3];
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar30;
  *(undefined8 *)(param_1 + 0xb8) = uVar28;
  if (*(char *)(param_2 + 7) == '\0') {
    if (*(char *)(param_1 + 0xe0) != '\0') {
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
  }
  else {
    uVar28 = param_2[6];
    if (*(char *)(param_1 + 0xe0) == '\0') {
      *(undefined1 *)(param_1 + 0xe0) = 1;
    }
    *(undefined8 *)(param_1 + 0xd8) = uVar28;
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar21 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar25 = malloc(0x20);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar21 + 8);
      if (lVar24 != 0) {
        param_3 = (long *)(lVar24 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar25 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x20,8);
  }
  *(undefined4 *)(puVar25 + 1) = 0;
  *puVar25 = &PTR_LAB_04a42fe8;
  puVar25[2] = 0;
  puVar25[3] = param_1;
  __ptr = *(void **)(param_1 + 0xa0);
  *(undefined8 **)(param_1 + 0xa0) = puVar25;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar26 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x38))(plVar26,__ptr);
      }
    }
  }
  if (((DAT_053505d8 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_053505d8), iVar23 != 0)) {
    FUN_006d8678(&DAT_053505a0,&DAT_040bdb36,0x5c08d749);
    __cxa_guard_release(&DAT_053505d8);
  }
  (**(code **)(DAT_053505a0 + 0x18))(&DAT_053505a0);
  puVar20 = PTR_DAT_04bc0ec8;
  local_60 = 0;
  local_48 = (undefined *)0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_68 = puVar1;
  local_50 = &local_60;
  FUN_0018b070(&local_68,DAT_053505a8,0xffffffffffffffff);
  ppuVar2 = *(undefined ***)(param_1 + 0x50);
  if (ppuVar2 < *(undefined ***)(param_1 + 0x58)) {
    *ppuVar2 = puVar1;
    ppuVar29 = ppuVar2 + 1;
    *(undefined1 *)ppuVar29 = 0;
    ppuVar2[3] = (undefined *)ppuVar29;
    ppuVar2[4] = (undefined *)0x10;
    if (ppuVar2 != &local_68) {
      *(undefined1 *)(ppuVar2 + 1) = local_60;
      uVar5 = *(undefined1 *)((long)ppuVar2 + 9);
      uVar6 = *(undefined1 *)((long)ppuVar2 + 10);
      uVar7 = *(undefined1 *)((long)ppuVar2 + 0xb);
      bVar22 = local_50 == &local_60;
      local_60 = 0;
      uVar8 = *(undefined1 *)((long)ppuVar2 + 0xc);
      uVar9 = *(undefined1 *)((long)ppuVar2 + 0xd);
      uVar10 = *(undefined1 *)((long)ppuVar2 + 0xe);
      uVar11 = *(undefined1 *)((long)ppuVar2 + 0xf);
      uVar12 = *(undefined1 *)(ppuVar2 + 2);
      uVar13 = *(undefined1 *)((long)ppuVar2 + 0x11);
      uVar14 = *(undefined1 *)((long)ppuVar2 + 0x12);
      *(undefined1 *)((long)ppuVar2 + 9) = local_5f;
      uVar15 = *(undefined1 *)((long)ppuVar2 + 0x13);
      uVar16 = *(undefined1 *)((long)ppuVar2 + 0x14);
      uVar17 = *(undefined1 *)((long)ppuVar2 + 0x15);
      uVar18 = *(undefined1 *)((long)ppuVar2 + 0x16);
      uVar19 = *(undefined1 *)((long)ppuVar2 + 0x17);
      *(undefined1 *)((long)ppuVar2 + 10) = local_5e;
      *(undefined1 *)((long)ppuVar2 + 0xb) = local_5d;
      *(undefined1 *)((long)ppuVar2 + 0xc) = local_5c;
      *(undefined1 *)((long)ppuVar2 + 0xd) = local_5b;
      *(undefined1 *)((long)ppuVar2 + 0xe) = local_5a;
      *(undefined1 *)((long)ppuVar2 + 0xf) = local_59;
      *(undefined1 *)(ppuVar2 + 2) = local_58;
      *(undefined1 *)((long)ppuVar2 + 0x11) = local_57;
      *(undefined1 *)((long)ppuVar2 + 0x12) = local_56;
      *(undefined1 *)((long)ppuVar2 + 0x13) = local_55;
      *(undefined1 *)((long)ppuVar2 + 0x14) = local_54;
      *(undefined1 *)((long)ppuVar2 + 0x15) = local_53;
      *(undefined1 *)((long)ppuVar2 + 0x16) = local_52;
      *(undefined1 *)((long)ppuVar2 + 0x17) = local_51;
      ppuVar2[3] = local_50;
      ppuVar2[4] = local_48;
      local_48 = (undefined *)0x10;
      local_5f = uVar5;
      local_5e = uVar6;
      local_5d = uVar7;
      local_5c = uVar8;
      local_5b = uVar9;
      local_5a = uVar10;
      local_59 = uVar11;
      local_58 = uVar12;
      local_57 = uVar13;
      local_56 = uVar14;
      local_55 = uVar15;
      local_54 = uVar16;
      local_53 = uVar17;
      local_52 = uVar18;
      local_51 = uVar19;
      local_50 = &local_60;
      if (bVar22) {
        ppuVar2[3] = (undefined *)ppuVar29;
      }
    }
    *(undefined ***)(param_1 + 0x50) = ppuVar2 + 5;
  }
  else {
    FUN_01c67120(param_1 + 0x48,&local_68);
  }
  local_68 = puVar20 + 0x10;
  FUN_0018b1a0(&local_68);
  return;
}

